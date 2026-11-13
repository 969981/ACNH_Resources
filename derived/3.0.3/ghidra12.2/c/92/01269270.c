
undefined8 FUN_01269270(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined **local_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined8 local_28;
  
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0xc);
  lVar9 = (ulong)(uVar4 >> 4) * 9 + (ulong)(uVar3 >> 4);
  if (0x47 < (uint)lVar9) {
    return 0;
  }
  uVar10 = (uint)*(ushort *)(param_1 + lVar9 * 0x18 + 0x18);
  if (uVar10 == 0) {
    return 1;
  }
  lVar9 = *(long *)PTR_DAT_04bb27a8;
  uVar10 = uVar10 - *(ushort *)(lVar9 + 0xb90);
  if ((uVar10 < *(uint *)(lVar9 + 0xb70)) &&
     (lVar9 = *(long *)(*(long *)(lVar9 + 0xb78) + (long)(int)uVar10 * 8), lVar9 != 0)) {
    puVar7 = (undefined8 *)FUN_012660e0(lVar9,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
    puVar11 = *(undefined8 **)PTR_PTR_04bbc3a8;
    if (puVar7 != (undefined8 *)0x0) {
      puVar11 = puVar7;
    }
  }
  else {
    puVar11 = &DAT_0407ebb1;
  }
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  fVar12 = (float)(uVar3 & 0xf) * 10.0;
  fVar14 = (float)(uVar4 & 0xf) * 10.0;
  fVar13 = fVar12 + 2.5;
  fVar15 = fVar14 + 2.5;
  fVar16 = fVar12 + 10.0 + -2.5;
  fVar12 = fVar14 + 10.0 + -2.5;
  local_48 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iStack_44 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar5 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar2 = local_48;
  if (iVar5 <= local_48) {
    iVar2 = iVar5;
  }
  if (local_48 <= iVar5) {
    local_48 = iVar5;
  }
  local_6c = iStack_44;
  if (iVar6 <= iStack_44) {
    local_6c = iVar6;
  }
  if (iStack_44 <= iVar6) {
    iStack_44 = iVar6;
  }
  iVar5 = iStack_44 + 1;
  local_88 = &puStack_60;
  local_80 = &local_50;
  if (iVar5 != local_6c) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_70 = iVar2;
    puStack_60 = local_78;
    local_58 = iVar2;
    iStack_54 = local_6c;
    local_50 = local_78;
    do {
      local_28 = 0;
      local_90 = 0;
      local_a0 = puVar1;
      local_98 = puVar11;
      uVar8 = FUN_0097a150(&local_a0,&local_78,(long)&local_28 + 4,&local_28,(long)&local_90 + 4,
                           &local_90,3);
      if (((((uVar8 & 1) == 0) || ((local_28._4_4_ != 7 && (local_28._4_4_ != 0xf)))) ||
          (((int)local_28 != 7 && ((int)local_28 != 0xf)))) ||
         (((local_90._4_4_ != 7 && (local_90._4_4_ != 0xf)) ||
          (((int)local_90 != 7 && ((int)local_90 != 0xf)))))) {
        return 0;
      }
      if (local_70 < *(int *)(local_80 + 1)) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = *(int *)(local_88 + 1);
      }
    } while ((iVar2 != local_70) || (iVar5 != local_6c));
  }
  return 1;
}

