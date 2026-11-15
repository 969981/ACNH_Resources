
void FUN_02135028(long param_1)

{
  long lVar1;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  FUN_021331e8();
  lVar1 = FUN_021c9770(*(undefined4 *)(param_1 + 0x3c),1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 700) = 0;
    *(undefined2 *)(lVar1 + 0x2c0) = 0;
    *(undefined4 *)(lVar1 + 0x2c2) = 0x101;
    *(undefined1 *)(lVar1 + 0x2c6) = 0;
    *(undefined2 *)(lVar1 + 0x2c8) = 0xff00;
    FUN_021cad10();
    local_2f = 0;
    local_2c = 0;
    uStack_28 = 0;
    local_22 = 0;
    local_24 = 0xff00;
    local_30 = (undefined1)*(undefined4 *)(lVar1 + 4);
    if (-1 < DAT_053d15b0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d15b0,&uStack_28,&local_30,8,0);
    }
  }
  return;
}

