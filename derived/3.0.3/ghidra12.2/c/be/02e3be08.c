
void FUN_02e3be08(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x81) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  local_28[0] = *(byte *)(param_1 + 0x50);
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  uVar2 = FUN_02658470(local_28);
  if ((uVar2 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    local_2c[0] = *(byte *)(param_1 + 0x50);
    if (7 < local_2c[0]) {
      local_2c[0] = 0xff;
    }
    FUN_01dbfb40(*(undefined8 *)PTR_DAT_04bb27d0,local_2c,*(undefined1 *)(param_1 + 0x81));
    local_24[0] = *(byte *)(param_1 + 0x50);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    uVar2 = FUN_02658470(local_24);
    uVar3 = 2;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  FUN_03ebb160(param_1 + 8,uVar3);
  return;
}

