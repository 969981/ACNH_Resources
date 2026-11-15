
bool FUN_02197a94(undefined8 param_1,uint param_2,byte *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  if (((7 < *param_3) || (1 < *(byte *)(*DAT_0537d558 + 0x476))) ||
     (lVar6 = FUN_0265cf70(param_2,param_3), lVar6 == 0)) {
    return false;
  }
  if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HasAcquaintanceship";
  local_50 = puVar1;
  iVar5 = FUN_02746e10(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),&local_50);
  if (iVar5 != 0) {
    pcStack_58 = "FirstMeetGreetAtThisVillage";
    local_60 = puVar1;
    iVar5 = FUN_02746e10(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),&local_60);
    bVar3 = false;
    if ((9 < param_2) || (iVar5 == 0)) goto LAB_02197bf4;
    if ((&DAT_053fee41)[(ulong)param_2 * 0xba0] != '\0') {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,(&DAT_053fe830)[(ulong)param_2 * 0x2e8]);
      if ((uint)(&DAT_053fe830)[(ulong)param_2 * 0x2e8] < 2) {
        local_50 = puVar2 + 0x10;
        pcStack_48 = "NnpcFinishHintTalk";
        iVar5 = FUN_0274bce0(param_3,&local_50);
        bVar3 = iVar5 != 0;
        goto LAB_02197bf4;
      }
    }
  }
  bVar3 = false;
LAB_02197bf4:
  if ((uVar4 & 1) != 0) {
    return bVar3;
  }
  if (*(long *)(lVar6 + 0x28) == 0) {
    return bVar3;
  }
  puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    return bVar3;
  }
  (**(code **)*puVar7)();
  return bVar3;
}

