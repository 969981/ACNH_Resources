
void FUN_01d6a464(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)PTR_DAT_04bb27d0;
  lVar1 = *(long *)(*plVar2 + 0x480);
  if (*(int *)(lVar1 + 0x9c) == 2) {
    if (*(char *)(param_1 + 0x1e2) == *(char *)(lVar1 + 0x99)) {
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined4 *)(lVar1 + 0x9c) = 0;
      *(undefined2 *)(lVar1 + 0x98) = 0xff00;
      lVar1 = *(long *)(*plVar2 + 0x480);
      if (*(int *)(lVar1 + 0x9c) != 2) goto LAB_01d6a4e8;
    }
    if (*(char *)(param_1 + 0x1f8) == *(char *)(lVar1 + 0x99)) {
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined4 *)(lVar1 + 0x9c) = 0;
      *(undefined2 *)(lVar1 + 0x98) = 0xff00;
    }
  }
LAB_01d6a4e8:
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    nn::os::SignalEvent((EventType *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0x1fa) = 0;
  }
  *(undefined2 *)(param_1 + 0x1e8) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0xffff;
  *(undefined2 *)(param_1 + 0x1e4) = 0xffff;
  *(undefined1 *)(param_1 + 0x1e2) = 0xff;
  *(undefined1 *)(param_1 + 0x1e6) = 0xff;
  *(undefined4 *)(param_1 + 0x1ea) = 0x101;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x1f8) = 0xff;
  FUN_03ebb160(param_1 + 0xb8,0);
  if (DAT_0556aa70 == 0) {
    return;
  }
  FUN_026c3ae8();
  return;
}

