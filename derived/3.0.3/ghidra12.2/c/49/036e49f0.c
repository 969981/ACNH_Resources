
ulong FUN_036e49f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined *local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  int local_48;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  local_48 = *(int *)(param_1 + 8);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "SeqFirstVistCustomerOngoing";
  local_68 = puVar1;
  iVar4 = FUN_02758850(&local_68);
  if (iVar4 != 0) {
    pcStack_38 = "SeqFirstVisitCustomerArrivalTalk";
    local_40 = puVar1;
    iVar4 = FUN_02758850(&local_40);
    if (iVar4 == 0) {
      return 1;
    }
  }
  if ((*(byte *)(param_1 + 0x1a70) >> 1 & 1) != 0) {
    return 0;
  }
  local_60 = "SeqFirstVistCustomerOngoing";
  local_68 = puVar2 + 0x10;
  iVar4 = FUN_02758850(&local_68);
  if (iVar4 == 0) {
LAB_036e4a84:
    FUN_0252d11c(local_44);
    if (local_44[0] < 8) {
      local_60 = "WHEREAREN_CustomerTalkReserve_Garden";
      local_68 = puVar2 + 0x10;
      iVar4 = FUN_02753180(local_44,&local_68);
      if (iVar4 == 0) {
        pcStack_38 = "WHEREAREN_MncTalkReserve_Garden";
        local_40 = puVar2 + 0x10;
        iVar4 = FUN_02753180(local_44,&local_40);
        if (iVar4 == 0) goto LAB_036e4c00;
      }
      goto LAB_036e4ad4;
    }
  }
  else {
    pcStack_38 = "SeqFirstVisitCustomerArrivalTalk";
    local_40 = puVar2 + 0x10;
    iVar4 = FUN_02758850(&local_40);
    if (iVar4 != 0) goto LAB_036e4a84;
LAB_036e4ad4:
    local_4d = 0;
    local_58 = 8;
    local_60 = local_54;
    local_54[0] = 0;
    local_68 = PTR_DAT_04bb3768 + 0x10;
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar8 = *(long *)(DAT_05ab7608 + 8), lVar8 == 0)) {
      uVar7 = *(undefined2 *)(param_1 + 0x2a);
    }
    else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
            (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar7 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar7 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    uVar6 = FUN_0376b510(&local_68,uVar7);
    if ((uVar6 & 1) != 0) {
      (**(code **)(local_68 + 0x18))(&local_68);
      (**(code **)(local_68 + 0x18))(&local_68);
      if (local_60 == &DAT_0409b647) {
        return 0;
      }
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_60[uVar6] != (&DAT_0409b647)[uVar6]) break;
        if (local_60[uVar6] == '\0') {
          if (bVar3) {
            return 0;
          }
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
    }
  }
LAB_036e4c00:
  local_60 = "SeqFirstVistCustomerOngoing";
  local_68 = puVar2 + 0x10;
  iVar4 = FUN_02758850(&local_68);
  if (iVar4 != 0) {
    pcStack_38 = "SeqFirstVisitCustomerArrivalTalk";
    local_40 = puVar2 + 0x10;
    iVar4 = FUN_02758850(&local_40);
    if (iVar4 == 0) goto LAB_036e4c7c;
  }
  FUN_0252d11c(local_44);
  if (7 < local_44[0]) {
    return 0;
  }
  local_60 = "WHEREAREN_CustomerTalkReserve_Garden";
  local_68 = puVar2 + 0x10;
  iVar4 = FUN_02753180(local_44,&local_68);
  if (iVar4 == 0) {
    pcStack_38 = "WHEREAREN_MncTalkReserve_Garden";
    local_40 = puVar2 + 0x10;
    uVar6 = FUN_02753180(local_44,&local_40);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
  }
LAB_036e4c7c:
  if (local_48 == 3) {
    return 1;
  }
  return (ulong)(local_48 == 4);
}

