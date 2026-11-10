
uint FUN_00363490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == param_1 + 8) {
    return 0;
  }
  do {
    uVar1 = FUN_00362450(*(undefined8 *)(lVar2 + 0x10),param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  } while (lVar2 != param_1 + 8);
  return uVar1 & 1;
}

