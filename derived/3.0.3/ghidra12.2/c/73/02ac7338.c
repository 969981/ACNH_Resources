
uint FUN_02ac7338(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "Tutorial1PTentLightON";
  uVar2 = FUN_0273f0a0(&local_30);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
    uVar2 = FUN_02b673a0(&local_30,*(undefined4 *)(param_1 + 0x2a0));
    uVar1 = 0;
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_02b5a0b0((ulong)local_30 & 0xffffffff);
    }
  }
  return uVar1 & 1;
}

