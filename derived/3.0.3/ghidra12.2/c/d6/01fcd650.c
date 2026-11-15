
void FUN_01fcd650(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x789c) == '\0') {
    if (*(int *)(param_1 + 0x787c) < 1) {
      lVar1 = *(long *)(param_1 + 0x10);
      if (*(int *)(lVar1 + 0x360) == 0xc) {
        if ((*(int *)(lVar1 + 0x360) == 0xc) && (*(char *)(*(long *)(lVar1 + 0x370) + 0x15) != '\0')
           ) {
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
          *(undefined1 *)(param_1 + 0x7878) = 1;
        }
        if (*(int *)(param_1 + 0x77b4) < 0x709) {
          return;
        }
      }
      else {
        if (*(int *)(lVar1 + 0x360) != 0xd) {
          return;
        }
        if (*(int *)(lVar1 + 0x4b8) == 0) {
          return;
        }
        if (*(int *)(lVar1 + 0x378) != 0x23) {
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0x77b4) < *(int *)(param_1 + 0x787c)) {
      return;
    }
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    *(undefined1 *)(param_1 + 0x7878) = 1;
  }
  return;
}

