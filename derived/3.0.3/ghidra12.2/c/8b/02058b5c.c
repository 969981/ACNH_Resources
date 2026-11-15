
undefined8 FUN_02058b5c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02058c14;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02058c14;
    }
  }
  uVar10 = 0;
joined_r0x02058c14:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar9 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb6988 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6988), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6980 = PTR_DAT_04bb6990 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6988);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6980), (uVar5 & 1) != 0)) {
        uVar6 = FUN_01eb1630(puVar9);
        return uVar6;
      }
    }
  }
  return 0;
}

