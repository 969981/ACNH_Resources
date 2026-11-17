
void FUN_02f5cb2c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (*(long *)(lVar1 + 0x5d8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5d8),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5e0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5e0),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5e8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5e8),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5f0) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5f0),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x5f8) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x5f8),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x600) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x600),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x608) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x608),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x610) != 0) {
    FUN_03d5d0e0(*(long *)(lVar1 + 0x610),0,param_2 & 1);
  }
  if (*(long *)(lVar1 + 0x618) == 0) {
    return;
  }
  FUN_03d5d0e0(*(long *)(lVar1 + 0x618),0,param_2 & 1);
  return;
}

