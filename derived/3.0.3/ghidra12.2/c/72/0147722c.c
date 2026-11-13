
void FUN_0147722c(long param_1,long param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_60 = 0;
  uStack_4c = *(undefined4 *)(param_1 + 0x28c);
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *(undefined4 *)(param_1 + 0x288);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1 + 0x288);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
        local_48 = lVar10;
      }
    }
  }
  FUN_01afb1a0(&local_58,auStack_68);
  iVar7 = local_60._4_4_;
  if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
    iVar7 = (int)local_60;
    iVar2 = local_60._4_4_;
    if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar7 = local_60._4_4_;
      iVar2 = (int)local_60;
    }
    local_60._0_4_ = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x2c8);
  *(int *)(param_2 + 0x10) = iVar2;
  iVar3 = *(int *)(param_1 + 0x2cc);
  *(int *)(param_2 + 0x14) = iVar3;
  iVar4 = (int)local_60 + *(int *)(param_1 + 0x2c8) + -1;
  iVar7 = iVar7 + *(int *)(param_1 + 0x2cc) + -1;
  *(int *)(param_2 + 0x20) = iVar4;
  *(int *)(param_2 + 0x24) = iVar7;
  fVar12 = 0.5;
  if (*param_3 < 0.0) {
    fVar12 = -0.5;
  }
  fVar11 = 0.5;
  if (param_3[2] < 0.0) {
    fVar11 = -0.5;
  }
  iVar8 = (int)((float)(int)(*param_3 + fVar12) / 5.0);
  iVar9 = iVar2;
  if (-1 < iVar8) {
    iVar9 = iVar4;
  }
  iVar1 = iVar9 + iVar8;
  if (-1 < iVar8) {
    iVar1 = iVar2;
    iVar4 = iVar9 + iVar8;
  }
  iVar9 = (int)((float)(int)(param_3[2] + fVar11) / 5.0);
  iVar2 = iVar3;
  if (-1 < iVar9) {
    iVar2 = iVar7;
  }
  iVar8 = iVar2 + iVar9;
  if (-1 < iVar9) {
    iVar8 = iVar3;
    iVar7 = iVar2 + iVar9;
  }
  iVar2 = iVar1;
  if (iVar4 <= iVar1) {
    iVar2 = iVar4;
  }
  if (iVar1 <= iVar4) {
    iVar1 = iVar4;
  }
  iVar3 = iVar8;
  if (iVar7 <= iVar8) {
    iVar3 = iVar7;
  }
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  *(int *)(param_2 + 0x10) = iVar2;
  *(int *)(param_2 + 0x14) = iVar3;
  *(int *)(param_2 + 0x20) = iVar1;
  *(int *)(param_2 + 0x24) = iVar8;
  return;
}

