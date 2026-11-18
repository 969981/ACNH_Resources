
void FUN_036f4c68(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bb2d88;
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar4 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(param_1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar2 = param_1 + 0x3b;
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar2,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  puVar1 = puVar3 + 0x10;
  local_6d = 0;
  local_f0 = 0x80;
  plVar2 = param_1 + 0x7b;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar2,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar2 = param_1 + 0xb6;
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar2,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_6d = 0;
  puVar3 = puVar3 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar4;
  plVar2 = param_1 + 0xf1;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar3;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(plVar2,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_f0 = 0x80;
  param_1 = param_1 + 300;
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar3;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar6 = FUN_03853d00(param_1,&local_100);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  return;
}

