
void FUN_01e37980(long param_1,int *param_2,byte param_3,uint param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 local_14;
  
  if ((param_5 & 1) != 0) {
    *(int *)(param_1 + 0x120) = *param_2;
    *(byte *)(param_1 + 300) = param_3 & 1;
    return;
  }
  iVar5 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *param_2;
  if (iVar2 <= iVar5) {
    if (0 < iVar5) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x44) + 1 < iVar2) {
        iVar1 = *(int *)(param_1 + 0x44) + 1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
      *(int *)(param_1 + 0x48) = iVar5 + -1;
      iVar5 = iVar5 + -1;
    }
    if (iVar2 <= iVar5) goto joined_r0x01e37a10;
  }
  iVar1 = *(int *)(param_1 + 0x44) + iVar5;
  *(int *)(param_1 + 0x48) = iVar5 + 1;
  iVar5 = 0;
  if (iVar2 <= iVar1) {
    iVar5 = iVar2;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)(iVar1 - iVar5) * 0x14);
  *puVar4 = 0;
  *(int *)(puVar4 + 1) = iVar3;
  *(undefined4 *)((long)puVar4 + 0xc) = 0;
  *(undefined2 *)(puVar4 + 2) = 0;
joined_r0x01e37a10:
  if ((param_3 & 1) == 0) {
    return;
  }
  local_14 = 0;
  if (*param_2 == 1) {
    local_14 = 1;
  }
  else if (*param_2 == 0) {
    local_14 = 0;
  }
  FUN_021dafb0(param_1 + 0xc,&local_14,0,0,0,(param_4 ^ 0xffffffff) & 1);
  return;
}

