
void FUN_03069c1c(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int local_28;
  int local_24;
  
  if (param_3 != -1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
    if (lVar3 != 0) {
      local_24 = 0;
      local_28 = 0;
      uVar2 = FUN_03582920(param_1 + 0x340,&local_24,&local_28,param_3);
      if ((uVar2 & 1) != 0) {
        uVar1 = *(uint *)(param_1 + 0x24c);
        if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x358))) &&
            (local_24 == **(int **)(*(long *)(param_1 + 0x360) + (ulong)uVar1 * 8))) &&
           (local_28 != -1)) {
          FUN_02d6ccbc(param_1 + 0x1c320,lVar3,param_2);
        }
      }
    }
  }
  return;
}

