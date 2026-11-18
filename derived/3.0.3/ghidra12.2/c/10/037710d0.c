
float FUN_037710d0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_84 [3];
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  int local_58;
  int iStack_54;
  
  lVar4 = *(long *)PTR_DAT_04bb27f8;
  if (*(long *)PTR_DAT_04bb59d8 == 0 || lVar4 == 0) {
    return 0.0;
  }
  FUN_0375dec0(&local_68,param_1,0);
  local_84[1] = 0.0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "SeqFirstVistCustomerOngoing";
  fVar5 = (float)iStack_54 * 5.0 + 5.0;
  fVar6 = (float)local_58 * 5.0 + 5.0;
  local_84[0] = fVar6;
  local_84[2] = fVar5;
  local_68 = puVar1;
  iVar2 = FUN_02758850(&local_68);
  if (iVar2 != 0) {
    pcStack_70 = "SeqFirstVisitCustomerArrivalTalk";
    local_78 = puVar1;
    iVar2 = FUN_02758850(&local_78);
    if (iVar2 == 0) goto LAB_0377119c;
  }
  uVar3 = FUN_036e49f0(lVar4);
  if ((uVar3 & 1) != 0) {
    local_84[2] = fVar5 + 5.0;
  }
LAB_0377119c:
  lVar4 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0xa8) != 0)) && (*(char *)(lVar4 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar4 + 0x28,local_84,0);
    fVar6 = local_84[0];
  }
  return fVar6;
}

