
bool FUN_015213b0(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  uVar5 = FUN_015039ac();
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar5 & 1) == 0) {
    return true;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return true;
  }
  uVar9 = *param_1;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x015214dc;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x015214dc;
    }
  }
  uVar9 = 0;
joined_r0x015214dc:
  if (plVar8 == (long *)0x0) {
    return true;
  }
  lVar7 = plVar8[0x2a];
  uVar1 = *(uint *)(plVar8 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
  if ((int)lVar7 != 1) {
    return true;
  }
  if ((uVar4 & uVar9) == 0) {
    return true;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return true;
  }
  if (plVar8[0xe] == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(plVar8[0xe] + 0x280);
  }
  return iVar3 != 5;
}

