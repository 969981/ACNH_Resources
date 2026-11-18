
void FUN_034edcf0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x248);
  lVar3 = *(long *)(param_1 + 0x250);
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a560) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a560)
      {
        lVar6 = lVar3 + (long)(int)uVar1 * 0x38;
        if (*(uint *)(lVar6 + 0x10) <= (uint)uVar7) {
          uVar7 = 0;
        }
        uVar1 = *(uint *)(*(long *)(lVar6 + 0x18) + uVar7 * 0x30 + 0x28);
        if (uVar1 != 0xffffffff) {
          if (uVar1 < 0x10e) {
            lVar6 = param_1 + 0x288 + (ulong)uVar1 * 0x1a8;
            if (*(int *)(lVar6 + 0x1a0) != 0) {
              lVar3 = param_1 + 0x288 + (ulong)uVar1 * 0x1a8;
              **(undefined1 **)(lVar3 + 0x60) = 0;
              *(undefined1 *)(lVar3 + 0xf0) = 0;
              if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
                 (*(int *)(lVar3 + 0x140) == -1)) {
                *(undefined4 *)(lVar3 + 0x140) = 1;
              }
              *(undefined4 *)(lVar6 + 0x1a0) = 0;
              uVar5 = *(uint *)(param_1 + 0x248);
              lVar3 = *(long *)(param_1 + 0x250);
            }
          }
          uVar1 = param_2;
          if (uVar5 <= param_2) {
            uVar1 = 0;
          }
          if ((-1 < (int)DAT_04c4a560) &&
             (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
            uVar7 = 0;
            goto LAB_034ede20;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  goto LAB_034ede9c;
  while (uVar7 = uVar7 + 1, uVar2 != uVar7) {
LAB_034ede20:
    if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a560) {
      lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 8);
      uVar2 = DAT_04c4a560;
      if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a560) {
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
          uVar5 = *(uint *)(param_1 + 0x248);
          lVar3 = *(long *)(param_1 + 0x250);
        }
      }
      break;
    }
  }
LAB_034ede9c:
  uVar1 = param_2;
  if (uVar5 <= param_2) {
    uVar1 = 0;
  }
  if ((-1 < (int)DAT_04c4a564) &&
     (uVar2 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x20), 0 < (int)uVar2)) {
    uVar7 = 0;
    do {
      if (*(uint *)(*(long *)(lVar3 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == DAT_04c4a564)
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
          lVar6 = param_1 + 0x288 + (ulong)uVar1 * 0x1a8;
          if (*(int *)(lVar6 + 0x1a0) != 0) {
            lVar3 = param_1 + 0x288 + (ulong)uVar1 * 0x1a8;
            **(undefined1 **)(lVar3 + 0x60) = 0;
            *(undefined1 *)(lVar3 + 0xf0) = 0;
            if (((*(int *)(lVar3 + 0x100) != 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
               (*(int *)(lVar3 + 0x140) == -1)) {
              *(undefined4 *)(lVar3 + 0x140) = 1;
            }
            *(undefined4 *)(lVar6 + 0x1a0) = 0;
            uVar5 = *(uint *)(param_1 + 0x248);
            lVar3 = *(long *)(param_1 + 0x250);
          }
        }
        if (uVar5 <= param_2) {
          param_2 = 0;
        }
        if ((int)DAT_04c4a564 < 0) {
          return;
        }
        uVar1 = *(uint *)(lVar3 + (long)(int)param_2 * 0x38 + 0x20);
        if ((int)uVar1 < 1) {
          return;
        }
        uVar7 = 0;
        while (*(uint *)(*(long *)(lVar3 + (long)(int)param_2 * 0x38 + 0x28) + uVar7 * 4) !=
               DAT_04c4a564) {
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) {
            return;
          }
        }
        lVar6 = *(long *)(lVar3 + (long)(int)param_2 * 0x38 + 8);
        uVar1 = DAT_04c4a564;
        if (*(uint *)(lVar6 + 0x2c8) <= DAT_04c4a564) {
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

