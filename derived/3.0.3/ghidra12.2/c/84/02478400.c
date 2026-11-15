
long FUN_02478400(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  
  pvVar5 = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0247849c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0247849c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0247849c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0247849c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x60);
  plVar7 = param_2 + 0xb;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[0xc];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[0xb] + 0x18))(plVar7);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0xc] + lVar3) == '\0') goto LAB_0247853c;
      lVar1 = param_2[0xc] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0247853c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0247853c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0247853c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0xb8);
  plVar7 = param_2 + 0x16;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[0x17];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[0x16] + 0x18))(plVar7);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0x17] + lVar3) == '\0') goto LAB_024785dc;
      lVar1 = param_2[0x17] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_024785dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_024785dc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_024785dc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xc0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  *(char *)(param_1 + 0x108) = (char)param_2[0x21];
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((long)param_2 + 0x10c);
  lVar3 = param_2[0x22];
  *(undefined1 *)(param_1 + 0x112) = *(undefined1 *)((long)param_2 + 0x112);
  *(short *)(param_1 + 0x110) = (short)lVar3;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)((long)param_2 + 0x114);
  *(int *)(param_1 + 0x118) = (int)param_2[0x23];
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)((long)param_2 + 0x11c);
  *(int *)(param_1 + 0x120) = (int)param_2[0x24];
  *(undefined2 *)(param_1 + 0x124) = *(undefined2 *)((long)param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x126) = *(undefined1 *)((long)param_2 + 0x126);
  *(undefined1 *)(param_1 + 0x127) = *(undefined1 *)((long)param_2 + 0x127);
  *(int *)(param_1 + 0x128) = (int)param_2[0x25];
  uVar4 = *(undefined8 *)((long)param_2 + 300);
  *(undefined2 *)(param_1 + 0x134) = *(undefined2 *)((long)param_2 + 0x134);
  *(undefined8 *)(param_1 + 300) = uVar4;
  *(char *)(param_1 + 0x138) = (char)param_2[0x27];
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)((long)param_2 + 0x13c);
  *(short *)(param_1 + 0x140) = (short)param_2[0x28];
  *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)((long)param_2 + 0x142);
  *(undefined1 *)(param_1 + 0x143) = *(undefined1 *)((long)param_2 + 0x143);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)((long)param_2 + 0x144);
  lVar3 = param_2[0x29];
  *(undefined1 *)(param_1 + 0x14c) = *(undefined1 *)((long)param_2 + 0x14c);
  *(int *)(param_1 + 0x148) = (int)lVar3;
  return param_1;
}

