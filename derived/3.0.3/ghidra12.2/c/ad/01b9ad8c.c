
uint FUN_01b9ad8c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [56];
  undefined1 auStack_f0 [56];
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  int local_90;
  undefined1 local_8c;
  long local_88;
  long lStack_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_8c = 0;
  local_a0 = 0xb;
  local_68 = 0;
  uStack_60 = 0;
  local_a8 = PTR_DAT_04bc0b78 + 0x10;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_98 = PTR_DAT_04bc0a78 + 0x10;
  local_38 = 0;
  local_90 = *(int *)PTR_DAT_04bc0b30;
  *(int *)PTR_DAT_04bc0b30 = local_90 + 1;
  lStack_80 = param_1 + 0x140;
  local_78 = param_1 + 0x400;
  uStack_70 = 0;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "MAIL_Tkk_BirthdayDemo";
  if (param_3 < 10) {
    puVar2 = (undefined8 *)(&PTR_s_Invalid_04a39810)[param_3];
  }
  else {
    puVar2 = &DAT_0407ebb1;
  }
  local_88 = param_1;
  FUN_006d8678(auStack_f0,"To_%s",puVar2);
  FUN_006d8678(auStack_128,"Msg_%s",puVar2);
  FUN_006d8678(auStack_160,"From_%s",puVar2);
  uVar1 = FUN_01bdc41c(&local_a8,&local_b8,auStack_f0,auStack_128,auStack_160,param_2);
  *(undefined1 *)(param_1 + 0x540) = 0;
  return uVar1 & 1;
}

