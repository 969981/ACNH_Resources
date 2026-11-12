
int FUN_007e4d10(ushort *param_1)

{
  long lVar1;
  char *pcVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  
  uVar3 = *param_1;
  if ((uVar3 != DAT_04cb6038) && (*(long *)(param_1 + 8) != 0 || *(long *)(param_1 + 4) != 0)) {
    if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar7 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e4d9c;
        uVar7 = uVar7 + 1;
      } while (DAT_04c8c0f0 != uVar7);
    }
    uVar7 = 0;
LAB_007e4d9c:
    uVar4 = (uint)uVar7;
    if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (DAT_04c8c0f0 <= uVar4) {
      uVar4 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) != 0) {
      uVar3 = *param_1;
      if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar7 = 0;
        do {
          if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e4e0c;
          uVar7 = uVar7 + 1;
        } while (DAT_04c8c0f0 != uVar7);
      }
      uVar7 = 0;
LAB_007e4e0c:
      uVar4 = (uint)uVar7;
      if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (DAT_04c8c0f0 <= uVar4) {
        uVar4 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) != 1) {
        uVar3 = *param_1;
        if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0))
        {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar7 = 0;
          do {
            if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e4e7c;
            uVar7 = uVar7 + 1;
          } while (DAT_04c8c0f0 != uVar7);
        }
        uVar7 = 0;
LAB_007e4e7c:
        uVar4 = (uint)uVar7;
        if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0))
        {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (DAT_04c8c0f0 <= uVar4) {
          uVar4 = 0;
        }
        if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) != 4) {
          uVar3 = *param_1;
          if (((DAT_04c8c100 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
          }
          if (0 < (int)DAT_04c8c0f0) {
            uVar7 = 0;
            do {
              if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e4eec;
              uVar7 = uVar7 + 1;
            } while (DAT_04c8c0f0 != uVar7);
          }
          uVar7 = 0;
LAB_007e4eec:
          uVar4 = (uint)uVar7;
          if (((DAT_04c8c100 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
          }
          if (DAT_04c8c0f0 <= uVar4) {
            uVar4 = 0;
          }
          if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) != 5) {
            return -1;
          }
        }
      }
    }
    if (DAT_05574040 != 0) {
      lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      uVar3 = *param_1;
      uVar7 = (ulong)uVar3;
      lVar1 = 0;
      if (lVar5 != 0) {
        lVar1 = lVar5 + 0x276cb0;
      }
      if ((DAT_04c8c100 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_04c8c100);
        uVar7 = (ulong)(uint)uVar3;
        if (iVar10 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          uVar7 = (ulong)(uint)uVar3;
        }
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar8 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == (int)(uVar7 >> 0xb)) goto LAB_007e4f8c;
          uVar8 = uVar8 + 1;
        } while (DAT_04c8c0f0 != uVar8);
      }
      uVar8 = 0;
LAB_007e4f8c:
      uVar4 = (uint)uVar8;
      if (((DAT_04c8c100 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (DAT_04c8c0f0 <= uVar4) {
        uVar4 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) == 0x11) {
        uVar7 = *(ulong *)(param_1 + 8);
      }
      else {
        uVar7 = FUN_007ef180(param_1);
        uVar7 = uVar7 & 1;
      }
      if (uVar7 == 0) {
        if ((*(long **)(lVar1 + 0x370) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar1 + 0x370), puVar6 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar6)();
          uVar4 = uVar4 ^ 1;
        }
        pcVar9 = (char *)(*(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350));
        uVar3 = *param_1;
      }
      else {
        if ((*(long **)(lVar1 + 0x370) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar1 + 0x370), puVar6 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar6)();
          uVar4 = uVar4 ^ 1;
        }
        uVar3 = *param_1;
        pcVar9 = (char *)(*(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350) + 100);
      }
      pcVar2 = pcVar9 + ((ulong)uVar3 & 0x7f);
      if (99 < (uint)((ulong)uVar3 & 0x7f)) {
        pcVar2 = pcVar9;
      }
      iVar10 = (int)*pcVar2;
      if ((uVar4 & 1) != 0) {
        return iVar10;
      }
      if (*(long *)(lVar1 + 0x370) == 0) {
        return iVar10;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x370) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return iVar10;
      }
      (**(code **)*puVar6)();
      return iVar10;
    }
  }
  return -1;
}

