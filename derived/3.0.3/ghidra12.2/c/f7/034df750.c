
void FUN_034df750(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x230);
  lVar3 = *(long *)(param_1 + 0x238);
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a544) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a544)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x10e) {
            lVar6 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a0) != 0) {
              lVar3 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
              **(undefined1 **)(lVar3 + 0x60) = 0;
              *(undefined1 *)(lVar3 + 0xf0) = 0;
              if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
                 (*(int *)(lVar3 + 0x140) == -1)) {
                *(undefined4 *)(lVar3 + 0x140) = 1;
              }
              *(undefined4 *)(lVar6 + 0x1a0) = 0;
              uVar5 = *(uint *)(param_1 + 0x230);
              lVar3 = *(long *)(param_1 + 0x238);
            }
          }
          uVar1 = param_2;
          if (uVar5 <= param_2) {
            uVar1 = 0;
          }
          if ((-1 < (int)DAT_04c4a544) &&
             (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
            uVar7 = 0;
            goto LAB_034df880;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  goto LAB_034df8fc;
  while (uVar7 = uVar7 + 1, uVar2 != uVar7) {
LAB_034dfa30:
    if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a548) {
      lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 8);
      uVar2 = DAT_04c4a548;
      if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a548) {
        uVar2 = 0;
      }
      if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar2 * 8) != 0) {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        piVar4 = (int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (*piVar4 != -1) {
          *piVar4 = -1;
          uVar5 = *(uint *)(param_1 + 0x230);
          lVar3 = *(long *)(param_1 + 0x238);
        }
      }
      break;
    }
  }
  goto LAB_034dfaac;
  while (uVar7 = uVar7 + 1, uVar2 != uVar7) {
LAB_034dfbe0:
    if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a54c) {
      lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 8);
      uVar2 = DAT_04c4a54c;
      if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a54c) {
        uVar2 = 0;
      }
      if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar2 * 8) != 0) {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        piVar4 = (int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (*piVar4 != -1) {
          *piVar4 = -1;
          uVar5 = *(uint *)(param_1 + 0x230);
          lVar3 = *(long *)(param_1 + 0x238);
        }
      }
      break;
    }
  }
  goto LAB_034dfc5c;
  while (uVar7 = uVar7 + 1, uVar2 != uVar7) {
LAB_034dfd90:
    if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a550) {
      lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 8);
      uVar2 = DAT_04c4a550;
      if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a550) {
        uVar2 = 0;
      }
      if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar2 * 8) != 0) {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        piVar4 = (int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (*piVar4 != -1) {
          *piVar4 = -1;
          uVar5 = *(uint *)(param_1 + 0x230);
          lVar3 = *(long *)(param_1 + 0x238);
        }
      }
      break;
    }
  }
  goto LAB_034dfe0c;
  while (uVar7 = uVar7 + 1, uVar2 != uVar7) {
LAB_034df880:
    if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a544) {
      lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 8);
      uVar2 = DAT_04c4a544;
      if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a544) {
        uVar2 = 0;
      }
      if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar2 * 8) != 0) {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        piVar4 = (int *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (*piVar4 != -1) {
          *piVar4 = -1;
          uVar5 = *(uint *)(param_1 + 0x230);
          lVar3 = *(long *)(param_1 + 0x238);
        }
      }
      break;
    }
  }
LAB_034df8fc:
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a548) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a548)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x10e) {
            lVar6 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a0) != 0) {
              lVar3 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
              **(undefined1 **)(lVar3 + 0x60) = 0;
              *(undefined1 *)(lVar3 + 0xf0) = 0;
              if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
                 (*(int *)(lVar3 + 0x140) == -1)) {
                *(undefined4 *)(lVar3 + 0x140) = 1;
              }
              *(undefined4 *)(lVar6 + 0x1a0) = 0;
              uVar5 = *(uint *)(param_1 + 0x230);
              lVar3 = *(long *)(param_1 + 0x238);
            }
          }
          uVar1 = param_2;
          if (uVar5 <= param_2) {
            uVar1 = 0;
          }
          if ((-1 < (int)DAT_04c4a548) &&
             (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
            uVar7 = 0;
            goto LAB_034dfa30;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
LAB_034dfaac:
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a54c) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a54c)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x10e) {
            lVar6 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a0) != 0) {
              lVar3 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
              **(undefined1 **)(lVar3 + 0x60) = 0;
              *(undefined1 *)(lVar3 + 0xf0) = 0;
              if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
                 (*(int *)(lVar3 + 0x140) == -1)) {
                *(undefined4 *)(lVar3 + 0x140) = 1;
              }
              *(undefined4 *)(lVar6 + 0x1a0) = 0;
              uVar5 = *(uint *)(param_1 + 0x230);
              lVar3 = *(long *)(param_1 + 0x238);
            }
          }
          uVar1 = param_2;
          if (uVar5 <= param_2) {
            uVar1 = 0;
          }
          if ((-1 < (int)DAT_04c4a54c) &&
             (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
            uVar7 = 0;
            goto LAB_034dfbe0;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
LAB_034dfc5c:
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a550) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a550)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x10e) {
            lVar6 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a0) != 0) {
              lVar3 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
              **(undefined1 **)(lVar3 + 0x60) = 0;
              *(undefined1 *)(lVar3 + 0xf0) = 0;
              if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
                 (*(int *)(lVar3 + 0x140) == -1)) {
                *(undefined4 *)(lVar3 + 0x140) = 1;
              }
              *(undefined4 *)(lVar6 + 0x1a0) = 0;
              uVar5 = *(uint *)(param_1 + 0x230);
              lVar3 = *(long *)(param_1 + 0x238);
            }
          }
          uVar1 = param_2;
          if (uVar5 <= param_2) {
            uVar1 = 0;
          }
          if ((-1 < (int)DAT_04c4a550) &&
             (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
            uVar7 = 0;
            goto LAB_034dfd90;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
LAB_034dfe0c:
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a554) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a554)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 == 0xffffffff) {
          return;
        }
        if (uVar1 < 0x10e) {
          lVar6 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
          if (*(int *)(lVar6 + 0x1a0) != 0) {
            lVar3 = param_1 + 0x270 + (ulong)uVar1 * 0x1a8;
            **(undefined1 **)(lVar3 + 0x60) = 0;
            *(undefined1 *)(lVar3 + 0xf0) = 0;
            if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
               (*(int *)(lVar3 + 0x140) == -1)) {
              *(undefined4 *)(lVar3 + 0x140) = 1;
            }
            *(undefined4 *)(lVar6 + 0x1a0) = 0;
            uVar5 = *(uint *)(param_1 + 0x230);
            lVar3 = *(long *)(param_1 + 0x238);
          }
        }
        if (uVar5 <= param_2) {
          param_2 = 0;
        }
        if ((int)DAT_04c4a554 < 0) {
          return;
        }
        uVar1 = *(uint *)(lVar3 + (long)(int)param_2 * 0x38 + 0x20);
        if ((int)uVar1 < 1) {
          return;
        }
        uVar7 = 0;
        while (*(uint *)(*(long *)(lVar3 + (long)(int)param_2 * 0x38 + 0x28) + uVar7 * 4) !=
               DAT_04c4a554) {
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) {
            return;
          }
        }
        lVar6 = *(long *)(lVar3 + (long)(int)param_2 * 0x38 + 8);
        uVar1 = DAT_04c4a554;
        if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a554) {
          uVar1 = 0;
        }
        if (*(long *)(*(long *)(lVar6 + 0x2d0) + (ulong)uVar1 * 8) == 0) {
          return;
        }
        lVar3 = lVar3 + (long)(int)param_2 * 0x38;
        if (*(uint *)(lVar3 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        piVar4 = (int *)(*(long *)(lVar3 + 0x18) + uVar7 * 0x30 + 0x28);
        if (*piVar4 == -1) {
          return;
        }
        *piVar4 = -1;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  return;
}

