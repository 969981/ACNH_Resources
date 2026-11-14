
long * FUN_018c6850(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_04bbef48;
  puVar3 = PTR_DAT_04bbef40;
  if (*(int *)(param_1 + 0x138) != 0) {
    lVar12 = (long)*(int *)(param_1 + 0x138) << 3;
    puVar10 = *(undefined8 **)(param_1 + 0x140);
    puVar1 = PTR_DAT_04bb2fb8 + 0x10;
    do {
      plVar8 = (long *)*puVar10;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar6 & 1) != 0)) {
        return plVar8;
      }
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x308);
  }
  else {
    plVar8 = (long *)(lVar11 + 8);
    if (lVar12 != 0) {
      plVar8 = (long *)(lVar12 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      plVar8 = (long *)(lVar9 + 8);
      if (lVar12 != 0) {
        plVar8 = (long *)(lVar12 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar7 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x308,8);
  }
  local_58 = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  puStack_80 = &DAT_0406f9b4;
  puStack_70 = &DAT_0406f9b4;
  puStack_60 = &DAT_0407ebb1;
  local_78 = local_88;
  local_68 = local_88;
  FUN_018f8080(pvVar7,&local_88,0);
  iVar5 = *(int *)(param_1 + 0x138);
  if (iVar5 < *(int *)(param_1 + 0x13c)) {
    *(void **)(*(long *)(param_1 + 0x140) + (long)iVar5 * 8) = pvVar7;
    iVar5 = *(int *)(param_1 + 0x138) + 1;
    *(int *)(param_1 + 0x138) = iVar5;
  }
  if (iVar5 == 0) {
    plVar8 = (long *)0x0;
    bVar2 = *puVar4;
  }
  else {
    plVar8 = *(long **)(*(long *)(param_1 + 0x140) + (long)(iVar5 + -1) * 8);
    bVar2 = *puVar4;
  }
  if (((bVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbef48), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bbef40 = PTR_DAT_04bb2fb8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbef48);
  }
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bbef40);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
  }
  return plVar8;
}

