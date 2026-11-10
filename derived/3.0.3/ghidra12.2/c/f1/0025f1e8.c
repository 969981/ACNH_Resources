
undefined8 FUN_0025f1e8(long param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(undefined2 *)(lVar3 + 2);
  uVar1 = *(undefined4 *)(lVar3 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(lVar3 + 1);
  *(undefined2 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return 1;
}

