
void FUN_01275e98(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  char *__dest;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar6 = PTR_DAT_04bb2d88;
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar4 = s_invalid_name_040e8f53._0_8_;
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
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x208);
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar2;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  pcStack_f8 = local_ec;
  local_100 = puVar6 + 0x10;
  local_ec = (char  [8])uVar4;
  plVar1 = (long *)(param_1 + 0x3e0);
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  __dest = *(char **)(param_1 + 0x6f8);
  *(undefined1 **)(param_1 + 0x750) = &LAB_012762b0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  if (__dest != "_FailureType") {
    iVar3 = 0xc;
    if (*(int *)(param_1 + 0x700) < 0xd) {
      iVar3 = *(int *)(param_1 + 0x700) + -1;
    }
    memcpy(__dest,"_FailureType",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  local_6d = 0;
  *(undefined4 *)(param_1 + 0x748) = 0x12;
  *(undefined1 **)(param_1 + 0x6d8) = &LAB_0129d330;
  *(undefined ***)(param_1 + 0x6d0) = &PTR_LAB_0498af10;
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x5b8);
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x790);
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar4;
  plVar1 = (long *)(param_1 + 0x990);
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0xb90);
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_ec = (char  [8])uVar4;
  plVar1 = (long *)(param_1 + 0xd68);
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0xf68);
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar6 + 0x10;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  return;
}

