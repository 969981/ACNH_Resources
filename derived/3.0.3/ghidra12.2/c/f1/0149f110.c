
undefined4 FUN_0149f110(undefined1 *param_1,uint param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint auStack_c0090 [2];
  long alStack_c0088 [2];
  undefined2 auStack_c0078 [4];
  long alStack_c0070 [2];
  undefined2 auStack_c0060 [4];
  long alStack_c0058 [2];
  undefined2 auStack_c0048 [4];
  long alStack_c0040 [2];
  undefined2 auStack_c0030 [4];
  long alStack_c0028 [2];
  undefined2 auStack_c0018 [4];
  long alStack_c0010 [2];
  undefined2 auStack_c0000 [4];
  long alStack_bfff8 [2];
  undefined2 auStack_bffe8 [4];
  long alStack_bffe0 [98283];
  undefined *local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_78;
  
  puVar20 = auStack_c0090;
  if (param_2 == 0) {
LAB_0149f23c:
    bVar7 = true;
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if (lVar17 == 0) {
      puVar26 = &DAT_055c04a0;
    }
    else {
      puVar26 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar26 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar9 = FUN_006bd550(*puVar26,0);
        puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar26 = &DAT_055c04a0;
        }
      }
    }
    uVar18 = 0;
    do {
      auStack_c0090[0] = (uint)uVar18;
      piVar3 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar18 * 4);
      if (0x38 < auStack_c0090[0]) {
        piVar3 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar3 == *(int *)(puVar26 + 7)) goto LAB_0149f22c;
      uVar21 = 0x39;
      if ((int)auStack_c0090[0] < 0x39) {
        uVar21 = auStack_c0090[0] + 1;
      }
      uVar18 = (ulong)uVar21;
    } while (uVar21 != 0x39);
    auStack_c0090[0] = 0;
LAB_0149f22c:
    if (param_2 == auStack_c0090[0]) goto LAB_0149f23c;
    if ((int)param_2 < 2) {
      return 0;
    }
    bVar7 = false;
    if (0x38 < (int)param_2) {
      return 0;
    }
  }
  puVar8 = PTR_DAT_04bb27c0;
  if (*(int *)(param_4 + 0x20) - *(int *)(param_4 + 0x10) != 1) {
    return 0;
  }
  if (*(int *)(param_4 + 0x24) - *(int *)(param_4 + 0x14) != 1) {
    return 0;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return 0;
  }
  uVar21 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar21 == 0) ||
       (plVar25 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar21 >> 0x11) & 0x7ff8)), plVar25 == (long *)0x0)) ||
      ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar25 + 0x46) != uVar21)) {
    plVar25 = (long *)0x0;
  }
  if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar8;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar21 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_0149f31c;
      uVar21 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0149f31c:
    uVar21 = 0;
  }
  if (plVar25 != (long *)0x0) {
    lVar17 = plVar25[0x2a];
    uVar12 = *(uint *)(plVar25 + 0x49);
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar10 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb7d50);
    puVar8 = PTR_DAT_04bb2720;
    if ((int)lVar17 != 1) {
      return 0;
    }
    if ((uVar10 & uVar21) == 0) {
      return 0;
    }
    if ((uVar12 >> 4 & 1) == 0) {
      return 0;
    }
    lVar19 = 0;
    lVar17 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    do {
      lVar23 = 0x40;
      lVar22 = lVar19;
      do {
        lVar23 = lVar23 + -1;
        *(undefined2 *)((long)auStack_c0090 + lVar22) = 0;
        *(undefined **)((long)alStack_c0088 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0088 + lVar22 + 8) = 0;
        *(undefined2 *)((long)auStack_c0078 + lVar22) = 0;
        *(undefined2 *)((long)auStack_c0060 + lVar22) = 0;
        *(undefined2 *)((long)auStack_c0048 + lVar22) = 0;
        *(undefined2 *)((long)auStack_c0030 + lVar22) = 0;
        *(undefined2 *)((long)auStack_c0018 + lVar22) = 0;
        *(undefined2 *)((long)auStack_c0000 + lVar22) = 0;
        *(undefined2 *)((long)auStack_bffe8 + lVar22) = 0;
        *(undefined **)((long)alStack_c0070 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0070 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_c0058 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0058 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_c0040 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0040 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_c0028 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0028 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_c0010 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_c0010 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_bfff8 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_bfff8 + lVar22 + 8) = 0;
        *(undefined **)((long)alStack_bffe0 + lVar22) = puVar1;
        *(undefined8 *)((long)alStack_bffe0 + lVar22 + 8) = 0;
        lVar22 = lVar22 + 0xc0;
      } while (lVar23 != 0);
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + 0x3000;
    } while (lVar17 != 0x40);
    if (!bVar7) {
      uVar18 = (ulong)param_2;
      if (param_2 == 0) {
        FUN_01a4f4bc(&local_88);
        uVar18 = 0;
        local_88 = PTR_DAT_04bb3140;
      }
      else {
        puVar4 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + uVar18 * 4);
        if (0x38 < param_2) {
          puVar4 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        }
        uStack_7c = *puVar4;
        local_80 = param_2;
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_88 = PTR_DAT_04bb5438;
      }
      local_88 = local_88 + 0x10;
      FUN_01499d00(auStack_c0090,uVar18,&local_88);
LAB_0149f630:
      uVar18 = 0;
      uVar16 = 0;
      do {
        if (uVar18 == 8) {
          uVar21 = *(uint *)(param_4 + 0x10);
          uVar12 = *(uint *)(param_4 + 0x14);
          iVar9 = *(int *)(param_4 + 0x20);
          iVar15 = *(int *)(param_4 + 0x24);
          uVar13 = param_3 & 0xff;
          puVar14 = param_1;
          goto LAB_0149f744;
        }
        local_88 = (undefined *)(uVar18 & 0xffffffff);
        uVar21 = *(uint *)(param_4 + 0x10);
        uVar12 = *(uint *)(param_4 + 0x14);
        iVar9 = *(int *)(param_4 + 0x20);
        iVar15 = *(int *)(param_4 + 0x24);
        switch(local_88) {
        case (undefined *)0x0:
          goto LAB_0149f738;
        case (undefined *)0x1:
          uVar21 = uVar21 + 2;
          iVar9 = iVar9 + 2;
          goto LAB_0149f738;
        case (undefined *)0x2:
          uVar21 = uVar21 + 2;
          iVar9 = iVar9 + 2;
          break;
        case (undefined *)0x3:
          uVar21 = uVar21 + 2;
          uVar12 = uVar12 - 2;
          iVar9 = iVar9 + 2;
          iVar15 = iVar15 + -2;
          break;
        case (undefined *)0x4:
          uVar12 = uVar12 - 2;
          iVar15 = iVar15 + -2;
          break;
        case (undefined *)0x5:
          uVar21 = uVar21 - 2;
          uVar12 = uVar12 - 2;
          iVar9 = iVar9 + -2;
          iVar15 = iVar15 + -2;
          break;
        case (undefined *)0x6:
          uVar21 = uVar21 - 2;
          iVar9 = iVar9 + -2;
          break;
        case (undefined *)0x7:
          uVar21 = uVar21 - 2;
          iVar9 = iVar9 + -2;
LAB_0149f738:
          uVar12 = uVar12 + 2;
          iVar15 = iVar15 + 2;
        }
        uVar13 = 0;
        puVar14 = param_1 + uVar18 * 0x30 + 0x30;
LAB_0149f744:
        *(uint *)(puVar14 + 0x18) = uVar21;
        *(uint *)(puVar14 + 0x1c) = uVar12;
        *(int *)(puVar14 + 0x28) = iVar9;
        *(int *)(puVar14 + 0x2c) = iVar15;
        *puVar14 = 0;
        local_88._0_4_ = 2;
        do {
          if (iVar15 + 1U != uVar12) {
            uVar10 = uVar12;
            uVar27 = uVar21;
            do {
              puVar20 = auStack_c0090 + (ulong)uVar27 * 0xc00;
              if (0x3f < uVar27) {
                puVar20 = auStack_c0090;
              }
              puVar5 = puVar20 + (ulong)uVar10 * 0x30;
              if (0x3f < uVar10) {
                puVar5 = puVar20;
              }
              if (((((uVar13 < 8) && ((int)uVar10 < 0x40)) && ((int)uVar27 < 0x40)) &&
                  (-1 < (int)(uVar10 | uVar27))) &&
                 ((((char)puVar5[uVar13 * 6] != '\0' &&
                   (1 < *(byte *)((long)puVar5 + uVar13 * 0x18 + 1))) ||
                  ((uVar13 < 7 &&
                   ((((char)puVar5[(uVar13 + 1) * 6] != '\0' &&
                     (1 < *(byte *)((long)puVar5 + (uVar13 + 1) * 0x18 + 1))) ||
                    ((uVar13 < 6 &&
                     (((char)puVar5[(uVar13 + 2) * 6] != '\0' &&
                      (1 < *(byte *)((long)puVar5 + (uVar13 + 2) * 0x18 + 1))))))))))))) {
                uVar16 = 1;
                *puVar14 = 1;
                goto LAB_0149f678;
              }
              uVar6 = uVar21;
              if (iVar9 <= (int)uVar27 == 0) {
                uVar6 = uVar27 + 1;
              }
              uVar10 = uVar10 + (iVar9 <= (int)uVar27);
              uVar27 = uVar6;
            } while ((uVar21 != uVar6) || (iVar15 + 1U != uVar10));
          }
          iVar24 = 8;
          if ((int)local_88 < 8) {
            iVar24 = (int)local_88 + 1;
          }
          local_88._0_4_ = iVar24;
        } while (iVar24 != 6);
LAB_0149f678:
        uVar18 = uVar18 + 1;
        if (uVar18 == 9) {
          return uVar16;
        }
      } while( true );
    }
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      return 0;
    }
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if (lVar17 == 0) {
      return 0;
    }
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar26 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar9 = FUN_006bd550(*puVar26,0);
      if (iVar9 != 0x758f7eaf) {
        return 0;
      }
      if (*(long *)puVar8 == 0) {
        return 0;
      }
      lVar17 = *(long *)(*(long *)puVar8 + 0x330);
      if (lVar17 == 0) {
        return 0;
      }
      if (*(int *)(lVar17 + 0x244) == 0) {
        return 0;
      }
      lVar17 = FUN_0149f8c0(plVar25);
      if (lVar17 != 0) {
        lVar19 = 0;
        do {
          lVar23 = 0;
          do {
            lVar22 = lVar17 + lVar23;
            puVar2 = (undefined2 *)((long)puVar20 + lVar23);
            lVar23 = lVar23 + 0xc0;
            *puVar2 = *(undefined2 *)(lVar22 + 0x280);
            *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(lVar22 + 0x290);
            *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(lVar22 + 0x294);
            puVar2[0xc] = *(undefined2 *)(lVar22 + 0x298);
            *(undefined4 *)(puVar2 + 0x14) = *(undefined4 *)(lVar22 + 0x2a8);
            *(undefined4 *)(puVar2 + 0x16) = *(undefined4 *)(lVar22 + 0x2ac);
            puVar2[0x18] = *(undefined2 *)(lVar22 + 0x2b0);
            *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(lVar22 + 0x2c0);
            *(undefined4 *)(puVar2 + 0x22) = *(undefined4 *)(lVar22 + 0x2c4);
            puVar2[0x24] = *(undefined2 *)(lVar22 + 0x2c8);
            *(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(lVar22 + 0x2d8);
            *(undefined4 *)(puVar2 + 0x2e) = *(undefined4 *)(lVar22 + 0x2dc);
            puVar2[0x30] = *(undefined2 *)(lVar22 + 0x2e0);
            *(undefined4 *)(puVar2 + 0x38) = *(undefined4 *)(lVar22 + 0x2f0);
            *(undefined4 *)(puVar2 + 0x3a) = *(undefined4 *)(lVar22 + 0x2f4);
            puVar2[0x3c] = *(undefined2 *)(lVar22 + 0x2f8);
            *(undefined4 *)(puVar2 + 0x44) = *(undefined4 *)(lVar22 + 0x308);
            *(undefined4 *)(puVar2 + 0x46) = *(undefined4 *)(lVar22 + 0x30c);
            puVar2[0x48] = *(undefined2 *)(lVar22 + 0x310);
            *(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)(lVar22 + 800);
            *(undefined4 *)(puVar2 + 0x52) = *(undefined4 *)(lVar22 + 0x324);
            puVar2[0x54] = *(undefined2 *)(lVar22 + 0x328);
            *(undefined4 *)(puVar2 + 0x5c) = *(undefined4 *)(lVar22 + 0x338);
            *(undefined4 *)(puVar2 + 0x5e) = *(undefined4 *)(lVar22 + 0x33c);
          } while (lVar23 != 0x3000);
          lVar19 = lVar19 + 1;
          lVar17 = lVar17 + 0x3000;
          puVar20 = (uint *)((long)puVar20 + 0x3000);
        } while (lVar19 != 0x40);
        goto LAB_0149f630;
      }
    }
  }
  return 0;
}

