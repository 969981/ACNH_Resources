
/* WARNING: Removing unreachable block (ram,0x0226ad90) */
/* WARNING: Removing unreachable block (ram,0x0226ada0) */
/* WARNING: Removing unreachable block (ram,0x0226adac) */

void FUN_0226ab74(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar2 = *param_1;
  lVar10 = *(long *)PTR_DAT_04bb4128 + 0x344 + (ulong)*param_1 * 8;
  if (6 < *param_1) {
    lVar10 = *(long *)PTR_DAT_04bb4128 + 0x344;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)(lVar10 + 4);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0226ac5c;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0226ac5c;
    }
  }
  uVar9 = 0;
joined_r0x0226ac5c:
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4158);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      if (uVar2 == 4) {
        *(uint *)(plVar8 + 0x83) = *(uint *)(plVar8 + 0x83) | 0x80;
                    /* WARNING: Could not recover jumptable at 0x0226ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_0226ad78 + (ulong)DAT_04179f5f * 4))();
        return;
      }
      *(uint *)(plVar8 + 0x83) = *(uint *)(plVar8 + 0x83) | 8;
                    /* WARNING: Could not recover jumptable at 0x0226ad74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0226ad78 + (ulong)DAT_04179f5d * 4))();
      return;
    }
  }
  return;
}

