
void FUN_0035c480(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar1 = FUN_0034fb8c(*(undefined8 *)(param_1 + 0x30));
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_0034f7c4(*(undefined8 *)(lVar2 + 0x80),param_2);
      FUN_0034f968(*(undefined8 *)(lVar2 + 0x88),param_2);
      if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
        FUN_0034915c(*(long *)(lVar1 + 0x48),param_2);
      }
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    FUN_00352d04(param_1 + 0x28,0,0xc,0,0,0,1);
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  }
  return;
}

