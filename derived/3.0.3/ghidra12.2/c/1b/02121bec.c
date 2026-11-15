
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_02121bec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar10 = *(uint *)(param_1 + 0xf0);
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
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02121cac;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02121cac;
    }
  }
  uVar10 = 0;
joined_r0x02121cac:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if ((int)lVar7 != 1) {
      return (undefined8 *)0x0;
    }
    if ((uVar4 & uVar10) == 0) {
      return (undefined8 *)0x0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)plVar8[0x77];
    if (((*PTR_DAT_04bc2280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2280);
    }
    if (puVar9 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc2278);
      if ((uVar6 & 1) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      return puVar9;
    }
  }
  return (undefined8 *)0x0;
}

