
/* WARNING: Removing unreachable block (ram,0x01e7d94c) */
/* WARNING: Removing unreachable block (ram,0x01e7d95c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01e7d730(long param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  undefined **ppuVar5;
  char cVar6;
  bool bVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  code *pcVar18;
  undefined8 ******ppppppuVar19;
  char *pcVar20;
  undefined8 *****pppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  long lVar24;
  uint uVar25;
  undefined8 *******pppppppuVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_178;
  int local_174;
  undefined8 local_170;
  undefined8 *******local_168;
  undefined4 local_160;
  undefined8 **local_158;
  ulong *puStack_150;
  undefined4 local_148;
  ulong local_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 *******local_120;
  undefined8 *****local_118;
  undefined8 *local_110 [3];
  undefined8 local_f8 [3];
  uint local_dc;
  undefined8 local_d8;
  long lStack_d0;
  undefined *local_c8 [5];
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_80;
  int iStack_7c;
  
  uVar25 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  lVar24 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  puVar14 = &DAT_053fe348 + (ulong)uVar25 * 0xba0;
  if (9 < uVar25) {
    puVar14 = &DAT_053fe348;
  }
  uVar11 = FUN_021f4f90(lVar24 + 0x278,0,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 8);
  if (lVar15 == 0) goto LAB_01e7d834;
  uVar10 = *(uint *)(lVar15 + 0x508);
  if (uVar10 == 0xffffffff) {
    uVar10 = *(uint *)(lVar15 + 0x50c);
    if (uVar10 == 0xffffffff) goto LAB_01e7d834;
    pcVar20 = &DAT_05454358 + (ulong)uVar10 * 0x2d8;
    if (0x10 < uVar10) {
      pcVar20 = &DAT_05454358;
    }
    if (*pcVar20 == '\0') goto LAB_01e7d834;
    cVar6 = pcVar20[0x110];
  }
  else {
    puVar16 = &DAT_053fe348 + (ulong)uVar10 * 0xba0;
    if (9 < uVar10) {
      puVar16 = &DAT_053fe348;
    }
    cVar6 = puVar16[0x6d8];
  }
  if (cVar6 != '\0') {
    FUN_01e5e760(*(undefined8 *)(param_1 + 0x10));
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
    if (uVar25 == 0xffffffff) {
      return;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x630) = *(undefined4 *)(puVar14 + 0x8a0);
    *(undefined *)(*(long *)(param_1 + 0x10) + 0x634) = puVar14[0x8a4];
    return;
  }
LAB_01e7d834:
  fVar27 = *(float *)(lVar24 + 0x278);
  fVar28 = *(float *)(lVar24 + 0x280);
  local_c8[0] = PTR_DAT_04bb2010 + 0x10;
  local_c8[1] = (undefined *)0x200000000;
  local_c8[2] = local_c8[0];
  local_c8[3] = (undefined *)0x2;
  local_c8[4] = local_c8[0];
  uStack_a0 = 0xfffffffe00000000;
  local_98 = local_c8[0];
  uStack_90 = 0xfffffffe;
  local_170 = (undefined8 ******)((ulong)local_170 & 0xffffffff00000000);
  fVar31 = (float)((int)fVar27 / 5) * 5.0;
  fVar30 = (float)((int)fVar27 / 5) * 5.0 + 5.0;
  fVar34 = fVar27 - fVar31;
  fVar27 = fVar27 - fVar30;
  fVar29 = -fVar34;
  if (0.0 <= fVar34) {
    fVar29 = fVar34;
  }
  fVar33 = (float)((int)fVar28 / 5) * 5.0;
  fVar32 = (float)((int)fVar28 / 5) * 5.0 + 5.0;
  fVar34 = -fVar27;
  if (0.0 <= fVar27) {
    fVar34 = fVar27;
  }
  if (fVar34 <= fVar29) {
    fVar31 = fVar30;
  }
  fVar27 = fVar28 - fVar33;
  fVar28 = fVar28 - fVar32;
  fVar29 = -fVar27;
  if (0.0 <= fVar27) {
    fVar29 = fVar27;
  }
  fVar27 = -fVar28;
  if (0.0 <= fVar28) {
    fVar27 = fVar28;
  }
  if (fVar27 <= fVar29) {
    fVar33 = fVar32;
  }
  local_174 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
  local_178 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  local_dc = 0;
  local_d8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_d0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  if (uVar25 == 0xffffffff) {
    uVar25 = 0;
  }
  else {
    local_dc = *(uint *)(puVar14 + 0x8a0);
    uVar25 = (uint)(byte)puVar14[0x8a4];
  }
  ppuVar5 = local_c8 + (ulong)local_dc * 2;
  if (3 < local_dc) {
    ppuVar5 = local_c8;
  }
  iVar1 = *(int *)(ppuVar5 + 1) + local_174;
  iVar2 = *(int *)((long)ppuVar5 + 0xc) + local_178;
  uVar11 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_d8);
  if (((((uVar11 & 1) == 0) ||
       (uVar11 = FUN_035aa210(iVar1 + -1,iVar2,&local_d8), (uVar11 & 1) == 0)) ||
      (uVar11 = FUN_035aa210(iVar1,iVar2 + -1,&local_d8), (uVar11 & 1) == 0)) ||
     (uVar11 = FUN_035aa210(iVar1,iVar2,&local_d8), (uVar11 & 1) == 0)) {
    pppppppuStack_138 = (undefined8 *******)&local_170;
    local_f8[0] = 0;
    puStack_150 = &local_140;
    local_148 = 4;
    local_168 = &pppppppuStack_138;
    local_110[0] = local_f8;
    local_140 = (ulong)&local_128 & 0xffffffff00000000;
    local_158 = (undefined8 **)&local_128;
    if ((undefined8 **)&local_128 != (undefined8 **)0x0) {
      local_158 = local_110;
    }
    ppuVar8 = local_158;
    _local_128 = (undefined8 *)CONCAT44((int)((ulong)local_110 >> 0x20),1);
    local_118 = (undefined8 *****)&local_170;
    local_120 = local_168;
    local_130 = pppppppuStack_138;
    if (local_168 != (undefined8 *******)0x0) {
      local_130 = &local_120;
    }
    if (local_158 != (undefined8 **)0x0) {
      local_158 = (undefined8 **)*local_158;
    }
    ppuVar9 = local_158;
    *(undefined4 *)ppuVar8 = 2;
    pppppuVar21 = (undefined8 *****)(ppuVar8 + 1);
    *pppppuVar21 = (undefined8 ****)0x0;
    ppuVar8[2] = &local_170;
    *pppppuVar21 = &local_120;
    if (&local_120 != (undefined8 ********)0x0) {
      local_118 = pppppuVar21;
    }
    if (local_158 != (undefined8 **)0x0) {
      local_158 = (undefined8 **)*local_158;
    }
    *(undefined4 *)ppuVar9 = 3;
    local_170 = (undefined8 ******)(ppuVar9 + 1);
    *local_170 = (undefined8 *****)0x0;
    ppuVar9[2] = &local_170;
    *local_170 = pppppuVar21;
    if (pppppuVar21 != (undefined8 *****)0x0) {
      ppuVar8[2] = local_170;
    }
    local_160 = 4;
    pppppppuVar26 = &local_168;
    uVar10 = nn::os::GetSystemTick();
    local_88 = (float)((uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1);
    fStack_84 = (float)(((uint)local_88 ^ (uint)local_88 >> 0x1e) * 0x6c078965 + 2);
    local_80 = (float)(((uint)fStack_84 ^ (uint)fStack_84 >> 0x1e) * 0x6c078965 + 3);
    iStack_7c = ((uint)local_80 ^ (uint)local_80 >> 0x1e) * 0x6c078965 + 4;
    FUN_038aaa70(&local_170,&local_88);
    bVar7 = true;
    if (local_168 != (undefined8 *******)&local_170) {
      pppppppuVar22 = local_168 + -1;
      pppppppuVar23 = local_168;
      do {
        uVar10 = *(uint *)(pppppppuVar23 + -1);
        if (uVar10 == local_dc) {
          if (uVar25 == 0) goto LAB_01e7dd7c;
        }
        else if ((uVar25 == 0) || ((1 << (ulong)(uVar10 & 0x1f) & uVar25) != 0)) {
LAB_01e7dd7c:
          ppuVar5 = local_c8 + (ulong)uVar10 * 2;
          if (3 < uVar10) {
            ppuVar5 = local_c8;
          }
          iVar1 = *(int *)(ppuVar5 + 1) + local_174;
          iVar2 = *(int *)((long)ppuVar5 + 0xc) + local_178;
          uVar11 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_d8);
          if ((((uVar11 & 1) != 0) &&
              (uVar11 = FUN_035aa210(iVar1 + -1,iVar2,&local_d8), (uVar11 & 1) != 0)) &&
             ((uVar11 = FUN_035aa210(iVar1,iVar2 + -1,&local_d8), (uVar11 & 1) != 0 &&
              (uVar11 = FUN_035aa210(iVar1,iVar2,&local_d8), (uVar11 & 1) != 0)))) {
            plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
            uVar11 = (ulong)((float)*(int *)pppppppuVar22 * 90.0 * 11930465.0);
            fVar31 = (float)uVar11;
            pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar11 >> 0x19 & 0x7f) * 0x10);
            fVar29 = (float)((uint)fVar31 >> 1 & 0xffffff) * 5.9604645e-08;
            fVar27 = *pfVar3 + fVar29 * pfVar3[1];
            fVar29 = pfVar3[2] + fVar29 * pfVar3[3];
            fVar28 = fVar27 * 0.0;
            fVar29 = fVar29 + fVar29;
            fVar34 = fVar27 * (fVar27 + fVar27);
            fVar30 = (fVar27 + fVar27) * fVar28;
            fVar32 = fVar28 * (fVar28 + fVar28);
            fVar33 = fVar27 * (fVar28 + fVar28);
            fVar28 = fVar28 * fVar29;
            fVar27 = fVar27 * fVar29;
            local_88 = *(float *)(lVar24 + 0x278) +
                       (fVar27 + fVar32 + (fVar33 - fVar28) * 0.0 + ((1.0 - fVar34) - fVar32) * 0.0)
                       * 10.0;
            fStack_84 = *(float *)(lVar24 + 0x27c) +
                        ((fVar30 - fVar28) +
                        ((1.0 - fVar32) - fVar32) * 0.0 + (fVar28 + fVar33) * 0.0) * 10.0;
            local_80 = *(float *)(lVar24 + 0x280) +
                       (((1.0 - fVar32) - fVar34) +
                       (fVar30 + fVar28) * 0.0 + (fVar32 - fVar27) * 0.0) * 10.0;
            (**(code **)(*plVar12 + 0x100))(plVar12,&local_88);
            plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
            local_88 = fVar31;
            (**(code **)(*plVar12 + 0x160))(plVar12,&local_88);
            bVar7 = false;
            goto LAB_01e7df50;
          }
        }
        pppppppuVar23 = (undefined8 *******)pppppppuVar23[1];
        pppppppuVar22 = pppppppuVar23 + -1;
      } while (pppppppuVar22 != (undefined8 *******)&local_178);
      bVar7 = true;
    }
LAB_01e7df50:
    do {
      ppppppuVar19 = *pppppppuVar26;
      pppppppuVar26 = (undefined8 *******)(ppppppuVar19 + 1);
    } while (ppppppuVar19 != (undefined8 ******)&local_170);
    bVar4 = false;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
      bVar4 = bVar7;
    }
    if (!bVar4) {
      return;
    }
    local_168 = (undefined8 *******)((ulong)local_168 & 0xffffffff00000000);
    local_170 = (undefined8 ******)0x0;
    uVar11 = FUN_021d9480(&local_170,*(long *)(param_1 + 8) + 0x508,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    (**(code **)(*plVar12 + 0x100))(plVar12,&local_170);
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    pcVar18 = *(code **)(*plVar12 + 0x160);
    puVar13 = (undefined8 *)PTR_DAT_04bb2ce0;
  }
  else {
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    uVar11 = (ulong)((float)(int)local_dc * 90.0 * 11930465.0);
    uVar17 = uVar11 >> 0x19 & 0x7f;
    fVar31 = (float)((uint)uVar11 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar29 = (float)(&DAT_04199798)[uVar17 * 4] + fVar31 * (float)(&DAT_0419979c)[uVar17 * 4];
    fVar31 = (float)(&DAT_041997a0)[uVar17 * 4] + fVar31 * (float)(&DAT_041997a4)[uVar17 * 4];
    fVar27 = fVar29 * 0.0;
    fVar31 = fVar31 + fVar31;
    fVar30 = fVar29 * (fVar29 + fVar29);
    fVar28 = (fVar29 + fVar29) * fVar27;
    fVar33 = fVar27 * (fVar27 + fVar27);
    fVar34 = fVar29 * (fVar27 + fVar27);
    fVar27 = fVar27 * fVar31;
    fVar29 = fVar29 * fVar31;
    local_170._0_4_ =
         *(float *)(lVar24 + 0x278) +
         (fVar29 + fVar33 + (fVar34 - fVar27) * 0.0 + ((1.0 - fVar30) - fVar33) * 0.0) * 10.0;
    local_170._4_4_ =
         *(float *)(lVar24 + 0x27c) +
         ((fVar28 - fVar27) + ((1.0 - fVar33) - fVar33) * 0.0 + (fVar27 + fVar34) * 0.0) * 10.0;
    local_168 = (undefined8 *******)
                CONCAT44(local_168._4_4_,
                         *(float *)(lVar24 + 0x280) +
                         (((1.0 - fVar33) - fVar30) +
                         (fVar28 + fVar27) * 0.0 + (fVar33 - fVar29) * 0.0) * 10.0);
    (**(code **)(*plVar12 + 0x100))(plVar12,&local_170);
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x68);
    local_170 = (undefined8 ******)
                CONCAT44(local_170._4_4_,(int)(long)((float)(int)local_dc * 90.0 * 11930465.0));
    pcVar18 = *(code **)(*plVar12 + 0x160);
    puVar13 = &local_170;
  }
  (*pcVar18)(plVar12,puVar13);
  return;
}

