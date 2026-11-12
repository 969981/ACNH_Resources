
ulong FUN_00692988(long param_1,code *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_38;
  uint local_34;
  long local_18;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar2 = FUN_00692344(*(undefined8 *)(param_1 + 0x60));
  uVar3 = FUN_00692d28(param_1);
  uVar4 = FUN_00692440(uVar2,uVar3);
  uVar1 = (uint)uVar4;
  if (uVar1 == 0) {
    FUN_00692344(*(undefined8 *)(param_1 + 0x60));
    uVar2 = FUN_006925f4();
    local_18 = 0;
    FUN_00142bf0(uVar2,0x200002,&local_18);
    if (99 < local_18 - 200U) {
      local_34 = 0;
      local_38 = 0;
      if (param_2 != (code *)0x0) {
        uVar2 = FUN_00692d18(param_1);
        uVar4 = (*param_2)(&local_34,&local_38,uVar2,*(undefined8 *)(param_1 + 0x50));
        if ((uVar4 & 1) != 0) {
          FUN_00692d40(param_1,local_38);
          return (ulong)local_34;
        }
      }
      uVar4 = FUN_006933b0(local_18);
      return uVar4;
    }
    uVar4 = 0;
  }
  else if ((uVar1 & 0x3fffff) == 0x7fedb) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar1 = 0x2cdb;
    }
    return (ulong)uVar1;
  }
  return uVar4;
}

