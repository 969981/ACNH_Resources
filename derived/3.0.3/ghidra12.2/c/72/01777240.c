
void FUN_01777240(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char local_94 [63];
  undefined1 local_55;
  
  if ((param_3 & 1) == 0) {
    FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),*(undefined8 *)(param_4 + 0x88),&DAT_0528ca20);
    return;
  }
  lVar4 = FUN_0074f690(param_1,&DAT_0528c980);
  if (lVar4 != 0) {
    local_94[0] = '\0';
    local_98 = 0x40;
    lVar5 = 0;
    local_55 = 0;
    local_a8 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      if (local_94[lVar5] == '\0') goto LAB_01777318;
      if (local_94[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01777318;
      }
      if (local_94[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01777318;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01777318:
    uVar1 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    local_a0 = local_94;
    (**(code **)(DAT_0528c9b0 + 0x18))(&DAT_0528c9b0);
    lVar5 = 0;
    do {
      if (*(char *)((long)DAT_0528c9b8 + lVar5) == '\0') goto LAB_0177737c;
      if (*(char *)((long)DAT_0528c9b8 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177737c;
      }
      if (*(char *)((long)DAT_0528c9b8 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177737c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177737c:
    uVar2 = (uint)lVar5;
    if ((int)(local_98 - uVar1) <= (int)(uint)lVar5) {
      uVar2 = local_98 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      (**(code **)(DAT_0528c9b0 + 0x18))(&DAT_0528c9b0);
      memcpy(local_94 + uVar1,DAT_0528c9b8,(ulong)uVar2);
      local_94[(int)(uVar2 + uVar1)] = '\0';
    }
    pcVar3 = local_a0;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar5 = 0;
    do {
      if (local_a0[lVar5] == '\0') goto LAB_0177741c;
      if (local_a0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177741c;
      }
      if (local_a0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177741c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177741c:
    uVar1 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
    lVar5 = 0;
    do {
      if (*(char *)((long)DAT_0528cc18 + lVar5) == '\0') goto LAB_0177747c;
      if (*(char *)((long)DAT_0528cc18 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177747c;
      }
      if (*(char *)((long)DAT_0528cc18 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177747c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177747c:
    uVar2 = (uint)lVar5;
    if ((int)(local_98 - uVar1) <= (int)(uint)lVar5) {
      uVar2 = local_98 + ~uVar1;
    }
    if (0 < (int)uVar2) {
      (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
      memcpy(pcVar3 + uVar1,DAT_0528cc18,(ulong)uVar2);
      pcVar3[(int)(uVar2 + uVar1)] = '\0';
    }
    if ((*(long *)(lVar4 + 8) != 0) && (lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0x20), lVar4 != 0))
    {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar4 = FUN_038fe510(lVar4,local_a0);
      if (lVar4 != 0) {
        FUN_039a9540(*(undefined8 *)(param_2 + 0x1150),lVar4,&DAT_0528ca20);
      }
    }
  }
  return;
}

