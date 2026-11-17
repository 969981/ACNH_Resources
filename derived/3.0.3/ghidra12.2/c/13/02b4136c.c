
/* WARNING: Type propagation algorithm not settling */

long * FUN_02b4136c(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ushort uVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return (long *)PTR_DAT_04bb37e0;
  }
  uVar4 = *param_1;
  if ((((uVar4 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar4)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar4 = 1;
      goto joined_r0x02b414e0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b414e0;
    }
  }
  uVar4 = 0;
joined_r0x02b414e0:
  if (plVar8 == (long *)0x0) {
    return (long *)PTR_DAT_04bb37e0;
  }
  if (((*PTR_DAT_04bc4a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4a20), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4a18 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4a20);
  }
  uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc4a18);
  puVar1 = PTR_DAT_04bb37e0;
  if ((uVar4 & uVar3) != 1) {
    return (long *)PTR_DAT_04bb37e0;
  }
  uVar6 = 0;
  if (((int)plVar8[0xab] != 0) &&
     (((lVar7 = FUN_02a96aac(*(long *)PTR_DAT_04bb5008 + 0x20,(int)plVar8[0xab]), lVar7 == 0 ||
       (uVar4 = FUN_03853b94(), *(uint *)PTR_DAT_04bc46a8 <= uVar4)) ||
      (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar4 * 2), 4 < uVar6)))) {
    uVar6 = 0;
  }
  plVar8 = plVar8 + 0xad;
  if (uVar6 != 0) {
    plVar8 = (long *)puVar1;
  }
  return plVar8;
}

