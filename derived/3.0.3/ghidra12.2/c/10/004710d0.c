
void FUN_004710d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00422030(PTR_DAT_048607b8,0x18,0x10);
  *param_1 = uVar1;
  FUN_0043a4d0(uVar1,0xff,0x180);
  param_1[1] = 0xf00000000;
  return;
}

