
void FUN_0147e698(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint local_5c;
  int local_58 [2];
  int local_50;
  int iStack_4c;
  uint local_44;
  
  local_58[0] = *(int *)(param_3 + 0x18);
  local_44 = *(int *)(param_3 + 0x14) + 0x20000000U >> 0x1e;
  local_5c = local_44;
  if (local_58[0] - 2U < 4) {
    local_5c = 0;
  }
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x10);
  if (local_58[0] - 2U < 4) {
    local_44 = 0;
  }
  FUN_01473944(local_58,param_1);
  iVar1 = local_50;
  iVar2 = iStack_4c;
  if ((local_44 & 0x80000001) != 1) {
    iVar1 = iStack_4c;
    iVar2 = local_50;
  }
  fVar4 = fVar4 - ((float)iVar2 * 0.5 * 5.0 + -2.5);
  fVar5 = fVar5 - ((float)iVar1 * 0.5 * 5.0 + -2.5);
  iVar2 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  iVar3 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  FUN_01473944(local_58,param_1);
  *(int *)(param_2 + 0x10) = iVar2;
  *(int *)(param_2 + 0x14) = iVar3;
  iVar1 = local_50;
  if ((local_5c & 0x80000001) != 1) {
    iVar1 = iStack_4c;
    iStack_4c = local_50;
  }
  *(int *)(param_2 + 0x20) = iStack_4c + iVar2 + -1;
  *(int *)(param_2 + 0x24) = iVar1 + iVar3 + -1;
  return;
}

