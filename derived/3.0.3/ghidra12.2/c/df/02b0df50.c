
/* WARNING: Removing unreachable block (ram,0x02b0e19c) */
/* WARNING: Removing unreachable block (ram,0x02b0eb10) */
/* WARNING: Removing unreachable block (ram,0x02b0e568) */
/* WARNING: Removing unreachable block (ram,0x02b0ebf0) */
/* WARNING: Removing unreachable block (ram,0x02b0e8a8) */

undefined8 FUN_02b0df50(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  uint *puVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_130 [5];
  uint uStack_11c;
  undefined8 local_108;
  undefined *puStack_100;
  int local_f8;
  int local_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  int local_d8;
  undefined1 local_d4;
  ushort local_d2;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  float fStack_c8;
  undefined2 uStack_c4;
  undefined2 local_c2;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined6 uStack_ba;
  undefined2 local_b4;
  undefined6 uStack_b2;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined1 local_78;
  undefined4 local_70;
  uint local_6c;
  
  puVar1 = PTR_DAT_04bb6298;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      uVar12 = *(uint *)(param_2 + 8);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar12);
      puVar15 = (undefined8 *)(param_1 + 8) + uVar12;
      if (6 < uVar12) {
        puVar15 = (undefined8 *)(param_1 + 8);
      }
      plVar18 = (long *)*puVar15;
      if (plVar18 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar18 + 0x20))(plVar18,param_2);
      local_d8 = 0;
      local_d4 = 0;
      local_d2 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_e0 = PTR_DAT_04bc4980 + 0x10;
      uStack_ca = 0;
      fStack_c8 = 0.0;
      uStack_c4 = 0;
      local_c2 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b2 = 0;
      uStack_ba = 0;
      local_b4 = 0;
      (**(code **)(*plVar18 + 0x28))(plVar18,&local_e0,param_2);
      if (local_d8 != 0) {
        return 0;
      }
      uVar9 = (**(code **)(*plVar18 + 0x30))(plVar18,param_2,&local_e0);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      lVar10 = (**(code **)(*plVar18 + 0x38))(plVar18);
      if (lVar10 != 0) {
        if ((*(byte *)(lVar10 + 8) >> 1 & 1) == 0) {
          lVar19 = lVar10 + 0x18;
        }
        else {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,5);
          lVar19 = lVar10 + 0x350;
        }
        fVar23 = (float)*(int *)(lVar19 + 0x14) * 0.5;
        fVar24 = (float)*(int *)(lVar19 + 0x10) * 0.5;
        uVar12 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar12 = (uint)(fVar24 < 0.0);
        }
        iVar7 = (int)fVar24 - uVar12;
        uVar12 = 0;
        if (fVar23 != (float)(int)fVar23) {
          uVar12 = (uint)(fVar23 < 0.0);
        }
        iVar20 = (int)fVar23 - uVar12;
        fVar23 = (float)*(int *)(lVar19 + 0x20) * 0.5;
        uVar12 = 0;
        if (fVar23 != (float)(int)fVar23) {
          uVar12 = (uint)(fVar23 < 0.0);
        }
        iVar22 = (int)fVar23 - uVar12;
        fVar23 = (float)*(int *)(lVar19 + 0x24) * 0.5;
        uVar12 = 0;
        if (fVar23 != (float)(int)fVar23) {
          uVar12 = (uint)(fVar23 < 0.0);
        }
        iVar4 = iVar7;
        if (iVar22 <= iVar7) {
          iVar4 = iVar22;
        }
        if (iVar7 <= iVar22) {
          iVar7 = iVar22;
        }
        iVar8 = (int)fVar23 - uVar12;
        iVar22 = iVar20;
        if (iVar8 <= iVar20) {
          iVar22 = iVar8;
        }
        if (iVar20 <= iVar8) {
          iVar20 = iVar8;
        }
        if (*(int *)(param_2 + 8) == 4) {
          lVar10 = *(long *)PTR_DAT_04bb5008;
          uVar12 = (uint)local_d2 - (uint)*(ushort *)(lVar10 + 0xff0);
          if ((*(uint *)(lVar10 + 0xfd0) <= uVar12) ||
             (puVar14 = *(uint **)(*(long *)(lVar10 + 0xfd8) + (long)(int)uVar12 * 8),
             puVar14 == (uint *)0x0)) {
LAB_02b0e70c:
            local_a0 = PTR_DAT_04bbc5d8 + 0x10;
            local_98 = PTR_DAT_04bb2018 + 0x10;
            local_88 = local_98;
            uVar9 = FUN_035a3310();
            if ((uVar9 & 1) == 0) {
              local_108 = (undefined *)((ulong)local_108._4_4_ << 0x20);
            }
            else {
              local_130[0] = 0x32;
              local_108 = (undefined *)CONCAT44(local_108._4_4_,0x32);
            }
            if ((uint)local_108 == 0) {
              puVar15 = (undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
            }
            else {
              puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
              puVar15 = puVar3 + ((ulong)local_108 & 0xffffffff);
              if (0x38 < (uint)local_108) {
                puVar15 = puVar3;
              }
            }
            local_a8 = (undefined *)*puVar15;
            local_90 = CONCAT44(iVar22,iVar4);
            _local_80 = CONCAT44(iVar20,iVar7);
            local_78 = 1;
            goto LAB_02b0e944;
          }
          uVar12 = *puVar14;
          uVar13 = 0;
          if ((uVar12 != 0) && (puVar14 != (uint *)(ulong)uVar12)) {
            puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar12);
            uVar13 = 0;
            if (*puVar17 != 0) {
              uVar12 = puVar17[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar17 + lVar10 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar10 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar14 - lVar10) / (ulong)uVar12);
                  }
                  if (*puVar17 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *(uint *)PTR_DAT_04bc4590) &&
                     (uVar13 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar13 * 2),
                     uVar13 < 6)) goto LAB_02b0e6fc;
                }
              }
              uVar13 = 0;
            }
          }
LAB_02b0e6fc:
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar13);
          if (uVar13 < 3) goto LAB_02b0e70c;
          FUN_02b0ed20();
        }
        else {
          fVar25 = (float)*(int *)(lVar10 + 0x2c) * 0.5;
          fVar24 = (float)*(int *)(lVar10 + 0x28) * 0.5;
          fVar26 = (float)*(int *)(lVar10 + 0x38) * 0.5;
          fVar23 = (float)*(int *)(lVar10 + 0x3c) * 0.5;
          uVar12 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar12 = (uint)(fVar24 < 0.0);
          }
          iVar7 = (int)fVar24 - uVar12;
          uVar12 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar12 = (uint)(fVar25 < 0.0);
          }
          iVar20 = (int)fVar25 - uVar12;
          uVar12 = 0;
          if (fVar26 != (float)(int)fVar26) {
            uVar12 = (uint)(fVar26 < 0.0);
          }
          iVar22 = (int)fVar26 - uVar12;
          uVar12 = 0;
          if (fVar23 != (float)(int)fVar23) {
            uVar12 = (uint)(fVar23 < 0.0);
          }
          local_a0 = PTR_DAT_04bbc5d8 + 0x10;
          iVar8 = (int)fVar23 - uVar12;
          iVar4 = iVar7;
          if (iVar22 <= iVar7) {
            iVar4 = iVar22;
          }
          if (iVar7 <= iVar22) {
            iVar7 = iVar22;
          }
          iVar22 = iVar20;
          if (iVar8 <= iVar20) {
            iVar22 = iVar8;
          }
          if (iVar20 <= iVar8) {
            iVar20 = iVar8;
          }
          local_98 = PTR_DAT_04bb2018 + 0x10;
          uVar6 = *(ushort *)puVar1;
          if ((long)(short)uVar6 == 0xffffffffffffffff) {
            lVar10 = *(long *)PTR_DAT_04bb27a8;
LAB_02b0e8bc:
            local_108 = (undefined *)((ulong)local_108 & 0xffffffff00000000);
          }
          else {
            local_108 = (undefined *)CONCAT44(local_108._4_4_,0x20);
            puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8;
            if (0xff < uVar6) {
              puVar2 = PTR_DAT_04bc39f8;
            }
            lVar10 = *(long *)PTR_DAT_04bb27a8;
            if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_02b0e8bc;
            local_130[0] = 0x32;
            local_108 = (undefined *)CONCAT44(local_108._4_4_,0x32);
          }
          if ((uint)local_108 == 0) {
            puVar15 = (undefined8 *)(lVar10 + 0x1f8);
          }
          else {
            puVar15 = (undefined8 *)(lVar10 + 0x30) + ((ulong)local_108 & 0xffffffff);
            if (0x38 < (uint)local_108) {
              puVar15 = (undefined8 *)(lVar10 + 0x30);
            }
          }
          local_a8 = (undefined *)*puVar15;
          local_90 = CONCAT44(iVar22,iVar4);
          _local_80 = CONCAT44(iVar20,iVar7);
          local_78 = 0;
          local_88 = local_98;
LAB_02b0e944:
          FUN_013102c0(param_1 + 0xb0,&local_a8);
        }
        iVar7 = *(int *)(lVar19 + 0x24) + 1;
        iVar20 = *(int *)(lVar19 + 0x14);
        if (iVar7 != iVar20) {
          iVar4 = *(int *)(lVar19 + 0x10);
          iVar22 = iVar4;
          do {
            lVar21 = *(long *)PTR_DAT_04bb26a8;
            nn::os::LockMutex((MutexType *)(lVar21 + 0x1466a8));
            lVar10 = lVar21 + 0x146648 + (ulong)*(uint *)(lVar21 + 0x146640) * 0x20;
            if (1 < *(uint *)(lVar21 + 0x146640)) {
              lVar10 = lVar21 + 0x146648;
            }
            FUN_02a061d0(lVar10,(int)(short)iVar22,(int)(short)iVar20);
            nn::os::UnlockMutex((MutexType *)(lVar21 + 0x1466a8));
            if (iVar22 < *(int *)(lVar19 + 0x20)) {
              iVar22 = iVar22 + 1;
            }
            else {
              iVar22 = *(int *)(lVar19 + 0x10);
              iVar20 = iVar20 + 1;
            }
          } while ((iVar4 != iVar22) || (iVar7 != iVar20));
        }
      }
      sVar5 = *(short *)puVar1;
      if (sVar5 == -1) {
        return 1;
      }
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 1 & 1) == 0) {
        return 1;
      }
      uVar12 = (uint)*(byte *)(param_2 + 0x28);
      if (7 < uVar12) {
        uVar12 = 0xff;
      }
      local_108 = (undefined *)CONCAT71(local_108._1_7_,(char)uVar12);
      if ((((float)CONCAT22(uStack_ca,uStack_cc) == 0.0) && (fStack_c8 == 0.0)) &&
         ((float)CONCAT22(local_c2,uStack_c4) == 0.0)) {
        return 1;
      }
      local_98 = (undefined *)CONCAT26(local_98._6_2_,0x100000000);
      local_a8 = (undefined *)CONCAT44(CONCAT22(uStack_ca,uStack_cc),uVar12);
      local_a0 = (undefined *)CONCAT44(CONCAT22(local_c2,uStack_c4),fStack_c8);
      local_90 = local_90 & 0xffffff0000000000;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uStack_c0);
      FUN_0255c85c(&local_a8);
      lVar10 = *(long *)PTR_DAT_04bb39b0;
      pbVar16 = PTR_DAT_04bb32e0;
      if (lVar10 == 0) {
LAB_02b0eb28:
        if (7 < *pbVar16) {
LAB_02b0eb34:
          if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
            lVar10 = **(long **)PTR_DAT_04bb27d0;
            bVar11 = *(byte *)(lVar10 + 0x473);
            pbVar16 = PTR_DAT_04bb5038;
            if ((long)(char)bVar11 != 0xffffffffffffffff) {
              puVar14 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
              if (7 < bVar11) {
                puVar14 = (uint *)(lVar10 + 0x48);
              }
              if ((*puVar14 & 8) != 0) {
                pbVar16 = (byte *)(lVar10 + 0x471);
              }
            }
            uVar13 = (uint)*pbVar16;
            if (*pbVar16 < 8) goto LAB_02b0eba4;
          }
          pbVar16 = PTR_DAT_04bb5038;
        }
      }
      else {
        if (*(int *)(lVar10 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar10 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02b0eb28;
          }
          goto LAB_02b0eb34;
        }
      }
      uVar13 = (uint)*pbVar16;
      if (7 < uVar13) {
        uVar13 = 0xff;
      }
LAB_02b0eba4:
      if (7 < uVar13) {
        uVar13 = 0xff;
      }
      if (uVar12 == uVar13) {
        return 1;
      }
      local_a8 = PTR_DAT_04bb2020 + 0x10;
      local_a0 = &DAT_04092fe6;
      FUN_0251aa80(&local_108,&local_a8,*(undefined4 *)PTR_DAT_04bb3238,1);
      return 1;
    }
  }
  uVar12 = *(uint *)(param_2 + 8);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar12);
  puVar15 = (undefined8 *)(param_1 + 8) + uVar12;
  if (6 < uVar12) {
    puVar15 = (undefined8 *)(param_1 + 8);
  }
  plVar18 = (long *)*puVar15;
  if (plVar18 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar18 + 0x20))(plVar18,param_2);
  local_d8 = 0;
  local_d4 = 0;
  local_d2 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_e0 = PTR_DAT_04bc4980 + 0x10;
  uStack_ca = 0;
  fStack_c8 = 0.0;
  uStack_c4 = 0;
  local_c2 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b2 = 0;
  uStack_ba = 0;
  local_b4 = 0;
  (**(code **)(*plVar18 + 0x28))(plVar18,&local_e0,param_2);
  if (local_d8 != 0) {
    return 0;
  }
  uVar9 = (**(code **)(*plVar18 + 0x30))(plVar18,param_2,&local_e0);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  lVar10 = (**(code **)(*plVar18 + 0x38))(plVar18);
  if (lVar10 != 0) {
    if ((*(byte *)(lVar10 + 8) >> 1 & 1) == 0) {
      lVar19 = lVar10 + 0x18;
    }
    else {
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,5);
      lVar19 = lVar10 + 0x350;
    }
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    fVar24 = (float)*(int *)(lVar19 + 0x14) * 0.5;
    fVar23 = (float)*(int *)(lVar19 + 0x10) * 0.5;
    fVar25 = (float)*(int *)(lVar19 + 0x20) * 0.5;
    uVar12 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar12 = (uint)(fVar23 < 0.0);
    }
    iVar7 = (int)fVar23 - uVar12;
    uVar12 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar12 = (uint)(fVar24 < 0.0);
    }
    iVar20 = (int)fVar24 - uVar12;
    puVar2 = PTR_DAT_04bbc5d8 + 0x10;
    uVar12 = 0;
    if (fVar25 != (float)(int)fVar25) {
      uVar12 = (uint)(fVar25 < 0.0);
    }
    iVar22 = (int)fVar25 - uVar12;
    fVar23 = (float)*(int *)(lVar19 + 0x24) * 0.5;
    uVar12 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar12 = (uint)(fVar23 < 0.0);
    }
    iVar4 = (int)fVar23 - uVar12;
    local_f8 = iVar7;
    if (iVar22 <= iVar7) {
      local_f8 = iVar22;
    }
    if (iVar7 <= iVar22) {
      iVar7 = iVar22;
    }
    local_f4 = iVar20;
    if (iVar4 <= iVar20) {
      local_f4 = iVar4;
    }
    if (iVar20 <= iVar4) {
      iVar20 = iVar4;
    }
    _local_e8 = CONCAT44(iVar20,iVar7);
    local_108 = puVar2;
    puStack_100 = puVar1;
    local_f0 = puVar1;
    if (*(int *)(param_2 + 8) == 4) {
      uVar9 = FUN_02b60df0(local_d2);
      if ((uVar9 & 1) == 0) {
        FUN_02b0ed20(lVar10);
      }
      else {
        FUN_02b0ebf8(param_1,&local_108);
      }
    }
    else {
      FUN_01383220(local_130,lVar10 + 0x18);
      local_a0 = puVar2;
      local_98 = puVar1;
      local_88 = puVar1;
      uVar9 = FUN_035a3310();
      if ((uVar9 & 1) == 0) {
        local_6c = 0;
      }
      else {
        local_70 = 0x32;
        local_6c = 0x32;
      }
      if (local_6c == 0) {
        puVar15 = (undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      }
      else {
        puVar3 = (undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        puVar15 = puVar3 + local_6c;
        if (0x38 < local_6c) {
          puVar15 = puVar3;
        }
      }
      local_a8 = (undefined *)*puVar15;
      local_78 = 0;
      local_90 = (ulong)uStack_11c << 0x20;
      FUN_013102c0(param_1 + 0xb0,&local_a8);
    }
    iVar7 = *(int *)(lVar19 + 0x24) + 1;
    iVar20 = *(int *)(lVar19 + 0x14);
    if (iVar7 != iVar20) {
      iVar4 = *(int *)(lVar19 + 0x10);
      iVar22 = iVar4;
      do {
        lVar21 = *(long *)PTR_DAT_04bb26a8;
        nn::os::LockMutex((MutexType *)(lVar21 + 0x1466a8));
        lVar10 = lVar21 + 0x146648 + (ulong)*(uint *)(lVar21 + 0x146640) * 0x20;
        if (1 < *(uint *)(lVar21 + 0x146640)) {
          lVar10 = lVar21 + 0x146648;
        }
        FUN_02a061d0(lVar10,(int)(short)iVar22,(int)(short)iVar20);
        nn::os::UnlockMutex((MutexType *)(lVar21 + 0x1466a8));
        if (iVar22 < *(int *)(lVar19 + 0x20)) {
          iVar22 = iVar22 + 1;
        }
        else {
          iVar22 = *(int *)(lVar19 + 0x10);
          iVar20 = iVar20 + 1;
        }
      } while ((iVar4 != iVar22) || (iVar7 != iVar20));
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_02b0e3cc:
    if (7 < *pbVar16) {
LAB_02b0e3d8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar10 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar10 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar14 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar14 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar14 & 8) != 0) {
            pbVar16 = (byte *)(lVar10 + 0x471);
          }
        }
        bVar11 = *pbVar16;
        if (bVar11 < 8) goto LAB_02b0e448;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02b0e3cc;
      }
      goto LAB_02b0e3d8;
    }
  }
  bVar11 = *pbVar16;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
LAB_02b0e448:
  if ((((float)CONCAT22(uStack_ca,uStack_cc) != 0.0) || (fStack_c8 != 0.0)) ||
     ((float)CONCAT22(local_c2,uStack_c4) != 0.0)) {
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_a8 = (undefined *)CONCAT71(local_a8._1_7_,bVar11);
    local_a8 = (undefined *)CONCAT44(CONCAT22(uStack_ca,uStack_cc),(undefined4)local_a8);
    local_a0 = (undefined *)CONCAT44(CONCAT22(local_c2,uStack_c4),fStack_c8);
    local_98 = (undefined *)CONCAT26(local_98._6_2_,0x10100000000);
    local_90 = local_90 & 0xffffff0000000000;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uStack_c0);
    FUN_0255c85c(&local_a8);
  }
  return 1;
}

