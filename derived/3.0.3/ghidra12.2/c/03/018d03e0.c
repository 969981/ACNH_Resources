
long * FUN_018d03e0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
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
  puVar4 = PTR_DAT_04bbef98;
  if (((param_1[7] != 0) && (0x1e < *(uint *)(param_1 + 6))) &&
     (plVar6 = *(long **)(param_1[7] + 0xf0), plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x168))(plVar6,&local_c0);
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbef98), iVar5 != 0)) {
      *(undefined ***)PTR_DAT_04bbef90 = &PTR_FUN_049d0bf8;
      __cxa_guard_release(PTR_DAT_04bbef98);
    }
    if ((plVar6 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbef90), (uVar7 & 1) != 0)) {
      return plVar6;
    }
  }
  puVar2 = PTR_DAT_04bbef90;
  if ((int)param_1[0x27] != 0) {
    lVar9 = (long)(int)param_1[0x27] << 3;
    puVar11 = (undefined8 *)param_1[0x28];
    do {
      plVar6 = (long *)*puVar11;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined ***)puVar2 = &PTR_FUN_049d0bf8;
        __cxa_guard_release(puVar4);
      }
      if ((plVar6 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
        return plVar6;
      }
      puVar11 = puVar11 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    puVar11 = malloc(0x308);
  }
  else {
    plVar6 = (long *)(lVar10 + 8);
    if (lVar9 != 0) {
      plVar6 = (long *)(lVar9 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar6 = (long *)(lVar9 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x308,8);
  }
  local_58 = 0;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  puStack_80 = &DAT_0406f9b4;
  puStack_70 = &DAT_0406f9b4;
  puStack_60 = &DAT_0407ebb1;
  local_78 = local_88;
  local_68 = local_88;
  FUN_019017e0(puVar11,&local_88,0);
  *puVar11 = &PTR_FUN_049d0c10;
  iVar5 = (int)param_1[0x27];
  if (iVar5 < *(int *)((long)param_1 + 0x13c)) {
    *(undefined8 **)(param_1[0x28] + (long)iVar5 * 8) = puVar11;
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
  if (((bVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbef98), iVar5 != 0)) {
    *(undefined ***)PTR_DAT_04bbef90 = &PTR_FUN_049d0bf8;
    __cxa_guard_release(PTR_DAT_04bbef98);
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbef90);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}

