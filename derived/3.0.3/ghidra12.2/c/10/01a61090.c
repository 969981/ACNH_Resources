
void FUN_01a61090(long *param_1,long *param_2,void *param_3,void *param_4,long *param_5)

{
  uint *puVar1;
  void *pvVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puStack_3aa10;
  undefined8 uStack_3aa08;
  undefined1 *puStack_3aa00;
  long *plStack_3a9f8;
  long *plStack_3a9f0;
  long alStack_3a9e8 [2];
  long lStack_3a9d8;
  long lStack_3a9d0;
  undefined1 auStack_3a9c8 [119968];
  undefined1 auStack_1d528 [120008];
  
  param_1[1] = 0;
  puVar3 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (DAT_05ae7600 != 0) {
    lVar6 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar9 = (long *)(lVar6 + 0x70);
      lVar8 = *plVar9;
      plVar11 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar9 = (long)plVar11;
      *plVar11 = lVar8;
      plVar11[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar11;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar12 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
      }
    }
  }
  param_1[4] = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = lVar6;
  lVar6 = param_2[6];
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  pvVar2 = (void *)((long)param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x12) = 0x20;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  *(int *)(param_1 + 8) = (int)lVar6;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)&PTR_LAB_049ffe38;
  param_1[4] = (long)&PTR_LAB_049fff08;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = PTR_DAT_04bb2a08 + 0x10;
  param_1[0x10] = (long)puVar3;
  param_1[0x11] = (long)pvVar2;
  if (pvVar2 != param_3) {
    lVar6 = 0;
    do {
      if (*(char *)((long)param_3 + lVar6) == '\0') goto LAB_01a61220;
      if (*(char *)((long)param_3 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01a61220;
      }
      if (*(char *)((long)param_3 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01a61220;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01a61220:
    iVar7 = (int)lVar6;
    if (0x1e < iVar7) {
      iVar7 = 0x1f;
    }
    memcpy(pvVar2,param_3,(long)iVar7);
    *(undefined1 *)((long)pvVar2 + (long)iVar7) = 0;
  }
  puVar5 = PTR_DAT_04bb2028;
  pvVar2 = (void *)((long)param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0x19) = 0x20;
  *(undefined1 *)((long)param_1 + 0xeb) = 0;
  param_1[0x17] = (long)puVar3;
  param_1[0x18] = (long)pvVar2;
  param_1[0x10] = (long)(puVar5 + 0x10);
  if (pvVar2 != param_4) {
    lVar6 = 0;
    do {
      if (*(char *)((long)param_4 + lVar6) == '\0') goto LAB_01a612bc;
      if (*(char *)((long)param_4 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01a612bc;
      }
      if (*(char *)((long)param_4 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01a612bc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01a612bc:
    iVar7 = (int)lVar6;
    if (0x1e < iVar7) {
      iVar7 = 0x1f;
    }
    memcpy(pvVar2,param_4,(long)iVar7);
    *(undefined1 *)((long)pvVar2 + (long)iVar7) = 0;
  }
  puStack_3aa10 = PTR_DAT_04bb60c8;
  lVar6 = 0x3a94;
  param_1[0x1f] = (long)(PTR_DAT_04bb60c8 + 0x10);
  *(undefined2 *)((long)param_1 + 0xf4) = 0xfffe;
  plVar11 = param_1 + 0x28;
  param_1[0x17] = (long)(puVar5 + 0x10);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = (long)(param_1 + 0x24);
  while( true ) {
    plVar11[-3] = (long)(plVar11 + -2);
    plVar11[-4] = (long)(plVar11 + -3);
    plVar11[-2] = (long)(plVar11 + -1);
    if (lVar6 == 0) break;
    plVar11[-1] = (long)plVar11;
    plVar11 = plVar11 + 4;
    lVar6 = lVar6 + -4;
  }
  param_1[0x23] = (long)(param_1 + 0x24);
  param_1[0x3abb] = 0;
  if (param_1 + 0x3abc != (long *)0x0) {
    param_1[0x21] = (long)(param_1 + 0x3abc);
    *(undefined4 *)((long)param_1 + 0x104) = 15000;
  }
  puStack_3aa10 = puStack_3aa10 + 0x10;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uStack_3aa08._4_4_ = 0;
  plStack_3a9f8 = alStack_3a9e8;
  *(undefined4 *)(param_1 + 0x7554) = 0;
  puStack_3aa00 = (undefined1 *)0x0;
  lVar6 = 0;
  while( true ) {
    plVar11 = (long *)((long)alStack_3a9e8 + lVar6 + 8);
    *plVar11 = (long)alStack_3a9e8 + lVar6 + 0x10;
    *(long **)((long)alStack_3a9e8 + lVar6) = plVar11;
    *(undefined1 **)((long)alStack_3a9e8 + lVar6 + 0x10) = auStack_3a9c8 + lVar6 + -8;
    if (lVar6 == 0x1d4a0) break;
    *(undefined1 **)(auStack_3a9c8 + lVar6 + -8) = auStack_3a9c8 + lVar6;
    lVar6 = lVar6 + 0x20;
  }
  if (auStack_1d528 != (undefined1 *)0x0) {
    uStack_3aa08._4_4_ = 15000;
    puStack_3aa00 = auStack_1d528;
  }
  uStack_3aa08 = (ulong)uStack_3aa08._4_4_ << 0x20;
  plStack_3a9f0 = plStack_3a9f8;
  FUN_009aa4b0(&puStack_3aa10,param_5);
  lVar12 = (**(code **)(*param_5 + 0x20))(param_5);
  lVar6 = 0;
  iVar7 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar6);
    lVar6 = lVar6 + 4;
    uVar4 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar7 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar7;
  } while (lVar6 != 0x754);
  *(int *)(param_1 + 0x1e) = iVar7;
  if ((undefined **)(param_1 + 0x1f) != &puStack_3aa10) {
    uVar4 = *(uint *)((long)param_1 + 0x104);
    if ((int)(uint)uStack_3aa08 <= (int)*(uint *)((long)param_1 + 0x104)) {
      uVar4 = (uint)uStack_3aa08;
    }
    if (0 < (int)param_1[0x20]) {
      lVar6 = 0;
      plVar11 = (long *)param_1[0x22];
      do {
        plVar9 = *(long **)(param_1[0x21] + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *plVar9 = (long)plVar11;
        param_1[0x22] = (long)plVar9;
        plVar11 = plVar9;
      } while (lVar6 < (int)param_1[0x20]);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((0 < (int)uVar4) && (0 < *(int *)((long)param_1 + 0x104))) {
      lVar6 = 0;
      iVar7 = 0;
      do {
        if (iVar7 < *(int *)((long)param_1 + 0x104)) {
          plVar11 = (long *)param_1[0x22];
          puVar10 = *(undefined2 **)(puStack_3aa00 + lVar6);
          if (plVar11 != (long *)0x0) {
            param_1[0x22] = *plVar11;
          }
          *(undefined2 *)plVar11 = *puVar10;
          *(undefined1 *)((long)plVar11 + 2) = *(undefined1 *)(puVar10 + 1);
          *(undefined1 *)((long)plVar11 + 3) = *(undefined1 *)((long)puVar10 + 3);
          *(undefined4 *)((long)plVar11 + 4) = *(undefined4 *)(puVar10 + 2);
          iVar7 = (int)param_1[0x20];
          if (iVar7 < *(int *)((long)param_1 + 0x104)) {
            *(long **)(param_1[0x21] + (long)iVar7 * 8) = plVar11;
            iVar7 = (int)param_1[0x20] + 1;
            *(int *)(param_1 + 0x20) = iVar7;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((ulong)uVar4 * 8 != lVar6);
    }
  }
  return;
}

