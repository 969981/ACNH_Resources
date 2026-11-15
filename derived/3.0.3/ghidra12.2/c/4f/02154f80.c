
void FUN_02154f80(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  
  *param_1 = &PTR_LAB_04a755a8;
  param_1[1] = param_2;
  memset(param_1 + 4,0,0x470);
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  param_1[3] = (undefined1 *)((long)param_1 + 0x24);
  param_1[0xc] = (undefined1 *)((long)param_1 + 0x6c);
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(param_1 + 0xd) = 0x20;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  param_1[0x15] = (undefined1 *)((long)param_1 + 0xb4);
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  param_1[0x27] = (undefined1 *)((long)param_1 + 0x144);
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)param_1 + 0x18c) = 0;
  param_1[0x30] = (undefined1 *)((long)param_1 + 0x18c);
  pvVar8 = (void *)((long)param_1 + 0x6f4);
  *(undefined1 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x39] = (undefined1 *)((long)param_1 + 0x1d4);
  param_1[0x41] = puVar1;
  *(undefined1 *)((long)param_1 + 0x21c) = 0;
  param_1[0x42] = (undefined1 *)((long)param_1 + 0x21c);
  param_1[0x4a] = puVar1;
  param_1[2] = puVar1;
  param_1[0xb] = puVar1;
  *(undefined1 *)((long)param_1 + 0x264) = 0;
  param_1[0x4b] = (undefined1 *)((long)param_1 + 0x264);
  param_1[0x53] = puVar1;
  *(undefined4 *)(param_1 + 0x16) = 0x20;
  param_1[0x14] = puVar1;
  *(undefined1 *)((long)param_1 + 0x2ac) = 0;
  param_1[0x54] = (undefined1 *)((long)param_1 + 0x2ac);
  param_1[0x5c] = puVar1;
  *(undefined4 *)(param_1 + 0x1f) = 0x20;
  param_1[0x1d] = puVar1;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x5d] = (undefined1 *)((long)param_1 + 0x2f4);
  param_1[0x65] = puVar1;
  *(undefined4 *)(param_1 + 0x28) = 0x20;
  param_1[0x26] = puVar1;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  param_1[0x66] = (undefined1 *)((long)param_1 + 0x33c);
  param_1[0x6e] = puVar1;
  *(undefined4 *)(param_1 + 0x31) = 0x20;
  param_1[0x2f] = puVar1;
  *(undefined1 *)((long)param_1 + 900) = 0;
  param_1[0x6f] = (undefined1 *)((long)param_1 + 900);
  param_1[0x77] = puVar1;
  *(undefined4 *)(param_1 + 0x3a) = 0x20;
  param_1[0x38] = puVar1;
  *(undefined1 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x78] = (undefined1 *)((long)param_1 + 0x3cc);
  param_1[0x80] = puVar1;
  *(undefined4 *)(param_1 + 0x43) = 0x20;
  *(undefined4 *)(param_1 + 0x4c) = 0x20;
  *(undefined1 *)((long)param_1 + 0x414) = 0;
  param_1[0x81] = (undefined1 *)((long)param_1 + 0x414);
  *(undefined4 *)(param_1 + 0x55) = 0x20;
  *(undefined4 *)(param_1 + 0x5e) = 0x20;
  *(undefined4 *)(param_1 + 0x67) = 0x20;
  *(undefined4 *)(param_1 + 0x70) = 0x20;
  *(undefined4 *)(param_1 + 0x79) = 0x20;
  *(undefined4 *)(param_1 + 0x82) = 0x20;
  *(undefined4 *)(param_1 + 0x8b) = 0x20;
  param_1[0x89] = puVar1;
  param_1[0x94] = 0x8000000000000000;
  param_1[0x1e] = (undefined1 *)((long)param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = (long)param_1 + 0x45c;
  *(undefined1 *)((long)param_1 + 0x47b) = 0;
  *(undefined1 *)((long)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined4 *)(param_1 + 0x95) = 0x7fffffff;
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  param_1[0x93] = puVar1;
  param_1[0x97] = puVar1;
  param_1[0x98] = 0x8000000000000000;
  param_1[0x9b] = puVar1;
  param_1[0x9c] = 0x8000000000000000;
  param_1[0x9f] = puVar1;
  param_1[0xa0] = 0x8000000000000000;
  param_1[0xa3] = puVar1;
  param_1[0xa4] = 0x8000000000000000;
  param_1[0xa7] = puVar1;
  param_1[0xa8] = 0x8000000000000000;
  param_1[0xab] = puVar1;
  param_1[0xac] = 0x8000000000000000;
  param_1[0xaf] = puVar1;
  param_1[0xb0] = 0x8000000000000000;
  param_1[0xb3] = puVar1;
  param_1[0xb4] = 0x8000000000000000;
  param_1[0xb7] = puVar1;
  param_1[0xb8] = 0x8000000000000000;
  param_1[0xbb] = puVar1;
  param_1[0xbc] = 0x8000000000000000;
  param_1[0xbf] = puVar1;
  param_1[0xc0] = 0x8000000000000000;
  param_1[0xc3] = puVar1;
  param_1[0xc4] = 0x8000000000000000;
  param_1[199] = puVar1;
  param_1[200] = 0x8000000000000000;
  param_1[0xcb] = puVar1;
  param_1[0xcc] = 0x8000000000000000;
  param_1[0xcf] = puVar1;
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xad) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x5ec) = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x66c) = 0;
  param_1[0xd0] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xd1) = 0x7fffffff;
  *(undefined1 *)((long)param_1 + 0x68c) = 0;
  *(undefined2 *)(param_1 + 0xd3) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xd6) = 0x7fffffff;
  puVar1 = PTR_DAT_04bcb468 + 0x10;
  *(undefined1 *)((long)param_1 + 0x6b4) = 0;
  param_1[0xd4] = puVar1;
  param_1[0xd7] = PTR_DAT_04bcb460 + 0x10;
  *(undefined4 *)(param_1 + 0xd9) = 0x7fffffff;
  param_1[0xd8] = 0x8000000000000000;
  param_1[0xdd] = pvVar8;
  puVar5 = PTR_DAT_04bb2f70;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *(undefined1 *)((long)param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0xde) = 0x40;
  *(undefined1 *)((long)param_1 + 0x733) = 0;
  puVar3 = PTR_PTR_04bb2238;
  lVar7 = *(long *)PTR_PTR_04bb2238;
  param_1[0xdc] = puVar1;
  (**(code **)(lVar7 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_021553dc;
      lVar2 = *(long *)(puVar3 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_021553dc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_021553dc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_021553dc:
    iVar6 = (int)lVar7;
    if (*(int *)(param_1 + 0xde) <= (int)lVar7) {
      iVar6 = *(int *)(param_1 + 0xde) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar6);
    *(undefined1 *)((long)pvVar8 + (long)iVar6) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  lVar7 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xe9) = 0x40;
  *(undefined1 *)((long)param_1 + 0x78b) = 0;
  pvVar8 = (void *)((long)param_1 + 0x74c);
  param_1[0xe7] = puVar1;
  param_1[0xe8] = pvVar8;
  puVar1 = puVar4 + 0x10;
  param_1[0xdc] = puVar1;
  (**(code **)(lVar7 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') {
LAB_021554a0:
        iVar6 = (int)lVar7;
        goto LAB_021554a4;
      }
      lVar2 = *(long *)(puVar3 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_021554a0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_021554a0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
LAB_021554a4:
    if (*(int *)(param_1 + 0xe9) <= iVar6) {
      iVar6 = *(int *)(param_1 + 0xe9) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar6);
    *(undefined1 *)((long)pvVar8 + (long)iVar6) = 0;
  }
  param_1[0xe7] = puVar1;
  pvVar8 = (void *)((long)param_1 + 0x7a4);
  param_1[0xf2] = puVar5 + 0x10;
  *(undefined4 *)(param_1 + 0xf4) = 0x40;
  lVar7 = *(long *)puVar3;
  param_1[0xf3] = pvVar8;
  *(undefined1 *)((long)param_1 + 0x7e3) = 0;
  (**(code **)(lVar7 + 0x18))(puVar3);
  pvVar9 = *(void **)(puVar3 + 8);
  if (pvVar8 != pvVar9) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_02155560;
      lVar2 = *(long *)(puVar3 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02155560;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02155560;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02155560:
    iVar6 = (int)lVar7;
    if (*(int *)(param_1 + 0xf4) <= (int)lVar7) {
      iVar6 = *(int *)(param_1 + 0xf4) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar6);
    *(undefined1 *)((long)pvVar8 + (long)iVar6) = 0;
  }
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xf2] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0xfe) = 2;
  param_1[0xda] = 0;
  *(undefined8 *)((long)param_1 + 0x6d5) = 0;
  return;
}

