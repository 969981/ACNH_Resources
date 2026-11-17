
void FUN_02c7b8b8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar1 + 0x590) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x590),0,param_2 & 1);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar1 + 0x598) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x598),0,param_2 & 1);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar1 + 0x5a0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5a0),0,param_2 & 1);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar1 + 0x5a8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5a8),0,param_2 & 1);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  if (*(long *)(lVar1 + 0x5b0) == 0) {
    return;
  }
  FUN_03d5d0e0(*(long *)(lVar1 + 0x5b0),0,param_2 & 1);
  return;
}

