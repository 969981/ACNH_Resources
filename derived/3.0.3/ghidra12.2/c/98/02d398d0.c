
void FUN_02d398d0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  void *__s;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  FUN_02ece77c();
  *param_1 = &PTR_LAB_04abedc0;
  puVar6 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    plVar12 = malloc(0x40);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar15 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x40,8);
    }
  }
  plVar16 = plVar12 + 1;
  *plVar16 = 0;
  plVar12[5] = 0;
  puVar5 = PTR_DAT_04bc6048;
  plVar12[2] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[3] = (long)plVar12;
  plVar12[4] = 0;
  *(undefined2 *)(plVar12 + 5) = 0xfffe;
  *(undefined1 *)((long)plVar12 + 0x2b) = 0;
  *plVar12 = (long)(puVar5 + 0x10);
  FUN_0277d4ac();
  *(undefined1 *)(plVar12 + 6) = 0;
  *(undefined8 *)((long)plVar12 + 0x34) = 0xfffe;
  FUN_0277d4ac();
  lVar15 = plVar12[4];
  plVar1 = param_1 + 0x44;
  if (lVar15 != 0) {
    plVar12[4] = 0;
    if (plVar12[1] != 0) {
      *(long *)(plVar12[1] + 8) = plVar12[2];
    }
    if ((long *)plVar12[2] != (long *)0x0) {
      *(long *)plVar12[2] = *plVar16;
    }
    *plVar16 = 0;
    plVar12[2] = 0;
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
  }
  plVar12[4] = (long)plVar1;
  lVar15 = *plVar1;
  *plVar1 = (long)plVar16;
  plVar12[1] = lVar15;
  plVar12[2] = (long)plVar1;
  if (lVar15 != 0) {
    *(long **)(lVar15 + 8) = plVar16;
  }
  lVar15 = *(long *)puVar4;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar15 == 0) {
    plVar12 = malloc(0xf98);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar12 = (long *)(lVar15 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xf98,8);
    }
  }
  memset(plVar12,0,0xf98);
  puVar8 = PTR_DAT_04bcb5f0;
  puVar7 = PTR_DAT_04bc6050;
  puVar5 = PTR_DAT_04bb2718;
  plVar12[3] = (long)plVar12;
  *plVar12 = (long)(puVar7 + 0x10);
  lVar15 = *(long *)puVar5;
  plVar12[5] = (long)(puVar8 + 0x10);
  uVar3 = *(undefined4 *)(*(long *)(lVar15 + 0x418) + 0xc);
  plVar16 = plVar12 + 9;
  *plVar16 = (long)(PTR_DAT_04bbfe60 + 0x10);
  plVar12[5] = (long)&PTR_LAB_04abf000;
  *(undefined1 *)((long)plVar12 + 0x36) = 0xff;
  plVar17 = plVar12 + 1;
  *(undefined8 *)((long)plVar12 + 0x3c) = 0;
  *(undefined2 *)((long)plVar12 + 0x34) = 1;
  *(undefined4 *)(plVar12 + 7) = 0xffffffff;
  *(undefined4 *)(plVar12 + 6) = uVar3;
  memset(plVar12 + 10,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)plVar12 + 0x7a4) = uVar9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(plVar12 + 0xf5) = uVar9;
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)plVar12 + 0x7ac) = uVar9;
  *(uint *)(plVar12 + 0xf6) = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar16 + 0x18))(plVar16);
  memset(__s,0,0x754);
  memset(plVar12 + 0xf7,0,0x7d3);
  lVar15 = plVar12[4];
  *(undefined1 *)(plVar12 + 0x1f2) = 0xff;
  if (lVar15 != 0) {
    plVar12[4] = 0;
    if (plVar12[1] != 0) {
      *(long *)(plVar12[1] + 8) = plVar12[2];
    }
    if ((long *)plVar12[2] != (long *)0x0) {
      *(long *)plVar12[2] = *plVar17;
    }
    *plVar17 = 0;
    plVar12[2] = 0;
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
  }
  plVar12[4] = (long)plVar1;
  lVar15 = *plVar1;
  *plVar1 = (long)plVar17;
  plVar12[1] = lVar15;
  plVar12[2] = (long)plVar1;
  if (lVar15 != 0) {
    *(long **)(lVar15 + 8) = plVar17;
  }
  lVar15 = *(long *)puVar4;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  if (lVar15 == 0) {
    plVar12 = malloc(0x28);
  }
  else {
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar2 = (undefined8 *)(lVar15 + 8);
    if (lVar11 != 0) {
      puVar2 = (undefined8 *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x28,8);
  }
  plVar12[2] = 0;
  plVar12[3] = (long)plVar12;
  plVar16 = plVar12 + 1;
  *plVar16 = 0;
  puVar4 = PTR_DAT_04bc6058;
  plVar12[4] = (long)plVar1;
  *plVar12 = (long)(puVar4 + 0x10);
  lVar15 = *plVar1;
  *plVar1 = (long)plVar16;
  plVar12[2] = (long)plVar1;
  *plVar16 = lVar15;
  if (lVar15 != 0) {
    *(long **)(lVar15 + 8) = plVar16;
  }
  plVar12 = (long *)param_1[0x45];
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  for (; plVar12 != plVar1; plVar12 = (long *)plVar12[1]) {
    plVar16 = (long *)plVar12[2];
    iVar10 = (**(code **)(*plVar16 + 0x20))(plVar16);
    if (iVar10 == 1) goto LAB_02d39cc8;
  }
  plVar16 = (long *)0x0;
LAB_02d39cc8:
  if (((*PTR_DAT_04bc6038 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc6038), iVar10 != 0)) {
    *(undefined ***)PTR_DAT_04bc6030 = &PTR_LAB_04abefe8;
    __cxa_guard_release(PTR_DAT_04bc6038);
  }
  if ((plVar16 != (long *)0x0) &&
     (uVar13 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bc6030), (uVar13 & 1) != 0)) {
    bVar14 = *(byte *)(param_1 + 0x3f);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    *(byte *)(plVar16 + 0x1f2) = bVar14;
  }
  return;
}

