
undefined8 FUN_017b3b54(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_88;
  undefined8 local_80;
  undefined **local_78;
  char *pcStack_70;
  undefined4 local_68;
  char local_64 [8];
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_25;
  int local_8;
  int iStack_4;
  
  if (1 < param_2 - 1U) {
    return 0;
  }
  local_25 = 0;
  local_68 = 0x40;
  pcStack_70 = local_64;
  local_5c = 0x3074;
  local_5a = 0;
  local_78 = &PTR_LAB_048fb9f8;
  local_64 = (char  [8])s_IdrMarket0_04067007._0_8_;
  FUN_038d13f0(&local_78,&DAT_040c7be9,param_2);
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0;
  uVar6 = FUN_00979580(&local_78,&local_88,&iStack_4,&local_8);
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_80;
    iVar2 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_80._4_4_;
    iVar4 = iVar1 + iStack_4 + -1;
    iVar5 = iVar2 + local_8 + -1;
    iVar3 = iVar1;
    if (iVar4 <= iVar1) {
      iVar3 = iVar4;
    }
    if (iVar1 <= iVar4) {
      iVar1 = iVar4;
    }
    iVar4 = iVar2;
    if (iVar5 <= iVar2) {
      iVar4 = iVar5;
    }
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_017b3420(param_1);
    uVar7 = 1;
  }
  return uVar7;
}

