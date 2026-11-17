
bool FUN_02b91b90(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_34 = (int)param_1;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  uVar7 = 0;
  if (lVar8 != 0) {
    if ((((local_34 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             (param_1 >> 0x14 & 0xfff) * 8), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || ((int)plVar9[0x46] != local_34)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar10 = 1;
        uVar7 = 1;
      }
      else {
        uVar7 = *(uint *)(lVar8 + 0x5e8);
        if (4 < uVar7) goto LAB_02b91c5c;
        uVar10 = 0x1aU >> (ulong)(uVar7 & 0x1f) & 1;
        uVar7 = (uint)(0x101000100 >> (((ulong)uVar7 & 7) << 3)) & 1;
      }
    }
    else {
LAB_02b91c5c:
      uVar10 = 0;
      uVar7 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      bVar3 = (int)lVar8 == 1;
      if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb59a0);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5998);
      if ((uVar6 & 1) != 0) {
        uVar10 = uVar10 ^ 1;
        if ((int)lVar8 != 1) {
          uVar10 = 1;
        }
        if (uVar10 != 0) {
          return false;
        }
        if ((*(uint *)(plVar9 + 0xaa) & 0xfffffffe) == 0x1a) {
          *(undefined4 *)((long)plVar9 + 0xcbe) = 0xffffffff;
        }
        FUN_0369a200(&local_34);
        return true;
      }
      uVar7 = 0;
      goto LAB_02b91cf8;
    }
  }
  bVar3 = false;
LAB_02b91cf8:
  bVar1 = false;
  if (uVar7 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

