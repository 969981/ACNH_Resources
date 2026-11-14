
void FUN_01c81610(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  *param_1 = (long)&PTR_FUN_04a43d20;
  puVar4 = PTR_DAT_04bc1048;
  puVar3 = PTR_DAT_04bb47c8;
  if (0 < (int)param_1[0x40f]) {
    uVar8 = 0;
    do {
      plVar2 = param_1 + 4 + uVar8 * 10;
      if (99 < uVar8) {
        plVar2 = param_1 + 4;
      }
      puVar6 = (undefined8 *)plVar2[7];
      if (puVar6 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)puVar4;
        plVar5 = (long *)puVar10[2];
        if (plVar5 != puVar10 + 1) {
          plVar1 = (long *)((long)puVar6 + (long)*(int *)((long)puVar10 + 0x1c));
          do {
            if (plVar5 == plVar1) {
              if (*plVar1 != 0) {
                *(long *)(*plVar1 + 8) = plVar1[1];
              }
              if ((long *)plVar1[1] != (long *)0x0) {
                *(long *)plVar1[1] = *plVar1;
              }
              *plVar1 = 0;
              plVar1[1] = 0;
              *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + -1;
              if (*(char *)(puVar6 + 2) == '\0') {
                (**(code **)(*(long *)*puVar10 + 0x38))((long *)*puVar10,*puVar6);
              }
              (**(code **)(*(long *)*puVar10 + 0x38))((long *)*puVar10,puVar6);
              break;
            }
            plVar5 = (long *)plVar5[1];
          } while (plVar5 != puVar10 + 1);
        }
        plVar2[7] = 0;
      }
      if (plVar2[8] != 0) {
        (**(code **)(**(long **)(*(long *)puVar3 + 8) + 0x38))();
        plVar2[8] = 0;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)param_1[0x40f]);
  }
  *(undefined4 *)(param_1 + 0x40f) = 0;
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

