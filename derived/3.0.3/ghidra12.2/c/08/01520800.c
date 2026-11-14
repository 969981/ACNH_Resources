
/* WARNING: Type propagation algorithm not settling */

bool FUN_01520800(uint *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int local_58;
  byte local_54 [4];
  
  uVar7 = FUN_015039ac();
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return false;
  }
  uVar11 = *param_1;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x015208d4;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x015208d4;
    }
  }
  uVar11 = 0;
joined_r0x015208d4:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar2 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    puVar4 = PTR_DAT_04bbcd18;
    puVar3 = PTR_DAT_04bbcd10;
    if ((int)lVar9 != 1) {
      return false;
    }
    if ((uVar6 & uVar11) == 0) {
      return false;
    }
    if ((uVar2 >> 4 & 1) == 0) {
      return false;
    }
    if ((long *)plVar10[0x16] != plVar10 + 0x15) {
      lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
      plVar8 = (long *)(plVar10[0x16] - lVar9);
      puVar1 = PTR_DAT_04bb65f0 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar7 & 1) != 0)) {
          local_54[0] = *param_2;
          if (7 < local_54[0]) {
            return false;
          }
          iVar5 = FUN_02582fe0(local_54);
          if (iVar5 == -1) {
            return false;
          }
          local_58 = 0;
          uVar7 = FUN_02b5e950(&local_58,iVar5);
          if ((uVar7 & 1) == 0) {
            return false;
          }
          return local_58 == (int)plVar8[0xb1];
        }
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar9 + 8) - lVar9);
      } while (plVar8 != (long *)((long)(plVar10 + 0x15) - lVar9));
    }
  }
  return false;
}

