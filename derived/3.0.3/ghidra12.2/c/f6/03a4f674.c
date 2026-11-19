
void FUN_03a4f674(long param_1,byte param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x3c8) = *(byte *)(param_1 + 0x3c8) & 0xf8 | 2;
  lVar1 = *(long *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined1 *)(param_1 + 0x3ca) = 0xff;
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(lVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(lVar1 + 0x5c);
    *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(lVar1 + 0x60);
    *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(lVar1 + 100);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x420) = uVar2;
    if (*(char *)(lVar1 + 0x92) == '\0') {
      FUN_039ee490(param_1,0xffffffff);
      *(long *)(param_1 + 800) = param_1 + 0x408;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    }
    else {
      param_2 = ((*(ushort *)(lVar1 + 0xa74) & 0x10) == 0 || *(long *)(lVar1 + 0x230) == 0) &
                param_2;
      if (param_2 == 0) {
        param_4 = 0xffffffff;
      }
      FUN_039ee490(param_1,param_4);
      *(long *)(param_1 + 800) = param_1 + 0x408;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      if (param_2 == 1) {
        *(byte *)(param_1 + 0x3c8) = *(byte *)(param_1 + 0x3c8) | 9;
      }
    }
  }
  return;
}

