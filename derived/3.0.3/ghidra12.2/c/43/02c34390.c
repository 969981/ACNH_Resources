
void FUN_02c34390(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined *local_c0;
  int local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined8 local_aa;
  undefined4 local_a0;
  undefined8 local_9c;
  byte local_94;
  undefined *local_90;
  long *plStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  *(undefined1 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if (*(long *)(param_1 + 0x290) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x290) + 8);
    lVar18 = *(long *)(param_1 + 0x210);
    lVar20 = *(long *)(lVar18 + 0x580);
    if (lVar20 != 0) {
      local_a0 = 0;
      local_aa = 0x101000001;
      local_9c = 0x60000000c;
      local_b4 = 0;
      local_c0 = PTR_DAT_04bc9c78 + 0x10;
      if (-1 < param_2) {
        if (1 < *(uint *)(lVar20 + 0x298)) {
          iVar12 = *(int *)(lVar20 + 0x2e8) * *(int *)(lVar20 + 0x430);
          iVar10 = param_2;
          if (param_2 < iVar12 + *(int *)(lVar20 + 0x2f4) && iVar12 <= param_2) {
            iVar10 = -1;
          }
          local_b4 = CONCAT44(param_2,iVar10);
        }
        *(int *)(param_1 + 0x8b00) = param_2;
      }
      local_94 = *(byte *)(param_1 + 0x1f8);
      local_ac = 0;
      if (7 < local_94) {
        local_94 = 0xff;
      }
      local_b8 = iVar3;
      FUN_03864290(lVar20,&local_c0);
      plVar22 = (long *)(param_1 + 0x3b0);
      local_80 = PTR_LAB_04bc3910;
      uStack_78 = 0;
      local_90 = PTR_DAT_04bc3930 + 0x10;
      plStack_88 = plVar22;
      if (*(long *)(param_1 + 0x3b0) != 0) {
        FUN_028c0fe0(*(long *)(param_1 + 0x3b0),&local_90);
      }
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      iVar10 = *(int *)(*(long *)(param_1 + 0x290) + 8);
      if (iVar10 != 0) {
        puVar23 = *(undefined8 **)(*(long *)(param_1 + 0x290) + 0x10);
        puVar19 = puVar23 + iVar10;
        puVar1 = PTR_DAT_04bc3938 + 0x10;
        do {
          plVar21 = (long *)*puVar23;
          plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21);
          lVar18 = (**(code **)(*plVar13 + 0x18))();
          plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21);
          iVar10 = (**(code **)(*plVar13 + 0x20))();
          if (iVar10 != 0) {
            uVar25 = 0;
LAB_02c34524:
            uVar7 = *(ushort *)(lVar18 + uVar25 * 2);
            if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
              plVar13 = *(long **)(param_1 + 0x3b8);
              if (plVar13 != (long *)0x0) {
                *(long *)(param_1 + 0x3b8) = *plVar13;
              }
              plVar13[2] = 0;
              plVar13[3] = 0;
              puVar2 = PTR_DAT_04bc3938 + 0x10;
              plVar13[5] = (long)plVar22;
              *(uint *)(plVar13 + 4) = (uint)uVar7;
              *plVar13 = (long)puVar2;
              plVar13[1] = 0;
              *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
              lVar14 = FUN_028c11b4(plVar22,*(undefined8 *)(param_1 + 0x3b0));
              *(long *)(param_1 + 0x3b0) = lVar14;
              *(undefined8 *)(lVar14 + 0x18) = 1;
              goto LAB_02c34584;
            }
            lVar14 = *plVar22;
            if (lVar14 != 0) {
              lVar26 = lVar14;
              do {
                uVar17 = (uint)uVar7;
                if (uVar17 < *(uint *)(lVar26 + 0x20)) {
                  plVar13 = (long *)(lVar26 + 8);
                }
                else {
                  if (uVar17 <= *(uint *)(lVar26 + 0x20)) goto LAB_02c345f0;
                  plVar13 = (long *)(lVar26 + 0x10);
                }
                lVar26 = *plVar13;
                if (lVar26 == 0) break;
              } while( true );
            }
          }
LAB_02c34610:
          plVar13 = (long *)(**(code **)(*plVar21 + 0x18))(plVar21);
          lVar18 = (**(code **)(*plVar13 + 0x18))();
          plVar13 = (long *)(**(code **)(*plVar21 + 0x18))(plVar21);
          iVar10 = (**(code **)(*plVar13 + 0x20))();
          if (iVar10 != 0) {
            uVar25 = 0;
LAB_02c34654:
            uVar7 = *(ushort *)(lVar18 + uVar25 * 2);
            if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
              plVar13 = *(long **)(param_1 + 0x3b8);
              if (plVar13 != (long *)0x0) {
                *(long *)(param_1 + 0x3b8) = *plVar13;
              }
              plVar13[2] = 0;
              plVar13[3] = 0;
              plVar13[5] = (long)plVar22;
              *(uint *)(plVar13 + 4) = (uint)uVar7;
              *plVar13 = (long)puVar1;
              plVar13[1] = 0;
              *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
              lVar14 = FUN_028c11b4(plVar22,*(undefined8 *)(param_1 + 0x3b0));
              *(long *)(param_1 + 0x3b0) = lVar14;
              *(undefined8 *)(lVar14 + 0x18) = 1;
              goto LAB_02c346a8;
            }
            lVar14 = *plVar22;
            if (lVar14 != 0) {
              lVar26 = lVar14;
              do {
                uVar17 = (uint)uVar7;
                if (uVar17 < *(uint *)(lVar26 + 0x20)) {
                  plVar13 = (long *)(lVar26 + 8);
                }
                else {
                  if (uVar17 <= *(uint *)(lVar26 + 0x20)) goto LAB_02c3471c;
                  plVar13 = (long *)(lVar26 + 0x10);
                }
                lVar26 = *plVar13;
                if (lVar26 == 0) break;
              } while( true );
            }
          }
LAB_02c344d0:
          puVar9 = PTR_DAT_04bc4d98;
          puVar2 = PTR_DAT_04bc4d90;
          puVar23 = puVar23 + 1;
        } while (puVar23 != puVar19);
        iVar10 = *(int *)(*(long *)(param_1 + 0x290) + 8);
        if (iVar10 != 0) {
          lVar14 = (long)iVar10 << 3;
          lVar26 = *(long *)(*(long *)(param_1 + 0x290) + 0x10);
          lVar18 = 0;
          puVar1 = PTR_DAT_04bc4da0 + 0x10;
          do {
            iVar10 = (int)lVar18;
            if (iVar10 < *(int *)(lVar20 + 0x3d4)) {
              iVar12 = *(int *)(lVar20 + 0x430) - *(int *)(lVar20 + 0x438);
              if ((*(byte *)(lVar20 + 1000) >> 1 & 1) != 0) {
                uVar4 = *(uint *)(lVar20 + 0x434);
                uVar17 = 0;
                if ((int)uVar4 < iVar12) {
                  uVar17 = ~uVar4;
                }
                if (iVar12 < 0) {
                  uVar17 = uVar4 + 1;
                }
                iVar12 = uVar17 + iVar12;
              }
              iVar5 = *(int *)(lVar20 + 0x2e8);
              iVar8 = 0;
              if (iVar5 != 0) {
                iVar8 = iVar10 / iVar5;
              }
              uVar25 = lVar18 + (ulong)(uint)((iVar8 - iVar12) * iVar5 - iVar8 * iVar5);
              uVar17 = (uint)uVar25;
              if ((-1 < (int)uVar17) && ((int)uVar17 < (int)*(uint *)(lVar20 + 0x208))) {
                if (uVar17 < *(uint *)(lVar20 + 0x208)) {
                  puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0x210) + (uVar25 & 0xffffffff) * 8);
                }
                else {
                  puVar23 = (undefined8 *)0x0;
                }
                plVar22 = *(long **)(lVar26 + lVar18 * 8);
                if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                  *(undefined **)puVar2 = puVar1;
                  __cxa_guard_release(puVar9);
                }
                uVar25 = (**(code **)*puVar23)(puVar23,puVar2);
                if ((uVar25 & 1) == 0) {
                  puVar23 = (undefined8 *)0x0;
                }
                puVar19 = (undefined8 *)puVar23[0x5e];
                uVar4 = uVar17;
                if (*(uint *)(param_1 + 0x280) <= uVar17) {
                  uVar4 = 0;
                }
                lVar24 = *(long *)(*(long *)(param_1 + 0x288) + (ulong)uVar4 * 8);
                local_90 = (undefined *)puVar19[(ulong)(2 < *(uint *)(puVar23 + 0x5d)) * 2];
                plStack_88 = (long *)puVar19[1 < *(uint *)(puVar23 + 0x5d)];
                local_80 = (undefined *)*puVar19;
                uStack_78 = 0;
                FUN_02c36d10(puVar23,plVar22,&local_90);
                if (lVar24 != 0) {
                  uVar11 = (**(code **)(*plVar22 + 0x30))(plVar22);
                  FUN_031042a0(lVar24,uVar11);
                }
                if (iVar10 < *(int *)(lVar20 + 0x3d4)) {
                  iVar12 = *(int *)(lVar20 + 0x430) - *(int *)(lVar20 + 0x438);
                  if ((*(byte *)(lVar20 + 1000) >> 1 & 1) != 0) {
                    uVar6 = *(uint *)(lVar20 + 0x434);
                    uVar4 = 0;
                    if ((int)uVar6 < iVar12) {
                      uVar4 = ~uVar6;
                    }
                    if (iVar12 < 0) {
                      uVar4 = uVar6 + 1;
                    }
                    iVar12 = uVar4 + iVar12;
                  }
                  iVar5 = *(int *)(lVar20 + 0x2e8);
                  iVar8 = 0;
                  if (iVar5 != 0) {
                    iVar8 = iVar10 / iVar5;
                  }
                  iVar12 = iVar10 + ((iVar8 - iVar12) * iVar5 - iVar8 * iVar5);
                  if ((-1 < iVar12) && (iVar12 < *(int *)(lVar20 + 0x208))) {
                    iVar5 = (uint)(*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) * iVar5;
                    if (((int)local_b4 + iVar5 * -2 <= iVar10) &&
                       (iVar10 < iVar5 * 2 + (int)local_b4 + *(int *)(lVar20 + 0x2f0))) {
                      if (*(uint *)(param_1 + 0x280) <= uVar17) {
                        uVar17 = 0;
                      }
                      lVar24 = *(long *)(*(long *)(param_1 + 0x288) + (ulong)uVar17 * 8);
                      if (lVar24 != 0) {
                        uVar16 = (**(code **)(*plVar22 + 0x38))(plVar22);
                        FUN_031044d0(lVar24,uVar16);
                      }
                      goto LAB_02c34780;
                    }
                  }
                }
                if (*(uint *)(param_1 + 0x280) <= uVar17) {
                  uVar17 = 0;
                }
                lVar24 = *(long *)(*(long *)(param_1 + 0x288) + (ulong)uVar17 * 8);
                if (lVar24 != 0) {
                  uVar16 = (**(code **)(*plVar22 + 0x38))(plVar22);
                  FUN_031044e0(lVar24,uVar16);
                }
              }
            }
LAB_02c34780:
            lVar18 = lVar18 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
      }
      *(int *)(param_1 + 0x3a8) = (int)local_b4;
      *(undefined1 *)(param_1 + 0x3a4) = 1;
      lVar18 = *(long *)(param_1 + 0x210);
    }
    puVar23 = (undefined8 *)**(long **)(lVar18 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar25 = (**(code **)*puVar23)(puVar23,PTR_DAT_04bc4e58);
    if ((uVar25 & 1) == 0) {
      puVar23 = (undefined8 *)0x0;
    }
    plVar22 = *(long **)(puVar23[0x45] + (ulong)(2 < *(uint *)(puVar23 + 0x44)) * 0x10);
    if (plVar22 != (long *)0x0) {
      uVar16 = 0x3f800000;
      if (0 < iVar3) {
        uVar16 = 0;
      }
      local_c0 = PTR_DAT_04bc4f00 + 0x10;
      local_b8 = 0x14;
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_c0);
      (**(code **)(plVar22[3] + 0x158))(uVar16,plVar22[1]);
    }
  }
  return;
LAB_02c345f0:
  do {
    if (uVar17 < *(uint *)(lVar14 + 0x20)) {
      plVar13 = (long *)(lVar14 + 8);
    }
    else {
      if (uVar17 <= *(uint *)(lVar14 + 0x20)) {
        *(uint *)(lVar14 + 0x20) = (uint)uVar7;
        break;
      }
      plVar13 = (long *)(lVar14 + 0x10);
    }
    lVar14 = *plVar13;
  } while (lVar14 != 0);
LAB_02c34584:
  uVar25 = uVar25 + 1;
  plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21);
  uVar15 = (**(code **)(*plVar13 + 0x20))();
  if ((uVar15 & 0xffffffff) <= uVar25) goto LAB_02c34610;
  goto LAB_02c34524;
LAB_02c3471c:
  do {
    if (uVar17 < *(uint *)(lVar14 + 0x20)) {
      plVar13 = (long *)(lVar14 + 8);
    }
    else {
      if (uVar17 <= *(uint *)(lVar14 + 0x20)) {
        *(uint *)(lVar14 + 0x20) = (uint)uVar7;
        break;
      }
      plVar13 = (long *)(lVar14 + 0x10);
    }
    lVar14 = *plVar13;
  } while (lVar14 != 0);
LAB_02c346a8:
  uVar25 = uVar25 + 1;
  plVar13 = (long *)(**(code **)(*plVar21 + 0x18))(plVar21);
  uVar15 = (**(code **)(*plVar13 + 0x20))();
  if ((uVar15 & 0xffffffff) <= uVar25) goto LAB_02c344d0;
  goto LAB_02c34654;
}

