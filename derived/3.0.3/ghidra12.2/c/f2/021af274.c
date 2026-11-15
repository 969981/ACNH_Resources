
void FUN_021af274(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  undefined1 local_32;
  
  uVar2 = *(uint *)(param_1 + 0x55d2c);
  if ((int)uVar2 < 0) {
    return;
  }
  lVar1 = param_1 + (ulong)uVar2 * 0xba0;
  if (9 < uVar2) {
    lVar1 = param_1;
  }
  if (*(char *)(lVar1 + 0xaf9) != '\0') {
    *(undefined4 *)(lVar1 + 0x4e8) = 0;
    *(undefined4 *)(lVar1 + 0x4ee) = 0x101;
    *(undefined2 *)(lVar1 + 0x4ec) = 0;
    *(undefined1 *)(lVar1 + 0x4f2) = 0;
    *(undefined1 *)(lVar1 + 0x4f4) = 0;
    *(undefined4 *)(lVar1 + 0x898) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x89c) = 0xff;
    FUN_0219be30(lVar1);
    local_40 = *(undefined1 *)(lVar1 + 0xaf8);
    local_3f = 0;
    local_3c = 0;
    uStack_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (-1 < DAT_053d0d10) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&uStack_38,&local_40,8,0);
    }
    *(undefined4 *)(lVar1 + 0x4dc) = 0;
  }
  *(uint *)(param_1 + 0x55d2c) = 0xffffffff;
  FUN_021a11f0(param_1,0xffffffff);
  return;
}

