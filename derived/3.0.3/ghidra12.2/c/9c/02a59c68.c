
undefined8 FUN_02a59c68(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0xc) == *(int *)(*(long *)(param_1 + 8) + 8)) {
    *(byte *)(lVar1 + 8) = *(byte *)(param_2 + 8);
    *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(lVar1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
    return 1;
  }
  return 0;
}

