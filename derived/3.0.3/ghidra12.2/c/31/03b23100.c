
void FUN_03b23100(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  
  pvVar4 = (void *)param_1[0xb];
  *param_1 = &PTR_LAB_04b73f78;
  if (pvVar4 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 10);
    if (iVar2 != 0) {
      uVar5 = 0;
      do {
        plVar3 = *(long **)((long)pvVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3));
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        uVar1 = uVar5 + 1;
        uVar5 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      pvVar4 = (void *)param_1[0xb];
      if (pvVar4 == (void *)0x0) goto LAB_03b231b4;
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
LAB_03b231b4:
  pvVar4 = (void *)param_1[0xd];
  if (pvVar4 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 != 0) {
      uVar5 = 0;
      do {
        plVar3 = *(long **)((long)pvVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3));
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        uVar1 = uVar5 + 1;
        uVar5 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      pvVar4 = (void *)param_1[0xd];
      if (pvVar4 == (void *)0x0) {
        return;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

