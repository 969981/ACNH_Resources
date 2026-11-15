
void FUN_01e58500(long param_1)

{
  undefined *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *local_58;
  undefined4 local_50;
  char local_4c [7];
  undefined1 local_45;
  
  lVar7 = *(long *)(param_1 + 0x358);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  if (*(undefined1 **)(lVar7 + 1000) == &DAT_0409b647) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
LAB_01e585b8:
      local_50 = 8;
      local_45 = 0;
      local_4c[0] = '\0';
      local_60 = PTR_DAT_04bb3768 + 0x10;
      uVar2 = *(ushort *)(*(long *)PTR_DAT_04bb27f8 + 0xc0) & 0xf;
      local_58 = local_4c;
      FUN_036ddfc0(*(long *)PTR_DAT_04bb27f8,&local_60);
      bVar4 = false;
      if (*local_58 == 'o') {
        if (local_58[1] == 't') {
          bVar4 = local_58[2] == 'g';
        }
        else {
          bVar4 = false;
        }
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_58 = "MncMovetoBridge";
      local_60 = puVar1;
      iVar5 = FUN_02758850(&local_60);
      if ((iVar5 < 1) || (uVar2 != 2)) {
        pcStack_68 = "SeqOtgSickOngoing";
        local_70 = puVar1;
        iVar5 = FUN_02758850(&local_70);
        if (((iVar5 == 0) || (uVar2 != 1)) && (!bVar4)) {
          return;
        }
      }
      goto LAB_01e58764;
    }
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      cVar3 = (*(undefined1 **)(lVar7 + 1000))[uVar6];
      if (cVar3 != (&DAT_0409b647)[uVar6]) break;
      if (cVar3 == '\0') {
        if ((bool)(bVar4 & *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) goto LAB_01e585b8;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
  }
  lVar7 = *(long *)(param_1 + 0x358);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
  if (*(undefined1 **)(lVar7 + 1000) == &DAT_0409b647) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x5c2fda8c) {
      return;
    }
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    while( true ) {
      cVar3 = (*(undefined1 **)(lVar7 + 1000))[uVar6];
      if (cVar3 != (&DAT_0409b647)[uVar6]) {
        return;
      }
      if (cVar3 == '\0') break;
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
      if (uVar6 == 0x80001) {
        return;
      }
    }
    if (!(bool)(bVar4 & *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x5c2fda8c)) {
      return;
    }
  }
LAB_01e58764:
  *(ushort *)(param_1 + 0x636) = *(ushort *)(param_1 + 0x636) | 0x10;
  lVar7 = *(long *)(param_1 + 0x338);
  *(undefined4 *)(lVar7 + 0x2f4) = 0x40400000;
  *(undefined8 *)(lVar7 + 0x2e4) = 0x4040000000000000;
  *(undefined8 *)(lVar7 + 0x2ec) = 0;
  *(undefined8 *)(lVar7 + 0x2f8) = 0;
  return;
}

