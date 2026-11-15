
uint FUN_0213514c(long param_1)

{
  int iVar1;
  long lVar2;
  uint extraout_w8;
  uint uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  lVar2 = FUN_021c9770(*(undefined4 *)(param_1 + 0x3c),1);
  uVar3 = extraout_w8;
  if (lVar2 != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "ReserveWarningBee";
    iVar1 = FUN_021ca500(lVar2,&local_30);
    uVar3 = (uint)(iVar1 != 0);
  }
  return lVar2 != 0 & uVar3;
}

