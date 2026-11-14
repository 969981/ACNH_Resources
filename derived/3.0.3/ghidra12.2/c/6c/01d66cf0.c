
void FUN_01d66cf0(long param_1,byte *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*param_2 < 8) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1 << (ulong)(*param_2 & 0x1f);
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0xb8);
    if (iVar5 < 1) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb8);
    iVar6 = *(int *)(param_1 + 0xbc);
    iVar7 = iVar3;
    do {
      iVar2 = 0;
      if (iVar5 <= iVar6) {
        iVar2 = iVar5;
      }
      if (*(byte *)(*(long *)(param_1 + 0xb0) + (long)(iVar6 - iVar2) * 0x10 + 8) == *param_2) {
        return;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (iVar5 <= iVar3) {
      return;
    }
  }
  iVar6 = *(int *)(param_1 + 0xbc) + iVar3;
  bVar4 = *param_2;
  *(int *)(param_1 + 0xc0) = iVar3 + 1;
  iVar3 = 0;
  if (iVar5 <= iVar6) {
    iVar3 = iVar5;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb0) + (long)(iVar6 - iVar3) * 0x10);
  *puVar1 = param_3;
  *(byte *)(puVar1 + 1) = bVar4;
  return;
}

