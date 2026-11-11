
void FUN_003e63e4(long *param_1)

{
  undefined *puVar1;
  
  FUN_00204400(param_1,0x73);
  puVar1 = PTR_DAT_04bd2460 + 0x238;
  *param_1 = (long)(PTR_DAT_04bd2460 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_004020ac(param_1 + 5,0x73);
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  puVar1 = PTR_DAT_04bd2468;
  param_1[0x19] = 0xea60000000a7;
  param_1[0x1a] = 0x4000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = (long)(puVar1 + 0x2e8);
  param_1[0x17] = (long)(puVar1 + 0x468);
  param_1[0x1b] = 0x8000;
  param_1[0x1c] = 0x10000;
  param_1[0x1d] = 0x10000;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_DS-4_6_11-Release");
  return;
}

