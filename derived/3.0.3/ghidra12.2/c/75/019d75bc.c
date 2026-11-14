
bool FUN_019d75bc(uint *param_1)

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
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*param_1 == 0xffffffff) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  uVar7 = 0;
  if (lVar8 != 0) {
    if ((((DAT_052d0188 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(DAT_052d0188 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != DAT_052d0188)) {
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
        if (4 < uVar7) goto LAB_019d76a8;
        uVar10 = 0x1aU >> (ulong)(uVar7 & 0x1f) & 1;
        uVar7 = (uint)(0x101000100 >> (((ulong)uVar7 & 7) << 3)) & 1;
      }
    }
    else {
LAB_019d76a8:
      uVar10 = 0;
      uVar7 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      bVar3 = (int)lVar8 == 1;
      if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9f0);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbe9e8);
      if ((uVar6 & 1) != 0) {
        uVar10 = uVar10 ^ 1;
        if ((int)lVar8 != 1) {
          uVar10 = 1;
        }
        if (uVar10 != 0) {
          return false;
        }
        uVar7 = *param_1;
        if (((int)uVar7 < 0) || ((int)plVar9[0xa7] <= (int)uVar7)) {
          plVar9 = (long *)plVar9[0xa4];
        }
        else {
          plVar9 = (long *)(plVar9[0xa4] + (ulong)uVar7 * 8);
        }
        *(undefined4 *)(**(long **)(*plVar9 + 0xd0) + 200) = *(undefined4 *)PTR_DAT_04bb3238;
        return true;
      }
      uVar7 = 0;
      goto LAB_019d7738;
    }
  }
  bVar3 = false;
LAB_019d7738:
  bVar1 = false;
  if (uVar7 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

