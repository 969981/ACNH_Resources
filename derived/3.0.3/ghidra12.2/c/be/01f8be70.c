
void FUN_01f8be70(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_40;
  undefined1 *puStack_38;
  
  lVar11 = *(long *)(param_1 + 8);
  *(undefined1 **)(param_1 + 0x7f48) = &LAB_01f8bc30;
  *(undefined ***)(param_1 + 0x7f38) = &PTR_LAB_04a68ad8;
  *(long *)(param_1 + 0x7f40) = param_1;
  *(undefined8 *)(param_1 + 0x7f50) = 0;
  *(undefined1 *)(param_1 + 0xb14b) = 1;
  (**(code **)(*(long *)(lVar11 + 0x3e0) + 0x18))(lVar11 + 0x3e0);
  (**(code **)(*(long *)(lVar11 + 0x3e0) + 0x18))(lVar11 + 0x3e0);
  if (*(undefined1 **)(lVar11 + 1000) != &DAT_0409b637) {
    uVar8 = 0;
    bVar4 = true;
    while( true ) {
      cVar2 = (*(undefined1 **)(lVar11 + 1000))[uVar8];
      if (cVar2 != (&DAT_0409b637)[uVar8]) {
        return;
      }
      if (cVar2 == '\0') break;
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
      if (uVar8 == 0x80001) {
        return;
      }
    }
    if (!bVar4) {
      return;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_040d4479;
  uVar5 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_40,PTR_DAT_04bb3238,1);
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  if ((((uVar5 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8),
       plVar9 == (long *)0x0)) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar5)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar5 = 1;
      goto joined_r0x01f8c018;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f8c018;
    }
  }
  uVar5 = 0;
joined_r0x01f8c018:
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar5;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb4120 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4120);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb4118), (uVar8 & 1) != 0)) {
        FUN_01f8be70(puVar10);
      }
    }
  }
  return;
}

