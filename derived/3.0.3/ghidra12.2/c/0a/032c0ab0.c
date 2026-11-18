
void FUN_032c0ab0(long param_1)

{
  long lVar1;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (*(undefined1 *)(param_1 + 0xa2) = 0, *(char *)(param_1 + 0xa3) == '\0')) {
    FUN_032b6620(*(long *)(param_1 + 0x38),0);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0xac) != 0) {
    *(undefined8 *)(lVar1 + 0xc) = 0;
    if (*(int *)(lVar1 + 0xac) != 1) {
      *(undefined4 *)(lVar1 + 0xac) = 1;
      if (*(long **)(lVar1 + 0x100) != (long *)0x0) {
        (**(code **)(**(long **)(lVar1 + 0x100) + 0x20))();
      }
    }
    lVar1 = *(long *)(param_1 + 0x18);
  }
  for (lVar1 = *(long *)(lVar1 + 0x158); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    *(undefined1 *)(lVar1 + 0x34) = 0;
  }
  local_28 = 0;
  FUN_032b4ec0(param_1 + 8,&local_28);
  return;
}

