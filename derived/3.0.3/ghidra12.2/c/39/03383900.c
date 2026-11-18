
void FUN_03383900(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *__ptr;
  long *plVar11;
  
  *param_1 = (long)&PTR_FUN_04b235a0;
  plVar2 = DAT_05739190;
  puVar6 = PTR_DAT_04bd0d40;
  if (DAT_05739188 != param_1) goto LAB_03383fa0;
  DAT_05739188 = (long *)0x0;
  if ((long *)DAT_05739190[0x9f] != (long *)0x0) {
    (**(code **)(*(long *)DAT_05739190[0x9f] + 8))();
    plVar2[0x9f] = 0;
  }
  if ((long *)*plVar2 != (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0x50))();
    *plVar2 = 0;
  }
  if ((long *)plVar2[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar2[2] + 8))();
    plVar2[2] = 0;
  }
  puVar4 = PTR_DAT_04bb2698;
  pvVar10 = (void *)plVar2[3];
  if (pvVar10 != (void *)0x0) {
    FUN_03f45838((long)pvVar10 + 0x28);
    FUN_03f45838((long)pvVar10 + 0x28);
    plVar11 = *(long **)((long)pvVar10 + 0x40);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      iVar3 = *(int *)((long)pvVar10 + 0x34) + -1;
      if (((*(int *)((long)pvVar10 + 0x34) < 1) ||
          (*(int *)((long)pvVar10 + 0x34) = iVar3, iVar3 == 0)) &&
         (*(long *)((long)pvVar10 + 0x38) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)pvVar10 + 0x38) = 0;
      }
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    FUN_0082c640(pvVar10);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[3] = 0;
  }
  pvVar10 = (void *)plVar2[4];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[4] = 0;
  }
  pvVar10 = (void *)plVar2[5];
  if (pvVar10 != (void *)0x0) {
    *(undefined **)((long)pvVar10 + 0x2098) = PTR_DAT_04bc6fa8 + 0x10;
    if (*(char *)((long)pvVar10 + 0x20aa) != '\0') {
      *(char *)((long)pvVar10 + 0x20aa) = '\0';
    }
    puVar1 = PTR_DAT_04bb8d40 + 0x10;
    *(undefined **)((long)pvVar10 + 0x1c68) = PTR_DAT_04bb7ed8 + 0x10;
    puVar5 = PTR_DAT_04bc5ac0;
    *(undefined **)((long)pvVar10 + 0x18b0) = puVar1;
    *(undefined **)((long)pvVar10 + 0x18c0) = puVar5 + 0x10;
    *(undefined **)((long)pvVar10 + 0x17f8) = PTR_DAT_04bb71c8 + 0x10;
    lVar7 = *(long *)puVar4;
    *(undefined **)((long)pvVar10 + 0xdc0) = PTR_DAT_04bb8a58 + 0x10;
    if (lVar7 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(lVar7,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[5] = 0;
  }
  pvVar10 = (void *)plVar2[6];
  if (pvVar10 != (void *)0x0) {
    FUN_033b8a90(pvVar10);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[6] = 0;
  }
  pvVar10 = (void *)plVar2[7];
  if (pvVar10 != (void *)0x0) {
    lVar7 = (long)pvVar10 + 8;
    do {
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != (long)pvVar10 + 8);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[7] = 0;
  }
  pvVar10 = (void *)plVar2[1];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[1] = 0;
  }
  lVar7 = plVar2[0x36];
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + -8);
    if (*plVar11 != 0) {
      lVar9 = *plVar11 * 0x38;
      do {
        FUN_03f2d448(lVar7 + -0x38 + lVar9);
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar4 == 0) {
      free(plVar11);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar4,plVar11);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar11);
      }
    }
    plVar2[0x36] = 0;
    *(undefined4 *)(plVar2 + 0x35) = 0;
  }
  lVar7 = plVar2[0x38];
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + -8);
    if (*plVar11 != 0) {
      lVar9 = *plVar11 * 0x38;
      do {
        FUN_03f2d448(lVar7 + -0x38 + lVar9);
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar4 == 0) {
      free(plVar11);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)puVar4,plVar11);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar11);
      }
    }
    plVar2[0x38] = 0;
    *(undefined4 *)(plVar2 + 0x37) = 0;
  }
  if ((long *)plVar2[0x8a] != (long *)0x0) {
    (**(code **)(*(long *)plVar2[0x8a] + 8))();
    plVar2[0x8a] = 0;
  }
  pvVar10 = (void *)plVar2[0x8b];
  if (pvVar10 != (void *)0x0) {
    FUN_03ebae78(pvVar10);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[0x8b] = 0;
  }
  pvVar10 = (void *)plVar2[0x8c];
  if (pvVar10 != (void *)0x0) {
    FUN_033d5198(pvVar10);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[0x8c] = 0;
  }
  __ptr = (undefined8 *)plVar2[0x8d];
  if (__ptr != (undefined8 *)0x0) {
    pvVar10 = (void *)*__ptr;
    if (pvVar10 == (void *)0x0) {
LAB_03383dac:
      lVar7 = *(long *)puVar4;
      if (lVar7 != 0) goto LAB_03383db4;
LAB_03383de4:
      free(__ptr);
    }
    else {
      if (*(long *)puVar4 != 0) {
        plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
        }
        goto LAB_03383dac;
      }
      free(pvVar10);
      lVar7 = *(long *)puVar4;
      if (lVar7 == 0) goto LAB_03383de4;
LAB_03383db4:
      plVar11 = (long *)FUN_038cb610(lVar7,__ptr);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,__ptr);
      }
    }
    plVar2[0x8d] = 0;
  }
  pvVar10 = (void *)plVar2[0x8e];
  if (pvVar10 != (void *)0x0) {
    FUN_033d5ad4(pvVar10);
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[0x8e] = 0;
  }
  pvVar10 = (void *)plVar2[0x8f];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[0x8f] = 0;
  }
  pvVar10 = (void *)plVar2[0x90];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar10);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar4,pvVar10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
      }
    }
    plVar2[0x90] = 0;
  }
  plVar11 = (long *)plVar2[0x98];
  lVar7 = plVar2[0x97];
  plVar2[0x93] = (long)&PTR_LAB_04b237b0;
  if ((plVar11 != (long *)0x0 || lVar7 != 0) && (lVar9 = plVar2[0x9a], lVar9 != 0)) {
    plVar2[0x9a] = 0;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar11;
      plVar11 = (long *)plVar2[0x98];
    }
    if (plVar11 != (long *)0x0) {
      *plVar11 = plVar2[0x97];
    }
    plVar2[0x97] = 0;
    plVar2[0x98] = 0;
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  lVar7 = plVar2[0x94];
  plVar2[0x93] = (long)(puVar6 + 0x10);
  if (lVar7 == 0) {
LAB_03383f7c:
    plVar2[0x94] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar11 = (long *)((long)plVar2 + (long)*(int *)(lVar7 + 0x84) + 0x498);
    if (*plVar11 != 0) {
      *(long *)(*plVar11 + 8) = plVar11[1];
    }
    if ((long *)plVar11[1] != (long *)0x0) {
      *(long *)plVar11[1] = *plVar11;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
    goto LAB_03383f7c;
  }
  FUN_03f2d448(plVar2 + 0x47);
  FUN_03f2d448(plVar2 + 0x40);
  FUN_03f2d448(plVar2 + 0x39);
  DAT_05739190 = (long *)0x0;
LAB_03383fa0:
  lVar7 = param_1[1];
  *param_1 = (long)(puVar6 + 0x10);
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
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

