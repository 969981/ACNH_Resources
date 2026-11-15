
uint FUN_01f7a874(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  undefined *local_20;
  uint local_18;
  uint uStack_14;
  
  local_18 = (uint)*param_2;
  uStack_14 = (uint)param_2[1];
  local_20 = PTR_DAT_04bb2010 + 0x10;
  uVar1 = FUN_0168bb28(&local_20);
  return (uVar1 ^ 0xffffffff) & 1;
}

