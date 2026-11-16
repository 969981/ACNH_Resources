
void FUN_027cc880(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_40;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb5008;
  local_48 = PTR_DAT_04bc43f8 + 0x10;
  uVar1 = param_1;
  if (9 < param_1) {
    uVar1 = 0;
  }
  local_40 = (&DAT_05636e30)[(int)uVar1];
  local_34 = param_1;
  FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_48,0x6622bd46);
  FUN_02b3acc0(*(long *)puVar2 + 0x26e8,param_1,0x6622bd46);
  return;
}

