
void FUN_01c5b1a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04bb2d88;
  uVar3 = s_invalid_name_040e8f53._8_4_;
  uVar2 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  local_f0 = 0x80;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar5 = FUN_03853d00(&DAT_0534f230,&local_100);
  if ((uVar5 & 1) != 0) {
    (**(code **)(DAT_0534f230 + 0x20))(&DAT_0534f230,&local_100,param_2);
  }
  local_f0 = 0x80;
  local_6d = 0;
  local_ec = (char  [8])uVar2;
  local_e4 = (char  [4])uVar3;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar5 = FUN_03853d00(&DAT_0534cf20,&local_100);
  if ((uVar5 & 1) != 0) {
    (**(code **)(DAT_0534cf20 + 0x20))(&DAT_0534cf20,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar2;
  local_e4 = (char  [4])uVar3;
  local_e0 = 0;
  local_100 = puVar4 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar5 = FUN_03853d00(&DAT_0534ded8,&local_100);
  if ((uVar5 & 1) != 0) {
    (**(code **)(DAT_0534ded8 + 0x20))(&DAT_0534ded8,&local_100,param_2);
  }
  local_f0 = 0x80;
  local_6d = 0;
  local_ec = (char  [8])uVar2;
  local_e4 = (char  [4])uVar3;
  local_e0 = 0;
  local_100 = puVar4 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar5 = FUN_03853d00(&DAT_0534e128,&local_100);
  if ((uVar5 & 1) != 0) {
    (**(code **)(DAT_0534e128 + 0x20))(&DAT_0534e128,&local_100,param_2);
  }
  return;
}

