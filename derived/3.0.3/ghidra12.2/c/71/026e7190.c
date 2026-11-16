
undefined8 FUN_026e7190(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  if (((((param_2[1] == 0) || (param_2[2] == 0)) || (param_2[3] == 0)) ||
      ((param_2[4] == 0 || (param_2[5] == 0)))) || (param_2[6] == 0)) {
    return 0;
  }
  *(long **)(param_1 + 8) = plVar5;
  *(long *)(param_1 + 0x10) = param_2[1];
  *(long *)(param_1 + 0x18) = param_2[2];
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    plVar5 = malloc(0x46818);
  }
  else {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x46818,8);
  }
  FUN_027366c0(plVar5,0,0);
  *plVar5 = (long)(PTR_DAT_04bc37c8 + 0x10);
  FUN_027056a0(plVar5 + 0x3296,0,0);
  plVar5[0x3296] = (long)(PTR_DAT_04bc36d8 + 0x10);
  *(long **)(param_1 + 0x20) = plVar5;
  lVar10 = *(long *)puVar2;
  puVar12 = (undefined8 *)(param_1 + 0x28);
  if (lVar10 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
LAB_026e72d0:
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
      goto LAB_026e72f0;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar10 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_026e72d0;
LAB_026e7428:
    *puVar12 = 0;
LAB_026e742c:
    FUN_026e6fd4(param_1);
    return 0;
  }
  pvVar7 = malloc(0x28);
LAB_026e72f0:
  *puVar12 = pvVar7;
  if (pvVar7 == (void *)0x0) goto LAB_026e742c;
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    plVar5 = malloc(0x28);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  puVar3 = PTR_DAT_04bc3820;
  puVar12 = (undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_DAT_04bc3820 + 0x10;
  plVar5[1] = 0x200000000;
  plVar5[2] = (long)(plVar5 + 3);
  *plVar5 = (long)puVar1;
  *(long **)(param_1 + 0x30) = plVar5;
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x28);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_026e7428;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  *puVar12 = pvVar7;
  if (pvVar7 == (void *)0x0) goto LAB_026e742c;
  lVar10 = *(long *)puVar2;
  if (lVar10 == 0) {
    plVar5 = malloc(0x28);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = 0x200000000;
  plVar5[2] = (long)(plVar5 + 3);
  lVar10 = *(long *)puVar2;
  *(long **)(param_1 + 0x48) = plVar5;
  if (lVar10 == 0) {
    puVar8 = malloc(0x1050);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      puVar8 = (undefined8 *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_026e74b8;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1050,8);
  }
LAB_026e74b8:
  *(undefined1 *)(puVar8 + 3) = 0;
  *puVar8 = &PTR_FUN_04a894b8;
  puVar8[4] = puVar8 + 4;
  puVar8[5] = puVar8 + 4;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[7] = puVar8 + 10;
  puVar8[1] = 0;
  puVar8[2] = 0;
  lVar10 = 0;
  while( true ) {
    *(long *)((long)puVar8 + lVar10 + 0x50) = (long)puVar8 + lVar10 + 0x70;
    if (lVar10 == 0xfc0) break;
    *(long *)((long)puVar8 + lVar10 + 0x70) = (long)puVar8 + lVar10 + 0x90;
    lVar10 = lVar10 + 0x40;
  }
  lVar10 = *(long *)puVar2;
  puVar8[0x206] = 0;
  puVar8[8] = puVar8 + 10;
  *(undefined4 *)(puVar8 + 9) = 0x80;
  *(undefined8 **)(param_1 + 0x38) = puVar8;
  if (lVar10 == 0) {
    puVar8 = malloc(0x1050);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      puVar8 = (undefined8 *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_026e7578;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1050,8);
  }
LAB_026e7578:
  *(undefined1 *)(puVar8 + 3) = 0;
  *puVar8 = &PTR_FUN_04a89508;
  puVar8[4] = puVar8 + 4;
  puVar8[5] = puVar8 + 4;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar8[7] = puVar8 + 10;
  puVar8[1] = 0;
  puVar8[2] = 0;
  lVar10 = 0;
  while( true ) {
    *(long *)((long)puVar8 + lVar10 + 0x50) = (long)puVar8 + lVar10 + 0x70;
    if (lVar10 == 0xfc0) break;
    *(long *)((long)puVar8 + lVar10 + 0x70) = (long)puVar8 + lVar10 + 0x90;
    lVar10 = lVar10 + 0x40;
  }
  puVar8[0x206] = 0;
  puVar8[8] = puVar8 + 10;
  *(undefined4 *)(puVar8 + 9) = 0x80;
  puVar11 = *(undefined8 **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x50) = puVar8;
  if (((*PTR_DAT_04bc3680 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3680), iVar4 != 0))
  {
    *(undefined ***)PTR_DAT_04bc3678 = &PTR_LAB_04a89558;
    __cxa_guard_release(PTR_DAT_04bc3680);
  }
  uVar9 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc3678);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((uVar9 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  puVar11[1] = *(long *)(param_1 + 0x10) + 0x110;
  puVar11[2] = lVar10 + 0x110;
  puVar8 = *(undefined8 **)(param_1 + 0x50);
  if (((*PTR_DAT_04bc36c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc36c0), iVar4 != 0))
  {
    *(undefined ***)PTR_DAT_04bc36b8 = &PTR_LAB_04a89558;
    __cxa_guard_release(PTR_DAT_04bc36c0);
  }
  uVar9 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc36b8);
  lVar10 = *(long *)(param_1 + 0x18);
  if ((uVar9 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  puVar8[1] = *(long *)(param_1 + 0x10) + 0x37be0;
  puVar8[2] = lVar10 + 0x37be0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar10 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar10 + 8) < *(int *)(lVar10 + 0xc)) {
      *(long *)(*(long *)(lVar10 + 0x10) + (long)*(int *)(lVar10 + 8) * 8) =
           *(long *)(param_1 + 0x38);
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    }
  }
  **(long **)(param_1 + 0x28) = param_2[3];
  *(long *)(*(long *)(param_1 + 0x28) + 8) = param_2[4];
  *(long *)(*(long *)(param_1 + 0x28) + 0x10) = param_2[5];
  *(long *)(*(long *)(param_1 + 0x28) + 0x18) = param_2[6];
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar10 = *(long *)(param_1 + 0x48);
    if (*(int *)(lVar10 + 8) < *(int *)(lVar10 + 0xc)) {
      *(long *)(*(long *)(lVar10 + 0x10) + (long)*(int *)(lVar10 + 8) * 8) =
           *(long *)(param_1 + 0x50);
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    }
  }
  **(long **)(param_1 + 0x40) = param_2[3];
  *(long *)(*(long *)(param_1 + 0x40) + 8) = param_2[4];
  *(long *)(*(long *)(param_1 + 0x40) + 0x10) = param_2[5];
  *(long *)(*(long *)(param_1 + 0x40) + 0x18) = param_2[6];
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20) = *(undefined8 *)(param_1 + 0x48);
  FUN_02640070(*(undefined8 *)(param_1 + 0x20),0,*(long *)(param_1 + 0x10) + 0x110,0,1);
  FUN_02640130(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_02640070(*(long *)(param_1 + 0x20) + 0x194b0,0,*(long *)(param_1 + 0x10) + 0x37be0,0,1);
  lVar10 = *(long *)(param_1 + 0x20) + 0x194b0;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x194b8) == 0) {
    lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  FUN_02640130(lVar10,*puVar12);
  return 1;
}

