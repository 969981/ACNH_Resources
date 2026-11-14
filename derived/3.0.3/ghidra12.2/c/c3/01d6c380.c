
void FUN_01d6c380(long *param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t __size;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb2698;
  iVar8 = *param_2;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  __size = (long)iVar8 << 3;
  if (iVar8 < 0) {
    __size = 0xffffffffffffffff;
  }
  if (lVar9 == 0) {
    pvVar5 = malloc(__size);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto joined_r0x01d6c41c;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
  }
joined_r0x01d6c41c:
  if (iVar8 != 0) {
    memset(pvVar5,0,(long)iVar8 << 3);
  }
  *param_1 = (long)pvVar5;
  iVar8 = *param_2;
  if (0 < iVar8) {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      pvVar5 = malloc((long)iVar8 << 3);
joined_r0x01d6c620:
      if (pvVar5 != (void *)0x0) {
        param_1[2] = (long)pvVar5;
        *(undefined4 *)(param_1 + 1) = 0;
        *(int *)((long)param_1 + 0xc) = iVar8;
      }
    }
    else {
      plVar4 = param_3;
      if (param_3 != (long *)0x0) {
LAB_01d6c484:
        pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)iVar8 << 3,8);
        goto joined_r0x01d6c620;
      }
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) goto LAB_01d6c484;
    }
    iVar8 = *param_2;
  }
  if (param_1[4] != 0) {
    (**(code **)(param_1[3] + 0x10))();
  }
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    puVar6 = malloc(0x10);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar9 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_01d6c520;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x10,8);
  }
LAB_01d6c520:
  *puVar6 = 0;
  puVar6[1] = 0;
  param_1[4] = (long)puVar6;
  if (0 < iVar8) {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      pvVar5 = malloc((long)(iVar8 << 3));
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar9 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_01d6c594;
      }
      pvVar5 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(iVar8 << 3),8);
    }
    if (pvVar5 != (void *)0x0) {
      puVar6[1] = pvVar5;
      *(undefined4 *)puVar6 = 0;
      *(int *)((long)puVar6 + 4) = iVar8;
    }
  }
LAB_01d6c594:
  iVar8 = *param_2;
  if ((0 < iVar8) && (piVar7 = (int *)param_1[4], piVar7 != (int *)0x0)) {
    lVar3 = 0;
    lVar9 = 1;
    while( true ) {
      if ((piVar7 != (int *)0x0) && (*piVar7 < piVar7[1])) {
        *(long *)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = *param_1 + lVar3;
        *piVar7 = *piVar7 + 1;
        iVar8 = *param_2;
      }
      if (iVar8 <= lVar9) break;
      piVar7 = (int *)param_1[4];
      lVar9 = lVar9 + 1;
      lVar3 = lVar3 + 8;
    }
  }
  return;
}

