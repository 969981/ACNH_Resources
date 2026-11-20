
void FUN_03f29b30(undefined4 *param_1)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  
  puVar6 = PTR_DAT_04bb2698;
  if ((param_1[0xe] & 1) == 0) {
    return;
  }
  pvVar8 = *(void **)(param_1 + 0xc);
  if (pvVar8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 0xc) = 0;
  }
  pvVar8 = *(void **)(param_1 + 2);
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  pvVar8 = *(void **)(param_1 + 6);
  if (pvVar8 != (void *)0x0) {
    iVar3 = param_1[4];
    if (iVar3 != 0) {
      uVar9 = 0;
      do {
        plVar7 = *(long **)((long)pvVar8 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        uVar1 = uVar9 + 1;
        uVar9 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
      pvVar8 = *(void **)(param_1 + 6);
      if (pvVar8 == (void *)0x0) goto LAB_03f29c6c;
    }
    if (*(long *)puVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = 0;
  }
LAB_03f29c6c:
  pvVar8 = *(void **)(param_1 + 10);
  if (pvVar8 != (void *)0x0) {
    iVar3 = param_1[8];
    if (iVar3 != 0) {
      uVar9 = 0;
      do {
        plVar7 = *(long **)((long)pvVar8 + (-(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3));
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        uVar1 = uVar9 + 1;
        uVar9 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
      pvVar8 = *(void **)(param_1 + 10);
      if (pvVar8 == (void *)0x0) goto LAB_03f29cf0;
    }
    if (*(long *)puVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[8] = 0;
  }
LAB_03f29cf0:
  puVar2 = param_1 + 0xe;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar5) {
      *puVar2 = *puVar2 & 0xfffffffe;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}

