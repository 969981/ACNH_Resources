
void FUN_00352450(long param_1)

{
  long lVar1;
  
  FUN_00354f90(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32),0xffffffff,
               *(undefined1 *)(param_1 + 0x30));
  lVar1 = FUN_00357060(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN_00354f90(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                 *(undefined2 *)(param_1 + 0x32),0xffffffff,*(undefined1 *)(param_1 + 0x30));
    lVar1 = FUN_00357060(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                         *(undefined2 *)(param_1 + 0x32));
    if (lVar1 != 0) {
      lVar1 = FUN_00357060(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                           *(undefined2 *)(param_1 + 0x32));
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
    }
  }
  return;
}

