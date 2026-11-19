
void FUN_03c41ab0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *__ptr;
  
  *param_1 = (long)&PTR_FUN_04b7f418;
  param_1[0x45] = (long)&PTR_LAB_04b7f4f0;
  FUN_03b49c50(DAT_05aebb78);
  lVar4 = DAT_05aed8a8;
  if (*(long *)(DAT_05aed8a8 + 0x1f0) != 0) {
    if (0 < *(int *)(DAT_05aed8a8 + 0x1e8)) {
      lVar2 = 0;
      puVar3 = *(undefined8 **)(DAT_05aed8a8 + 0x1f8);
      do {
        puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1f0) + lVar2 * 8);
        lVar2 = lVar2 + 1;
        *puVar5 = puVar3;
        *(undefined8 **)(lVar4 + 0x1f8) = puVar5;
        puVar3 = puVar5;
      } while (lVar2 < *(int *)(lVar4 + 0x1e8));
    }
    __ptr = *(void **)(lVar4 + 0x200);
    *(undefined4 *)(lVar4 + 0x1e8) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        }
      }
    }
    *(undefined4 *)(lVar4 + 0x204) = 0;
    *(undefined8 *)(lVar4 + 0x1fc) = 0;
    *(undefined8 *)(lVar4 + 500) = 0;
    *(undefined8 *)(lVar4 + 0x1ec) = 0;
  }
  if ((long *)param_1[0xfa] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfa] + 8))();
    param_1[0xfa] = 0;
  }
  if ((long *)param_1[0xfb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfb] + 8))();
    param_1[0xfb] = 0;
  }
  if ((long *)param_1[0xfc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfc] + 8))();
    param_1[0xfc] = 0;
  }
  lVar4 = 0;
  plVar1 = param_1 + 0x100;
  param_1[0x100] = (long)(PTR_DAT_04bb34f0 + 0x10);
  do {
    lVar2 = DAT_05aec700 + 0x108 + lVar4 * 0x18;
    if (*(long *)(lVar2 + 8) != lVar2) {
      lVar7 = (long)*(int *)(lVar2 + 0x14);
      plVar9 = (long *)(*(long *)(lVar2 + 8) - lVar7);
      do {
        if (plVar9 == plVar1) {
          plVar9 = (long *)(lVar7 + (long)plVar1);
          if (*plVar9 != 0) {
            *(long *)(*plVar9 + 8) = plVar9[1];
          }
          if ((long *)plVar9[1] != (long *)0x0) {
            *(long *)plVar9[1] = *plVar9;
          }
          *plVar9 = 0;
          plVar9[1] = 0;
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          goto LAB_03c41c84;
        }
        plVar9 = (long *)(*(long *)((long)plVar9 + lVar7 + 8) - lVar7);
      } while (plVar9 != (long *)(lVar2 - lVar7));
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
LAB_03c41c84:
  param_1[0x10e] = (long)(PTR_DAT_04bb34f8 + 0x10);
  FUN_038e1c80(param_1 + 0x113);
  lVar4 = param_1[0x101];
  param_1[0x100] = (long)&PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03c41d24;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar2 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
    }
  }
  param_1[0x101] = 1;
LAB_03c41d24:
  FUN_03c41e00(param_1 + 0x6b);
  param_1[0x66] = (long)&PTR_LAB_04b7f780;
  plVar1 = (long *)param_1[0x68];
  while (plVar1 != param_1 + 0x67) {
    plVar9 = (long *)plVar1[1];
    lVar4 = plVar1[2];
    plVar8 = *(long **)(lVar4 + 0x28);
    plVar6 = (long *)(lVar4 + 0x20);
    lVar2 = *plVar6;
    plVar1 = plVar9;
    if ((plVar8 != (long *)0x0 || lVar2 != 0) && (lVar7 = *(long *)(lVar4 + 0x38), lVar7 != 0)) {
      *(undefined8 *)(lVar4 + 0x38) = 0;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar8;
        plVar8 = *(long **)(lVar4 + 0x28);
      }
      if (plVar8 != (long *)0x0) {
        *plVar8 = *plVar6;
      }
      *plVar6 = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    }
  }
  if ((char)param_1[0x65] != '\0') {
    DAT_05aed888 = 0;
  }
  FUN_038e31ec(param_1 + 0x59);
  FUN_038e31ec(param_1 + 0x4f);
  FUN_038e1a84(param_1 + 0x46);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

