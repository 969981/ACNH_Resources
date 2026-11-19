
void FUN_038bbef0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x58))();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x84) >> 1 & 1) == 0)) {
    do {
      FUN_038bbef0(*(undefined8 *)(lVar1 + 0x20));
      lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x30);
    } while (lVar1 != 0);
  }
  return;
}

