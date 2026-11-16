
undefined8 FUN_026fd710(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  puVar4 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar5 = malloc(0x40);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_026fd79c;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
  }
LAB_026fd79c:
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  *plVar5 = (long)&PTR_LAB_04a8a730;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar7 = *(long **)(param_1 + 8);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar15 = *(long *)puVar4;
  *plVar10 = (long)plVar7;
  if (lVar15 == 0) {
    pvVar8 = malloc(0x5b3c40);
  }
  else {
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,&LAB_005b3c40,0x10);
  }
  FUN_02781640();
  plVar5[2] = (long)pvVar8;
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    pvVar8 = malloc(0x5b3c40);
  }
  else {
    plVar7 = (long *)*plVar10;
    if (plVar7 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,&LAB_005b3c40,0x10);
  }
  FUN_02781640();
  plVar5[3] = (long)pvVar8;
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    puVar9 = malloc(0x276c40);
  }
  else {
    plVar7 = (long *)*plVar10;
    if (plVar7 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x276c40,8);
  }
  FUN_0270c0d4(puVar9,0,0);
  *puVar9 = &PTR_LAB_04a8c230;
  plVar5[4] = (long)puVar9;
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    pvVar8 = malloc(0x28);
    plVar5[5] = (long)pvVar8;
  }
  else {
    plVar7 = (long *)*plVar10;
    if (plVar7 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar5[5] = 0;
        goto LAB_026fdd30;
      }
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
    plVar5[5] = (long)pvVar8;
  }
  if (pvVar8 == (void *)0x0) {
LAB_026fdd30:
    FUN_02725c58(plVar5);
    return 0;
  }
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    plVar7 = (long *)*plVar10;
    if (plVar7 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar15 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
  }
  lVar15 = param_1 + 0x3d0;
  lVar6 = param_1 + 0x3f0;
  lVar1 = param_1 + 0x410;
  lVar2 = param_1 + 0x430;
  puVar3 = PTR_DAT_04bc3820 + 0x10;
  plVar7[1] = 0x200000000;
  plVar7[2] = (long)(plVar7 + 3);
  *plVar7 = (long)puVar3;
  plVar5[6] = (long)plVar7;
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x1050);
  }
  else {
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar16 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      puVar9 = (undefined8 *)0x0;
      if (plVar10 == (long *)0x0) goto LAB_026fda30;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1050,8);
  }
LAB_026fda30:
  *(undefined1 *)(puVar9 + 3) = 0;
  *puVar9 = &PTR_LAB_04a8a790;
  puVar9[4] = puVar9 + 4;
  puVar9[5] = puVar9 + 4;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[7] = puVar9 + 10;
  puVar9[1] = 0;
  puVar9[2] = 0;
  for (lVar16 = 0; *(long *)((long)puVar9 + lVar16 + 0x50) = (long)puVar9 + lVar16 + 0x70,
      lVar16 != 0xfc0; lVar16 = lVar16 + 0x40) {
    *(long *)((long)puVar9 + lVar16 + 0x70) = (long)puVar9 + lVar16 + 0x90;
  }
  puVar9[0x206] = 0;
  puVar9[8] = puVar9 + 10;
  *(undefined4 *)(puVar9 + 9) = 0x80;
  lVar16 = plVar5[3];
  plVar5[7] = (long)puVar9;
  puVar9[1] = plVar5[2];
  puVar9[2] = lVar16;
  if (plVar5[7] != 0) {
    lVar16 = plVar5[6];
    if (*(int *)(lVar16 + 8) < *(int *)(lVar16 + 0xc)) {
      *(long *)(*(long *)(lVar16 + 0x10) + (long)*(int *)(lVar16 + 8) * 8) = plVar5[7];
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    }
  }
  *(long *)plVar5[5] = lVar15;
  *(long *)(plVar5[5] + 8) = lVar6;
  *(long *)(plVar5[5] + 0x10) = lVar1;
  *(long *)(plVar5[5] + 0x18) = lVar2;
  *(long *)(plVar5[5] + 0x20) = plVar5[6];
  FUN_02640070(plVar5[4],0,plVar5[2],0,1);
  FUN_02640130(plVar5[4],plVar5[5]);
  *(long **)(*(long *)(param_1 + 0x10) + 0x130) = plVar5;
  uVar12 = (**(code **)(*plVar5 + 0x40))(plVar5);
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = uVar12;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x38);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar11 != 0) {
        plVar5 = (long *)(lVar11 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
  }
  puVar9[5] = 0;
  puVar9[6] = 0;
  *puVar9 = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x130) + 0x10))();
  local_90 = local_90 + 0x1e3848;
  local_88 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x130) + 0x20))();
  local_88 = local_88 + 0x1e3848;
  lStack_80 = lVar15;
  local_78 = lVar6;
  lStack_70 = lVar1;
  local_68 = lVar2;
  uVar13 = FUN_026fd390(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x138) = puVar9;
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = puVar9[6];
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar14 != 0) {
        plVar5 = (long *)(lVar14 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x140) = puVar9;
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar14 != 0) {
        plVar5 = (long *)(lVar14 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x148) = puVar9;
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar14 != 0) {
        plVar5 = (long *)(lVar14 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x150) = puVar9;
  lVar16 = *(long *)puVar4;
  if (lVar16 == 0) {
    puVar9 = malloc(0x20);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar14 != 0) {
        plVar5 = (long *)(lVar14 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20,8);
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x158) = puVar9;
  puVar9 = (undefined8 *)FUN_038aa4a0(0x20,*(undefined8 *)(param_1 + 8),8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x160) = puVar9;
  puVar9 = (undefined8 *)FUN_038aa4a0(0x20,*(undefined8 *)(param_1 + 8),8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x168) = puVar9;
  puVar9 = (undefined8 *)FUN_038aa4a0(0x20,*(undefined8 *)(param_1 + 8),8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x170) = puVar9;
  puVar9 = (undefined8 *)FUN_038aa4a0(0x20,*(undefined8 *)(param_1 + 8),8);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  local_98 = *(undefined8 *)(param_1 + 8);
  local_90 = lVar15;
  local_88 = lVar6;
  lStack_80 = lVar1;
  local_78 = lVar2;
  uVar13 = FUN_0272d49c(puVar9,&local_98);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  *(undefined8 **)(lVar11 + 0x178) = puVar9;
  return 1;
}

