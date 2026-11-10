
undefined8 FUN_001d5620(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x138);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)(lVar3 + 0x18);
  }
  *(undefined2 *)(param_2 + 0xb2) = uVar2;
  *(undefined2 *)(param_2 + 0xb0) = 0x80;
  *(undefined1 *)(param_2 + 0xb5) = *(undefined1 *)(param_2 + 0x43);
  *(byte *)(param_2 + 0xb4) = *(byte *)(param_2 + 0x44) & 0xf | *(char *)(param_2 + 0x42) << 4;
  *(undefined1 *)(param_2 + 0xb6) = *(undefined1 *)(param_2 + 0x45);
  *(undefined1 *)(param_2 + 0xb7) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined2 *)(param_2 + 0xb8) = *(undefined2 *)(param_2 + 0x60);
  *(undefined2 *)(param_2 + 0xba) = *(undefined2 *)(param_2 + 0x70);
  uVar1 = FUN_001d534c(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    *(char *)(param_2 + 0xb1) = (char)*(undefined8 *)(param_2 + 0xf0);
    uVar1 = FUN_00197478(param_3,(undefined2 *)(param_2 + 0xb0),0xc);
    if (((uVar1 & 1) != 0) &&
       ((*(long *)(param_2 + 0xf0) == 0 ||
        (uVar1 = FUN_00197478(param_3,param_2 + 0xf8), (uVar1 & 1) != 0)))) {
      if (*(long *)(param_2 + 0x138) != 0) {
        FUN_001975b8(param_3,lVar3);
      }
      *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x18);
      return 1;
    }
  }
  return 0;
}

