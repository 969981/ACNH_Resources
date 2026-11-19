
void FUN_038d9950(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *__s;
  long *plVar10;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = (long)(param_1 + 3);
  param_1[4] = (long)(param_1 + 3);
  puVar4 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  param_1[6] = 0;
  param_1[7] = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar6 = (long *)FUN_038cb610(lVar5,param_1);
  lVar5 = *(long *)puVar4;
  if (lVar5 == 0) {
    plVar6 = malloc(0x78);
  }
  else {
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar5 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_038d99f4;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x78,8);
  }
LAB_038d99f4:
  plVar6[5] = 0;
  plVar6[6] = (long)plVar6;
  plVar6[7] = 0;
  plVar10 = plVar6 + 4;
  *plVar10 = 0;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)puVar1;
  plVar6[1] = 0;
  lVar5 = *(long *)puVar4;
  if (lVar5 != 0) {
    lVar5 = FUN_038cb610(lVar5,plVar6);
    plVar6[1] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar9 = (long *)(lVar5 + 0x70);
      lVar8 = *plVar9;
      plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar6);
      *plVar9 = (long)plVar2;
      *plVar2 = lVar8;
      plVar2[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar2;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  *(undefined1 *)((long)plVar6 + 0x73) = 0;
  *(undefined1 *)((long)plVar6 + 0x54) = 0;
  *(undefined4 *)(plVar6 + 10) = 0x20;
  plVar6[8] = (long)&PTR_LAB_048f9700;
  plVar6[9] = (long)plVar6 + 0x54;
  *plVar6 = (long)&PTR_FUN_04b64be0;
  param_1[6] = (long)plVar6;
  param_1[7] = (long)plVar6;
  __s = (undefined8 *)plVar6[9];
  if (__s != &DAT_0407ebb1) {
    iVar3 = 0;
    if ((int)plVar6[10] < 1) {
      iVar3 = (int)plVar6[10] + -1;
    }
    memset(__s,0,(long)iVar3);
    *(undefined1 *)((long)__s + (long)iVar3) = 0;
  }
  lVar5 = plVar6[7];
  if (lVar5 != 0) {
    plVar6[7] = 0;
    if (plVar6[4] != 0) {
      *(long *)(plVar6[4] + 8) = plVar6[5];
    }
    if ((long *)plVar6[5] != (long *)0x0) {
      *(long *)plVar6[5] = *plVar10;
    }
    *plVar10 = 0;
    plVar6[5] = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  plVar6[7] = (long)param_1;
  lVar5 = *param_1;
  *param_1 = (long)plVar10;
  plVar6[4] = lVar5;
  plVar6[5] = (long)param_1;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar10;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

