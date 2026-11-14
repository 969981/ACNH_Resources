
undefined8 FUN_01ce5930(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *local_98;
  undefined2 *puStack_90;
  undefined4 local_88;
  undefined2 local_84 [47];
  undefined2 local_26;
  
  local_26 = 0;
  local_88 = 0x30;
  local_84[0] = 0;
  puStack_90 = local_84;
  local_98 = PTR_DAT_04bb5850 + 0x10;
  uVar1 = FUN_01df33d0(&local_98);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_006f5580(param_1,&local_98), (uVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

