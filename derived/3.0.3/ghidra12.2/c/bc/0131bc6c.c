
/* WARNING: Removing unreachable block (ram,0x0131bdbc) */
/* WARNING: Removing unreachable block (ram,0x0131bea8) */

undefined8 FUN_0131bc6c(long param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  ushort *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_204;
  float fStack_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined *puStack_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc [127];
  undefined1 local_15d;
  undefined4 local_158;
  char local_154;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined *local_108;
  undefined1 *puStack_100;
  int local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  
  puVar10 = PTR_DAT_04bb2d88;
  sVar4 = *(short *)(param_1 + 4);
  sVar5 = *(short *)(param_1 + 8);
  iVar8 = (int)sVar4;
  if (sVar5 <= sVar4) {
    iVar8 = (int)sVar5;
  }
  iVar6 = (int)sVar4;
  if (sVar4 <= sVar5) {
    iVar6 = (int)sVar5;
  }
  iVar15 = (int)*(short *)(param_1 + 6);
  iVar17 = (int)*(short *)(param_1 + 10);
  iVar1 = iVar15;
  if (*(short *)(param_1 + 10) <= *(short *)(param_1 + 6)) {
    iVar1 = iVar17;
  }
  fVar23 = (float)iVar6 * 10.0 + 10.0;
  fVar22 = *param_2;
  bVar11 = false;
  if (((float)iVar8 * 10.0 <= fVar22) && (bVar11 = false, !NAN(fVar22) && !NAN(fVar23))) {
    bVar11 = fVar22 < fVar23;
  }
  if (!bVar11) {
    return 7;
  }
  if (iVar15 <= iVar17) {
    iVar15 = iVar17;
  }
  fVar24 = (float)iVar15 * 10.0 + 10.0;
  fVar23 = param_2[2];
  bVar11 = false;
  if (((float)iVar1 * 10.0 <= fVar23) && (bVar11 = false, !NAN(fVar23) && !NAN(fVar24))) {
    bVar11 = fVar23 < fVar24;
  }
  if (!bVar11) {
    return 7;
  }
  iVar6 = (int)((float)(int)fVar22 / 10.0) - (uint)(fVar22 < 0.0);
  uVar7 = iVar6 - iVar8;
  iVar8 = (int)((float)(int)fVar23 / 10.0) - (uint)(fVar23 < 0.0);
  uVar9 = iVar8 - iVar1;
  local_55 = 0;
  local_d4[0] = 0;
  local_d8 = 0x80;
  puVar21 = (ushort *)(param_1 + (ulong)(uVar9 * 3 + uVar7) * 0xe + 0xc);
  if (2 < uVar9 || 2 < uVar7) {
    puVar21 = (ushort *)PTR_DAT_04bbc2f8;
  }
  local_e0 = local_d4;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  puVar16 = puVar21 + 3;
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  uVar9 = (uint)*puVar16 - (uint)*(ushort *)(lVar14 + 0x408);
  uVar7 = *(uint *)(lVar14 + 1000);
  if (((uVar9 < uVar7) &&
      (puVar19 = *(uint **)(*(long *)(lVar14 + 0x3f0) + (long)(int)uVar9 * 8),
      puVar19 != (uint *)0x0)) &&
     (uVar18 = *puVar19, uVar18 != 0 && puVar19 != (uint *)(ulong)uVar18)) {
    puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
    if (((*puVar20 == 0) || (uVar18 = puVar20[1], uVar18 == 0)) || ((ulong)(ushort)puVar20[2] == 0))
    goto LAB_0131be6c;
    lVar12 = 0xc;
    if (*(char *)((long)puVar20 + 10) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
    if (lVar12 == 0) goto LAB_0131be6c;
    uVar2 = 0;
    if ((ulong)uVar18 != 0) {
      uVar2 = (uint)((ulong)((long)puVar19 - lVar12) / (ulong)uVar18);
    }
    if (*puVar20 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bbbe48 <= uVar2) ||
       (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar2 * 2),
       uVar18 = (uint)uVar3, 4 < uVar3)) goto LAB_0131be6c;
  }
  else {
LAB_0131be6c:
    uVar18 = 0;
  }
  local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,uVar18);
  if (uVar18 == 0) {
    local_1f8 = (undefined *)((ulong)local_1f8._4_4_ << 0x20);
    uVar9 = (uint)*puVar21 - (uint)*(ushort *)(lVar14 + 0x408);
    if (uVar7 <= uVar9) goto LAB_0131bf0c;
    lVar14 = *(long *)(*(long *)(lVar14 + 0x3f0) + (long)(int)uVar9 * 8);
  }
  else {
    puVar21 = puVar16;
    if (uVar7 <= uVar9) goto LAB_0131bf0c;
    lVar14 = *(long *)(*(long *)(lVar14 + 0x3f0) + (long)(int)uVar9 * 8);
  }
  if (lVar14 != 0) {
    lVar12 = FUN_012763b0(lVar14,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
    lVar14 = *(long *)PTR_PTR_04bbc340;
    if (lVar12 != 0) {
      lVar14 = lVar12;
    }
    FUN_038d1270(&local_e8,"%s_%d",lVar14,puVar21[1]);
  }
LAB_0131bf0c:
  local_f4 = 0;
  local_f0 = 0;
  local_f8 = (uint)(byte)puVar21[2] << 0x1e;
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_1e0 = 0x80;
  local_1e8 = local_1dc;
  local_15d = 0;
  puStack_100 = local_e0;
  puStack_1f0 = puVar10 + 0x10;
  local_1dc[0] = 0;
  local_158 = 0;
  local_1f8 = PTR_DAT_04bb5d38 + 0x10;
  local_154 = '\0';
  local_150 = PTR_DAT_04bb2010 + 0x10;
  uStack_148 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_10c = 0;
  puStack_138 = PTR_DAT_04bbc1a0 + 0x10;
  local_140 = 0;
  local_130 = local_150;
  local_120 = local_150;
  FUN_009893c0(&local_1f8,&local_108);
  if (local_154 == '\0') {
    return 7;
  }
  fStack_200 = param_2[1];
  local_204 = *param_2 - (float)iVar6 * 10.0;
  local_1fc = param_2[2] - (float)iVar8 * 10.0;
  uVar13 = FUN_00989664(&local_1f8,&local_204);
  return uVar13;
}

