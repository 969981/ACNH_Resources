
void FUN_015888d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  void *__src;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  void *__dest;
  undefined *local_178;
  void *local_170;
  undefined *local_168;
  char *local_160;
  undefined8 local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined4 local_138;
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    plVar9 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar14 + 8);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x10,8);
  }
  *plVar9 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar9[1] = 0;
  param_1[1] = (long)plVar9;
  local_170 = (void *)(**(code **)(*param_1 + 0x80))(param_1);
  puVar7 = PTR_DAT_04bb2020;
  lVar14 = *(long *)puVar3;
  local_178 = PTR_DAT_04bb2020 + 0x10;
  if (lVar14 == 0) {
    plVar10 = malloc(0x1d8);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar10 = (long *)(lVar14 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1d8,8);
    }
  }
  local_138 = 0;
  puVar1 = puVar7 + 0x10;
  local_160 = "IdrDisplacementObjParam";
  puStack_150 = &DAT_04096951;
  puStack_140 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb3050 + 0x10;
  *plVar10 = (long)puVar2;
  local_168 = puVar1;
  local_158 = puVar1;
  local_148 = puVar1;
  (**(code **)(puVar7 + 0x28))(&local_168);
  plVar10[3] = 0;
  *(undefined4 *)(plVar10 + 8) = 0x100;
  *(undefined1 *)((long)plVar10 + 0x44) = 0;
  puVar7 = PTR_DAT_04bb21f8;
  plVar10[7] = (long)plVar10 + 0x44;
  *(undefined1 *)((long)plVar10 + 0x143) = 0;
  *(undefined1 *)(plVar10 + 0x29) = 0;
  plVar10[1] = (long)local_160;
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 4) = local_138;
  *plVar10 = (long)&PTR_LAB_049ac220;
  plVar10[5] = 0;
  plVar10[6] = (long)(puVar7 + 0x10);
  puStack_140 = &DAT_0407ebb1;
  local_160 = "mIdrDisplacementObjParam";
  puStack_150 = &DAT_040c4ed9;
  local_138 = 8;
  lVar14 = *(long *)puVar3;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  plVar10[0x2e] = 0;
  plVar10[0x2c] = 0;
  plVar10[0x2d] = 0;
  plVar10[0x2a] = (long)plVar10;
  plVar10[0x2b] = (long)puVar3;
  local_168 = puVar1;
  local_158 = puVar1;
  local_148 = puVar1;
  if (lVar14 != 0) {
    lVar14 = FUN_038cb610(lVar14,plVar10 + 0x2b);
    plVar10[0x2c] = lVar14;
    if (lVar14 != 0) {
      if ((*(uint *)(lVar14 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar14 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar14 + 0xb0));
      }
      plVar13 = (long *)(lVar14 + 0x70);
      lVar12 = *plVar13;
      plVar4 = (long *)((long)*(int *)(lVar14 + 0x84) + (long)(plVar10 + 0x2b));
      *plVar13 = (long)plVar4;
      *plVar4 = lVar12;
      plVar4[1] = (long)plVar13;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar4;
      }
      *(int *)(lVar14 + 0x80) = *(int *)(lVar14 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  plVar10[0x2f] = (long)puVar2;
  (**(code **)(local_168 + 0x18))(&local_168);
  plVar10[0x31] = 0;
  plVar10[0x32] = 0;
  *(undefined4 *)(plVar10 + 0x33) = local_138;
  puVar3 = PTR_DAT_04bb60a0;
  plVar10[0x34] = 0;
  plVar10[0x2f] = (long)(puVar3 + 0x10);
  plVar10[0x30] = (long)local_160;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x2f);
  *(undefined4 *)(plVar10 + 0x3a) = 0;
  plVar10[0x2b] = (long)&PTR_LAB_049ac388;
  plVar10[0x38] = 0;
  plVar10[0x39] = 0;
  plVar10[0x35] = 0;
  plVar10[0x2f] = (long)&PTR_LAB_049ac448;
  plVar10[0x36] = 0;
  plVar10[0x37] = 0;
  plVar9[1] = (long)plVar10;
  __dest = (void *)plVar10[7];
  (**(code **)(local_178 + 0x18))(&local_178);
  __src = local_170;
  if (__dest != local_170) {
    (**(code **)(local_178 + 0x18))(&local_178);
    lVar14 = 0;
    do {
      if (*(char *)((long)local_170 + lVar14) == '\0') goto LAB_01588c1c;
      if (*(char *)((long)local_170 + lVar14 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_01588c1c;
      }
      if (*(char *)((long)local_170 + lVar14 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_01588c1c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_01588c1c:
    iVar5 = (int)lVar14;
    if ((int)plVar10[8] <= (int)lVar14) {
      iVar5 = (int)plVar10[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    *(undefined1 *)((long)__dest + (long)iVar5) = 0;
  }
  plVar9 = (long *)plVar9[1];
  local_160 = (char *)((long)&local_158 + 4);
  local_168 = puVar7 + 0x10;
  local_55 = 0;
  local_158 = (undefined *)CONCAT35(local_158._5_3_,0x100);
  uVar11 = (**(code **)(*plVar9 + 0xf0))(plVar9,&local_168,1);
  if ((uVar11 & 1) != 0) {
    FUN_03c27e60(plVar9,&local_168,0);
  }
  return;
}

