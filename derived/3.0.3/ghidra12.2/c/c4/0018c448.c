
void FUN_0018c448(long param_1)

{
  long lVar1;
  undefined8 *__ptr;
  code *pcVar2;
  
  lVar1 = param_1 + 0x20;
  if (lVar1 != *(long *)(param_1 + 8)) {
    __ptr = (undefined8 *)(*(long *)(param_1 + 8) + -0x14);
    pcVar2 = (code *)*__ptr;
    if (pcVar2 == (code *)0x0) {
      free(__ptr);
    }
    else {
      (*pcVar2)();
    }
  }
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined8 *)(param_1 + 0x10) = 0x100;
  return;
}

