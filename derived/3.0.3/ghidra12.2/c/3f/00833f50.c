
undefined8 FUN_00833f50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bc3a80;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "CommuneExpanded";
    uVar5 = FUN_0273f0a0(&local_50);
    if ((uVar5 & 1) != 0) {
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        return 0;
      }
      uVar10 = *(uint *)(param_1 + 0x234);
      if ((((uVar10 == 0) ||
           (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                               ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
          ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
        plVar9 = (long *)0x0;
      }
      if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
        plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar6 + 0x60))();
        if (iVar4 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_00834160;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_00834160:
        uVar10 = 0;
      }
      if (plVar9 == (long *)0x0) {
        return 0;
      }
      lVar7 = plVar9[0x2a];
      if (((*PTR_DAT_04bb5278 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5278), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb5270 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5278);
      }
      uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5270);
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar10;
      }
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (uVar1 == 0) {
        return 0;
      }
      if (*(int *)(puVar3 + 0x38) != -0x10e0fba8) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x180) == 1) {
        if (*(int *)(param_1 + 0x174) == 0) {
          uVar5 = (ulong)*(uint *)(plVar9 + 0x58);
          if ((int)*(uint *)(plVar9 + 0x58) < 1) {
            return 0;
          }
          piVar8 = (int *)plVar9[0x59];
          while (*piVar8 != iVar4) {
            piVar8 = piVar8 + 1;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              return 0;
            }
          }
        }
        else {
          uVar5 = (ulong)*(uint *)(plVar9 + 0x5a);
          if ((int)*(uint *)(plVar9 + 0x5a) < 1) {
            return 0;
          }
          piVar8 = (int *)plVar9[0x5b];
          while (*piVar8 != iVar4) {
            piVar8 = piVar8 + 1;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              return 0;
            }
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x180) != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x174) == 0) {
          uVar5 = (ulong)*(uint *)(plVar9 + 0x54);
          if ((int)*(uint *)(plVar9 + 0x54) < 1) {
            return 0;
          }
          piVar8 = (int *)plVar9[0x55];
          while (*piVar8 != iVar4) {
            piVar8 = piVar8 + 1;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              return 0;
            }
          }
        }
        else {
          uVar5 = (ulong)*(uint *)(plVar9 + 0x56);
          if ((int)*(uint *)(plVar9 + 0x56) < 1) {
            return 0;
          }
          piVar8 = (int *)plVar9[0x57];
          while (*piVar8 != iVar4) {
            piVar8 = piVar8 + 1;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) {
              return 0;
            }
          }
        }
      }
      goto LAB_00834360;
    }
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(param_1 + 0x234);
  if (((uVar10 == 0) ||
      (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
     (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_008340ec;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008340ec:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar9[0x2a];
  if (((*PTR_DAT_04bb5288 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5288), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb5280 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5288);
  }
  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5280);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x230);
  if ((int)plVar9[0x57] == iVar4) {
    lVar7 = 0;
  }
  else if (*(int *)((long)plVar9 + 700) == iVar4) {
    lVar7 = 1;
  }
  else if ((int)plVar9[0x58] == iVar4) {
    lVar7 = 2;
  }
  else if (*(int *)((long)plVar9 + 0x2c4) == iVar4) {
    lVar7 = 3;
  }
  else if ((int)plVar9[0x59] == iVar4) {
    lVar7 = 4;
  }
  else if (*(int *)((long)plVar9 + 0x2cc) == iVar4) {
    lVar7 = 5;
  }
  else if ((int)plVar9[0x5a] == iVar4) {
    lVar7 = 6;
  }
  else if (*(int *)((long)plVar9 + 0x2d4) == iVar4) {
    lVar7 = 7;
  }
  else if ((int)plVar9[0x5b] == iVar4) {
    lVar7 = 8;
  }
  else {
    if (*(int *)((long)plVar9 + 0x2dc) != iVar4) {
      return 0;
    }
    lVar7 = 9;
  }
  piVar8 = (int *)((long)plVar9 + lVar7 * 4 + 0x2b8);
LAB_00834360:
  *piVar8 = *(int *)PTR_DAT_04bb3238;
  return 1;
}

