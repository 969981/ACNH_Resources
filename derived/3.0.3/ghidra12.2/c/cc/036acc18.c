
void FUN_036acc18(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  
  *param_1 = (long)&PTR_FUN_04b44080;
  plVar1 = DAT_05ab3138;
  if (DAT_05ab2560 == param_1) {
    DAT_05ab2560 = (long *)0x0;
    FUN_036b0c18(DAT_05ab3138 + 0x144);
    FUN_036b0f00(plVar1 + 0x100);
    FUN_036b10c8(plVar1 + 0xc0);
    pvVar10 = (void *)plVar1[0xbc];
    plVar1[0x80] = (long)&PTR_FUN_04b448a8;
    puVar3 = PTR_DAT_04bb2698;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar10);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
        }
      }
      plVar1[0xbc] = 0;
      *(undefined4 *)(plVar1 + 0xbb) = 0;
    }
    *(undefined4 *)(plVar1 + 0xbf) = 0;
    *(undefined1 *)((long)plVar1 + 0x5fc) = 0;
    FUN_036bdc18(plVar1 + 0x80);
    plVar1[0x80] = (long)&PTR_LAB_04b44900;
    FUN_036bdc18(plVar1 + 0x80);
    puVar4 = PTR_DAT_04bcb440;
    puVar8 = (undefined8 *)plVar1[0x82];
    plVar1[0x80] = (long)(PTR_DAT_04bcb440 + 0x10);
    if (puVar8 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x83] < 1) {
        iVar2 = (int)plVar1[0x83] + -1;
      }
      memset(puVar8,0,(long)iVar2);
      *(undefined1 *)((long)puVar8 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x81] + 0x18))(plVar1 + 0x81);
    uVar5 = FUN_006bd550(plVar1[0x82],0);
    *(undefined4 *)(plVar1 + 0x94) = uVar5;
    plVar1[0x95] = 0;
    plVar1[0x96] = 0;
    plVar1[0x97] = 0;
    FUN_036b1390(plVar1 + 0x40);
    pvVar10 = (void *)plVar1[0x3c];
    *plVar1 = (long)&PTR_FUN_04b44a38;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
        }
      }
      plVar1[0x3c] = 0;
      *(undefined4 *)(plVar1 + 0x3b) = 0;
    }
    *(undefined4 *)(plVar1 + 0x3f) = 0;
    *(undefined1 *)((long)plVar1 + 0x1fc) = 0;
    FUN_036c4088(plVar1);
    *plVar1 = (long)&PTR_LAB_04b44a90;
    FUN_036c4088(plVar1);
    puVar8 = (undefined8 *)plVar1[2];
    *plVar1 = (long)(puVar4 + 0x10);
    if (puVar8 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[3] < 1) {
        iVar2 = (int)plVar1[3] + -1;
      }
      memset(puVar8,0,(long)iVar2);
      *(undefined1 *)((long)puVar8 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[1] + 0x18))(plVar1 + 1);
    uVar5 = FUN_006bd550(plVar1[2],0);
    *(undefined4 *)(plVar1 + 0x14) = uVar5;
    plVar1[0x17] = 0;
    DAT_05ab3138 = (long *)0x0;
    plVar1[0x15] = 0;
    plVar1[0x16] = 0;
  }
  lVar7 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar7 != 0) {
    if (lVar7 == 1) {
      return;
    }
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

