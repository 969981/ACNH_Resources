
ulong FUN_014e92f0(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar4 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x8c);
    if ((uVar9 == 0) ||
       (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar1;
      uVar4 = (**(code **)(*plVar3 + 0x60))();
      if ((int)uVar4 < 0x11) {
        uVar9 = 0;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014e93b8;
        uVar9 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar8 != (long *)0x0) goto LAB_014e93cc;
    }
    else {
LAB_014e93b8:
      uVar9 = 1;
      if (plVar8 != (long *)0x0) {
LAB_014e93cc:
        lVar7 = plVar8[0x2a];
        uVar6 = *(uint *)(plVar8 + 0x49);
        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5928);
        }
        uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
        if ((uVar4 & 1) != 0) {
          if ((int)lVar7 != 1) {
            uVar9 = 1;
          }
          if ((uVar9 == 0) && ((uVar6 >> 4 & 1) != 0)) {
            if (plVar8[0xe] == 0) {
              uVar6 = 1;
            }
            else {
              uVar6 = (uint)(*(int *)(plVar8[0xe] + 0x280) != 8);
            }
            uVar9 = 0;
            if ((int)plVar8[0x120] - 5U < 0xfffffffe) {
              uVar9 = uVar6;
            }
            if (0 < (int)*(uint *)(param_1 + 0xe8)) {
              plVar8 = *(long **)(param_1 + 0xf0);
              lVar7 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
              do {
                plVar3 = (long *)FUN_014e7558(uVar4,*(undefined4 *)(*plVar8 + 0x14));
                uVar4 = 0;
                if (plVar3 != (long *)0x0) {
                  uVar4 = (**(code **)(*plVar3 + 0x3a8))();
                  uVar9 = uVar9 & (uint)uVar4;
                }
                plVar8 = plVar8 + 1;
                lVar7 = lVar7 + -8;
              } while (lVar7 != 0);
            }
            goto LAB_014e9548;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar8 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar4 = 0;
    if (plVar8 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar8 + 0xa0))();
      uVar9 = (uint)uVar5;
      if (0 < (int)*(uint *)(param_1 + 0xe8)) {
        plVar8 = *(long **)(param_1 + 0xf0);
        uVar9 = uVar9 & 1;
        lVar7 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
        do {
          plVar3 = (long *)FUN_014e7558(uVar5,*(undefined4 *)(*plVar8 + 0x14));
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar3 + 0x3a8))();
            uVar9 = uVar9 & (uint)uVar5;
          }
          plVar8 = plVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      goto LAB_014e9548;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 3) &&
     (plVar8 = (long *)FUN_014e7558(uVar4,*(undefined4 *)(param_1 + 0x8c)), plVar8 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x014e94d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar8 + 0x3a8))();
    return uVar4;
  }
  uVar9 = 0;
LAB_014e9548:
  return (ulong)(uVar9 & 1);
}

