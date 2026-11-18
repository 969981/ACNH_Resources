
void FUN_033b74f0(undefined4 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x210) + 0xf0))(param_2 + 0x210);
  *param_1 = *puVar3;
  lVar4 = (**(code **)(*(long *)(param_2 + 0x210) + 0xf0))(param_2 + 0x210);
  param_1[1] = *(undefined4 *)(lVar4 + 4);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x248) + 0xf0))(param_2 + 0x248);
  param_1[2] = *puVar3;
  pfVar5 = (float *)(**(code **)(*(long *)(param_2 + 0x278) + 0xf0))(param_2 + 0x278);
  param_1[3] = (int)(long)(*pfVar5 * 6.8356525e+08);
  pfVar5 = (float *)(**(code **)(*(long *)(param_2 + 0x2a8) + 0xf0))(param_2 + 0x2a8);
  param_1[4] = (int)(long)(*pfVar5 * 6.8356525e+08);
  pfVar5 = (float *)(**(code **)(*(long *)(param_2 + 0x2d8) + 0xf0))(param_2 + 0x2d8);
  param_1[5] = (int)(long)(*pfVar5 * 6.8356525e+08);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x308) + 0xf0))(param_2 + 0x308);
  plVar6 = (long *)(param_2 + 0x338);
  param_1[6] = *puVar3;
  lVar4 = (**(code **)(*(long *)(param_2 + 0x338) + 0xf0))(plVar6);
  if (**(char **)(lVar4 + 8) == '\0') {
    pvVar7 = *(void **)(param_1 + 10);
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    pvVar8 = DAT_05743420;
    if (pvVar7 != DAT_05743420) {
      (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
      lVar4 = 0;
      do {
        if (*(char *)((long)DAT_05743420 + lVar4) == '\0') goto LAB_033b76fc;
        if (*(char *)((long)DAT_05743420 + lVar4 + 1) == '\0') goto LAB_033b76f0;
        if (*(char *)((long)DAT_05743420 + lVar4 + 2) == '\0') goto LAB_033b76f8;
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      goto LAB_033b76e8;
    }
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    pvVar7 = *(void **)(param_1 + 10);
    (**(code **)(*plVar6 + 0x18))();
    pvVar8 = (void *)plVar6[1];
    if (pvVar7 != pvVar8) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar4 = 0;
      do {
        if (*(char *)(plVar6[1] + lVar4) == '\0') goto LAB_033b76fc;
        lVar1 = plVar6[1] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_033b76f0;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_033b76f8;
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
LAB_033b76e8:
      lVar4 = 0;
      goto LAB_033b76fc;
    }
  }
  goto LAB_033b7728;
LAB_033b76f0:
  lVar4 = lVar4 + 1;
  goto LAB_033b76fc;
LAB_033b76f8:
  lVar4 = lVar4 + 2;
LAB_033b76fc:
  iVar2 = (int)lVar4;
  if ((int)param_1[0xc] <= (int)lVar4) {
    iVar2 = param_1[0xc] + -1;
  }
  memcpy(pvVar7,pvVar8,(long)iVar2);
  *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
LAB_033b7728:
  plVar6 = (long *)(param_2 + 0x3c0);
  lVar4 = (**(code **)(*(long *)(param_2 + 0x3c0) + 0xf0))(plVar6);
  if (**(char **)(lVar4 + 8) == '\0') {
    plVar6 = (long *)(param_1 + 8);
    pvVar8 = *(void **)(param_1 + 0x20);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pvVar7 = *(void **)(param_1 + 10);
    if (pvVar8 == pvVar7) goto LAB_033b7868;
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 10) + lVar4) == '\0') goto LAB_033b783c;
      lVar1 = *(long *)(param_1 + 10) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_033b7830;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_033b7838;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0xf0))(plVar6);
    pvVar8 = *(void **)(param_1 + 0x20);
    (**(code **)(*plVar6 + 0x18))();
    pvVar7 = (void *)plVar6[1];
    if (pvVar8 == pvVar7) goto LAB_033b7868;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar4) == '\0') goto LAB_033b783c;
      lVar1 = plVar6[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_033b7830;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_033b7838;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
  goto LAB_033b783c;
LAB_033b7830:
  lVar4 = lVar4 + 1;
  goto LAB_033b783c;
LAB_033b7838:
  lVar4 = lVar4 + 2;
LAB_033b783c:
  iVar2 = (int)lVar4;
  if ((int)param_1[0x22] <= (int)lVar4) {
    iVar2 = param_1[0x22] + -1;
  }
  memcpy(pvVar8,pvVar7,(long)iVar2);
  *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
LAB_033b7868:
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x448) + 0xf0))(param_2 + 0x448);
  param_1[0x34] = *puVar3;
  param_1[0x35] = puVar3[1];
  param_1[0x36] = puVar3[2];
  return;
}

