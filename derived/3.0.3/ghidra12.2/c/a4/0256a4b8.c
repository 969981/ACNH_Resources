
/* WARNING: Type propagation algorithm not settling */

uint FUN_0256a4b8(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (((ulong)*param_1 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar7 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar7 = (uint *)PTR_DAT_04bb3238;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *puVar7;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0256a5a8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0256a5a8;
    }
  }
  uVar9 = 0;
joined_r0x0256a5a8:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if ((*(char *)((long)plVar8 + 0x17ac) == '\0') && (param_2 < 0x37)) {
      return *(uint *)((long)plVar8 + (long)((int)param_2 >> 5) * 4 + 0xed8) >>
             (ulong)(param_2 & 0x1f) & 1;
    }
  }
  return 0;
}

