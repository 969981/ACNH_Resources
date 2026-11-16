
/* WARNING: Removing unreachable block (ram,0x02544aec) */

undefined8 FUN_0254497c(byte *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_2c [2];
  undefined2 local_2a;
  undefined2 uStack_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar2 = FUN_02582d8c(param_1,1);
  if (((uVar2 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
    local_26 = *(undefined2 *)(param_1 + 6);
    uVar2 = (uint)*param_1;
    if (7 < uVar2) {
      uVar2 = 0xff;
    }
    local_2c[0] = (undefined1)uVar2;
    _local_2a = CONCAT22((short)(*(uint *)(param_1 + 2) >> 0x10),DAT_04c487d4);
    local_24 = 1;
    local_8 = 0;
    lVar1 = DAT_055021a0 + 0x20 + (ulong)uVar2 * 0x740;
    if (7 < *param_1) {
      lVar1 = DAT_055021a0 + 0x20;
    }
    if ((*(uint *)(param_1 + 2) & 0x10000) == 0) {
      lVar3 = lVar1 + 0x4c8;
      *(undefined4 *)(lVar1 + 0x424) = 3;
    }
    else {
      lVar3 = lVar1 + 0x590;
      *(undefined4 *)(lVar1 + 0x4ec) = 3;
    }
    FUN_01393458(lVar3);
    local_8 = 0;
    local_2 = 0;
    local_4 = 0xff00;
    if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0x158)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0x158),&local_8,
                   local_2c,8,0);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

