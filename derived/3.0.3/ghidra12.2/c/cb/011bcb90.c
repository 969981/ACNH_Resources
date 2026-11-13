
void FUN_011bcb90(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *local_50;
  char *pcStack_48;
  
  pvVar7 = *(void **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 2);
  plVar9 = param_2 + 3;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[4];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[3] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[4] + lVar5) == '\0') goto LAB_011bcc40;
      lVar2 = param_2[4] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_011bcc40;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_011bcc40;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_011bcc40:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x78) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x78) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x188);
  plVar9 = param_2 + 5;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[6];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[5] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[6] + lVar5) == '\0') goto LAB_011bcce0;
      lVar2 = param_2[6] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_011bcce0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_011bcce0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_011bcce0:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 400) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 400) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x2a0);
  plVar9 = param_2 + 7;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[8];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[7] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[8] + lVar5) == '\0') goto LAB_011bcd80;
      lVar2 = param_2[8] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_011bcd80;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_011bcd80;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_011bcd80:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x2a8) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x2a8) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x3b8);
  plVar9 = param_2 + 9;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[10];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[9] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[10] + lVar5) == '\0') goto LAB_011bce20;
      lVar2 = param_2[10] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_011bce20;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_011bce20;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_011bce20:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x3c0) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  (**(code **)(param_2[0xb] + 0x10))(param_2 + 0xb,param_1 + 0x4c8);
  (**(code **)(param_2[0xf] + 0x10))(param_2 + 0xf,param_1 + 0x4e8);
  (**(code **)(param_2[0x13] + 0x10))(param_2 + 0x13,param_1 + 0x508);
  (**(code **)(param_2[0x17] + 0x10))(param_2 + 0x17,param_1 + 0x528);
  lVar5 = param_1 + 0x18;
  FUN_03ebac90(lVar5,4,0,*param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cToON";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,0,&local_50);
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  puVar6[2] = FUN_011bd050;
  puVar6[3] = 0;
  puVar6[4] = FUN_011bd0f0;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04986998;
  puVar6[1] = param_1;
  puVar6[6] = &LAB_011bd124;
  puVar6[7] = 0;
  pcStack_48 = "State::cON";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,1,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(1 < *(uint *)(param_1 + 0x40)) * 0x40)
  ;
  puVar6[4] = &LAB_011bd1fc;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04986998;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_011bd128;
  puVar6[3] = 0;
  puVar6[6] = &LAB_011bd24c;
  puVar6[7] = 0;
  pcStack_48 = "State::cToOFF";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,2,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(2 < *(uint *)(param_1 + 0x40)) * 0x80)
  ;
  puVar6[4] = &LAB_011bd2f0;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04986998;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_011bd250;
  puVar6[3] = 0;
  puVar6[6] = &LAB_011bd324;
  puVar6[7] = 0;
  pcStack_48 = "State::cOFF";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,3,&local_50);
  lVar5 = 0xc0;
  if (*(uint *)(param_1 + 0x40) < 4) {
    lVar5 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
  puVar6[2] = &LAB_011bd328;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04986998;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_011bd3fc;
  puVar6[5] = 0;
  puVar6[6] = &LAB_011bd448;
  puVar6[7] = 0;
  cVar4 = *(char *)((long)param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x548) = 1;
  uVar10 = 3;
  if (cVar4 != '\0') {
    uVar10 = 1;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  return;
}

