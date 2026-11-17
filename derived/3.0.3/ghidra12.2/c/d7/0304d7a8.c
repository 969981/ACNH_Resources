
void FUN_0304d7a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *local_70;
  char *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined2 local_54;
  byte local_52;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb2718;
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    local_52 = *(byte *)(param_1 + 0x1f8);
    local_60 = PTR_DAT_04bc7dd8 + 0x10;
    local_58 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    if (7 < local_52) {
      local_52 = 0xff;
    }
    local_54 = 1;
    local_48 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "MyDesignExchangeSearchTypeWinSeq";
    local_70 = puVar1;
    uVar3 = FUN_0302e618(lVar5,&local_70,param_1,&local_60);
    lVar4 = *(long *)puVar2;
    *(undefined8 *)(param_1 + 0x220) = uVar3;
    local_60 = PTR_DAT_04bc5780 + 0x10;
    local_58 = *(undefined4 *)(*(long *)(lVar4 + 0x418) + 0xc);
    local_54 = 1;
    local_50 = 0x14ffffffff;
    local_68 = "SwkbdInputSeq";
    local_52 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_52) {
      local_52 = 0xff;
    }
    local_70 = puVar1;
    lVar5 = FUN_02c1b3d0(lVar5,&local_70,param_1,&local_60);
    *(long *)(param_1 + 0x228) = lVar5;
    *(undefined2 *)(lVar5 + 0xa20) = 0;
  }
  return;
}

