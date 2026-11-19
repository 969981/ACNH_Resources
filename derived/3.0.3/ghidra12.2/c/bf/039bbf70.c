
long FUN_039bbf70(int *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  
  plVar7 = param_2;
  if (param_2 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
  }
  lVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,0x5b8,8);
  if (lVar6 == 0) {
    return 0;
  }
  FUN_039bc340(lVar6);
  iVar2 = *param_1;
  lVar11 = lVar6 + 0x78;
  FUN_0390d714(lVar11,3,param_2);
  FUN_0390d86c(lVar11,3,1,0,1);
  FUN_0390d86c(lVar11,3,1,0,1);
  FUN_0390d86c(lVar11,3,1,0,1);
  FUN_0390d990(lVar11,param_2,2,1);
  puVar4 = PTR_DAT_04bb2698;
  if (iVar2 < 1) {
LAB_039bc0d8:
    lVar11 = *(long *)puVar4;
    if (lVar11 == 0) goto LAB_039bc140;
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
LAB_039bc0e8:
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x18,8);
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar9 = malloc((long)iVar2 << 3);
joined_r0x039bc130:
      if (pvVar9 != (void *)0x0) {
        *(void **)(lVar6 + 0x2d8) = pvVar9;
        *(undefined4 *)(lVar6 + 0x2d0) = 0;
        *(int *)(lVar6 + 0x2d4) = iVar2;
      }
      goto LAB_039bc0d8;
    }
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_039bc0b4:
      pvVar9 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar2 << 3,8);
      goto joined_r0x039bc130;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar11 + 8);
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_039bc0b4;
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) goto LAB_039bc0e8;
LAB_039bc140:
    plVar7 = malloc(0x18);
  }
  puVar3 = PTR_DAT_04bd1850;
  *(undefined4 *)(plVar7 + 1) = 0;
  plVar7[2] = 0;
  *plVar7 = (long)(puVar3 + 0x10);
  *(long **)(lVar6 + 0x2e0) = plVar7;
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x600);
joined_r0x039bc23c:
    if (pvVar9 != (void *)0x0) {
      memset(pvVar9,0,0x600);
      plVar7[2] = (long)pvVar9;
      *(undefined4 *)(plVar7 + 1) = 0x40;
    }
    lVar11 = *(long *)puVar4;
    if (lVar11 == 0) goto LAB_039bc254;
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
LAB_039bc1ec:
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_039bc218;
      plVar7 = (long *)0x0;
    }
    else {
LAB_039bc218:
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x40,8);
    }
  }
  else {
    plVar10 = param_2;
    if (param_2 != (long *)0x0) {
LAB_039bc1a4:
      pvVar9 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x600,0x20);
      goto joined_r0x039bc23c;
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar10 = (long *)(lVar11 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 != (long *)0x0) goto LAB_039bc1a4;
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) goto LAB_039bc1ec;
LAB_039bc254:
    plVar7 = malloc(0x40);
  }
  puVar5 = PTR_DAT_04bd1840;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined4 *)(plVar7 + 4) = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *plVar7 = (long)(puVar5 + 0x10);
  plVar7[1] = (long)(puVar3 + 0x10);
  plVar7[2] = (long)&DAT_0407ebb1;
  plVar7[3] = 0;
  *(undefined4 *)((long)plVar7 + 0x3c) = 0;
  lVar11 = *(long *)puVar4;
  *(long **)(lVar6 + 0x2e8) = plVar7;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x200);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar11 + 8);
      if (lVar8 != 0) {
        puVar1 = (undefined8 *)(lVar8 + 0xa8);
      }
      param_2 = (long *)*puVar1;
      if (param_2 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_039bc2f8;
      }
    }
    pvVar9 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x200,0x40);
  }
LAB_039bc2f8:
  plVar7[5] = (long)pvVar9;
  plVar7[6] = (long)pvVar9;
  *(undefined4 *)(plVar7 + 7) = 0x40;
  *(undefined4 *)((long)plVar7 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x2f0) = 0;
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 1;
  return lVar6;
}

