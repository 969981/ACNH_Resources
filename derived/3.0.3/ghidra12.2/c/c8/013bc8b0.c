
undefined4 FUN_013bc8b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar10 = 0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar9 = *(uint *)PTR_DAT_04bbc940;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x013bc980;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013bc980;
    }
  }
  uVar9 = 0;
joined_r0x013bc980:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bbc928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbc920 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc928);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc920);
    if ((((int)lVar7 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      uVar9 = *(uint *)(param_1 + 0x2dc);
      if ((-1 < (int)uVar9) && ((int)uVar9 < (int)plVar8[0x1b6])) {
        if (uVar9 < *(uint *)(plVar8 + 0x1b2)) {
          lVar7 = *(long *)(plVar8[0x1b3] + (ulong)uVar9 * 8);
        }
        else {
          lVar7 = 0;
        }
        puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
        uVar10 = *puVar6;
      }
    }
  }
  return uVar10;
}

