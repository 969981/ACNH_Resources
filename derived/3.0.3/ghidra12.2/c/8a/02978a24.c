
undefined * FUN_02978a24(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return PTR_DAT_04bb37e0;
  }
  uVar8 = *(uint *)PTR_DAT_04bc2318;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar5;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02978aec;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02978aec;
    }
  }
  uVar8 = 0;
joined_r0x02978aec:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    uVar1 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bc2308 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc2308), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc2300 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2308);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc2300);
    if ((((int)lVar6 == 1) && ((uVar3 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      puVar5 = (undefined *)FUN_02977780(plVar7,param_2);
      return puVar5;
    }
  }
  return PTR_DAT_04bb37e0;
}

