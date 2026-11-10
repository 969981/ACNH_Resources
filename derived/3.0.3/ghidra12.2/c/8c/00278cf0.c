
void FUN_00278cf0(long param_1)

{
  undefined1 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_002282f0(&local_18);
  *(undefined8 *)(param_1 + 0x70) = local_18;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar1 = FUN_0026aa40(DAT_04c603c8);
  *(undefined1 *)(param_1 + 0x81) = uVar1;
  *(undefined2 *)(param_1 + 0x82) = 0xff;
  *(char *)(param_1 + 0x80) = *(char *)(param_1 + 0x80) + '\x01';
  return;
}

