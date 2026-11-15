
void FUN_02015c30(long param_1,short *param_2)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  long lVar17;
  byte *pbVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  uint uVar23;
  long *plVar24;
  byte *pbVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined *local_e0;
  byte *pbStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_a8;
  byte *local_a0;
  undefined *local_98;
  short local_90;
  short local_8e;
  undefined4 local_8c;
  uint *local_88;
  int local_78;
  
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  local_90 = *param_2;
  if (local_90 == -2) {
    lVar17 = *(long *)(param_1 + 0x1160);
    if (lVar17 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x1190) != 0) {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x1190) + (ulong)(2 < *(uint *)(param_1 + 0x1188)) * 8);
      if (uVar8 < 0xffff0000 && (uVar8 & 0xffff) != 0xffff) {
        plVar12 = (long *)**(undefined8 **)
                            (*(long *)(lVar17 + 0x38) +
                            (-((ulong)(uVar8 >> 0xf) & 1) & 0xfffffffffff80000 |
                            ((ulong)uVar8 & 0xffff) << 3));
        (**(code **)(*plVar12 + 0x1c8))(plVar12,(int)uVar8 >> 0x10,1);
        lVar17 = *(long *)(param_1 + 0x1160);
      }
    }
    if (*(long *)(param_1 + 0x1190) == 0) {
      return;
    }
    if (lVar17 == 0) {
      return;
    }
    lVar22 = 0xc;
    if (*(uint *)(param_1 + 0x1188) < 4) {
      lVar22 = 0;
    }
    uVar8 = *(uint *)(*(long *)(param_1 + 0x1190) + lVar22);
    if (0xfffeffff < uVar8) {
      return;
    }
    if ((uVar8 & 0xffff) == 0xffff) {
      return;
    }
    plVar12 = (long *)**(undefined8 **)
                        (*(long *)(lVar17 + 0x38) +
                        (-((ulong)(uVar8 >> 0xf) & 1) & 0xfffffffffff80000 |
                        ((ulong)uVar8 & 0xffff) << 3));
                    /* WARNING: Could not recover jumptable at 0x02015d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar12 + 0x1c8))(plVar12,(int)uVar8 >> 0x10,1);
    return;
  }
  local_8e = param_2[1];
  local_88 = (uint *)0x0;
  local_8c = *(undefined4 *)(param_2 + 2);
  local_98 = PTR_DAT_04bc0510 + 0x10;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar5 == 0) {
LAB_02015e2c:
    puVar21 = (uint *)0x0;
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0xa2);
    uVar8 = 0xbc;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02015e2c;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(param_2);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar8) ||
       (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar21 == (uint *)0x0)) goto LAB_02015e2c;
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0xa2);
    uVar8 = *puVar21;
    local_88 = puVar21;
    if (uVar8 == 0 || puVar21 == (uint *)(ulong)uVar8) {
LAB_02015e24:
      uVar8 = 0;
    }
    else {
      puVar20 = (uint *)((long)puVar21 - (long)(ulong)uVar8);
      uVar8 = 0;
      if (*puVar20 != 0) {
        uVar8 = puVar20[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar17 != 0) {
            uVar11 = 0;
            if ((ulong)uVar8 != 0) {
              uVar11 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar8);
            }
            if (*puVar20 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
               uVar8 < 0xbd)) goto LAB_02015e3c;
          }
        }
        goto LAB_02015e24;
      }
    }
  }
LAB_02015e3c:
  puVar4 = PTR_DAT_04bb2020;
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
  uVar11 = (uint)local_e0;
  if (*(int *)(param_1 + 0x5f88) == 1) {
    local_c0._0_4_ = (uint)(uint3)local_c0;
    pbStack_d8 = (byte *)((long)&local_d0 + 4);
    local_d0 = CONCAT35(local_d0._5_3_,0x10);
    local_e0 = PTR_DAT_04bb2ab0 + 0x10;
    lVar17 = param_1 + 0x5f48;
    FUN_021d7aa0(&local_e0,lVar17);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    bVar3 = *pbStack_d8;
    if (bVar3 != 0) {
      bVar2 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61) {
        bVar2 = bVar3;
      }
      *pbStack_d8 = bVar2;
    }
    local_a8 = puVar4 + 0x10;
    local_a0 = &DAT_0409c6a6;
    (**(code **)(local_e0 + 0x18))(&local_e0);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    pbVar25 = pbStack_d8;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    if (pbVar25 == local_a0) {
LAB_02016010:
      uVar9 = FUN_01ae0100(&local_98);
      uVar9 = uVar9 ^ 1;
    }
    else {
      uVar19 = 0;
      bVar7 = true;
      do {
        if (pbStack_d8[uVar19] != local_a0[uVar19]) break;
        if (pbStack_d8[uVar19] == 0) {
          if (bVar7) goto LAB_02016010;
          break;
        }
        bVar7 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      local_a8 = puVar4 + 0x10;
      local_a0 = &DAT_0406d593;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      (**(code **)(local_e0 + 0x18))(&local_e0);
      pbVar25 = pbStack_d8;
      (**(code **)(local_a8 + 0x18))(&local_a8);
      if (pbVar25 == local_a0) {
LAB_020160b0:
        uVar9 = FUN_01ae0340(&local_98);
        uVar9 = uVar9 ^ 1;
      }
      else {
        uVar19 = 0;
        bVar7 = true;
        do {
          if (pbStack_d8[uVar19] != local_a0[uVar19]) break;
          if (pbStack_d8[uVar19] == 0) {
            if (bVar7) goto LAB_020160b0;
            break;
          }
          bVar7 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        local_a8 = puVar4 + 0x10;
        local_a0 = &DAT_040ff1ff;
        (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(lVar17);
        (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(lVar17);
        pbVar25 = *(byte **)(param_1 + 0x5f50);
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pbVar25 == local_a0) {
LAB_020161c8:
          uVar9 = FUN_01ae0580(&local_98);
          uVar9 = uVar9 ^ 1;
        }
        else {
          uVar19 = 0;
          bVar7 = true;
          do {
            bVar3 = *(byte *)(*(long *)(param_1 + 0x5f50) + uVar19);
            if (bVar3 != local_a0[uVar19]) break;
            if (bVar3 == 0) {
              if (bVar7) goto LAB_020161c8;
              break;
            }
            bVar7 = uVar19 < 0x80000;
            uVar19 = uVar19 + 1;
          } while (uVar19 != 0x80001);
          local_a8 = puVar4 + 0x10;
          local_a0 = &DAT_040a033e;
          (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(lVar17);
          (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(lVar17);
          pbVar25 = *(byte **)(param_1 + 0x5f50);
          (**(code **)(local_a8 + 0x18))(&local_a8);
          if (pbVar25 == local_a0) {
LAB_02016264:
            uVar9 = FUN_01ae07c0(&local_98);
            uVar9 = uVar9 ^ 1;
          }
          else {
            uVar19 = 0;
            bVar7 = true;
            do {
              bVar3 = *(byte *)(*(long *)(param_1 + 0x5f50) + uVar19);
              if (bVar3 != local_a0[uVar19]) break;
              if (bVar3 == 0) {
                if (bVar7) goto LAB_02016264;
                break;
              }
              bVar7 = uVar19 < 0x80000;
              uVar19 = uVar19 + 1;
            } while (uVar19 != 0x80001);
            local_a8 = puVar4 + 0x10;
            local_a0 = &DAT_04061876;
            uVar19 = FUN_00710cb0(lVar17,&local_a8);
            if ((uVar19 & 1) == 0) {
              uVar19 = FUN_0277d9a8(param_2);
              if ((uVar19 & 1) == 0) goto LAB_02016318;
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_01ae0a00(&local_98);
              uVar9 = uVar9 ^ 1;
            }
          }
        }
      }
    }
    if ((*(long *)(param_1 + 0x1160) != 0) && (*(long *)(param_1 + 0x1190) != 0)) {
      uVar23 = *(uint *)(*(long *)(param_1 + 0x1190) + (ulong)(2 < *(uint *)(param_1 + 0x1188)) * 8)
      ;
      if ((uVar23 < 0xffff0000) && ((uVar23 & 0xffff) != 0xffff)) {
        plVar12 = (long *)**(undefined8 **)
                            (*(long *)(*(long *)(param_1 + 0x1160) + 0x38) +
                            (-((ulong)(uVar23 >> 0xf) & 1) & 0xfffffffffff80000 |
                            ((ulong)uVar23 & 0xffff) << 3));
        (**(code **)(*plVar12 + 0x1c8))(plVar12,(int)uVar23 >> 0x10,uVar9 & 1);
      }
    }
  }
  else {
    lVar17 = *(long *)puVar5;
    uVar9 = FUN_0277d6c4(param_2);
    if (*(long *)puVar5 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
          (*(long *)(param_1 + 0x1160) != 0)) && (*(long *)(param_1 + 0x1190) != 0)) {
        uVar9 = *(uint *)(*(long *)(param_1 + 0x1190) + (ulong)(2 < *(uint *)(param_1 + 0x1188)) * 8
                         );
        if ((uVar9 < 0xffff0000) && ((uVar9 & 0xffff) != 0xffff)) {
          plVar12 = (long *)**(undefined8 **)
                              (*(long *)(*(long *)(param_1 + 0x1160) + 0x38) +
                              (-((ulong)(uVar9 >> 0xf) & 1) & 0xfffffffffff80000 |
                              ((ulong)uVar9 & 0xffff) << 3));
          (**(code **)(*plVar12 + 0x1c8))(plVar12,(int)uVar9 >> 0x10,0);
        }
      }
    }
  }
LAB_02016318:
  puVar1 = PTR_DAT_04bbdf58;
  uVar9 = 0;
  if (((puVar21 != (uint *)0x0) && (uVar23 = *puVar21, uVar23 != 0)) &&
     (puVar21 != (uint *)(ulong)uVar23)) {
    puVar20 = (uint *)((long)puVar21 - (long)(ulong)uVar23);
    uVar9 = 0;
    if (*puVar20 != 0) {
      uVar9 = puVar20[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
        lVar17 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
        if (lVar17 != 0) {
          uVar23 = 0;
          if ((ulong)uVar9 != 0) {
            uVar23 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar9);
          }
          if (*puVar20 <= uVar23) {
            uVar23 = 0xffffffff;
          }
          if ((uVar23 < *(uint *)PTR_DAT_04bc01a0) &&
             (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc01a0 + 8) + (long)(int)uVar23 * 2),
             uVar9 < 0x15)) goto LAB_020163a8;
        }
      }
      uVar9 = 0;
    }
  }
LAB_020163a8:
  if (uVar9 == 0) {
LAB_020164d8:
    lVar17 = 0;
  }
  else {
    if (uVar9 < 0x15) {
      pbStack_d8 = *(byte **)(PTR_DAT_04bbdf58 + (ulong)uVar9 * 8 + 0xb0);
    }
    else {
      pbStack_d8 = (byte *)&DAT_0407ebb1;
    }
    local_e0 = puVar4 + 0x10;
    uVar9 = 0;
    do {
      pbVar25 = (byte *)&DAT_0407ebb1;
      if (uVar9 < 0x15) {
        pbVar25 = *(byte **)(puVar1 + (ulong)uVar9 * 8 + 0xb0);
      }
      (**(code **)(local_e0 + 0x18))(&local_e0);
      if (pbVar25 == pbStack_d8) {
LAB_020164ac:
        local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar9);
        if (uVar9 != 0) {
          if (*(uint *)(param_1 + 0x18f0) <= uVar9) goto LAB_020164d8;
          lVar17 = *(long *)(*(long *)(param_1 + 0x18f8) + (long)(int)uVar9 * 8);
          goto LAB_020164e8;
        }
        break;
      }
      if (*pbVar25 == *pbStack_d8) {
        if (*pbVar25 == 0) goto LAB_020164ac;
        lVar17 = 0x7fffe;
        pbVar18 = pbStack_d8;
        while( true ) {
          if (pbVar25[1] != pbVar18[1]) break;
          if (pbVar25[1] == 0) goto LAB_020164ac;
          if (pbVar25[2] != pbVar18[2]) break;
          if (pbVar25[2] == 0) goto LAB_020164ac;
          if ((lVar17 == 0) || (bVar3 = pbVar25[3], bVar3 != pbVar18[3])) break;
          lVar17 = lVar17 + -3;
          pbVar18 = pbVar18 + 3;
          pbVar25 = pbVar25 + 3;
          if (bVar3 == 0) goto LAB_020164ac;
        }
      }
      uVar23 = 0x15;
      if ((int)uVar9 < 0x15) {
        uVar23 = uVar9 + 1;
      }
      uVar9 = uVar23;
    } while (uVar23 != 0x15);
    lVar17 = 0;
  }
LAB_020164e8:
  uVar9 = *(uint *)(*(long *)(param_1 + 0x60a8) +
                    ((ulong)*(uint *)(*(long *)(param_1 + 0x60a8) + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar9 != 0) && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
      (plVar12 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar12 != (long *)0x0)) &&
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar12 + 0x46) == uVar9)))) {
    lVar22 = plVar12[0x2a];
    if (((*PTR_DAT_04bc2540 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc2540), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bc2538 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2540);
    }
    uVar19 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc2538);
    if (((uVar19 & 1) != 0) && ((int)lVar22 == 1)) {
      plVar24 = (long *)plVar12[0xd];
      if (plVar24 != (long *)0x0) {
        if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2f68);
        }
        uVar19 = (**(code **)(*plVar24 + 0x10))(plVar24,PTR_DAT_04bb2f60);
        if ((uVar19 & 1) == 0) {
          plVar24 = (long *)0x0;
        }
      }
      plVar12 = (long *)plVar12[0xc];
      if (plVar12 != (long *)0x0) {
        if (((*PTR_DAT_04bb2eb0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb2eb0), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb2ea8 = PTR_DAT_04bb2e38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2eb0);
        }
        (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb2ea8);
      }
      if ((plVar24 != (long *)0x0) && ((uVar8 == uVar11 || (lVar17 != 0)))) {
        uVar26 = 0x3f800000;
        if (uVar8 == uVar11) {
          uVar27 = 0x3f800000;
          uVar28 = 0x3f800000;
          local_e0 = (undefined *)0x3f800000b33bbd2e;
          pbStack_d8 = (byte *)0x333bbd2e;
          local_d0 = 0xb33bbd2e80000000;
          uStack_c8 = 0x3f800000;
          local_c0 = 0x333bbd2e3f800000;
          uStack_b8 = 0x2709aded;
        }
        else {
          uVar27 = 0x3f800000;
          uVar28 = 0x3f800000;
          if (lVar17 != 0) {
            uVar13 = (**(code **)(*(long *)(lVar17 + 0xa0) + 0xf0))();
            uVar14 = (**(code **)(*(long *)(lVar17 + 0x68) + 0xf0))();
            puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x30) + 0xf0))();
            uVar26 = *puVar15;
            uVar27 = puVar15[1];
            uVar28 = puVar15[2];
            FUN_02018b44(&local_e0,uVar14,uVar13);
          }
        }
        *(undefined4 *)((long)plVar24 + 0x3a4) = uVar26;
        *(undefined4 *)(plVar24 + 0x75) = uVar27;
        *(undefined4 *)((long)plVar24 + 0x3ac) = uVar28;
        *(byte **)((long)plVar24 + 0x34c) = pbStack_d8;
        *(undefined **)((long)plVar24 + 0x344) = local_e0;
        *(undefined8 *)((long)plVar24 + 0x35c) = uStack_c8;
        *(long *)((long)plVar24 + 0x354) = local_d0;
        *(undefined8 *)((long)plVar24 + 0x36c) = uStack_b8;
        *(undefined8 *)((long)plVar24 + 0x364) = local_c0;
      }
      if (*(char *)(*(long *)(param_1 + 0x48) + 0x224) == '\x01') {
        FUN_0170c740(*(undefined8 *)(param_1 + 0x60a8),1);
      }
    }
  }
  if (*(long *)(param_1 + 0x1190) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1160) == 0) {
    return;
  }
  lVar22 = 0xc;
  if (*(uint *)(param_1 + 0x1188) < 4) {
    lVar22 = 0;
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 0x1190) + lVar22);
  if (0xfffeffff < uVar8) {
    return;
  }
  if ((uVar8 & 0xffff) == 0xffff) {
    return;
  }
  pbStack_d8 = *(byte **)param_2;
  lVar22 = *(long *)puVar5;
  local_e0 = puVar6 + 0x10;
  local_d0 = 0;
  uVar8 = FUN_0277d6c4(&pbStack_d8);
  if (*(long *)puVar5 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar8 < *(uint *)(lVar22 + 0x1d8)) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar22 != 0) {
          local_d0 = lVar22;
        }
      }
    }
  }
  local_78 = 0;
  if (lVar17 != 0) {
    piVar16 = (int *)(**(code **)(*(long *)(lVar17 + 0xd8) + 0xf0))((long *)(lVar17 + 0xd8));
    local_78 = *piVar16;
  }
  if (local_78 == 3) {
    bVar7 = false;
  }
  else {
    bVar7 = local_78 != 2;
    if (local_78 == 0) {
      uVar8 = 0;
      goto LAB_02016824;
    }
  }
  uVar8 = (uint)(local_78 != 2) << 3;
LAB_02016824:
  if ((*(long *)(param_1 + 0x1160) != 0) && (*(long *)(param_1 + 0x1190) != 0)) {
    lVar17 = 0xc;
    if (*(uint *)(param_1 + 0x1188) < 4) {
      lVar17 = 0;
    }
    uVar11 = *(uint *)(*(long *)(param_1 + 0x1190) + lVar17);
    if ((uVar11 < 0xffff0000) && ((uVar11 & 0xffff) != 0xffff)) {
      plVar12 = (long *)**(undefined8 **)
                          (*(long *)(*(long *)(param_1 + 0x1160) + 0x38) +
                          (-((ulong)(uVar11 >> 0xf) & 1) & 0xfffffffffff80000 |
                          ((ulong)uVar11 & 0xffff) << 3));
      (**(code **)(*plVar12 + 0x1c8))(plVar12,(int)uVar11 >> 0x10,bVar7);
    }
  }
  puVar6 = PTR_DAT_04bb30c8;
  puVar5 = PTR_DAT_04bb30c0;
  lVar17 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar17 + 0xb0) != lVar17 + 0xa8) {
    lVar22 = (long)*(int *)(lVar17 + 0xbc);
    plVar12 = (long *)(*(long *)(lVar17 + 0xb0) - lVar22);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      if ((plVar12 != (long *)0x0) &&
         (uVar19 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar5), (uVar19 & 1) != 0)) {
        local_a8 = puVar4 + 0x10;
        local_a0 = (byte *)0x40e51ea;
        if (plVar12[0x51] == 0) {
          return;
        }
        uVar11 = FUN_03efff10(plVar12[0x51],&local_a8);
        lVar17 = plVar12[0x51];
        if ((-1 < (int)uVar11) && (lVar17 != 0)) {
          if (*(uint *)(lVar17 + 0x10) <= uVar11) {
            uVar11 = 0;
          }
          lVar17 = *(long *)(lVar17 + 0x18) + (ulong)uVar11 * 0x48;
          *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) & 0xfffffff7 | uVar8;
          lVar17 = plVar12[0x51];
        }
        local_a8 = puVar4 + 0x10;
        local_a0 = (byte *)0x409c6aa;
        if (lVar17 == 0) {
          return;
        }
        uVar11 = FUN_03efff10(lVar17,&local_a8);
        if ((int)uVar11 < 0) {
          return;
        }
        lVar17 = plVar12[0x51];
        if (lVar17 == 0) {
          return;
        }
        if (*(uint *)(lVar17 + 0x10) <= uVar11) {
          uVar11 = 0;
        }
        lVar17 = *(long *)(lVar17 + 0x18) + (ulong)uVar11 * 0x48;
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) & 0xfffffff7 | uVar8;
        return;
      }
      plVar12 = (long *)(*(long *)((long)plVar12 + lVar22 + 8) - lVar22);
    } while (plVar12 != (long *)((lVar17 + 0xa8) - lVar22));
  }
  return;
}

