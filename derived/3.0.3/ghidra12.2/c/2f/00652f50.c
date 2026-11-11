
void FUN_00652f50(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  int local_59c;
  undefined4 local_598 [16];
  long local_558;
  undefined8 local_550;
  undefined4 local_548 [66];
  int local_440;
  uint local_43c;
  undefined2 local_438;
  undefined4 local_434;
  undefined1 auStack_430 [784];
  undefined1 auStack_120 [20];
  char local_10c;
  long local_108;
  long *local_100;
  long local_f8;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  ushort local_d0;
  undefined2 local_ce [19];
  int local_a8;
  undefined4 local_a4;
  long local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  int local_7c;
  int local_78;
  int local_74 [5];
  
  local_74[0] = (**(code **)(*param_1 + 0x20))();
  local_78 = (**(code **)(*param_1 + 0x40))(param_1);
  if (3 < DAT_04c7a248) {
    FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
    lVar10 = FUN_004446b0(auStack_430,"---------------------------------------------------",
                          &DAT_0413df78);
    *(char **)(lVar10 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x30) = 0x34;
    FUN_00444c00(auStack_430);
    if (3 < DAT_04c7a248) {
      FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
      lVar10 = FUN_004446b0(auStack_430,"Num bone sections: {}. Num parts: {}.",&DAT_048534b8,
                            local_74,&local_78);
      *(char **)(lVar10 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
      ;
      *(undefined8 *)(lVar10 + 0x30) = 0x35;
      FUN_00444c00(auStack_430);
    }
  }
  puVar5 = PTR_DAT_048607c0;
  puVar4 = PTR_DAT_048607b8;
  local_7c = 0;
  if (0 < local_74[0]) {
    do {
      local_90 = (long *)0x0;
      local_88 = 0xffff;
      (**(code **)(*param_1 + 0x28))(param_1,local_7c,&local_90);
      plVar8 = local_90;
      local_a0 = 0;
      local_98 = 0x8000000000000000;
      local_a4 = (**(code **)(*local_90 + 0x20))(local_90);
      if (3 < DAT_04c7a248) {
        FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
        local_548[0] = CONCAT22(local_548[0]._2_2_,(undefined2)local_88);
        lVar10 = FUN_004446b0(auStack_430,
                              "Bone section {}. Start boneSet {}, numBoneSets {}. Num sections {}",
                              &DAT_048e7200,&local_7c,local_548,(long)&local_88 + 2,&local_a4);
        *(char **)(lVar10 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
        ;
        *(undefined8 *)(lVar10 + 0x30) = 0x3f;
        FUN_00444c00(auStack_430);
      }
      local_a8 = 0;
      if (0 < local_78) {
        do {
          (**(code **)(*param_1 + 0x48))(param_1,local_a8,&local_e0);
          if (((local_88 & 0xffff) <= (uint)local_d0) &&
             ((int)(uint)local_d0 < (int)((int)local_88._2_2_ + (local_88 & 0xffff)))) {
            local_100 = (long *)0x0;
            local_f8 = 0;
            (**(code **)(*plVar8 + 0x28))(plVar8,local_ce[0],3,auStack_120);
            if (3 < DAT_04c7a248) {
              FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
              local_548[0] = CONCAT22(local_548[0]._2_2_,local_d0);
              lVar10 = FUN_004446b0(auStack_430,
                                    "Part {}. BoneSet {}. Sub-mesh {}. Start vertex {}. NumVerts {}. Start Index {}. NumIndices {}."
                                    ,PTR_DAT_04bd9c70,&local_a8,local_548,local_ce,&local_e0,
                                    (ulong)&local_e0 | 4,(ulong)&local_e0 | 8,(ulong)&local_e0 | 0xc
                                   );
              *(char **)(lVar10 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
              ;
              *(undefined8 *)(lVar10 + 0x30) = 0x4d;
              FUN_00444c00(auStack_430);
            }
            plVar7 = local_100;
            local_438 = 0;
            local_440 = local_e0;
            local_43c = local_dc;
            local_434 = 1;
            (**(code **)(*local_100 + 0x40))(local_100,&local_440,auStack_430);
            FUN_00651c20(local_548);
            (**(code **)(*plVar7 + 0x30))(plVar7,local_548);
            uVar9 = FUN_00651d10(local_548,1,0);
            uVar6 = local_dc;
            if ((int)(local_98._4_4_ & 0x3fffffff) < (int)local_dc) {
              local_a0 = FUN_00426720(puVar4,local_dc,0x10,local_a0,local_98 & 0xffffffff,
                                      (long)&local_98 + 4);
            }
            if ((uint)local_98 != uVar6) {
              local_98 = CONCAT44(local_98._4_4_,uVar6);
            }
            local_558 = 0;
            local_550 = -0x8000000000000000;
            iVar15 = local_dc * 4;
            if ((int)local_dc < 1) {
              if (iVar15 != 0) goto LAB_00653344;
            }
            else {
              local_558 = FUN_00426720(puVar5,iVar15,4,0,0,(long)&local_550 + 4);
              if ((int)local_550 != iVar15) {
LAB_00653344:
                local_550 = CONCAT44(local_550._4_4_,iVar15);
              }
            }
            (**(code **)(*plVar7 + 0x50))(plVar7,auStack_430,uVar9,local_558);
            if (0 < (int)local_dc) {
              uVar13 = 0;
              lVar10 = 0;
              do {
                uVar14 = uVar13 & 0xfffffffc;
                uVar13 = uVar13 + 4;
                puVar2 = (undefined8 *)(local_558 + uVar14 * 4);
                uVar17 = *puVar2;
                puVar3 = (undefined8 *)(local_a0 + lVar10 * 0x10);
                puVar3[1] = puVar2[1];
                *puVar3 = uVar17;
                uVar14 = (ulong)(int)local_dc;
                lVar10 = lVar10 + 1;
              } while (lVar10 < (long)uVar14);
              if (0 < (int)local_dc) {
                lVar16 = 0;
                lVar10 = 0;
                do {
                  if (3 < DAT_04c7a248) {
                    FUN_00444bc0(local_598,&DAT_04c7a1f8,4);
                    local_59c = (int)lVar10 + local_e0;
                    lVar11 = FUN_004446b0(local_598,"Vtx {}.\t{:,3}",&DAT_048e7268,&local_59c,
                                          local_a0 + lVar16);
                    *(char **)(lVar11 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                    ;
                    *(undefined8 *)(lVar11 + 0x30) = 0x67;
                    FUN_00444c00(local_598);
                    uVar14 = (ulong)local_dc;
                  }
                  lVar10 = lVar10 + 1;
                  lVar16 = lVar16 + 0x10;
                } while (lVar10 < (int)uVar14);
              }
            }
            lVar10 = local_550;
            uVar6 = local_550._4_4_;
            local_550 = (ulong)local_550._4_4_ << 0x20;
            if ((-1 < lVar10) && (local_558 != 0)) {
              FUN_00421f90(puVar5,local_558,4,uVar6 & 0x3fffffff);
            }
            (**(code **)(*plVar7 + 0x70))(plVar7,auStack_430);
            lVar10 = local_108;
            if (local_10c == '\x01') {
              if (0 < local_d4) {
                iVar15 = 0;
                iVar12 = local_d4;
                do {
                  iVar1 = iVar15 + local_d8;
                  local_548[0] = CONCAT22(local_548[0]._2_2_,
                                          *(undefined2 *)(lVar10 + (long)iVar1 * 2));
                  local_598[0] = CONCAT22(local_598[0]._2_2_,
                                          *(undefined2 *)(lVar10 + (long)(iVar1 + 1) * 2));
                  local_440 = CONCAT22(local_440._2_2_,
                                       *(undefined2 *)(lVar10 + (long)(iVar1 + 2) * 2));
                  if (3 < DAT_04c7a248) {
                    FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
                    lVar16 = FUN_004446b0(auStack_430,"Tri ({}, {}, {}).",&DAT_048e7280,local_548,
                                          local_598,&local_440);
                    *(char **)(lVar16 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                    ;
                    *(undefined8 *)(lVar16 + 0x30) = 0x78;
                    FUN_00444c00(auStack_430);
                    iVar12 = local_d4;
                  }
                  iVar15 = iVar15 + 3;
                } while (iVar15 < iVar12);
              }
            }
            else if ((local_10c == '\x02') && (0 < local_d4)) {
              iVar15 = 0;
              iVar12 = local_d4;
              do {
                iVar1 = iVar15 + local_d8;
                local_548[0] = *(undefined4 *)(lVar10 + (long)iVar1 * 4);
                local_598[0] = *(undefined4 *)(lVar10 + (long)(iVar1 + 1) * 4);
                local_440 = *(int *)(lVar10 + (long)(iVar1 + 2) * 4);
                if (3 < DAT_04c7a248) {
                  FUN_00444bc0(auStack_430,&DAT_04c7a1f8,4);
                  lVar16 = FUN_004446b0(auStack_430,"Tri ({}, {}, {}).",&DAT_048e72a0,local_548,
                                        local_598,&local_440);
                  *(char **)(lVar16 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp"
                  ;
                  *(undefined8 *)(lVar16 + 0x30) = 0x83;
                  FUN_00444c00(auStack_430);
                  iVar12 = local_d4;
                }
                iVar15 = iVar15 + 3;
              } while (iVar15 < iVar12);
            }
            (**(code **)(*plVar8 + 0x30))(plVar8,auStack_120);
            if (local_f8 != 0) {
              FUN_004435c0();
            }
            if (local_100 != (long *)0x0) {
              FUN_004435c0();
            }
          }
          local_a8 = local_a8 + 1;
        } while (local_a8 < local_78);
      }
      uVar13 = local_98;
      uVar6 = local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < (long)uVar13) && (local_a0 != 0)) {
        FUN_00421f90(puVar4,local_a0,0x10,uVar6 & 0x3fffffff);
      }
      if (local_90 != (long *)0x0) {
        FUN_004435c0();
      }
      local_7c = local_7c + 1;
    } while (local_7c < local_74[0]);
  }
  return;
}

