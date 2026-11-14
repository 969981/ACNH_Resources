
void FUN_01b71b48(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *param_1 = (long)&PTR_FUN_04a38b00;
  lVar8 = DAT_05336138;
  if (DAT_05336130 == param_1) {
    DAT_05336130 = (long *)0x0;
    lVar11 = DAT_05336138 + 0xc60;
    *(undefined ***)(DAT_05336138 + 0xc60) = &PTR_FUN_04a38b20;
    FUN_01b74cd0(lVar11);
    puVar2 = PTR_DAT_04bc0680;
    *(undefined8 *)(lVar8 + 0xd10) = 0;
    puVar3 = PTR_DAT_04bc0688;
    *(undefined ***)(lVar8 + 0xc60) = &PTR_LAB_04a38b78;
    pvVar9 = *(void **)(lVar8 + 0xd30);
    *puVar2 = 1;
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04bb2698;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xd30) = 0;
      *(undefined4 *)(lVar8 + 0xd28) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0xe18);
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xe18) = 0;
      *(undefined4 *)(lVar8 + 0xe10) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0xe30);
    *(undefined4 *)(lVar8 + 0xe20) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xe30) = 0;
      *(undefined4 *)(lVar8 + 0xe28) = 0;
    }
    puVar3 = PTR_DAT_04bcb440;
    puVar10 = *(undefined8 **)(lVar8 + 0xc70);
    *(undefined **)(lVar8 + 0xc60) = PTR_DAT_04bcb440 + 0x10;
    if (puVar10 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar8 + 0xc78) < 1) {
        iVar1 = *(int *)(lVar8 + 0xc78) + -1;
      }
      memset(puVar10,0,(long)iVar1);
      *(undefined1 *)((long)puVar10 + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0xc68) + 0x18))(lVar8 + 0xc68);
    uVar6 = FUN_006bd550(*(undefined8 *)(lVar8 + 0xc70),0);
    *(undefined4 *)(lVar8 + 0xd00) = uVar6;
    *(undefined8 *)(lVar8 + 0xd08) = 0;
    *(undefined8 *)(lVar8 + 0xd10) = 0;
    *(undefined8 *)(lVar8 + 0xd18) = 0;
    *(undefined ***)(lVar8 + 0xa40) = &PTR_FUN_04a38be8;
    FUN_01b771d0(lVar8 + 0xa40);
    puVar4 = PTR_DAT_04bc0690;
    *(undefined ***)(lVar8 + 0xa40) = &PTR_LAB_04a38c40;
    puVar5 = PTR_DAT_04bc0698;
    pvVar9 = *(void **)(lVar8 + 0xb10);
    *(undefined8 *)(lVar8 + 0xaf0) = 0;
    *puVar4 = 1;
    *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xb10) = 0;
      *(undefined4 *)(lVar8 + 0xb08) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0xbf8);
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xbf8) = 0;
      *(undefined4 *)(lVar8 + 0xbf0) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0xc10);
    *(undefined4 *)(lVar8 + 0xc00) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0xc10) = 0;
      *(undefined4 *)(lVar8 + 0xc08) = 0;
    }
    puVar10 = *(undefined8 **)(lVar8 + 0xa50);
    *(undefined **)(lVar8 + 0xa40) = puVar3 + 0x10;
    if (puVar10 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar8 + 0xa58) < 1) {
        iVar1 = *(int *)(lVar8 + 0xa58) + -1;
      }
      memset(puVar10,0,(long)iVar1);
      *(undefined1 *)((long)puVar10 + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0xa48) + 0x18))(lVar8 + 0xa48);
    uVar6 = FUN_006bd550(*(undefined8 *)(lVar8 + 0xa50),0);
    *(undefined4 *)(lVar8 + 0xae0) = uVar6;
    *(undefined8 *)(lVar8 + 0xae8) = 0;
    *(undefined8 *)(lVar8 + 0xaf0) = 0;
    *(undefined8 *)(lVar8 + 0xaf8) = 0;
    *(undefined ***)(lVar8 + 0x820) = &PTR_FUN_04a38cb0;
    FUN_01b796e4(lVar8 + 0x820);
    *(undefined ***)(lVar8 + 0x820) = &PTR_LAB_04a38d08;
    *PTR_DAT_04bc06a0 = 1;
    puVar4 = PTR_DAT_04bc06a8;
    pvVar9 = *(void **)(lVar8 + 0x8f0);
    *(undefined8 *)(lVar8 + 0x8d0) = 0;
    *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0x8f0) = 0;
      *(undefined4 *)(lVar8 + 0x8e8) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0x9d8);
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0x9d8) = 0;
      *(undefined4 *)(lVar8 + 0x9d0) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0x9f0);
    *(undefined4 *)(lVar8 + 0x9e0) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0x9f0) = 0;
      *(undefined4 *)(lVar8 + 0x9e8) = 0;
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x830);
    *(undefined **)(lVar8 + 0x820) = puVar3 + 0x10;
    if (puVar10 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar8 + 0x838) < 1) {
        iVar1 = *(int *)(lVar8 + 0x838) + -1;
      }
      memset(puVar10,0,(long)iVar1);
      *(undefined1 *)((long)puVar10 + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0x828) + 0x18))(lVar8 + 0x828);
    uVar6 = FUN_006bd550(*(undefined8 *)(lVar8 + 0x830),0);
    *(undefined4 *)(lVar8 + 0x8c0) = uVar6;
    *(undefined8 *)(lVar8 + 0x8c8) = 0;
    *(undefined8 *)(lVar8 + 0x8d0) = 0;
    *(undefined8 *)(lVar8 + 0x8d8) = 0;
    *(undefined ***)(lVar8 + 0x600) = &PTR_FUN_04a38d78;
    FUN_01b7bc14(lVar8 + 0x600);
    *(undefined ***)(lVar8 + 0x600) = &PTR_LAB_04a38dd0;
    *PTR_DAT_04bc06b0 = 1;
    puVar4 = PTR_DAT_04bc06b8;
    pvVar9 = *(void **)(lVar8 + 0x6d0);
    *(undefined8 *)(lVar8 + 0x6b0) = 0;
    *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0x6d0) = 0;
      *(undefined4 *)(lVar8 + 0x6c8) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 0x7b8);
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 0x7b8) = 0;
      *(undefined4 *)(lVar8 + 0x7b0) = 0;
    }
    pvVar9 = *(void **)(lVar8 + 2000);
    *(undefined4 *)(lVar8 + 0x7c0) = 0xffffffff;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar9);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar9);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
        }
      }
      *(undefined8 *)(lVar8 + 2000) = 0;
      *(undefined4 *)(lVar8 + 0x7c8) = 0;
    }
    puVar10 = *(undefined8 **)(lVar8 + 0x610);
    *(undefined **)(lVar8 + 0x600) = puVar3 + 0x10;
    if (puVar10 != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar8 + 0x618) < 1) {
        iVar1 = *(int *)(lVar8 + 0x618) + -1;
      }
      memset(puVar10,0,(long)iVar1);
      *(undefined1 *)((long)puVar10 + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0x608) + 0x18))(lVar8 + 0x608);
    uVar6 = FUN_006bd550(*(undefined8 *)(lVar8 + 0x610),0);
    *(undefined4 *)(lVar8 + 0x6a0) = uVar6;
    *(undefined8 *)(lVar8 + 0x6a8) = 0;
    *(undefined8 *)(lVar8 + 0x6b0) = 0;
    *(undefined8 *)(lVar8 + 0x6b8) = 0;
    FUN_01b73c98(lVar8 + 0x400);
    FUN_01b73f68(lVar8 + 0x200);
    FUN_01b74250(lVar8);
    DAT_05336138 = 0;
  }
  lVar8 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar8 != 0) {
    if (lVar8 == 1) {
      return;
    }
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

