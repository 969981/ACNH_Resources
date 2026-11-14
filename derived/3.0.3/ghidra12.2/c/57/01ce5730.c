
undefined8 FUN_01ce5730(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *local_838;
  undefined2 *puStack_830;
  undefined4 local_828;
  undefined2 local_824 [1023];
  undefined2 local_26;
  
  local_26 = 0;
  local_828 = 0x400;
  local_824[0] = 0;
  puStack_830 = local_824;
  local_838 = PTR_DAT_04bb62a0 + 0x10;
  uVar1 = FUN_01df33d0(&local_838);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_006f5580(param_1,&local_838), (uVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

