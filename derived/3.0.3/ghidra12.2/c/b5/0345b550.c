
void FUN_0345b550(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (1 < *(uint *)(param_1 + 0x298)) {
      if (param_2 != -1) {
        if (*(uint *)(param_1 + 0x298) == 3) {
          if (*(int *)(param_1 + 0x2e4) != param_2) {
            FUN_03864b90();
          }
        }
        else {
          *(int *)(param_1 + 0x2e4) = param_2;
          FUN_03ebb160(param_1 + 0x290,3);
        }
      }
      return;
    }
    if (((((*(int *)(param_1 + 0x2f8) != 0) && (*(int *)(param_1 + 0x208) != 0)) &&
         (*(long *)(param_1 + 0x270) != 0)) && (*(long *)(*(long *)(param_1 + 0x270) + 8) != 0)) &&
       (((*(long *)(param_1 + 0x480) == 0 || (*(int *)(*(long *)(param_1 + 0x480) + 0x14) != -1)) &&
        ((*(long *)(param_1 + 0x2d8) != 0 &&
         ((0 < *(int *)(param_1 + 0x3d8) && (*(int *)(param_1 + 0x3d4) != 0)))))))) {
      *(int *)(param_1 + 0x2e4) = param_2;
      FUN_03ebb160(param_1 + 0x290,3);
      return;
    }
  }
  return;
}

