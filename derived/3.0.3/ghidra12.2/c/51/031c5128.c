
void FUN_031c5128(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  byte local_4a;
  undefined4 local_48;
  long local_40;
  undefined8 uStack_38;
  
  lVar3 = param_1[0x13];
  lVar1 = (**(code **)(*param_1 + 0x290))();
  lVar2 = 0;
  if (lVar1 != 0) {
    local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_58 = PTR_DAT_04bc5008 + 0x10;
    local_4c = 1;
    local_48 = 0xffffffff;
    uStack_38 = (**(code **)(*param_1 + 0x260))(param_1);
    local_4a = *(byte *)(param_1 + 0x3f);
    local_68 = PTR_DAT_04bb2020 + 0x10;
    if (7 < local_4a) {
      local_4a = 0xff;
    }
    pcStack_60 = "NameWindowCtrlSeq";
    local_40 = lVar1;
    lVar2 = FUN_02bcffa8(lVar3,&local_68,param_1,&local_58);
  }
  param_1[0x3831] = lVar2;
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}

