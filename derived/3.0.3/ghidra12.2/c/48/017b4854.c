
uint FUN_017b4854(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  char local_64 [8];
  char local_5c [5];
  char acStack_57 [3];
  char acStack_54 [5];
  undefined1 local_4f;
  undefined1 local_25;
  
  local_68 = 0x40;
  pcStack_70 = local_64;
  local_25 = 0;
  local_4f = 0;
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  local_64 = (char  [8])s_IdrWherearenOffice00__040a05cb._0_8_;
  local_5c = (char  [5])s_IdrWherearenOffice00__040a05cb._8_5_;
  acStack_57 = (char  [3])s_IdrWherearenOffice00__040a05cb._13_3_;
  acStack_54 = (char  [5])s_IdrWherearenOffice00__040a05cb._16_5_;
  FUN_038d13f0(&local_78,&DAT_040c7be9,param_2);
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0;
  uVar6 = FUN_00979580(&local_78,&local_88,&iStack_8c,&local_90);
  if ((uVar6 & 1) != 0) {
    iVar1 = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_80;
    iVar2 = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_80._4_4_;
    iVar4 = iVar1 + iStack_8c + -1;
    iVar5 = iVar2 + local_90 + -1;
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
  }
  return uVar6 & 1;
}

