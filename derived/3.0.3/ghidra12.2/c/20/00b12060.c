
undefined4 * FUN_00b12060(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  
  pvVar7 = *(void **)(param_1 + 0x2a);
  *param_1 = *param_2;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((long)param_1 + 0x42) = *(undefined1 *)((long)param_2 + 0x42);
  *(undefined1 *)((long)param_1 + 0x43) = *(undefined1 *)((long)param_2 + 0x43);
  param_1[0x11] = param_2[0x11];
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  param_1[0x16] = param_2[0x16];
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x6e) = *(undefined1 *)((long)param_2 + 0x6e);
  *(undefined1 *)((long)param_1 + 0x6f) = *(undefined1 *)((long)param_2 + 0x6f);
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  uVar5 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  plVar9 = (long *)(param_2 + 0x28);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = *(void **)(param_2 + 0x2a);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(plVar9);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x2a) + lVar6) == '\0') goto LAB_00b121dc;
      lVar1 = *(long *)(param_2 + 0x2a) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00b121dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00b121dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00b121dc:
    iVar2 = (int)lVar6;
    if ((int)param_1[0x2c] <= (int)lVar6) {
      iVar2 = param_1[0x2c] + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x38);
  plVar9 = (long *)(param_2 + 0x36);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  pvVar8 = *(void **)(param_2 + 0x38);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)(param_2 + 0x36) + 0x18))(plVar9);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x38) + lVar6) == '\0') goto LAB_00b1227c;
      lVar1 = *(long *)(param_2 + 0x38) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00b1227c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00b1227c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00b1227c:
    iVar2 = (int)lVar6;
    if ((int)param_1[0x3a] <= (int)lVar6) {
      iVar2 = param_1[0x3a] + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  return param_1;
}

