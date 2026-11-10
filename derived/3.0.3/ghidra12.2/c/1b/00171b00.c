
undefined8 FUN_00171b00(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_001726f0();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) && (*(int *)(lVar1 + 0xdc) != 5)) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

