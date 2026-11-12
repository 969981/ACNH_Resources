
uint FUN_00727e38(long *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(**(code **)(*param_1 + 0xf0))();
  uVar1 = crc32b(*param_2,(uint)*pbVar2,0x4c11db7);
  *param_2 = uVar1;
  return ~uVar1;
}

