
void FUN_02bd7f3c(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x218);
  if ((param_2 & 1) == 0) {
    if (*(long *)(lVar2 + 0x5b8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b8),0,0);
    }
    if (*(long *)(lVar2 + 0x5c0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5c0),0,0);
    }
    if (*(long *)(lVar2 + 0x5c8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5c8),0,0);
    }
    if (*(long *)(lVar2 + 0x5d0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5d0),0,0);
    }
    if (*(long *)(lVar2 + 0x5d8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5d8),0,0);
    }
    if (*(long *)(lVar2 + 0x5e0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e0),0,0);
    }
    if (*(long *)(lVar2 + 0x5e8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e8),0,0);
    }
    if (*(long *)(lVar2 + 0x5f0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5f0),0,0);
    }
    if (*(long *)(lVar2 + 0x5f8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5f8),0,0);
    }
    lVar2 = *(long *)(lVar2 + 0x600);
    if (lVar2 == 0) {
      return;
    }
    bVar1 = false;
  }
  else {
    if (*(long *)(lVar2 + 0x5b8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5b8),0,0 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5c0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5c0),0,1 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5c8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5c8),0,2 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5d0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5d0),0,3 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5d8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5d8),0,4 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5e0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e0),0,5 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5e8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5e8),0,6 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5f0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5f0),0,7 < *(int *)(param_1 + 0x28c));
    }
    if (*(long *)(lVar2 + 0x5f8) != 0) {
      FUN_03d5d0e0(*(long *)(lVar2 + 0x5f8),0,8 < *(int *)(param_1 + 0x28c));
    }
    lVar2 = *(long *)(lVar2 + 0x600);
    if (lVar2 == 0) {
      return;
    }
    bVar1 = 9 < *(int *)(param_1 + 0x28c);
  }
  FUN_03d5d0e0(lVar2,0,bVar1);
  return;
}

