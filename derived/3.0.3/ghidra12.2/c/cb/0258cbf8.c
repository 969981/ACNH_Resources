
void FUN_0258cbf8(long param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_3c = 0x4900000048;
  local_34 = 0x4d;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_3c + (long)*(int *)(param_1 + 0x28) * 4));
  puVar3 = PTR_DAT_04bb2020;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 2) {
    lVar5 = *(long *)(param_1 + 8);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "MoveMoney";
    if (lVar5 == 0) goto LAB_0258cd54;
    uVar4 = (ulong)*param_2;
LAB_0258cd4c:
    local_50 = puVar3 + 0x10;
  }
  else {
    if (iVar2 == 1) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "RepayMoney";
      local_50 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)*param_2);
        pcStack_48 = "IsRepayByDeposit";
        local_50 = puVar1;
        if (*(long *)(param_1 + 8) != 0) {
          FUN_026054d0(*(long *)(param_1 + 8),&local_50,(char)param_2[1]);
        }
      }
      bVar6 = *(byte *)(param_1 + 0x18);
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar6);
      uVar4 = FUN_026801f0(&local_50);
      uVar4 = uVar4 & 0xffffffff;
      lVar5 = *(long *)(param_1 + 8);
      local_50 = puVar3 + 0x10;
      pcStack_48 = "CurLoan";
      if (lVar5 == 0) goto LAB_0258cd54;
      goto LAB_0258cd4c;
    }
    if (iVar2 != 0) goto LAB_0258cd54;
    bVar6 = *(byte *)(param_1 + 0x18);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_50 = (undefined *)CONCAT71(local_50._1_7_,bVar6);
    uVar4 = FUN_026801f0(&local_50);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "SetLoan";
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) goto LAB_0258cd54;
    uVar4 = uVar4 & 0xffffffff;
  }
  FUN_02605660(lVar5,&local_50,uVar4);
LAB_0258cd54:
  FUN_02602f20(param_1);
  FUN_02603050(param_1);
  return;
}

