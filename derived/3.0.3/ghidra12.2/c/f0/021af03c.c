
void FUN_021af03c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined1 local_42;
  
  uVar2 = *(uint *)(param_1 + 0x55d2c);
  if (-1 < (int)uVar2) {
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
      local_50 = *(undefined1 *)(lVar1 + 0xaf8);
      local_4f = 0;
      local_4c = 0;
      uStack_48 = 0;
      local_42 = 0;
      local_44 = 0xff00;
      if (-1 < DAT_053d0d10) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&uStack_48,&local_50,8,0);
      }
      *(undefined4 *)(lVar1 + 0x4dc) = 0;
    }
    *(uint *)(param_1 + 0x55d2c) = 0xffffffff;
    FUN_021a11f0(param_1,0xffffffff);
  }
  FUN_0219f860(param_1);
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    FUN_0219b370(param_1,0,1);
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    FUN_0219b370(param_1 + 0xba0,1,1);
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    FUN_0219b370(param_1 + 0x1740,2,1);
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    FUN_0219b370(param_1 + 0x22e0,3,1);
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    FUN_0219b370(param_1 + 0x2e80,4,1);
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    FUN_0219b370(param_1 + 0x3a20,5,1);
  }
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    FUN_0219b370(param_1 + 0x45c0,6,1);
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    FUN_0219b370(param_1 + 0x5160,7,1);
  }
  if (*(char *)(param_1 + 0x67f9) != '\0') {
    FUN_0219b370(param_1 + 0x5d00,8,1);
  }
  if (*(char *)(param_1 + 0x7399) != '\0') {
    FUN_0219b370(param_1 + 0x68a0,9,1);
  }
  FUN_021af370(param_1);
  return;
}

