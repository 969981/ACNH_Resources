
void FUN_02042140(undefined8 param_1)

{
  int iVar1;
  undefined1 *__src;
  undefined1 *__dest;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long local_7f8;
  undefined1 *local_7f0;
  undefined8 local_760;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 local_750;
  undefined8 local_74c;
  ulong local_744;
  undefined8 local_73c;
  undefined1 *local_730;
  undefined1 *local_728;
  int local_720;
  undefined1 local_71c [127];
  undefined1 local_69d;
  undefined4 local_698;
  undefined2 local_694;
  undefined8 local_690;
  undefined *local_688;
  undefined1 *local_680;
  undefined4 local_678;
  undefined1 local_674 [7];
  undefined1 local_66d;
  undefined1 auStack_664 [4];
  undefined1 auStack_660 [120];
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  
  uVar2 = FUN_0291e130(auStack_660,auStack_664,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (((DAT_053fee41 != '\0') && (DAT_053fede8 != 0)) && (*(int *)(DAT_053fede8 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,0);
    uVar4 = 0;
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_053ff9e1 != '\0') && (DAT_053ff988 != 0)) && (*(int *)(DAT_053ff988 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 1;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,1);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05400581 != '\0') && (DAT_05400528 != 0)) && (*(int *)(DAT_05400528 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 2;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,2);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05401121 != '\0') && (DAT_054010c8 != 0)) && (*(int *)(DAT_054010c8 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 3;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,3);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05401cc1 != '\0') && (DAT_05401c68 != 0)) && (*(int *)(DAT_05401c68 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 4;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,4);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05402861 != '\0') && (DAT_05402808 != 0)) && (*(int *)(DAT_05402808 + 4) == 0x21)) {
    local_66d = 0;
    uVar4 = 5;
    local_678 = 8;
    local_674[0] = 0;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,5);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05403401 != '\0') && (DAT_054033a8 != 0)) && (*(int *)(DAT_054033a8 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 6;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,6);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05403fa1 != '\0') && (DAT_05403f48 != 0)) && (*(int *)(DAT_05403f48 + 4) == 0x21)) {
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    uVar4 = 7;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,7);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (((DAT_05404b41 != '\0') && (DAT_05404ae8 != 0)) && (*(int *)(DAT_05404ae8 + 4) == 0x21)) {
    uVar4 = 8;
    local_66d = 0;
    local_678 = 8;
    local_674[0] = 0;
    local_688 = PTR_DAT_04bb3768 + 0x10;
    local_680 = local_674;
    uVar2 = FUN_021d7c00(&local_688,8);
    if ((uVar2 & 1) != 0) goto LAB_020424f8;
  }
  if (DAT_054056e1 == '\0') {
    return;
  }
  if (DAT_05405688 == 0) {
    return;
  }
  if (*(int *)(DAT_05405688 + 4) != 0x21) {
    return;
  }
  local_66d = 0;
  uVar4 = 9;
  local_678 = 8;
  local_674[0] = 0;
  local_688 = PTR_DAT_04bb3768 + 0x10;
  local_680 = local_674;
  uVar2 = FUN_021d7c00(&local_688,9);
  if ((uVar2 & 1) == 0) {
    return;
  }
LAB_020424f8:
  local_69d = 0;
  local_760 = 0xa00000000;
  local_74c = 0x800000003f800000;
  local_720 = 0x80;
  local_744 = 0;
  local_728 = local_71c;
  local_73c = 0;
  local_71c[0] = 0;
  local_690 = 0;
  local_694 = 0;
  local_758 = local_5e8;
  uStack_754 = local_5e4;
  local_750 = local_5e0;
  local_730 = &DAT_048fc708;
  local_698 = 7;
  (**(code **)(local_688 + 0x18))(&local_688);
  FUN_0074fda4(&local_7f8,"%s/AIC:CafeCustomer/AIF:AI_NPC_MuseumCafeCustomer",local_680);
  __dest = local_728;
  (**(code **)(local_7f8 + 0x18))(&local_7f8);
  __src = local_7f0;
  if (__dest != local_7f0) {
    (**(code **)(local_7f8 + 0x18))(&local_7f8);
    lVar3 = 0;
    do {
      if (local_7f0[lVar3] == '\0') goto LAB_020425fc;
      if (local_7f0[lVar3 + 1] == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_020425fc;
      }
      if (local_7f0[lVar3 + 2] == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_020425fc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_020425fc:
    iVar1 = (int)lVar3;
    if (local_720 <= (int)lVar3) {
      iVar1 = local_720 + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
  local_744 = (ulong)uVar4;
  local_73c = CONCAT44(1,(undefined4)local_73c);
  if (*(int *)(*(long *)PTR_DAT_04bb4128 + 0x244) == 0) {
    FUN_020e6430(*(long *)PTR_DAT_04bb4128,10);
  }
  FUN_02030e80(param_1,&local_760);
  return;
}

