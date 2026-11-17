
void FUN_02eb8a0c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x12d8);
  if (*(long *)(lVar1 + 0x590) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x590),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x598) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x598),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5a0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5a0),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5a8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5a8),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5b0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5b0),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5b8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5b8),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5c0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5c0),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5c8) == 0) {
    return;
  }
  FUN_03d5d0e0(*(long *)(lVar1 + 0x5c8),0,param_2 & 1);
  return;
}

