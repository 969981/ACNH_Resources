
uint FUN_0097df30(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_38;
  undefined *puStack_30;
  int local_28;
  int iStack_24;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  local_38 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_30 = PTR_DAT_04bb2010 + 0x10;
  fVar7 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar5 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar6 = fVar5 + 2.5;
  fVar8 = fVar7 + 2.5;
  fVar9 = fVar5 + 10.0 + -2.5;
  fVar5 = fVar7 + 10.0 + -2.5;
  local_18 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iStack_14 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar1 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar2 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  local_28 = local_18;
  if (iVar1 <= local_18) {
    local_28 = iVar1;
  }
  if (local_18 <= iVar1) {
    local_18 = iVar1;
  }
  iStack_24 = iStack_14;
  if (iVar2 <= iStack_14) {
    iStack_24 = iVar2;
  }
  if (iStack_14 <= iVar2) {
    iStack_14 = iVar2;
  }
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
    uVar3 = 0;
    if (lVar4 != 0) {
      local_20 = puStack_30;
      uVar3 = FUN_009721a0(lVar4,&local_38,0);
    }
  }
  return uVar3 & 1;
}

