
void FUN_007621e0(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 long *param_6,uint param_7,undefined8 param_8,uint param_9,undefined8 param_10,
                 undefined8 param_11)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  
  puVar1 = param_1 + 0xd;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[6] = param_7;
  param_1[0xc] = 0x40;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_LAB_048fd2d8;
  *(uint **)(param_1 + 10) = puVar1;
  (**(code **)(*param_5 + 0x18))(param_5);
  puVar7 = (uint *)param_5[1];
  if (puVar1 != puVar7) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar5 = 0;
    do {
      if (*(char *)(param_5[1] + lVar5) == '\0') goto LAB_007622bc;
      lVar2 = param_5[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_007622bc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_007622bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007622bc:
    iVar3 = (int)lVar5;
    if ((int)param_1[0xc] <= (int)lVar5) {
      iVar3 = param_1[0xc] - 1;
    }
    memcpy(puVar1,puVar7,(long)iVar3);
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  puVar1 = param_1 + 0x23;
  *(undefined1 *)((long)param_1 + 0xcb) = 0;
  *(undefined ***)(param_1 + 0x1e) = &PTR_LAB_048fd2d8;
  *(uint **)(param_1 + 0x20) = puVar1;
  *(undefined **)(param_1 + 8) = puVar4 + 0x10;
  param_1[0x22] = 0x40;
  (**(code **)(*param_6 + 0x18))(param_6);
  puVar7 = (uint *)param_6[1];
  if (puVar1 != puVar7) {
    (**(code **)(*param_6 + 0x18))(param_6);
    lVar5 = 0;
    do {
      if (*(char *)(param_6[1] + lVar5) == '\0') goto LAB_0076238c;
      lVar2 = param_6[1] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0076238c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0076238c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0076238c:
    iVar3 = (int)lVar5;
    if ((int)param_1[0x22] <= (int)lVar5) {
      iVar3 = param_1[0x22] - 1;
    }
    memcpy(puVar1,puVar7,(long)iVar3);
    *(undefined1 *)((long)puVar1 + (long)iVar3) = 0;
  }
  *(undefined **)(param_1 + 0x1e) = puVar4 + 0x10;
  param_1[0x36] = param_9;
  *(undefined8 *)(param_1 + 0x34) = param_8;
  uVar6 = (ulong)param_2;
  *(undefined8 *)(param_1 + 0x38) = param_10;
  *(undefined8 *)(param_1 + 0x3a) = param_11;
  if (0xeb < param_2) {
    uVar6 = 0;
  }
  (&DAT_04c969c8)[uVar6] = param_1;
  return;
}

