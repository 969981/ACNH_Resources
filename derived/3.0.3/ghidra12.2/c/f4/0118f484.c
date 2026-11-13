
void FUN_0118f484(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bb2d88;
  uVar4 = s_invalid_name_040e8f53._8_4_;
  uVar3 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  plVar1 = (long *)(param_1 + 8);
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar2;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x208);
  local_6d = 0;
  local_ec = (char  [8])uVar3;
  local_e4 = (char  [4])uVar4;
  local_e0 = 0;
  local_100 = puVar2;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar3;
  plVar1 = (long *)(param_1 + 0x408);
  local_e4 = (char  [4])uVar4;
  local_e0 = 0;
  local_100 = puVar5 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x608);
  local_6d = 0;
  local_ec = (char  [8])uVar3;
  local_e4 = (char  [4])uVar4;
  local_e0 = 0;
  local_100 = puVar5 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  return;
}

