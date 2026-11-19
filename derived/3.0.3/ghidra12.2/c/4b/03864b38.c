
void FUN_03864b38(long param_1,int param_2)

{
  if (param_2 != -1) {
    if (1 < *(uint *)(param_1 + 0x298)) {
      if (*(uint *)(param_1 + 0x298) != 3) {
        *(int *)(param_1 + 0x2e4) = param_2;
        FUN_03ebb160(param_1 + 0x290,3);
        return;
      }
      if (*(int *)(param_1 + 0x2e4) != param_2) {
        FUN_03864b90();
        return;
      }
    }
  }
  return;
}

