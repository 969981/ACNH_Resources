
long FUN_01473db4(long param_1,float *param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [12];
  int local_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  FUN_007535b4(&local_c8,*(long *)(*(long *)(param_1 + 0x60) + 0x1150) + 0x238);
  puVar2 = PTR_DAT_04bb43c0;
  fVar8 = *param_2;
  fVar10 = param_2[1];
  local_d0 = 0;
  fVar9 = param_2[2];
  uStack_8c = *(undefined4 *)(param_1 + 0x28c);
  local_88 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_90 = *(undefined4 *)(param_1 + 0x288);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  local_98 = puVar1;
  uVar5 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0x288);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
        local_88 = lVar6;
      }
    }
  }
  FUN_01afb1a0(&local_98,auStack_d8);
  iVar3 = local_d0;
  local_90 = *(undefined4 *)(param_1 + 0x288);
  uStack_8c = *(undefined4 *)(param_1 + 0x28c);
  local_dc = 0;
  local_88 = 0;
  lVar6 = *(long *)puVar2;
  local_98 = puVar1;
  uVar5 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1 + 0x288);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
        local_88 = lVar6;
      }
    }
  }
  fVar11 = fStack_bc + fVar10 * fStack_c4 + fVar8 * local_c8 + fVar9 * local_c0;
  FUN_01afb1a0(&local_98,auStack_e8);
  if (iVar3 != local_dc) {
    fVar7 = -fVar11;
    if (0.0 <= fVar11) {
      fVar7 = fVar11;
    }
    if (fVar7 < 2.0) {
      if (fStack_9c + fVar10 * fStack_a4 + fVar8 * local_a8 + fVar9 * local_a0 <= 0.0) {
        bVar4 = *param_3 != 0;
      }
      else {
        bVar4 = *param_3 == 0;
      }
      return (ulong)bVar4 << 1;
    }
  }
  if (fVar11 <= 0.0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 2;
  }
  return lVar6;
}

