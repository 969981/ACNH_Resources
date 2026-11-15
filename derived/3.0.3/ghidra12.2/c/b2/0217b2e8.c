
void FUN_0217b2e8(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__s;
  long lVar8;
  
  *param_1 = (long)&PTR_FUN_04a75bc8;
  plVar1 = DAT_053fb030;
  if (DAT_053faf80 == param_1) {
    DAT_053faf80 = (long *)0x0;
    FUN_021802b8(DAT_053fb030 + 0x84);
    FUN_0218058c(plVar1 + 0x44);
    *plVar1 = (long)&PTR_FUN_04a75d78;
    FUN_02185490(plVar1);
    *plVar1 = (long)&PTR_LAB_04a75dd0;
    puVar3 = PTR_DAT_04bc2ac0;
    pvVar7 = (void *)plVar1[0x1a];
    *PTR_DAT_04bc2ab8 = 1;
    *(undefined8 *)puVar3 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
    puVar3 = PTR_DAT_04bb2698;
    plVar1[0x16] = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar1[0x1a] = 0;
      *(undefined4 *)(plVar1 + 0x19) = 0;
    }
    pvVar7 = (void *)plVar1[0x37];
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar1[0x37] = 0;
      *(undefined4 *)(plVar1 + 0x36) = 0;
    }
    pvVar7 = (void *)plVar1[0x3a];
    *(undefined4 *)(plVar1 + 0x38) = 0xffffffff;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar1[0x3a] = 0;
      *(undefined4 *)(plVar1 + 0x39) = 0;
    }
    __s = (undefined8 *)plVar1[2];
    *plVar1 = (long)(PTR_DAT_04bcb440 + 0x10);
    if (__s != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[3] < 1) {
        iVar2 = (int)plVar1[3] + -1;
      }
      memset(__s,0,(long)iVar2);
      *(undefined1 *)((long)__s + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[1] + 0x18))(plVar1 + 1);
    uVar4 = FUN_006bd550(plVar1[2],0);
    *(undefined4 *)(plVar1 + 0x14) = uVar4;
    plVar1[0x17] = 0;
    DAT_053fb030 = (long *)0x0;
    plVar1[0x15] = 0;
    plVar1[0x16] = 0;
  }
  lVar6 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

