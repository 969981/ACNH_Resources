#!/usr/bin/env python3
"""R25 regression: independent synthetic math plus real R24 report census."""
import json
import math
import unittest
from pathlib import Path
from acnh303_round25_bindpose import (global_pose,mul,inverse_from_raw,identity,
    audit_model,cross_compare,analyze,EXPECTED)
from acnh303_round25_bnsh_callers import direct_target,adrp_page

ROOT=Path(__file__).resolve().parents[1]

class R25Tests(unittest.TestCase):
    def test_euler_z_y_x_bindpose_not_quaternion(self):
        bone=[{"index":0,"name":"Root","parent":-1,
               "position":[0,4.84,0],"rotation":[0.,0.,0.,1.],
               "scale":[1,1,1]},
              {"index":1,"name":"Spine_1","parent":0,
               "position":[0.,0.,0.],"rotation":[math.pi/2,0.,math.pi/2,1.],
               "scale":[1,1,1]}]
        inv=[0.,1.,0.,-4.84,0.,0.,1.,0.,1.,0.,0.,0.]
        self.assertLess(max(abs(x-y) for x,y in zip(
            mul(global_pose(bone,"ZYX")[1],inverse_from_raw(inv)),identity())),1e-6)
        self.assertGreater(max(abs(x-y) for x,y in zip(
            mul(global_pose(bone,"XYZ")[1],inverse_from_raw(inv)),identity())),1)

    def test_invalid_parent_cycle(self):
        one=[{"index":0,"name":"X","parent":0,
              "position":[0,0,0],"rotation":[0,0,0,1],"scale":[1,1,1]}]
        with self.assertRaises(ValueError):global_pose(one,"ZYX")

    def test_crossmodel_shared_pose_and_sha(self):
        x={"bones":[{"name":"Arm","position":[0,1,0],
            "rotation":[0,0,0,1],"scale":[1,1,1]}],
           "inverse_model_matrices":[{"bone_name":"Arm","matrix_sha256":"0"*64}]}
        self.assertEqual(cross_compare(x,x)["identical_inverse_matrix_SHA256_count"],1)

    def test_arm64_branch_decoding(self):
        self.assertEqual(direct_target(0x1000,0x94000002),0x1008)
        self.assertEqual(direct_target(0x1000,0x14000001),0x1004)
        self.assertIsNone(direct_target(0x1000,0xd65f03c0))
        self.assertIsNone(adrp_page(0x1000,0xd65f03c0))

    def test_original_r24_snapshot_if_checked_out(self):
        path=ROOT/"derived/3.0.3/r24_model_skeleton/real_fmdl_fskl.json"
        if not path.exists():self.skipTest("R24 provenance report not checked out")
        r=analyze(path.read_bytes())
        self.assertEqual(r["total_inverse_matrices_checked"],57)
        self.assertEqual(r["cross_model_with_PlayerBody"]["PlayerBottomsPantsNormal"]
            ["exact_base_TRS_count"],15)
        self.assertEqual(r["cross_model_with_PlayerBody"]["PlayerBottomsPantsNormal"]
            ["identical_inverse_matrix_SHA256_count"],13)
        self.assertEqual(r["cross_model_with_PlayerBody"]["BagBackpackBody0"]
            ["identical_inverse_matrix_SHA256_count"],4)
        self.assertEqual(r["cross_model_with_PlayerBody"]["PlayerHair00"]
            ["shared_name_count"],2)

if __name__=="__main__":unittest.main()
