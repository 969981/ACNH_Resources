
undefined8 FUN_02ef3e18(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  byte local_28 [4];
  byte local_24 [4];
  
  lVar2 = *(long *)PTR_DAT_04bb7ff8;
  if (lVar2 != 0) {
    local_24[0] = *(byte *)(lVar2 + 0xef4);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar1 = FUN_02ef3b00(*(undefined4 *)(lVar2 + 0xef8),local_24);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x23c) = *param_1;
      *(undefined2 *)(lVar1 + 0x240) = *(undefined2 *)(param_1 + 1);
      *(undefined1 *)(lVar1 + 0x242) = *(undefined1 *)((long)param_1 + 6);
      *(undefined1 *)(lVar1 + 0x243) = *(undefined1 *)((long)param_1 + 7);
      *(undefined4 *)(lVar1 + 0x244) = param_1[2];
      *(undefined4 *)(lVar1 + 0x248) = param_1[3];
      *(undefined4 *)(lVar1 + 0x24c) = param_1[4];
      *(undefined1 *)(lVar1 + 0x238) = 1;
      return 1;
    }
    if (*(int *)(lVar2 + 0xef8) == 0x45) {
      local_28[0] = *(byte *)(lVar2 + 0xef4);
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
      lVar2 = FUN_02ef3c90(local_28);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x220) = *param_1;
        return 1;
      }
    }
  }
  return 0;
}

