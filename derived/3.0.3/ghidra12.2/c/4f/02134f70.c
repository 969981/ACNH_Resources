
void FUN_02134f70(long param_1)

{
  long lVar1;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar1 = FUN_021c9770(*(undefined4 *)(param_1 + 0x3c),1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 700) = 0;
    *(undefined2 *)(lVar1 + 0x2c0) = 0;
    *(undefined4 *)(lVar1 + 0x2c2) = 0x101;
    *(undefined1 *)(lVar1 + 0x2c6) = 0;
    *(undefined2 *)(lVar1 + 0x2c8) = 0xff00;
    FUN_021cad10();
    local_37 = 0;
    local_34 = 0;
    local_18 = 0;
    local_12 = 0;
    local_14 = 0xff00;
    local_38 = (undefined1)*(undefined4 *)(lVar1 + 4);
    if (-1 < DAT_053d15b0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d15b0,&local_18,&local_38,8,0);
    }
  }
  FUN_021328c0(param_1);
  return;
}

