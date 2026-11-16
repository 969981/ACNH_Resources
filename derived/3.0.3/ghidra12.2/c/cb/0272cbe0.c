
undefined8 FUN_0272cbe0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  if ((((param_2[1] == 0) || (param_2[2] == 0)) || (param_2[3] == 0)) || (param_2[4] == 0)) {
    return 0;
  }
  *(long **)(param_1 + 8) = plVar5;
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar6 = malloc(0x74a40);
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x74a40,0x10);
  }
  *(undefined8 *)((long)puVar6 + 6) = 0;
  *puVar6 = 0;
  *(undefined2 *)((long)puVar6 + 0xe) = 0xffff;
  puVar6[8] = 0;
  *(undefined8 *)((long)puVar6 + 0x46) = 0;
  *(undefined2 *)((long)puVar6 + 0x4e) = 0xffff;
  FUN_027ee494(puVar6 + 0x22);
  FUN_028119e0(puVar6 + 0x6f7c);
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    puVar6 = malloc(0x74a40);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_0272cd10;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x74a40,0x10);
  }
LAB_0272cd10:
  *(undefined8 *)((long)puVar6 + 6) = 0;
  *puVar6 = 0;
  *(undefined2 *)((long)puVar6 + 0xe) = 0xffff;
  puVar6[8] = 0;
  *(undefined8 *)((long)puVar6 + 0x46) = 0;
  *(undefined2 *)((long)puVar6 + 0x4e) = 0xffff;
  FUN_027ee494(puVar6 + 0x22);
  FUN_028119e0(puVar6 + 0x6f7c);
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    plVar5 = malloc(0x46818);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_0272cdac;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x46818,8);
  }
LAB_0272cdac:
  FUN_027366c0(plVar5,0,0);
  *plVar5 = (long)(PTR_DAT_04bc37c8 + 0x10);
  FUN_027056a0(plVar5 + 0x3296,0,0);
  plVar5[0x3296] = (long)(PTR_DAT_04bc36d8 + 0x10);
  *(long **)(param_1 + 0x20) = plVar5;
  lVar12 = *(long *)puVar2;
  puVar6 = (undefined8 *)(param_1 + 0x28);
  if (lVar12 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
LAB_0272ce38:
      pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
      *puVar6 = pvVar8;
      goto joined_r0x0272ce64;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar7 != 0) {
      plVar5 = (long *)(lVar7 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0272ce38;
LAB_0272cfa0:
    *puVar6 = 0;
LAB_0272cfa4:
    FUN_0272c990(param_1);
    return 0;
  }
  pvVar8 = malloc(0x28);
  *puVar6 = pvVar8;
joined_r0x0272ce64:
  if (pvVar8 == (void *)0x0) goto LAB_0272cfa4;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    plVar5 = malloc(0x28);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  puVar3 = PTR_DAT_04bc3820;
  puVar6 = (undefined8 *)(param_1 + 0x40);
  puVar1 = PTR_DAT_04bc3820 + 0x10;
  plVar5[1] = 0x200000000;
  plVar5[2] = (long)(plVar5 + 3);
  *plVar5 = (long)puVar1;
  *(long **)(param_1 + 0x30) = plVar5;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    pvVar8 = malloc(0x28);
    *puVar6 = pvVar8;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0272cfa0;
    }
    pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
    *puVar6 = pvVar8;
  }
  if (pvVar8 == (void *)0x0) goto LAB_0272cfa4;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    plVar5 = malloc(0x28);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar5 = (long *)(lVar7 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x28,8);
  }
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = 0x200000000;
  plVar5[2] = (long)(plVar5 + 3);
  lVar12 = *(long *)puVar2;
  *(long **)(param_1 + 0x48) = plVar5;
  if (lVar12 == 0) {
    plVar5 = malloc(0x1050);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      plVar5 = (long *)0x0;
      if (plVar9 == (long *)0x0) goto LAB_0272d030;
    }
    plVar5 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1050,8);
  }
LAB_0272d030:
  *(undefined1 *)(plVar5 + 3) = 0;
  puVar1 = PTR_DAT_04bc36c8;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[4] = (long)(plVar5 + 4);
  plVar5[5] = (long)(plVar5 + 4);
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[7] = (long)(plVar5 + 10);
  for (lVar12 = 0; *(long *)((long)plVar5 + lVar12 + 0x50) = (long)plVar5 + lVar12 + 0x70,
      lVar12 != 0xfc0; lVar12 = lVar12 + 0x40) {
    *(long *)((long)plVar5 + lVar12 + 0x70) = (long)plVar5 + lVar12 + 0x90;
  }
  lVar12 = *(long *)puVar2;
  plVar5[0x206] = 0;
  plVar5[8] = (long)(plVar5 + 10);
  *(undefined4 *)(plVar5 + 9) = 0x80;
  *(long **)(param_1 + 0x38) = plVar5;
  if (lVar12 == 0) {
    plVar5 = malloc(0x1050);
  }
  else {
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar9 = (long *)(lVar7 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      plVar5 = (long *)0x0;
      if (plVar9 == (long *)0x0) goto LAB_0272d0f4;
    }
    plVar5 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1050,8);
  }
LAB_0272d0f4:
  *(undefined1 *)(plVar5 + 3) = 0;
  puVar2 = PTR_DAT_04bc36d0;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[4] = (long)(plVar5 + 4);
  plVar5[5] = (long)(plVar5 + 4);
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[7] = (long)(plVar5 + 10);
  for (lVar12 = 0; *(long *)((long)plVar5 + lVar12 + 0x50) = (long)plVar5 + lVar12 + 0x70,
      lVar12 != 0xfc0; lVar12 = lVar12 + 0x40) {
    *(long *)((long)plVar5 + lVar12 + 0x70) = (long)plVar5 + lVar12 + 0x90;
  }
  plVar5[0x206] = 0;
  plVar5[8] = (long)(plVar5 + 10);
  *(undefined4 *)(plVar5 + 9) = 0x80;
  puVar11 = *(undefined8 **)(param_1 + 0x38);
  *(long **)(param_1 + 0x50) = plVar5;
  if (((*PTR_DAT_04bc3680 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3680), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc3678 = PTR_DAT_04bc3688 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3680);
  }
  uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc3678);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((uVar10 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  puVar11[1] = *(long *)(param_1 + 0x10) + 0x110;
  puVar11[2] = lVar12 + 0x110;
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  if (((*PTR_DAT_04bc36c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc36c0), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc36b8 = PTR_DAT_04bc3688 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc36c0);
  }
  uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc36b8);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((uVar10 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  puVar11[1] = *(long *)(param_1 + 0x10) + 0x37be0;
  puVar11[2] = lVar12 + 0x37be0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar12 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar12 + 8) < *(int *)(lVar12 + 0xc)) {
      *(long *)(*(long *)(lVar12 + 0x10) + (long)*(int *)(lVar12 + 8) * 8) =
           *(long *)(param_1 + 0x38);
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
  }
  **(long **)(param_1 + 0x28) = param_2[1];
  *(long *)(*(long *)(param_1 + 0x28) + 8) = param_2[2];
  *(long *)(*(long *)(param_1 + 0x28) + 0x10) = param_2[3];
  *(long *)(*(long *)(param_1 + 0x28) + 0x18) = param_2[4];
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar12 = *(long *)(param_1 + 0x48);
    if (*(int *)(lVar12 + 8) < *(int *)(lVar12 + 0xc)) {
      *(long *)(*(long *)(lVar12 + 0x10) + (long)*(int *)(lVar12 + 8) * 8) =
           *(long *)(param_1 + 0x50);
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
  }
  **(long **)(param_1 + 0x40) = param_2[1];
  *(long *)(*(long *)(param_1 + 0x40) + 8) = param_2[2];
  *(long *)(*(long *)(param_1 + 0x40) + 0x10) = param_2[3];
  *(long *)(*(long *)(param_1 + 0x40) + 0x18) = param_2[4];
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20) = *(undefined8 *)(param_1 + 0x48);
  FUN_02640070(*(undefined8 *)(param_1 + 0x20),0,*(long *)(param_1 + 0x10) + 0x110,0,1);
  FUN_02640130(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_02640070(*(long *)(param_1 + 0x20) + 0x194b0,0,*(long *)(param_1 + 0x10) + 0x37be0,0,1);
  lVar12 = *(long *)(param_1 + 0x20) + 0x194b0;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x194b8) == 0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  FUN_02640130(lVar12,*puVar6);
  return 1;
}

