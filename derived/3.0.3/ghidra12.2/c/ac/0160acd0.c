
void FUN_0160acd0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  char *pcStack_68;
  
  pvVar8 = (void *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = pvVar8;
  *(undefined4 *)(param_1 + 3) = 0x40;
  puVar3 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *param_1 = 0xffffffff41400000;
  param_1[1] = puVar1;
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') {
LAB_0160adb0:
        iVar5 = (int)lVar6;
        goto LAB_0160adb4;
      }
      lVar2 = *(long *)(puVar3 + 8) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0160adb0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0160adb0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    iVar5 = 0;
LAB_0160adb4:
    if (*(int *)(param_1 + 3) <= iVar5) {
      iVar5 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar5);
    *(undefined1 *)((long)pvVar8 + (long)iVar5) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  param_1[1] = puVar4 + 0x10;
  pcStack_68 = "EnvPalette";
  local_78 = &DAT_040f46f5;
  local_70 = local_80;
  FUN_016014b0(param_1 + 0xe,&local_70,&local_80,0);
  *(undefined1 *)((long)param_1 + 0x1bf3) = 0;
  lVar6 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x376) = 0x40;
  pvVar8 = (void *)((long)param_1 + 0x1bb4);
  param_1[0x374] = puVar1;
  param_1[0x375] = pvVar8;
  (**(code **)(lVar6 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_0160aebc;
      lVar2 = *(long *)(puVar3 + 8) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0160aebc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0160aebc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0160aebc:
    iVar5 = (int)lVar6;
    if (*(int *)(param_1 + 0x376) <= (int)lVar6) {
      iVar5 = *(int *)(param_1 + 0x376) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar5);
    *(undefined1 *)((long)pvVar8 + (long)iVar5) = 0;
  }
  param_1[0x374] = puVar4 + 0x10;
  param_1[0x37f] = 0x3f800000ffffffff;
  puVar1 = PTR_DAT_04bb2f70;
  *(undefined1 *)((long)param_1 + 0x1c53) = 0;
  pvVar8 = (void *)((long)param_1 + 0x1c14);
  param_1[0x380] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x382) = 0x40;
  lVar6 = *(long *)puVar3;
  param_1[0x381] = pvVar8;
  (**(code **)(lVar6 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_0160af8c;
      lVar2 = *(long *)(puVar3 + 8) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0160af8c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0160af8c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0160af8c:
    iVar5 = (int)lVar6;
    if (*(int *)(param_1 + 0x382) <= (int)lVar6) {
      iVar5 = *(int *)(param_1 + 0x382) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar5);
    *(undefined1 *)((long)pvVar8 + (long)iVar5) = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x38b) = 0;
  param_1[0x380] = puVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1c5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c64) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c6c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c74) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c8c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c7c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c84) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1c94) = 0xffffffff;
  memset(param_1 + 0x394,0,0x3848);
  param_1[0x395] = 0;
  puVar4 = PTR_DAT_04bbd948;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  param_1[0x398] = 0;
  param_1[0x399] = 0;
  param_1[0x39a] = 0;
  param_1[0x393] = puVar4 + 0x10;
  param_1[0x39b] = 0;
  param_1[0x39c] = 0;
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ac] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "EnvPalette";
  local_78 = &DAT_040f46f5;
  local_80 = puVar1;
  local_70 = puVar1;
  FUN_016014b0(param_1 + 0x3ad,&local_70,&local_80,0);
  uVar7 = *(undefined8 *)(puVar3 + 8);
  param_1[0x713] = puVar1;
  param_1[0x715] = puVar1;
  *(undefined4 *)(param_1 + 0x717) = 0x3f800000;
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  param_1[0x398] = 0;
  param_1[0x714] = uVar7;
  param_1[0x716] = uVar7;
  param_1[0x399] = 0;
  param_1[0x39a] = 0;
  param_1[0x39b] = 0;
  param_1[0x39c] = 0;
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ac] = 0;
  param_1[0x718] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x719) = 0;
  param_1[0x71a] = 0;
  param_1[0x71b] = 0;
  param_1[0x71c] = 0;
  param_1[0x71d] = 0;
  param_1[0x71e] = 0;
  param_1[0x71f] = 0;
  param_1[0x720] = 0;
  param_1[0x721] = 0;
  param_1[0x722] = 0;
  param_1[0x723] = 0;
  param_1[0x724] = 0;
  param_1[0x725] = 0;
  param_1[0x726] = 0;
  param_1[0x727] = 0;
  param_1[0x728] = 0;
  param_1[0x729] = 0;
  param_1[0x72a] = 0;
  param_1[0x72b] = 0;
  param_1[0x72c] = 0;
  param_1[0x72d] = 0;
  param_1[0x72e] = 0;
  param_1[0x72f] = 0;
  param_1[0x730] = 0;
  param_1[0x731] = 0;
  pcStack_68 = "EnvPalette";
  local_78 = &DAT_040f46f5;
  local_80 = puVar1;
  local_70 = puVar1;
  FUN_016014b0(param_1 + 0x732,&local_70,&local_80,0);
  uVar7 = *(undefined8 *)(puVar3 + 8);
  param_1[0xa98] = puVar1;
  param_1[0xa9a] = puVar1;
  param_1[0x71a] = 0;
  param_1[0x71b] = 0;
  param_1[0x71c] = 0;
  param_1[0x71d] = 0;
  *(undefined4 *)(param_1 + 0xa9c) = 0x3f800000;
  param_1[0xa99] = uVar7;
  param_1[0xa9b] = uVar7;
  param_1[0x71e] = 0;
  param_1[0x71f] = 0;
  param_1[0x720] = 0;
  param_1[0x721] = 0;
  param_1[0x722] = 0;
  param_1[0x723] = 0;
  param_1[0x724] = 0;
  param_1[0x725] = 0;
  param_1[0x726] = 0;
  param_1[0x727] = 0;
  param_1[0x728] = 0;
  param_1[0x729] = 0;
  param_1[0x72a] = 0;
  param_1[0x72b] = 0;
  param_1[0x72c] = 0;
  param_1[0x72d] = 0;
  param_1[0x72e] = 0;
  param_1[0x72f] = 0;
  param_1[0x730] = 0;
  param_1[0x731] = 0;
  return;
}

