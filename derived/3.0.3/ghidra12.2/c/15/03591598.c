
void FUN_03591598(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x210);
  if ((param_2 & 1) == 0) {
    if (*(long *)(lVar2 + 0x580) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x580),0,0);
    }
    if (*(long *)(lVar2 + 0x588) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x588),0,0);
    }
    if (*(long *)(lVar2 + 0x590) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x590),0,0);
    }
    if (*(long *)(lVar2 + 0x598) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x598),0,0);
    }
    if (*(long *)(lVar2 + 0x5a0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5a0),0,0);
    }
    if (*(long *)(lVar2 + 0x5a8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5a8),0,0);
    }
    if (*(long *)(lVar2 + 0x5b0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b0),0,0);
    }
    lVar2 = *(long *)(lVar2 + 0x5b8);
    if (lVar2 == 0) {
      return;
    }
    bVar1 = false;
  }
  else {
    if (*(long *)(lVar2 + 0x580) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x580),0,0 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x588) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x588),0,1 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x590) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x590),0,2 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x598) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x598),0,3 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x5a0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5a0),0,4 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x5a8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5a8),0,5 < *(int *)(param_1 + 0x18f0));
    }
    if (*(long *)(lVar2 + 0x5b0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b0),0,6 < *(int *)(param_1 + 0x18f0));
    }
    lVar2 = *(long *)(lVar2 + 0x5b8);
    if (lVar2 == 0) {
      return;
    }
    bVar1 = 7 < *(int *)(param_1 + 0x18f0);
  }
  FUN_03d5d0e0(lVar2,0,bVar1);
  return;
}

