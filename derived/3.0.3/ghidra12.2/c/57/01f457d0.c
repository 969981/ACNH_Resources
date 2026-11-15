
/* WARNING: Removing unreachable block (ram,0x01f45974) */
/* WARNING: Removing unreachable block (ram,0x01f45984) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01f457d0(undefined8 ******param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *****pppppuVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 ******local_140;
  undefined8 ******local_138;
  undefined8 *******local_130;
  undefined4 local_128;
  undefined8 **local_120;
  ulong *puStack_118;
  undefined4 local_110;
  ulong local_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 *******local_e8;
  undefined8 ******local_e0;
  undefined8 *local_d8 [3];
  undefined8 local_c0 [3];
  undefined8 local_a8;
  long lStack_a0;
  float local_98;
  float fStack_94;
  float local_90;
  int iStack_8c;
  
  ppppuVar15 = param_1[1][0xd];
  uVar9 = FUN_021f4f90(ppppuVar15 + 0x4f,0,0);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  pppppuVar10 = param_1[1];
  if (pppppuVar10 == (undefined8 *****)0x0) goto LAB_01f458a4;
  uVar8 = *(uint *)(pppppuVar10 + 0xa1);
  if (uVar8 == 0xffffffff) {
    uVar8 = *(uint *)((long)pppppuVar10 + 0x50c);
    if (uVar8 == 0xffffffff) goto LAB_01f458a4;
    pcVar12 = &DAT_05454358 + (ulong)uVar8 * 0x2d8;
    if (0x10 < uVar8) {
      pcVar12 = &DAT_05454358;
    }
    if (*pcVar12 == '\0') goto LAB_01f458a4;
    cVar5 = pcVar12[0x110];
  }
  else {
    puVar11 = &DAT_053fe348 + (ulong)uVar8 * 0xba0;
    if (9 < uVar8) {
      puVar11 = &DAT_053fe348;
    }
    cVar5 = puVar11[0x6d8];
  }
  if (cVar5 != '\0') {
    FUN_01e5e760(param_1[2]);
    param_1[0x15ab] = (undefined8 *****)((ulong)param_1[0x15ab] | 0x1000);
    return 0;
  }
LAB_01f458a4:
  fVar18 = *(float *)(ppppuVar15 + 0x4f);
  fVar19 = *(float *)(ppppuVar15 + 0x50);
  fVar22 = (float)((int)fVar18 / 5) * 5.0 + 5.0;
  fVar21 = (float)((int)fVar18 / 5) * 5.0;
  fVar24 = fVar18 - fVar21;
  fVar25 = (float)((int)fVar19 / 5) * 5.0 + 5.0;
  fVar23 = (float)((int)fVar19 / 5) * 5.0;
  fVar18 = fVar18 - fVar22;
  fVar20 = -fVar24;
  if (0.0 <= fVar24) {
    fVar20 = fVar24;
  }
  fVar24 = -fVar18;
  if (0.0 <= fVar18) {
    fVar24 = fVar18;
  }
  fVar18 = fVar19 - fVar23;
  fVar19 = fVar19 - fVar25;
  if (fVar24 <= fVar20) {
    fVar21 = fVar22;
  }
  fVar20 = -fVar18;
  if (0.0 <= fVar18) {
    fVar20 = fVar18;
  }
  fVar18 = -fVar19;
  if (0.0 <= fVar19) {
    fVar18 = fVar19;
  }
  if (fVar18 <= fVar20) {
    fVar23 = fVar25;
  }
  local_a8 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
  local_110 = 4;
  pppppppuStack_100 = &local_138;
  local_d8[0] = local_c0;
  puStack_118 = &local_108;
  local_130 = &pppppppuStack_100;
  local_c0[0] = 0;
  lStack_a0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_108 = (ulong)&local_f0 & 0xffffffff00000000;
  local_120 = (undefined8 **)&local_f0;
  if ((undefined8 **)&local_f0 != (undefined8 **)0x0) {
    local_120 = local_d8;
  }
  ppuVar6 = local_120;
  _local_f0 = (undefined8 *)CONCAT44((int)((ulong)local_d8 >> 0x20),1);
  local_e0 = &local_138;
  local_e8 = local_130;
  local_f8 = pppppppuStack_100;
  if (local_130 != (undefined8 *******)0x0) {
    local_f8 = &local_e8;
  }
  if (local_120 != (undefined8 **)0x0) {
    local_120 = (undefined8 **)*local_120;
  }
  ppuVar7 = local_120;
  *(undefined4 *)ppuVar6 = 2;
  ppppppuVar13 = (undefined8 ******)(ppuVar6 + 1);
  *ppppppuVar13 = (undefined8 *****)0x0;
  ppuVar6[2] = &local_138;
  *ppppppuVar13 = &local_e8;
  if (&local_e8 != (undefined8 ********)0x0) {
    local_e0 = ppppppuVar13;
  }
  pppppppuVar16 = &local_130;
  if (local_120 != (undefined8 **)0x0) {
    local_120 = (undefined8 **)*local_120;
  }
  *(undefined4 *)ppuVar7 = 3;
  local_138 = (undefined8 ******)(ppuVar7 + 1);
  *local_138 = (undefined8 *****)0x0;
  ppuVar7[2] = &local_138;
  *local_138 = ppppppuVar13;
  if (ppppppuVar13 != (undefined8 ******)0x0) {
    ppuVar6[2] = local_138;
  }
  local_128 = 4;
  local_140 = param_1;
  uVar8 = nn::os::GetSystemTick();
  local_98 = (float)((uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1);
  fStack_94 = (float)(((uint)local_98 ^ (uint)local_98 >> 0x1e) * 0x6c078965 + 2);
  local_90 = (float)(((uint)fStack_94 ^ (uint)fStack_94 >> 0x1e) * 0x6c078965 + 3);
  iStack_8c = ((uint)local_90 ^ (uint)local_90 >> 0x1e) * 0x6c078965 + 4;
  FUN_038aaa70(&local_138,&local_98);
  if (local_130 != &local_138) {
    pppppppuVar14 = local_130 + -1;
    pppppppuVar17 = local_130;
    do {
      puVar4 = &DAT_053a95c0 + (ulong)*(uint *)(pppppppuVar17 + -1) * 2;
      if (3 < *(uint *)(pppppppuVar17 + -1)) {
        puVar4 = &DAT_053a95c0;
      }
      iVar1 = ((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0)) + *(int *)(puVar4 + 1);
      iVar2 = ((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0)) +
              *(int *)((long)puVar4 + 0xc);
      uVar9 = FUN_035aa210(iVar1 + -1,iVar2 + -1,&local_a8);
      if (((((uVar9 & 1) != 0) &&
           (uVar9 = FUN_035aa210(iVar1 + -1,iVar2,&local_a8), (uVar9 & 1) != 0)) &&
          (uVar9 = FUN_035aa210(iVar1,iVar2 + -1,&local_a8), (uVar9 & 1) != 0)) &&
         (uVar9 = FUN_035aa210(iVar1,iVar2,&local_a8), ppppppuVar13 = local_140, (uVar9 & 1) != 0))
      {
        uVar9 = (ulong)((float)*(int *)pppppppuVar14 * 90.0 * 11930465.0);
        fVar21 = (float)uVar9;
        pfVar3 = (float *)(PTR_DAT_04bb2d00 + (uVar9 >> 0x19 & 0x7f) * 0x10);
        fVar23 = (float)((uint)fVar21 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar20 = *pfVar3 + fVar23 * pfVar3[1];
        fVar23 = pfVar3[2] + fVar23 * pfVar3[3];
        fVar18 = fVar20 * 0.0;
        fVar23 = fVar23 + fVar23;
        fVar22 = fVar20 * (fVar20 + fVar20);
        fVar19 = (fVar20 + fVar20) * fVar18;
        fVar25 = fVar18 * (fVar18 + fVar18);
        fVar24 = fVar20 * (fVar18 + fVar18);
        fVar18 = fVar18 * fVar23;
        fVar20 = fVar20 * fVar23;
        local_98 = *(float *)(ppppuVar15 + 0x4f) +
                   (fVar20 + fVar25 + (fVar24 - fVar18) * 0.0 + ((1.0 - fVar22) - fVar25) * 0.0) *
                   10.0;
        fStack_94 = *(float *)((long)ppppuVar15 + 0x27c) +
                    ((fVar19 - fVar18) + ((1.0 - fVar25) - fVar25) * 0.0 + (fVar18 + fVar24) * 0.0)
                    * 10.0;
        local_90 = *(float *)(ppppuVar15 + 0x50) +
                   (((1.0 - fVar25) - fVar22) + (fVar19 + fVar18) * 0.0 + (fVar25 - fVar20) * 0.0) *
                   10.0;
        (*(code *)(*local_140[1][0xd])[0x20])(local_140[1][0xd],&local_98);
        local_98 = fVar21;
        (*(code *)(*ppppppuVar13[1][0xd])[0x2c])(ppppppuVar13[1][0xd],&local_98);
        do {
          ppppppuVar13 = *pppppppuVar16;
          pppppppuVar16 = (undefined8 *******)(ppppppuVar13 + 1);
        } while ((undefined8 *******)ppppppuVar13 != &local_138);
        return 1;
      }
      pppppppuVar17 = (undefined8 *******)pppppppuVar17[1];
      pppppppuVar14 = pppppppuVar17 + -1;
    } while (pppppppuVar14 != &local_140);
  }
  ppppppuVar13 = local_140;
  uVar9 = (*(code *)(*local_140)[0x71])(local_140,&local_98);
  if ((uVar9 & 1) != 0) {
    ppppuVar15 = ppppppuVar13[1][0xd];
    (*(code *)(*ppppuVar15)[0x20])(ppppuVar15,&local_98);
    ppppuVar15 = ppppppuVar13[1][0xd];
    (*(code *)(*ppppuVar15)[0x2c])(ppppuVar15,PTR_DAT_04bb2ce0);
  }
  do {
    ppppppuVar13 = *pppppppuVar16;
    pppppppuVar16 = (undefined8 *******)(ppppppuVar13 + 1);
  } while ((undefined8 *******)ppppppuVar13 != &local_138);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  return 1;
}

