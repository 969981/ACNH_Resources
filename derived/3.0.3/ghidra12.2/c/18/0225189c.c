
undefined4 FUN_0225189c(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar9 = *(uint *)PTR_DAT_04bb8c58;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x022519c8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x022519c8;
    }
  }
  uVar9 = 0;
joined_r0x022519c8:
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bb8c50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8c50), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb8c48 = PTR_DAT_04bb3b50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb8c50);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb8c48);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  puVar6 = (undefined4 *)(**(code **)(*(long *)(plVar8[0xbb] + 0x248) + 0xf0))(plVar8[0xbb] + 0x248)
  ;
  return *puVar6;
}

