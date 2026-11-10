
void FUN_001feb30(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 8) {
    *(undefined1 *)(param_1 + 8) = 1;
    uStack_8 = 0;
    FUN_001865b0(param_2,&uStack_8);
    return;
  }
  uStack_8 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 8;
  FUN_001865b0(param_2,&uStack_8);
  return;
}

