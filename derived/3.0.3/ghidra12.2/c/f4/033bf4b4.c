
bool FUN_033bf4b4(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) != 3 || uVar8 == 0) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x033bf600;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x033bf600;
    }
  }
  uVar8 = 0;
joined_r0x033bf600:
  if (plVar7 == (long *)0x0) {
    return false;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bc99b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc99b8);
  }
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc99b0);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  if ((int)param_2 < 0) {
    return false;
  }
  if ((int)param_2 < (int)plVar7[0x4f]) {
    return *(int *)(*(long *)(plVar7[0x50] + (ulong)param_2 * 8) + 0x44) == 2;
  }
  return false;
}

