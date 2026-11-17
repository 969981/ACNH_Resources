
bool FUN_02b3d5a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_02a8ed80(param_2);
  if (iVar1 == 6) {
    lVar2 = *(long *)(param_1 + 8);
    *(undefined1 *)(lVar2 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  }
  return iVar1 == 6;
}

