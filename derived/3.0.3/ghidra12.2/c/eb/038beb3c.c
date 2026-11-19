
bool FUN_038beb3c(long param_1,void *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  plVar3 = *(long **)(param_1 + 0x110);
  lVar1 = plVar3[2];
  lVar2 = plVar3[5];
  if ((int)lVar1 < (int)lVar2) {
    plVar8 = (long *)plVar3[3];
    if (plVar8 != (long *)0x0) {
      plVar3[3] = *plVar8;
    }
    *plVar8 = 0;
    plVar4 = plVar8 + 0x1c;
    *plVar4 = 0;
    plVar8[0x16] = 0x1ffffffff;
    plVar8[0x17] = 0;
    plVar9 = plVar8 + 0x19;
    *(undefined4 *)(plVar8 + 1) = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    *(undefined8 *)((long)plVar8 + 0x3f) = 0;
    *(undefined4 *)(plVar8 + 0xf) = 0;
    plVar8[4] = 0;
    *(undefined8 *)((long)plVar8 + 0x27) = 0;
    *(undefined4 *)(plVar8 + 0x1b) = 0;
    plVar8[0x18] = (long)&PTR_LAB_04b63ca8;
    plVar8[0x1d] = 0;
    plVar8[9] = 0;
    plVar8[10] = 0;
    *(undefined8 *)((long)plVar8 + 0x57) = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    *(undefined8 *)((long)plVar8 + 0x6f) = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[0x14] = 0;
    plVar8[0x15] = 0;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    plVar8[0x10] = 0;
    plVar8[0x11] = 0;
    plVar8[0x19] = (long)plVar9;
    plVar8[0x1a] = (long)plVar9;
    lVar5 = *plVar3;
    *plVar3 = (long)plVar4;
    *plVar4 = lVar5;
    plVar8[0x1d] = (long)plVar3;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar4;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    memcpy(plVar8 + 1,param_2,0xb8);
    lVar5 = *(long *)((long)param_2 + 0xa0);
    if (param_3 != 0) {
      plVar4 = (long *)(param_3 + 0x20);
      lVar7 = *plVar4;
      plVar3 = *(long **)(param_3 + 0x28);
      if ((plVar3 != (long *)0x0 || lVar7 != 0) && (lVar6 = *(long *)(param_3 + 0x38), lVar6 != 0))
      {
        *(undefined8 *)(param_3 + 0x38) = 0;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar3;
          plVar3 = *(long **)(param_3 + 0x28);
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar4;
        }
        *plVar4 = 0;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      }
      lVar7 = *(long *)(param_3 + 0x38);
      if (lVar7 != 0) {
        plVar3 = *(long **)(param_3 + 0x28);
        *(undefined8 *)(param_3 + 0x38) = 0;
        if (*(long *)(param_3 + 0x20) != 0) {
          *(long **)(*(long *)(param_3 + 0x20) + 8) = plVar3;
          plVar3 = *(long **)(param_3 + 0x28);
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar4;
        }
        *plVar4 = 0;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      }
      *(long **)(param_3 + 0x38) = plVar9;
      lVar7 = *plVar9;
      *plVar9 = (long)plVar4;
      *(long *)(param_3 + 0x20) = lVar7;
      *(long **)(param_3 + 0x28) = plVar9;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar4;
      }
      *(int *)(plVar8 + 0x1b) = (int)plVar8[0x1b] + 1;
    }
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x20);
      lVar7 = *plVar4;
      plVar3 = *(long **)(lVar5 + 0x28);
      if ((plVar3 != (long *)0x0 || lVar7 != 0) && (lVar6 = *(long *)(lVar5 + 0x38), lVar6 != 0)) {
        *(undefined8 *)(lVar5 + 0x38) = 0;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar3;
          plVar3 = *(long **)(lVar5 + 0x28);
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar4;
        }
        *plVar4 = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      }
      lVar7 = *(long *)(lVar5 + 0x38);
      if (lVar7 != 0) {
        plVar3 = *(long **)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x38) = 0;
        if (*(long *)(lVar5 + 0x20) != 0) {
          *(long **)(*(long *)(lVar5 + 0x20) + 8) = plVar3;
          plVar3 = *(long **)(lVar5 + 0x28);
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar4;
        }
        *plVar4 = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      }
      *(long **)(lVar5 + 0x38) = plVar9;
      lVar7 = *plVar9;
      *plVar9 = (long)plVar4;
      *(long *)(lVar5 + 0x20) = lVar7;
      *(long **)(lVar5 + 0x28) = plVar9;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar4;
      }
      *(int *)(plVar8 + 0x1b) = (int)plVar8[0x1b] + 1;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return (int)lVar1 < (int)lVar2;
}

