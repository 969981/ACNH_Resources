
undefined8
FUN_00346c08(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x14c) = param_6;
  *param_1 = 0;
  param_1[1] = param_5;
  local_40 = 0;
  uStack_38 = 0;
  FUN_0034fb50(&local_40);
  local_40 = CONCAT44(0x10,(undefined4)local_40);
  lVar1 = FUN_00347a58(param_2,&local_40);
  *(ulong *)(param_1 + 10) = (param_4 + lVar1) - 1U & -lVar1;
  uVar2 = FUN_00334414(param_1 + 0xe,param_2,param_3,0x10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    FUN_00347d1c(param_1 + 0xe,param_1 + 0x70);
    uVar2 = FUN_00334414(param_1 + 0x78,param_2,param_3,0x10,*(undefined8 *)(param_1 + 10));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_00347d1c(param_1 + 0x78,param_1 + 0xda);
    if (param_1[1] == 3) {
      uVar2 = FUN_00334414(param_1 + 0xe2,param_2,param_3,0x10,*(undefined8 *)(param_1 + 10));
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_00347d1c(param_1 + 0xe2,param_1 + 0x144);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return uVar3;
}

