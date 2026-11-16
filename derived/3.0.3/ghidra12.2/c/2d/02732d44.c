
undefined8 FUN_02732d44(long *param_1)

{
  long lVar1;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = param_1[10];
  local_40 = &local_38;
  local_68[0] = 2;
  local_58 = DAT_0417b854;
  uStack_50 = DAT_0417b85c;
  local_48 = DAT_0417b864;
  local_60 = &local_58;
  local_38 = lVar1;
  FUN_02769ac0(&local_40,local_68);
  local_68[0] = 2;
  local_58 = DAT_0417b86c;
  uStack_50 = DAT_0417b874;
  local_48 = DAT_0417b87c;
  local_60 = &local_58;
  FUN_02769ac0(&local_40,local_68);
  FUN_027692f0(lVar1);
  FUN_027696a0(lVar1);
  if ((*param_1 != 0) && (param_1[10] != 0)) {
    FUN_027699b0();
  }
  return 1;
}

