
uint FUN_014efd60(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 != 1) {
    uVar10 = 0;
    goto LAB_014efefc;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x8c);
    if ((((uVar8 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar8)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_014efe3c;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014efe3c:
      uVar8 = 0;
    }
    uVar10 = 0;
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0x2a];
      uVar1 = *(uint *)(plVar11 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
      uVar10 = 0;
      if ((((int)lVar9 == 1) && ((uVar4 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f);
        uVar6 = FUN_014eb9bc(param_1);
        uVar10 = uVar8 | 4;
        if ((uVar6 & 1) == 0) {
          uVar10 = uVar8;
        }
        if (0 < (int)*(uint *)(param_1 + 0xe8)) {
          plVar11 = *(long **)(param_1 + 0xf0);
          lVar9 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
          do {
            lVar7 = FUN_014e7558(uVar6,*(undefined4 *)(*plVar11 + 0x14));
            if (lVar7 != 0) {
              uVar10 = uVar10 | 8;
              break;
            }
            plVar11 = plVar11 + 1;
            lVar9 = lVar9 + -8;
            uVar6 = 0;
          } while (lVar9 != 0);
        }
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x18);
LAB_014efefc:
  if (uVar8 < 7 && (1 << (ulong)(uVar8 & 0x1f) & 0x54U) != 0) {
    uVar8 = uVar10 | 1 << (ulong)(uVar8 & 0x1f);
    uVar6 = FUN_014eb9bc(param_1);
    uVar10 = uVar8 | 4;
    if ((uVar6 & 1) == 0) {
      uVar10 = uVar8;
    }
    if (0 < (int)*(uint *)(param_1 + 0xe8)) {
      plVar11 = *(long **)(param_1 + 0xf0);
      lVar9 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
      do {
        lVar7 = FUN_014e7558(uVar6,*(undefined4 *)(*plVar11 + 0x14));
        if (lVar7 != 0) {
          uVar10 = uVar10 | 8;
          break;
        }
        plVar11 = plVar11 + 1;
        lVar9 = lVar9 + -8;
        uVar6 = 0;
      } while (lVar9 != 0);
    }
  }
  if (*(int *)(param_1 + 0x18) == 3) {
    uVar10 = uVar10 | 8;
  }
  return uVar10;
}

