
void FUN_033739d8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  byte local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar4 = param_1[0x13];
  if (lVar4 != 0) {
    uStack_34 = (**(code **)(*param_1 + 0x218))();
    local_48 = PTR_DAT_04bc5780 + 0x10;
    local_3a = *(byte *)(param_1 + 0x3f);
    local_40 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    if (7 < local_3a) {
      local_3a = 0xff;
    }
    local_3c = 1;
    local_38 = 0xffffffff;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    pcStack_50 = "SwkbdInputSeq";
    lVar1 = FUN_02c1b3d0(lVar4,&local_58,param_1,&local_48);
    param_1[0x42] = lVar1;
    uVar2 = (**(code **)(*param_1 + 0x220))(param_1);
    uVar3 = 0x100;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    *(undefined2 *)(lVar1 + 0xa20) = uVar3;
    (**(code **)(*param_1 + 0x208))(param_1,lVar4);
  }
  return;
}

