
void FUN_0073aa78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1150);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x70) != 0) {
      FUN_03a03df0(*(long *)(lVar1 + 0x70),lVar1);
    }
    *(undefined8 *)(lVar1 + 0x70) = 0;
  }
  return;
}

