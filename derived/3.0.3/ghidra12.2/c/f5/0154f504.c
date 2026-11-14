
void FUN_0154f504(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  local_18 = 0xfffe;
  FUN_0277d4ac(&local_18);
  puVar1 = param_1 + 1;
  *puVar1 = 0xfffe;
  *param_1 = &PTR_LAB_049a7f80;
  FUN_0277d4ac(puVar1);
  *(undefined4 *)puVar1 = (undefined4)local_18;
  *(undefined4 *)((long)param_1 + 0xc) = local_18._4_4_;
  param_1[2] = &DAT_048f9750;
  param_1[3] = 0;
  return;
}

