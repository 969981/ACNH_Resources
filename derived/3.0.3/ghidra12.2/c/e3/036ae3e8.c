
void FUN_036ae3e8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  ulong uVar8;
  char *__dest;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bb2d88;
  uVar6 = s_invalid_name_040e8f53._8_4_;
  uVar5 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(param_1,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar2 = param_1 + 0x40;
  local_6d = 0;
  local_ec = (char  [8])uVar5;
  local_e4 = (char  [4])uVar6;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar2,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  __dest = (char *)param_1[0xa8];
  param_1[0xb3] = (long)&LAB_036ae6e0;
  param_1[0xb4] = 0;
  if (__dest != "_FacilityActionType") {
    iVar4 = 0x13;
    if ((int)param_1[0xa9] < 0x14) {
      iVar4 = (int)param_1[0xa9] + -1;
    }
    memcpy(__dest,"_FacilityActionType",(long)iVar4);
    __dest[iVar4] = '\0';
  }
  puVar7 = PTR_DAT_04bbbf88;
  local_6d = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0x3d;
  puVar1 = puVar3 + 0x10;
  local_ec = (char  [8])uVar5;
  plVar2 = param_1 + 0x80;
  param_1[0xa4] = (long)&LAB_036c6660;
  local_e4 = (char  [4])uVar6;
  local_f0 = 0x80;
  param_1[0xa3] = (long)(puVar7 + 0x10);
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar2,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar2 = param_1 + 0xc0;
  local_6d = 0;
  local_ec = (char  [8])uVar5;
  local_e4 = (char  [4])uVar6;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar2,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_6d = 0;
  puVar3 = puVar3 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar5;
  plVar2 = param_1 + 0x100;
  local_e4 = (char  [4])uVar6;
  local_e0 = 0;
  local_100 = puVar3;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar2,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_f0 = 0x80;
  param_1 = param_1 + 0x144;
  local_6d = 0;
  local_ec = (char  [8])uVar5;
  local_e4 = (char  [4])uVar6;
  local_e0 = 0;
  local_100 = puVar3;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(param_1,&local_100);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  return;
}

