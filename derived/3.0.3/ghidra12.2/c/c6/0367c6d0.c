
void FUN_0367c6d0(long *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *__src;
  long *plVar10;
  
  lVar8 = *(long *)PTR_DAT_04bbd758;
  uVar4 = *(uint *)(lVar8 + 0xa0);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  if ((char)param_1[0x12] == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(uint *)((long)param_1 + 0x8c) = uVar4;
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar7 = *(long *)(lVar8 + 0x158);
  *(char *)(lVar7 + 0x48) = (char)uVar4;
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 != 0) {
    (**(code **)PTR_DAT_04bcf5a8)(lVar7,uVar4 & 0xff);
  }
  *(uint *)(lVar8 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 1) = *param_2;
  if ((char)param_1[9] == '\0') {
    param_1[2] = (long)(PTR_DAT_04bb2020 + 0x10);
    lVar8 = *(long *)(param_2 + 4);
    param_1[4] = (long)&PTR_LAB_04b42f78;
    param_1[3] = lVar8;
    (**(code **)(*(long *)(param_2 + 6) + 0x10))(param_2 + 6,param_1 + 4);
    uVar6 = param_2[0xe];
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    param_1[3] = *(long *)(param_2 + 4);
    (**(code **)(*(long *)(param_2 + 6) + 0x10))(param_2 + 6,param_1 + 4);
    uVar6 = param_2[0xe];
  }
  *(undefined4 *)(param_1 + 8) = uVar6;
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar5 = malloc(0x228);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_0367c84c;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x228,8);
  }
LAB_0367c84c:
  *(undefined1 *)((long)plVar5 + 0x93) = 0;
  *(undefined1 *)((long)plVar5 + 0x14) = 0;
  *(undefined4 *)(plVar5 + 2) = 0x80;
  *plVar5 = (long)(PTR_DAT_04bb2d88 + 0x10);
  plVar5[1] = (long)plVar5 + 0x14;
  memset(plVar5 + 0x13,0,0x111);
  *(undefined1 *)(plVar5 + 0x37) = 1;
  puVar3 = PTR_DAT_04bdf0c8;
  *(undefined4 *)((long)plVar5 + 0x1bc) = 0;
  plVar5[0x36] = (long)(puVar3 + 0x10);
  puVar3 = PTR_DAT_04bdf1d8;
  plVar5[0x3f] = 0;
  plVar5[0x40] = 0;
  plVar5[0x41] = 0;
  plVar5[0x42] = 0;
  plVar5[0x43] = 0;
  plVar5[0x44] = 0;
  plVar5[0x3a] = 0;
  plVar5[0x3b] = 0;
  plVar5[0x3c] = 0;
  plVar5[0x3d] = 0;
  *(undefined1 *)(plVar5 + 0x3e) = 0;
  plVar5[0x38] = 0;
  plVar5[0x39] = (long)(puVar3 + 0x10);
  pvVar9 = (void *)param_1[10];
  param_1[10] = (long)plVar5;
  if (pvVar9 != (void *)0x0) {
    FUN_036803b0(pvVar9);
    if (*(long *)puVar2 == 0) {
      free(pvVar9);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
    plVar5 = (long *)param_1[10];
  }
  pvVar9 = (void *)plVar5[1];
  plVar10 = (long *)(param_2 + 2);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  __src = *(void **)(param_2 + 4);
  if (pvVar9 != __src) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar8) == '\0') goto LAB_0367c99c;
      lVar7 = *(long *)(param_2 + 4) + lVar8;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0367c99c;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0367c99c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0367c99c:
    iVar1 = (int)lVar8;
    if ((int)plVar5[2] <= (int)lVar8) {
      iVar1 = (int)plVar5[2] + -1;
    }
    memcpy(pvVar9,__src,(long)iVar1);
    *(undefined1 *)((long)pvVar9 + (long)iVar1) = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = param_2[0xe];
                    /* WARNING: Could not recover jumptable at 0x0367c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}

