
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_016b8544(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  puVar2 = (uint *)*param_1 + (ulong)param_2 * 7;
  if (2 < param_2) {
    puVar2 = (uint *)*param_1;
  }
  uVar10 = *puVar2;
  if (uVar10 == 0) {
    return (undefined8 *)0x0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return (undefined8 *)0x0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x016b8618;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x016b8618;
    }
  }
  uVar10 = 0;
joined_r0x016b8618:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (uVar1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)plVar8[0x77];
    if (((*PTR_DAT_04bbdd70 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbdd70), iVar4 != 0)) {
      *(undefined ***)PTR_DAT_04bbdd68 = &PTR_LAB_049bb898;
      __cxa_guard_release(PTR_DAT_04bbdd70);
    }
    if (puVar9 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bbdd68);
      if ((uVar6 & 1) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      return puVar9;
    }
  }
  return (undefined8 *)0x0;
}

