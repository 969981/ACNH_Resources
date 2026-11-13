
undefined8 FUN_01439810(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  uStack_4c = *(undefined4 *)(param_1 + 0x2cc);
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *(undefined4 *)(param_1 + 0x2c8);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) {
        local_48 = lVar13;
      }
    }
  }
  local_60 = 0;
  FUN_01afb1a0(&local_58,auStack_68);
  lVar13 = *(long *)(param_1 + 0x2e8);
  local_80 = 0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_80 = *(undefined8 *)(param_1 + 0x2c8);
  local_70 = *(undefined4 *)(lVar13 + 0x2c8);
  uStack_6c = *(undefined4 *)(lVar13 + 0x2cc);
  uVar6 = FUN_01ae98d0(&local_58);
  iVar3 = (int)local_60;
  iVar7 = local_60._4_4_;
  lVar13 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x68);
  bVar5 = (uVar6 & 0x80000001) != 1;
  iVar8 = local_60._4_4_;
  if (bVar5) {
    iVar8 = (int)local_60;
  }
  iVar1 = (int)local_60;
  if (bVar5) {
    iVar1 = local_60._4_4_;
  }
  fVar15 = *(float *)(lVar13 + 0x278) - ((float)iVar8 * 0.5 * 5.0 + -2.5);
  fVar16 = *(float *)(lVar13 + 0x280) - ((float)iVar1 * 0.5 * 5.0 + -2.5);
  iVar12 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar14 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  uVar6 = FUN_01ae98d0(&local_58);
  iVar1 = iVar12 + -1;
  iVar2 = iVar14 + -1;
  iVar8 = iVar3;
  if ((uVar6 & 0x80000001) != 1) {
    iVar8 = iVar7;
    iVar7 = iVar3;
  }
  iVar7 = iVar1 + iVar7;
  iVar8 = iVar2 + iVar8;
  uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x68) + 0x2b4);
  switch(uVar6 + 0x20000000 >> 0x1e) {
  case 0:
  case 2:
    iVar3 = iVar7;
    if (iVar7 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar7 = iVar3 + 1;
    if (iVar8 <= iVar14) {
      iVar8 = iVar14;
    }
    if (iVar7 <= iVar1) {
      iVar1 = iVar3 + 1;
    }
    iVar12 = iVar1;
    break;
  case 1:
  case 3:
    if (iVar7 <= iVar12) {
      iVar7 = iVar12;
    }
    iVar3 = iVar8;
    if (iVar8 <= iVar2) {
      iVar3 = iVar2;
    }
    iVar8 = iVar3 + 1;
    if (iVar8 <= iVar2) {
      iVar2 = iVar3 + 1;
    }
    iVar14 = iVar2;
  }
  uVar9 = (ulong)(uVar6 >> 0x15) & 0x7f0;
  fVar15 = (float)(uVar6 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar17 = *(float *)((long)&DAT_04199798 + uVar9) +
           fVar15 * *(float *)((long)&DAT_0419979c + uVar9);
  fVar15 = *(float *)((long)&DAT_041997a0 + uVar9) +
           fVar15 * *(float *)((long)&DAT_041997a4 + uVar9);
  fVar18 = fVar17 * 0.0;
  fVar15 = fVar15 + fVar15;
  fVar20 = fVar17 * (fVar17 + fVar17);
  fVar21 = fVar18 * (fVar18 + fVar18);
  fVar19 = fVar18 * fVar15;
  fVar15 = fVar17 * fVar15;
  fVar16 = ((fVar17 + fVar17) * fVar18 + fVar19) * 0.0 + (fVar21 - fVar15) * 0.0 +
           ((1.0 - fVar21) - fVar20) * 5.0 + 2.5;
  fVar15 = (fVar17 * (fVar18 + fVar18) - fVar19) * 0.0 + ((1.0 - fVar20) - fVar21) * 0.0 +
           (fVar21 + fVar15) * 5.0 + 2.5;
  if (iVar8 + 1 != iVar14) {
    iVar3 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar1 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    uVar6 = iVar1 + iVar12;
    uVar10 = iVar3 + iVar14;
    uVar11 = uVar6;
    do {
      if (((uVar10 < 0x100) && (uVar11 < 0x120)) &&
         ((*(uint *)(PTR_DAT_04bbcc38 + (ulong)(uVar11 + uVar10 * 0x120 >> 5) * 4 + 8) >>
           (ulong)(uVar11 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar11 < iVar1 + iVar7) {
        uVar11 = uVar11 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
        uVar11 = uVar6;
      }
    } while ((uVar6 != uVar11) || (iVar8 + 1 + iVar3 != uVar10));
  }
  return 0;
}

