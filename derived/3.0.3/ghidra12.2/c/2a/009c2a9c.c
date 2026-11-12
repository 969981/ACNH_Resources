
void FUN_009c2a9c(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((int)param_2[1] <= (int)*param_2) {
    return;
  }
  *(long *)(*(long *)(param_2 + 2) + (long)(int)*param_2 * 8) = param_1 + 0xd8;
  uVar3 = param_2[1];
  uVar2 = (long)(int)*param_2 + 1;
  uVar1 = (uint)uVar2;
  *param_2 = uVar1;
  if ((int)uVar1 < (int)uVar3) {
    *(long *)(*(long *)(param_2 + 2) + uVar2 * 8) = param_1 + 0x100;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    uVar2 = (ulong)uVar1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_009c2b3c;
LAB_009c2ad8:
    uVar1 = (uint)uVar2;
    if ((int)uVar3 <= (int)uVar1) goto LAB_009c2ae0;
LAB_009c2b5c:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x150;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_009c2b7c;
LAB_009c2ae8:
    if ((int)uVar3 <= (int)uVar1) goto LAB_009c2af0;
LAB_009c2b9c:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x1a0;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_009c2bbc;
  }
  else {
    if ((int)uVar3 <= (int)uVar1) goto LAB_009c2ad8;
LAB_009c2b3c:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 8) = param_1 + 0x128;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_009c2b5c;
LAB_009c2ae0:
    if ((int)uVar3 <= (int)uVar1) goto LAB_009c2ae8;
LAB_009c2b7c:
    *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x178;
    uVar3 = param_2[1];
    uVar1 = *param_2 + 1;
    *param_2 = uVar1;
    if ((int)uVar1 < (int)uVar3) goto LAB_009c2b9c;
LAB_009c2af0:
    if ((int)uVar1 < (int)uVar3) {
LAB_009c2bbc:
      *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x1c8;
      uVar1 = *param_2 + 1;
      *param_2 = uVar1;
      if ((int)param_2[1] <= (int)uVar1) {
        return;
      }
      goto LAB_009c2b00;
    }
  }
  if ((int)uVar3 <= (int)uVar1) {
    return;
  }
LAB_009c2b00:
  *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar1 * 8) = param_1 + 0x1f0;
  *param_2 = *param_2 + 1;
  return;
}

