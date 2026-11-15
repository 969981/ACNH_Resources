
/* WARNING: Removing unreachable block (ram,0x01e7cf94) */
/* WARNING: Removing unreachable block (ram,0x01e7cfa4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01e7cd70(long param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_170;
  uint local_16c;
  undefined8 local_168;
  undefined8 *******local_160;
  undefined4 local_158;
  undefined8 **local_150;
  ulong *puStack_148;
  undefined4 local_140;
  ulong local_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 *******local_118;
  undefined8 *****local_110;
  undefined8 *local_108 [3];
  undefined8 local_f0 [3];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  int iStack_6c;
  
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  uVar11 = FUN_021f2ed0(lVar21 + 0x278,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 8);
  if (lVar15 != 0) {
    uVar10 = *(uint *)(lVar15 + 0x508);
    if (uVar10 == 0xffffffff) {
      uVar10 = *(uint *)(lVar15 + 0x50c);
      if (uVar10 != 0xffffffff) {
        pcVar20 = &DAT_05454358 + (ulong)uVar10 * 0x2d8;
        if (0x10 < uVar10) {
          pcVar20 = &DAT_05454358;
        }
        if (*pcVar20 != '\0') {
          cVar4 = pcVar20[0x110];
          goto joined_r0x01e7ce78;
        }
      }
    }
    else {
      puVar19 = &DAT_053fe348 + (ulong)uVar10 * 0xba0;
      if (9 < uVar10) {
        puVar19 = &DAT_053fe348;
      }
      cVar4 = puVar19[0x6d8];
joined_r0x01e7ce78:
      if (cVar4 != '\0') {
        FUN_01e5e100(*(undefined8 *)(param_1 + 0x10));
        *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
        if (*(long *)(param_1 + 8) == 0) {
          return;
        }
        uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        if (uVar10 == 0xffffffff) {
          return;
        }
        puVar19 = &DAT_053fe348 + (ulong)uVar10 * 0xba0;
        if (9 < uVar10) {
          puVar19 = &DAT_053fe348;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x630) = *(undefined4 *)(puVar19 + 0x8a0);
        *(undefined *)(*(long *)(param_1 + 0x10) + 0x634) = puVar19[0x8a4];
        return;
      }
    }
  }
  fVar24 = *(float *)(lVar21 + 0x278);
  fVar25 = *(float *)(lVar21 + 0x280);
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0x200000000;
  local_a8 = local_b8;
  uStack_a0 = 2;
  local_98 = local_b8;
  uStack_90 = 0xfffffffe00000000;
  local_88 = local_b8;
  uStack_80 = 0xfffffffe;
  local_168 = (undefined8 ******)((ulong)local_168 & 0xffffffff00000000);
  fVar28 = (float)((int)fVar24 / 5) * 5.0;
  fVar27 = (float)((int)fVar24 / 5) * 5.0 + 5.0;
  fVar31 = fVar24 - fVar28;
  fVar24 = fVar24 - fVar27;
  fVar26 = -fVar31;
  if (0.0 <= fVar31) {
    fVar26 = fVar31;
  }
  fVar30 = (float)((int)fVar25 / 5) * 5.0;
  fVar29 = (float)((int)fVar25 / 5) * 5.0 + 5.0;
  fVar31 = -fVar24;
  if (0.0 <= fVar24) {
    fVar31 = fVar24;
  }
  if (fVar31 <= fVar26) {
    fVar28 = fVar27;
  }
  fVar24 = fVar25 - fVar30;
  fVar25 = fVar25 - fVar29;
  fVar26 = -fVar24;
  if (0.0 <= fVar24) {
    fVar26 = fVar24;
  }
  fVar24 = -fVar25;
  if (0.0 <= fVar25) {
    fVar24 = fVar25;
  }
  if (fVar24 <= fVar26) {
    fVar30 = fVar29;
  }
  uVar11 = (ulong)(uint)((float)(int)fVar30 / 5.0);
  local_170 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  iVar5 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
  local_cc = 0;
  local_c8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_c0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  if ((lVar15 == 0) || (uVar10 = *(uint *)(lVar15 + 0x508), uVar10 == 0xffffffff)) {
    local_16c = 0;
  }
  else {
    puVar19 = &DAT_053fe348 + (ulong)uVar10 * 0xba0;
    if (9 < uVar10) {
      puVar19 = &DAT_053fe348;
    }
    local_cc = *(uint *)(puVar19 + 0x8a0);
    local_16c = (uint)(byte)puVar19[0x8a4];
  }
  local_d0 = *(int *)(lVar21 + 0x2b4) + 0x20000000U >> 0x1e;
  local_d4 = *(int *)(lVar21 + 0x2b4) + 0xa0000000U >> 0x1e;
  ppuVar3 = &local_b8 + (ulong)local_d0 * 2;
  if (3 < local_d0) {
    ppuVar3 = &local_b8;
  }
  iVar1 = *(int *)(ppuVar3 + 1) + local_170;
  iVar2 = *(int *)((long)ppuVar3 + 0xc) + iVar5;
  uVar12 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_c8);
  if (((((uVar12 & 1) == 0) ||
       (uVar12 = FUN_035aa210(iVar1 + -1,iVar2,&local_c8), (uVar12 & 1) == 0)) ||
      (uVar12 = FUN_035aa210(iVar1,iVar2 + -1,&local_c8), (uVar12 & 1) == 0)) ||
     (uVar12 = FUN_035aa210(iVar1,iVar2,&local_c8), (uVar12 & 1) == 0)) {
    if ((local_cc != local_d0) &&
       (uVar10 = local_16c - (local_16c >> 1 & 0x55555555),
       uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
       uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
       (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0)) {
      ppuVar3 = &local_b8 + (ulong)local_cc * 2;
      if (3 < local_cc) {
        ppuVar3 = &local_b8;
      }
      iVar1 = *(int *)(ppuVar3 + 1) + local_170;
      iVar2 = *(int *)((long)ppuVar3 + 0xc) + iVar5;
      uVar12 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_c8);
      if ((((uVar12 & 1) != 0) &&
          (uVar12 = FUN_035aa210(iVar1 + -1,iVar2,&local_c8), (uVar12 & 1) != 0)) &&
         (uVar12 = FUN_035aa210(iVar1,iVar2 + -1,&local_c8), (uVar12 & 1) != 0)) {
        uVar12 = FUN_035aa210(iVar1,iVar2,&local_c8);
        fVar28 = (float)uVar11;
        if ((uVar12 & 1) != 0) {
          plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
          fVar26 = (float)FUN_006f0960(local_cc);
          local_168._0_4_ = *(float *)(lVar21 + 0x278) + fVar26 * 10.0;
          local_168._4_4_ = *(float *)(lVar21 + 0x27c) + fVar30 * 10.0;
          local_160 = (undefined8 *******)
                      CONCAT44(local_160._4_4_,*(float *)(lVar21 + 0x280) + fVar28 * 10.0);
          (**(code **)(*plVar13 + 0x100))(plVar13,&local_168);
          plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
          local_168 = (undefined8 ******)
                      CONCAT44(local_168._4_4_,(int)(long)((float)(int)local_cc * 90.0 * 11930465.0)
                              );
          pcVar16 = *(code **)(*plVar13 + 0x160);
          puVar14 = &local_168;
          goto LAB_01e7d708;
        }
      }
    }
    pppppppuStack_130 = (undefined8 *******)&local_168;
    local_f0[0] = 0;
    puStack_148 = &local_138;
    local_140 = 4;
    local_160 = &pppppppuStack_130;
    local_108[0] = local_f0;
    local_138 = (ulong)&local_120 & 0xffffffff00000000;
    local_150 = (undefined8 **)&local_120;
    if ((undefined8 **)&local_120 != (undefined8 **)0x0) {
      local_150 = local_108;
    }
    ppuVar8 = local_150;
    _local_120 = (undefined8 *)CONCAT44((int)((ulong)local_108 >> 0x20),1);
    local_110 = (undefined8 *****)&local_168;
    local_118 = local_160;
    local_128 = pppppppuStack_130;
    if (local_160 != (undefined8 *******)0x0) {
      local_128 = &local_118;
    }
    if (local_150 != (undefined8 **)0x0) {
      local_150 = (undefined8 **)*local_150;
    }
    ppuVar9 = local_150;
    *(undefined4 *)ppuVar8 = 2;
    pppppuVar18 = (undefined8 *****)(ppuVar8 + 1);
    *pppppuVar18 = (undefined8 ****)0x0;
    ppuVar8[2] = &local_168;
    *pppppuVar18 = &local_118;
    if (&local_118 != (undefined8 ********)0x0) {
      local_110 = pppppuVar18;
    }
    if (local_150 != (undefined8 **)0x0) {
      local_150 = (undefined8 **)*local_150;
    }
    *(undefined4 *)ppuVar9 = 3;
    local_168 = (undefined8 ******)(ppuVar9 + 1);
    *local_168 = (undefined8 *****)0x0;
    ppuVar9[2] = &local_168;
    *local_168 = pppppuVar18;
    if (pppppuVar18 != (undefined8 *****)0x0) {
      ppuVar8[2] = local_168;
    }
    local_158 = 4;
    pppppppuVar23 = &local_160;
    uVar10 = nn::os::GetSystemTick();
    local_78 = (float)((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1);
    fStack_74 = (float)(((uint)local_78 ^ (uint)local_78 >> 0x1e) * 0x6c078965 + 2);
    local_70 = (float)(((uint)fStack_74 ^ (uint)fStack_74 >> 0x1e) * 0x6c078965 + 3);
    iStack_6c = ((uint)local_70 ^ (uint)local_70 >> 0x1e) * 0x6c078965 + 4;
    FUN_038aaa70(&local_168,&local_78);
    bVar7 = true;
    if (local_160 != (undefined8 *******)&local_168) {
      pppppppuVar22 = local_160 + -1;
      pppppppuVar17 = local_160;
      do {
        uVar10 = *(uint *)(pppppppuVar17 + -1);
        if ((uVar10 != local_d0) && (uVar10 != local_d4)) {
          if (uVar10 == local_cc) {
            if (local_16c == 0) goto LAB_01e7d550;
          }
          else if ((local_16c == 0) || ((1 << (ulong)(uVar10 & 0x1f) & local_16c) != 0)) {
LAB_01e7d550:
            ppuVar3 = &local_b8 + (ulong)uVar10 * 2;
            if (3 < uVar10) {
              ppuVar3 = &local_b8;
            }
            iVar1 = *(int *)(ppuVar3 + 1) + local_170;
            iVar2 = *(int *)((long)ppuVar3 + 0xc) + iVar5;
            uVar12 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_c8);
            if ((((uVar12 & 1) != 0) &&
                (uVar12 = FUN_035aa210(iVar1 + -1,iVar2,&local_c8), (uVar12 & 1) != 0)) &&
               (uVar12 = FUN_035aa210(iVar1,iVar2 + -1,&local_c8), (uVar12 & 1) != 0)) {
              uVar12 = FUN_035aa210(iVar1,iVar2,&local_c8);
              fVar28 = (float)uVar11;
              if ((uVar12 & 1) != 0) {
                iVar5 = *(int *)pppppppuVar22;
                plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
                fVar26 = (float)FUN_006f0960(iVar5);
                local_78 = *(float *)(lVar21 + 0x278) + fVar26 * 10.0;
                fStack_74 = *(float *)(lVar21 + 0x27c) + fVar30 * 10.0;
                local_70 = *(float *)(lVar21 + 0x280) + fVar28 * 10.0;
                (**(code **)(*plVar13 + 0x100))(plVar13,&local_78);
                plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
                local_78 = (float)(long)((float)iVar5 * 90.0 * 11930465.0);
                (**(code **)(*plVar13 + 0x160))(plVar13,&local_78);
                bVar7 = false;
                goto LAB_01e7d680;
              }
            }
          }
        }
        pppppppuVar17 = (undefined8 *******)pppppppuVar17[1];
        pppppppuVar22 = pppppppuVar17 + -1;
      } while (pppppppuVar22 != (undefined8 *******)&local_170);
      bVar7 = true;
    }
LAB_01e7d680:
    do {
      pppppppuVar17 = (undefined8 *******)*pppppppuVar23;
      pppppppuVar23 = pppppppuVar17 + 1;
    } while (pppppppuVar17 != (undefined8 *******)&local_168);
    bVar6 = false;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
      bVar6 = bVar7;
    }
    if (!bVar6) {
      return;
    }
    local_160 = (undefined8 *******)((ulong)local_160 & 0xffffffff00000000);
    local_168 = (undefined8 ******)0x0;
    uVar11 = FUN_021d9480(&local_168,*(long *)(param_1 + 8) + 0x508,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    (**(code **)(*plVar13 + 0x100))(plVar13,&local_168);
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    pcVar16 = *(code **)(*plVar13 + 0x160);
    puVar14 = (undefined8 *)PTR_DAT_04bb2ce0;
  }
  else {
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    uVar11 = (ulong)((float)(int)local_d0 * 90.0 * 11930465.0);
    uVar12 = uVar11 >> 0x19 & 0x7f;
    fVar28 = (float)((uint)uVar11 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar26 = (float)(&DAT_04199798)[uVar12 * 4] + fVar28 * (float)(&DAT_0419979c)[uVar12 * 4];
    fVar28 = (float)(&DAT_041997a0)[uVar12 * 4] + fVar28 * (float)(&DAT_041997a4)[uVar12 * 4];
    fVar24 = fVar26 * 0.0;
    fVar28 = fVar28 + fVar28;
    fVar27 = fVar26 * (fVar26 + fVar26);
    fVar25 = (fVar26 + fVar26) * fVar24;
    fVar30 = fVar24 * (fVar24 + fVar24);
    fVar31 = fVar26 * (fVar24 + fVar24);
    fVar24 = fVar24 * fVar28;
    fVar26 = fVar26 * fVar28;
    local_168 = (undefined8 ******)
                CONCAT44(*(float *)(lVar21 + 0x27c) +
                         ((fVar25 - fVar24) +
                         ((1.0 - fVar30) - fVar30) * 0.0 + (fVar24 + fVar31) * 0.0) * 10.0,
                         *(float *)(lVar21 + 0x278) +
                         (fVar26 + fVar30 +
                         (fVar31 - fVar24) * 0.0 + ((1.0 - fVar27) - fVar30) * 0.0) * 10.0);
    local_160 = (undefined8 *******)
                CONCAT44(local_160._4_4_,
                         *(float *)(lVar21 + 0x280) +
                         (((1.0 - fVar30) - fVar27) +
                         (fVar25 + fVar24) * 0.0 + (fVar30 - fVar26) * 0.0) * 10.0);
    pcVar16 = *(code **)(*plVar13 + 0x100);
    puVar14 = &local_168;
  }
LAB_01e7d708:
  (*pcVar16)(plVar13,puVar14);
  return;
}

