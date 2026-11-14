
uint FUN_014efa80(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar5 = param_1;
  if (uVar6 != 1) {
    uVar8 = 0;
    goto LAB_014efc34;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x8c);
    if ((((uVar6 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar6)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      uVar5 = (**(code **)(*plVar4 + 0x60))();
      if ((int)uVar5 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014efb5c;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014efb5c:
      uVar6 = 0;
    }
    uVar8 = 0;
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[0x2a];
      uVar1 = *(uint *)(plVar9 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
      uVar8 = 0;
      if ((((int)lVar7 == 1) && (((uint)uVar5 & uVar6) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f);
        uVar5 = FUN_014eb9bc(param_1);
        uVar8 = uVar6 | 4;
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar6;
        }
        if (0 < (int)*(uint *)(param_1 + 0xe8)) {
          plVar9 = *(long **)(param_1 + 0xf0);
          lVar7 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
          do {
            plVar4 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(*plVar9 + 0x14));
            uVar5 = 0;
            if ((plVar4 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x3b8))(), (uVar5 & 1) != 0)) {
              uVar8 = uVar8 | 8;
              break;
            }
            plVar9 = plVar9 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
    }
  }
  uVar6 = *(uint *)(param_1 + 0x18);
LAB_014efc34:
  if (uVar6 < 7 && (1 << (ulong)(uVar6 & 0x1f) & 0x54U) != 0) {
    uVar6 = uVar8 | 1 << (ulong)(uVar6 & 0x1f);
    uVar5 = FUN_014eb9bc(param_1);
    uVar8 = uVar6 | 4;
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar6;
    }
    if (0 < (int)*(uint *)(param_1 + 0xe8)) {
      plVar9 = *(long **)(param_1 + 0xf0);
      lVar7 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
      do {
        plVar4 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(*plVar9 + 0x14));
        uVar5 = 0;
        if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x3b8))(), (uVar5 & 1) != 0))
        {
          uVar8 = uVar8 | 8;
          break;
        }
        plVar9 = plVar9 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
  if (((*(int *)(param_1 + 0x18) == 3) &&
      (plVar9 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(param_1 + 0x8c)), plVar9 != (long *)0x0))
     && (uVar5 = (**(code **)(*plVar9 + 0x3b8))(), (uVar5 & 1) != 0)) {
    uVar8 = uVar8 | 1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f);
  }
  return uVar8;
}

