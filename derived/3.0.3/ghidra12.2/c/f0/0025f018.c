
undefined8 FUN_0025f018(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(lVar2 + 1);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(lVar2 + 2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar2 + 0xc);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + 0x18);
  uVar1 = *(undefined1 *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  return 1;
}

