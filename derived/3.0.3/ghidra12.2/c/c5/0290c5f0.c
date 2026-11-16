
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0290c5f0(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined4 local_98;
  undefined4 uStack_94;
  void *local_90;
  
  FUN_03c3c8f0();
  param_1[0x50] = param_1 + 0x5a;
  *param_1 = &PTR_FUN_04a92a30;
  param_1[0x5a] = param_1 + 100;
  param_1[100] = param_1 + 0x6e;
  plVar1 = param_1 + 0x4a;
  param_1[0x6e] = param_1 + 0x78;
  param_1[0x46] = &PTR_LAB_04a92b00;
  param_1[0x78] = param_1 + 0x82;
  param_1[0x82] = param_1 + 0x8c;
  param_1[0x4d] = param_1 + 0x50;
  param_1[0x8c] = param_1 + 0x96;
  param_1[0x4e] = param_1 + 0x50;
  param_1[0x96] = param_1 + 0xa0;
  param_1[0xa0] = param_1 + 0xaa;
  param_1[0x47] = 0;
  param_1[0xaa] = param_1 + 0xb4;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0xb4] = param_1 + 0xbe;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0xbe] = param_1 + 200;
  param_1[0x4b] = plVar1;
  param_1[200] = param_1 + 0xd2;
  param_1[0x4a] = plVar1;
  param_1[0xd2] = param_1 + 0xdc;
  param_1[0xe6] = 0;
  param_1[0xdc] = param_1 + 0xe6;
  pcVar9 = DAT_055c19d0;
  *(undefined4 *)(param_1 + 0x4f) = 0x10;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  cVar4 = *pcVar9;
  puVar15 = *(undefined8 **)PTR_DAT_04bb48c8;
  param_1[0xf1] = 0;
  *(bool *)((long)param_1 + 0x782) = cVar4 != '\0';
  if (*(char *)(puVar15 + 1) == '\0') {
    uVar12 = nn::oe::GetProgramTotalActiveTime();
    *puVar15 = uVar12;
    *(undefined1 *)(puVar15 + 1) = 1;
  }
  else {
    uVar12 = *puVar15;
  }
  param_1[0xf1] = uVar12;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  puVar8 = PTR_DAT_04bc3a88;
  puVar7 = PTR_DAT_04bc3a80;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') {
    uVar10 = (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x70))();
    FUN_03c3faa0(*(undefined8 *)PTR_DAT_04bb2720,uVar10,0,0);
  }
  else {
    (**(code **)(*(long *)PTR_DAT_04bc3a80 + 0x18))(PTR_DAT_04bc3a80);
    FUN_006d8678(&local_98,&DAT_0409e973,*(undefined8 *)(puVar7 + 8));
    (**(code **)(CONCAT44(uStack_94,local_98) + 0x18))(&local_98);
    puVar6 = PTR_DAT_04bc3a78;
    pvVar16 = *(void **)(PTR_DAT_04bc3a78 + 8);
    if (pvVar16 != local_90) {
      lVar13 = 0;
      do {
        if (*(char *)((long)local_90 + lVar13) == '\0') goto LAB_0290c818;
        if (*(char *)((long)local_90 + lVar13 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_0290c818;
        }
        if (*(char *)((long)local_90 + lVar13 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_0290c818;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_0290c818:
      iVar11 = (int)lVar13;
      if (*(int *)(PTR_DAT_04bc3a78 + 0x10) <= (int)lVar13) {
        iVar11 = *(int *)(PTR_DAT_04bc3a78 + 0x10) + -1;
      }
      memcpy(pvVar16,local_90,(long)iVar11);
      *(undefined1 *)((long)pvVar16 + (long)iVar11) = 0;
    }
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    iVar11 = FUN_006bd550(*(undefined8 *)(puVar6 + 8),0);
    *(int *)(puVar6 + 0x38) = iVar11;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      DAT_04c487d0 = 0;
      puVar15 = DAT_055c1b60;
      do {
        if (*(int *)(puVar15 + -1) == iVar11) goto LAB_0290c8a4;
        puVar15 = (undefined8 *)puVar15[1];
        DAT_04c487d0 = DAT_04c487d0 + 1;
      } while (puVar15 != &DAT_055c1b58);
    }
    DAT_04c487d0 = -1;
LAB_0290c8a4:
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
    FUN_006d8678(&local_98,&DAT_0409e973,*(undefined8 *)(puVar8 + 8));
    (**(code **)(CONCAT44(uStack_94,local_98) + 0x18))(&local_98);
    pvVar16 = *(void **)(puVar7 + 8);
    if (pvVar16 != local_90) {
      lVar13 = 0;
      do {
        if (*(char *)((long)local_90 + lVar13) == '\0') goto LAB_0290c930;
        if (*(char *)((long)local_90 + lVar13 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_0290c930;
        }
        if (*(char *)((long)local_90 + lVar13 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_0290c930;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_0290c930:
      iVar11 = (int)lVar13;
      if (*(int *)(puVar7 + 0x10) <= (int)lVar13) {
        iVar11 = *(int *)(puVar7 + 0x10) + -1;
      }
      memcpy(pvVar16,local_90,(long)iVar11);
      *(undefined1 *)((long)pvVar16 + (long)iVar11) = 0;
    }
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    iVar11 = FUN_006bd550(*(undefined8 *)(puVar7 + 8),0);
    puVar15 = DAT_055c1b60;
    *(int *)(puVar7 + 0x38) = iVar11;
    if (puVar15 != &DAT_055c1b58) {
      DAT_04c487d4 = 0;
      do {
        if (*(int *)(puVar15 + -1) == iVar11) goto LAB_0290c9b4;
        puVar15 = (undefined8 *)puVar15[1];
        DAT_04c487d4 = DAT_04c487d4 + 1;
      } while (puVar15 != &DAT_055c1b58);
    }
    DAT_04c487d4 = 0xffff;
LAB_0290c9b4:
    FUN_006d8678(&local_98,&DAT_0407ebb1);
    (**(code **)(CONCAT44(uStack_94,local_98) + 0x18))(&local_98);
    pvVar16 = *(void **)(puVar8 + 8);
    if (pvVar16 != local_90) {
      lVar13 = 0;
      do {
        if (*(char *)((long)local_90 + lVar13) == '\0') goto LAB_0290ca2c;
        if (*(char *)((long)local_90 + lVar13 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_0290ca2c;
        }
        if (*(char *)((long)local_90 + lVar13 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_0290ca2c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_0290ca2c:
      iVar11 = (int)lVar13;
      if (*(int *)(puVar8 + 0x10) <= (int)lVar13) {
        iVar11 = *(int *)(puVar8 + 0x10) + -1;
      }
      memcpy(pvVar16,local_90,(long)iVar11);
      *(undefined1 *)((long)pvVar16 + (long)iVar11) = 0;
    }
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
    iVar11 = FUN_006bd550(*(undefined8 *)(puVar8 + 8),0);
    puVar15 = DAT_055c1b60;
    *(int *)(puVar8 + 0x38) = iVar11;
    if (puVar15 != &DAT_055c1b58) {
      DAT_04c487cc = 0;
      do {
        if (*(int *)(puVar15 + -1) == iVar11) goto LAB_0290caa8;
        puVar15 = (undefined8 *)puVar15[1];
        DAT_04c487cc = DAT_04c487cc + 1;
      } while (puVar15 != &DAT_055c1b58);
    }
    DAT_04c487cc = -1;
LAB_0290caa8:
    DAT_04c487c8 = DAT_055c1170;
  }
  plVar5 = (long *)param_1[0x4b];
  while (plVar5 != plVar1) {
    plVar3 = (long *)plVar5[1];
    plVar14 = plVar3;
    if (*plVar5 != 0) {
      *(long **)(*plVar5 + 8) = plVar3;
      plVar14 = (long *)plVar5[1];
    }
    if (plVar14 != (long *)0x0) {
      *plVar14 = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    plVar5[-8] = param_1[0x4d];
    param_1[0x4d] = plVar5 + -8;
    plVar5 = plVar3;
  }
  DAT_055c1a88 = 0;
  _DAT_055c1a8a = 0x101;
  DAT_055c1a8e = 0;
  if ((long)(short)DAT_04c487d4 != 0xffffffffffffffff) {
    puVar2 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
    if (0xff < DAT_04c487d4) {
      puVar2 = &DAT_055c11c8;
    }
    if (((*puVar2 >> 0xf & 1) != 0) && (*(long *)PTR_DAT_04bb2268 != 0)) {
      *(undefined1 *)(*(long *)PTR_DAT_04bb2268 + 0xb0) = 1;
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 != 0) {
    *(undefined2 *)(lVar13 + 0x4de) = 0;
    *(undefined1 *)(lVar13 + 0x4e0) = 0;
  }
  return;
}

