
void FUN_014bb9e0(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined **local_50;
  undefined1 *puStack_48;
  
  lVar8 = *(long *)PTR_DAT_04bb3968;
  if (lVar8 == 0) {
    return;
  }
  local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  puStack_48 = &DAT_0409b647;
  uVar3 = FUN_020a4f40(lVar8,&local_50,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar3 == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_014bbb68;
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if ((plVar9 == (long *)0x0) ||
     (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar3)))) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014bbad0;
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014bbad0:
    uVar3 = 0;
  }
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar3;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb4120 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4120);
      }
      if ((puVar10 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb4118), (uVar6 & 1) != 0)) {
        *(uint *)((long)puVar10 + 0xb11c) = *(uint *)((long)puVar10 + 0xb11c) & 0xfffffffb;
      }
    }
  }
LAB_014bbb68:
  local_50 = &PTR_FUN_049a6890;
  if (*(int *)(lVar8 + 0xb88) != 0) {
    lVar7 = (long)*(int *)(lVar8 + 0xb88) << 3;
    puVar10 = *(undefined8 **)(lVar8 + 0xb90);
    do {
      (*(code *)*local_50)(&local_50,*puVar10);
      lVar7 = lVar7 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
  }
  return;
}

