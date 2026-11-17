
void FUN_02b556e0(long param_1,undefined8 *param_2)

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
  
  pvVar7 = *(void **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 2);
  plVar9 = param_2 + 3;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[4];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[3] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[4] + lVar5) == '\0') goto LAB_02b55790;
      lVar2 = param_2[4] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02b55790;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02b55790;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02b55790:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x70) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x70) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x180);
  plVar9 = param_2 + 5;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[6];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[5] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[6] + lVar5) == '\0') goto LAB_02b55830;
      lVar2 = param_2[6] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02b55830;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02b55830;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02b55830:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x188) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x188) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x298);
  plVar9 = param_2 + 7;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[8];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[7] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[8] + lVar5) == '\0') goto LAB_02b558d0;
      lVar2 = param_2[8] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02b558d0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02b558d0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02b558d0:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x2a0) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x2a0) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x3b0);
  plVar9 = param_2 + 9;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = (void *)param_2[10];
  if (pvVar7 != pvVar8) {
    (**(code **)(param_2[9] + 0x18))(plVar9);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[10] + lVar5) == '\0') goto LAB_02b55970;
      lVar2 = param_2[10] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02b55970;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02b55970;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02b55970:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x3b8) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x3b8) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  (**(code **)(param_2[0xb] + 0x10))(param_2 + 0xb,param_1 + 0x4c0);
  (**(code **)(param_2[0xf] + 0x10))(param_2 + 0xf,param_1 + 0x4e0);
  (**(code **)(param_2[0x13] + 0x10))(param_2 + 0x13,param_1 + 0x500);
  (**(code **)(param_2[0x17] + 0x10))(param_2 + 0x17,param_1 + 0x520);
  lVar5 = param_1 + 0x18;
  FUN_03ebac90(lVar5,4,0,*param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cToON";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,0,&local_50);
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  puVar6[2] = FUN_02b55ba0;
  puVar6[3] = 0;
  puVar6[4] = FUN_02b55c40;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04aa4808;
  puVar6[1] = param_1;
  puVar6[6] = &LAB_02b55c7c;
  puVar6[7] = 0;
  pcStack_48 = "State::cON";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,1,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(1 < *(uint *)(param_1 + 0x40)) * 0x40)
  ;
  puVar6[4] = &LAB_02b55d54;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04aa4808;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_02b55c80;
  puVar6[3] = 0;
  puVar6[6] = &LAB_02b55db4;
  puVar6[7] = 0;
  pcStack_48 = "State::cToOFF";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,2,&local_50);
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)(2 < *(uint *)(param_1 + 0x40)) * 0x80)
  ;
  puVar6[4] = &LAB_02b55e58;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04aa4808;
  puVar6[1] = param_1;
  puVar6[2] = &LAB_02b55db8;
  puVar6[3] = 0;
  puVar6[6] = &LAB_02b55e94;
  puVar6[7] = 0;
  pcStack_48 = "State::cOFF";
  local_50 = puVar1;
  FUN_03ebaf40(lVar5,3,&local_50);
  lVar5 = 0xc0;
  if (*(uint *)(param_1 + 0x40) < 4) {
    lVar5 = 0;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x48) + lVar5);
  puVar6[2] = &LAB_02b55e98;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04aa4808;
  puVar6[1] = param_1;
  puVar6[4] = &LAB_02b55f6c;
  puVar6[5] = 0;
  puVar6[6] = &LAB_02b55fc8;
  puVar6[7] = 0;
  cVar4 = *(char *)((long)param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x540) = 1;
  uVar10 = 3;
  if (cVar4 != '\0') {
    uVar10 = 1;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  return;
}

