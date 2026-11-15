
void FUN_0219c040(long param_1,ulong param_2)

{
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ee) = 0x101;
  *(undefined4 *)(param_1 + 0x898) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x4f2) = 0;
  *(undefined1 *)(param_1 + 0x4f4) = 0;
  *(undefined1 *)(param_1 + 0x89c) = 0xff;
  FUN_0219be30();
  if ((param_2 & 1) != 0) {
    local_30 = *(undefined1 *)(param_1 + 0xaf8);
    local_2f = 0;
    local_2c = 0;
    uStack_28 = 0;
    local_22 = 0;
    local_24 = 0xff00;
    if (-1 < DAT_053d0d10) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&uStack_28,&local_30,8,0);
    }
  }
  return;
}

