
long * FUN_018d4770(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  local_8d = 0;
  local_b0 = 0x20;
  puStack_b8 = local_ac;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_c0);
  puVar4 = PTR_DAT_04bbf020;
  if (((param_1[7] != 0) && (0x1d < *(uint *)(param_1 + 6))) &&
     (plVar6 = *(long **)(param_1[7] + 0xe8), plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,&local_c0);
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbf020), iVar5 != 0)) {
      *(undefined ***)PTR_DAT_04bbf018 = &PTR_FUN_049d0ed0;
      __cxa_guard_release(PTR_DAT_04bbf020);
    }
    if ((plVar6 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbf018), (uVar7 & 1) != 0)) {
      return plVar6;
    }
  }
  puVar2 = PTR_DAT_04bbf018;
  if ((int)param_1[0x27] != 0) {
    lVar10 = (long)(int)param_1[0x27] << 3;
    puVar12 = (undefined8 *)param_1[0x28];
    do {
      plVar6 = (long *)*puVar12;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined ***)puVar2 = &PTR_FUN_049d0ed0;
        __cxa_guard_release(puVar4);
      }
      if ((plVar6 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
        return plVar6;
      }
      puVar12 = puVar12 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    pvVar8 = malloc(600);
  }
  else {
    plVar6 = (long *)(lVar11 + 8);
    if (lVar10 != 0) {
      plVar6 = (long *)(lVar10 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar10 != 0) {
        plVar6 = (long *)(lVar10 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,600,8);
  }
  local_58 = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  puStack_80 = &DAT_0406f9b4;
  puStack_70 = &DAT_0406f9b4;
  puStack_60 = &DAT_0407ebb1;
  local_78 = local_88;
  local_68 = local_88;
  FUN_01905920(pvVar8,&local_88,0);
  iVar5 = (int)param_1[0x27];
  if (iVar5 < *(int *)((long)param_1 + 0x13c)) {
    *(void **)(param_1[0x28] + (long)iVar5 * 8) = pvVar8;
    iVar5 = (int)param_1[0x27] + 1;
    *(int *)(param_1 + 0x27) = iVar5;
  }
  if (iVar5 == 0) {
    plVar6 = (long *)0x0;
    bVar1 = *puVar4;
  }
  else {
    plVar6 = *(long **)(param_1[0x28] + (long)(iVar5 + -1) * 8);
    bVar1 = *puVar4;
  }
  if (((bVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbf020), iVar5 != 0)) {
    *(undefined ***)PTR_DAT_04bbf018 = &PTR_FUN_049d0ed0;
    __cxa_guard_release(PTR_DAT_04bbf020);
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbf018);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}

