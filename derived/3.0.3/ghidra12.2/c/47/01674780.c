
void FUN_01674780(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong uVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  void *pvVar16;
  void *__src;
  undefined *local_180;
  char *local_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar7 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar9 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar15 + 8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x10,8);
  }
  *plVar9 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar9[1] = 0;
  param_1[0x50] = (long)plVar9;
  lVar15 = *(long *)puVar7;
  if (lVar15 == 0) {
    plVar10 = malloc(0x188);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar10 = (long *)(lVar15 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x188,8);
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  local_150 = 0;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_178 = "XluDepthFill";
  puStack_168 = &DAT_04091b97;
  puStack_158 = &DAT_0407ebb1;
  *plVar10 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_170 = local_180;
  local_160 = local_180;
  (**(code **)(puVar5 + 0x28))(&local_180);
  plVar10[2] = 0;
  plVar10[3] = 0;
  *(undefined1 *)((long)plVar10 + 0x44) = 0;
  plVar10[1] = (long)local_178;
  plVar14 = plVar10 + 5;
  *plVar14 = 0;
  puVar6 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar10 + 8) = 0x100;
  *(undefined1 *)((long)plVar10 + 0x143) = 0;
  *(undefined1 *)(plVar10 + 0x29) = 0;
  *(undefined4 *)(plVar10 + 4) = local_150;
  plVar10[0x2e] = 0;
  plVar10[6] = (long)(puVar6 + 0x10);
  plVar10[7] = (long)plVar10 + 0x44;
  *plVar10 = (long)&PTR_LAB_049bb160;
  plVar10[0x2c] = (long)"mIsEnable";
  plVar10[0x2d] = 0;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(plVar10 + 0x2f) = 0;
  plVar10[0x30] = 0;
  plVar10[0x2a] = (long)plVar10;
  plVar10[0x2b] = (long)puVar1;
  lVar15 = *plVar14;
  if (*plVar14 != 0) {
    do {
      lVar8 = lVar15;
      lVar15 = *(long *)(lVar8 + 0x10);
    } while (lVar15 != 0);
    plVar14 = (long *)(lVar8 + 0x10);
  }
  *plVar14 = (long)(plVar10 + 0x2b);
  plVar10[0x2e] = (long)plVar10;
  puVar11 = (undefined1 *)(**(code **)(plVar10[0x2b] + 0xf0))();
  *puVar11 = 1;
  if ((*(uint *)(plVar10 + 0x2f) >> 7 & 1) == 0) {
    plVar10[0x30] = 0;
    *(undefined1 *)(plVar10 + 0x30) = 1;
  }
  *(uint *)(plVar10 + 0x2f) = *(uint *)(plVar10 + 0x2f) & 0xfeffffff;
  plVar9[1] = (long)plVar10;
  pvVar16 = (void *)plVar10[7];
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  __src = (void *)param_1[2];
  if (pvVar16 != __src) {
    (**(code **)(param_1[1] + 0x18))(param_1 + 1);
    lVar15 = 0;
    do {
      if (*(char *)(param_1[2] + lVar15) == '\0') goto LAB_01674a1c;
      lVar8 = param_1[2] + lVar15;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_01674a1c;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_01674a1c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_01674a1c:
    iVar2 = (int)lVar15;
    if ((int)plVar10[8] <= (int)lVar15) {
      iVar2 = (int)plVar10[8] + -1;
    }
    memcpy(pvVar16,__src,(long)iVar2);
    *(undefined1 *)((long)pvVar16 + (long)iVar2) = 0;
  }
  plVar10 = (long *)plVar9[1];
  local_178 = (char *)((long)&local_170 + 4);
  local_180 = puVar6 + 0x10;
  local_6d = 0;
  local_170 = (undefined *)CONCAT35(local_170._5_3_,0x100);
  uVar12 = (**(code **)(*plVar10 + 0xf0))(plVar10,&local_180,1);
  if ((uVar12 & 1) != 0) {
    FUN_03c27e60(plVar10,&local_180,0);
  }
  pcVar13 = (char *)(**(code **)(*(long *)(plVar9[1] + 0x158) + 0xf0))(plVar9[1] + 0x158);
  cVar4 = *pcVar13;
  if ((char)param_1[7] != cVar4) {
    *(char *)(param_1 + 7) = cVar4;
    (**(code **)(*param_1 + 0xb8))(param_1,cVar4 != '\0');
  }
  lVar15 = *(long *)puVar7;
  if (lVar15 == 0) {
    plVar9 = malloc(0x40);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar15 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_01674b34;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x40,8);
  }
LAB_01674b34:
  puVar1 = PTR_DAT_04bd1840;
  *(undefined4 *)(plVar9 + 4) = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  *(undefined4 *)(plVar9 + 7) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[1] = (long)(puVar5 + 0x10);
  plVar9[2] = (long)&DAT_0407ebb1;
  plVar9[3] = 0;
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  lVar15 = *(long *)puVar7;
  param_1[0x52] = (long)plVar9;
  if (lVar15 == 0) {
    pvVar16 = malloc(0x2000);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar15 + 8);
      if (lVar8 != 0) {
        puVar3 = (undefined8 *)(lVar8 + 0xa8);
      }
      param_3 = (long *)*puVar3;
      if (param_3 == (long *)0x0) {
        pvVar16 = (void *)0x0;
        goto LAB_01674bd4;
      }
    }
    pvVar16 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x2000,0x40);
  }
LAB_01674bd4:
  plVar9[5] = (long)pvVar16;
  plVar9[6] = (long)pvVar16;
  *(undefined4 *)(plVar9 + 7) = 0x400;
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  return;
}

