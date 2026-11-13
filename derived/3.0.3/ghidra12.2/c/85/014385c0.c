
undefined8 FUN_014385c0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar5 = PTR_DAT_04bb43c0;
  uStack_5c = *(undefined4 *)(param_1 + 0x2cc);
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *(undefined4 *)(param_1 + 0x2c8);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar5 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
        local_58 = lVar11;
      }
    }
  }
  local_70 = 0;
  FUN_01afb1a0(&local_68,auStack_78);
  lVar11 = *(long *)(param_1 + 0x2e8);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_90 = *(undefined8 *)(param_1 + 0x2c8);
  local_80 = *(undefined4 *)(lVar11 + 0x2c8);
  uStack_7c = *(undefined4 *)(lVar11 + 0x2cc);
  uVar8 = FUN_01ae98d0(&local_68);
  iVar6 = (int)local_70;
  iVar4 = local_70._4_4_;
  lVar11 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x68);
  bVar7 = (uVar8 & 0x80000001) != 1;
  iVar2 = local_70._4_4_;
  if (bVar7) {
    iVar2 = (int)local_70;
  }
  iVar1 = (int)local_70;
  if (bVar7) {
    iVar1 = local_70._4_4_;
  }
  fVar13 = *(float *)(lVar11 + 0x278) - ((float)iVar2 * 0.5 * 5.0 + -2.5);
  fVar12 = *(float *)(lVar11 + 0x280) - ((float)iVar1 * 0.5 * 5.0 + -2.5);
  uVar8 = FUN_01ae98d0(&local_68);
  iVar2 = iVar6;
  if ((uVar8 & 0x80000001) != 1) {
    iVar2 = iVar4;
    iVar4 = iVar6;
  }
  if (iVar2 != 0) {
    uVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    uVar9 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    uVar8 = uVar9 + iVar2;
    uVar10 = uVar3;
    do {
      if (((uVar9 < 0x100) && (uVar10 < 0x120)) &&
         ((*(uint *)(&DAT_0526c180 + (ulong)(uVar10 + uVar9 * 0x120 >> 5) * 4) >>
           (ulong)(uVar10 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar10 < (int)(iVar4 + uVar3 + -1)) {
        uVar10 = uVar10 + 1;
      }
      else {
        uVar9 = uVar9 + 1;
        uVar10 = uVar3;
      }
    } while ((uVar3 != uVar10) || (uVar8 != uVar9));
  }
  return 0;
}

