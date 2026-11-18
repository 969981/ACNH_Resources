
void FUN_0348361c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x248) == 0) {
      FUN_0345b4a0(lVar1,0);
    }
    else if (1 < *(uint *)(lVar1 + 0x298)) {
      if (*(uint *)(lVar1 + 0x298) == 3) {
        if (*(int *)(lVar1 + 0x2e4) != 1) {
          FUN_03864b90();
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x2e4) = 1;
        FUN_03ebb160(lVar1 + 0x290,3);
      }
    }
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x248) == 1) {
      FUN_0345b4a0(lVar1,0);
      return;
    }
    if (1 < *(uint *)(lVar1 + 0x298)) {
      if (*(uint *)(lVar1 + 0x298) == 3) {
        if (*(int *)(lVar1 + 0x2e4) != 1) {
          FUN_03864b90();
        }
      }
      else {
        *(undefined4 *)(lVar1 + 0x2e4) = 1;
        FUN_03ebb160(lVar1 + 0x290,3);
      }
    }
  }
  return;
}

