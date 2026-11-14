
undefined4 FUN_01d6fbc0(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x28) != 0) goto LAB_01d6fbec;
  iVar1 = param_2 << 3;
  if (0 < param_2) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar6 = malloc((long)iVar1);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar10 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_01d6fc8c;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar1,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x28) = pvVar6;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(int *)(param_1 + 0x24) = param_2;
    }
  }
LAB_01d6fc8c:
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    puVar7 = malloc(0x10);
  }
  else {
    plVar5 = param_4;
    if (param_4 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_01d6fd04;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
  }
LAB_01d6fd04:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 **)(param_1 + 0x38) = puVar7;
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    goto LAB_01d6fbec;
  }
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    pvVar6 = malloc((long)iVar1);
joined_r0x01d6fea4:
    if (pvVar6 != (void *)0x0) {
      puVar7[1] = pvVar6;
      *(undefined4 *)puVar7 = 0;
      *(int *)((long)puVar7 + 4) = param_2;
    }
  }
  else {
    plVar5 = param_4;
    if (param_4 != (long *)0x0) {
LAB_01d6fd54:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar1,8);
      goto joined_r0x01d6fea4;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_01d6fd54;
  }
  puVar3 = PTR_DAT_04bb3350;
  piVar11 = (int *)(param_1 + 0x40);
  *piVar11 = 0;
  do {
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
      plVar5 = malloc(0xa8);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar10 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) break;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa8,8);
    }
    if (plVar5 == (long *)0x0) break;
    FUN_01d705b4(plVar5);
    uVar8 = FUN_01d70ad0(plVar5,param_3,param_4);
    if ((uVar8 & 1) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      break;
    }
    if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
      *(long **)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = plVar5;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    piVar9 = *(int **)(param_1 + 0x38);
    if ((piVar9 != (int *)0x0) && (*piVar9 < piVar9[1])) {
      *(long **)(*(long *)(piVar9 + 2) + (long)*piVar9 * 8) = plVar5;
      *piVar9 = *piVar9 + 1;
    }
    param_2 = param_2 + -1;
    *piVar11 = *piVar11 + 1;
  } while (param_2 != 0);
LAB_01d6fbec:
  return *(undefined4 *)(param_1 + 0x40);
}

