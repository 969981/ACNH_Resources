
void FUN_002b3e74(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_002b3aa0(param_1 + 0x58);
  if (*(byte *)(param_1 + 0x38) < 0x20) {
    lVar1 = FUN_002ba798(DAT_04c61168);
    lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x38) * 0x20;
    *(undefined8 *)(lVar1 + 0x3510) = 0;
    *(undefined8 *)(lVar1 + 0x3518) = 0;
    *(undefined8 *)(lVar1 + 0x3520) = 0;
    *(undefined4 *)(lVar1 + 0x3528) = 0;
    *(undefined1 *)(lVar1 + 0x352c) = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0xfd;
  FUN_00227284(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0x100;
  return;
}

