
bool FUN_014effe8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x18) != 1) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  uVar8 = *(uint *)(param_1 + 0x8c);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x014f011c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014f011c;
    }
  }
  uVar8 = 0;
joined_r0x014f011c:
  if (plVar7 == (long *)0x0) {
    return false;
  }
  lVar6 = plVar7[0x2a];
  uVar1 = *(uint *)(plVar7 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
  if ((int)lVar6 != 1) {
    return false;
  }
  if ((uVar4 & uVar8) == 0) {
    return false;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return false;
  }
  return *(char *)(plVar7[0x151] + 0x308) != '\0';
}

