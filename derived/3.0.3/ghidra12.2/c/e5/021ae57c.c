
undefined8 FUN_021ae57c(long param_1,ulong param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  FUN_0252d11c(local_34);
  puVar2 = PTR_DAT_04bb2020;
  if ((local_34[0] < 8) && ((param_2 & 1) != 0)) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "LookNpcHouseVisitNpc";
    iVar3 = FUN_0274bce0(local_34,&local_48);
    if ((iVar3 == 0) && (param_3 < *(int *)(param_1 + 0x55d08) + 10U)) {
      lVar1 = param_1 + (ulong)param_4 * 0xba0;
      if (9 < param_4) {
        lVar1 = param_1;
      }
      if (*(char *)(lVar1 + 0xaf9) != '\0') {
        local_48 = puVar2 + 0x10;
        pcStack_40 = "HasAcquaintanceship";
        iVar3 = FUN_02746c30(param_4,local_34,&local_48);
        if ((iVar3 != 0) && (uVar4 = FUN_02152e10(lVar1 + 0x8b0), (uVar4 & 1) == 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

