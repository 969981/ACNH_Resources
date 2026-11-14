
void FUN_01be6180(undefined8 *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  
  pvVar1 = (void *)((long)param_1 + 0x1c);
  param_1[2] = pvVar1;
  *(undefined4 *)(param_1 + 3) = 0x40;
  puVar5 = PTR_DAT_04bb2f70;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  *param_1 = &PTR_LAB_04a3d278;
  param_1[1] = puVar5 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar7 = (void *)param_2[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01be624c;
      lVar2 = param_2[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01be624c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01be624c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01be624c:
    iVar3 = (int)lVar6;
    if (*(int *)(param_1 + 3) <= (int)lVar6) {
      iVar3 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  pvVar1 = (void *)((long)param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  param_1[0xc] = puVar5 + 0x10;
  param_1[0xd] = pvVar1;
  param_1[1] = puVar4 + 0x10;
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar7 = (void *)param_3[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_01be630c;
      lVar2 = param_3[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01be630c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01be630c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01be630c:
    iVar3 = (int)lVar6;
    if (*(int *)(param_1 + 0xe) <= (int)lVar6) {
      iVar3 = *(int *)(param_1 + 0xe) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  param_1[0xc] = puVar4 + 0x10;
  return;
}

