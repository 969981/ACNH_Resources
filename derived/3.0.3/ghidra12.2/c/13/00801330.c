
undefined8 FUN_00801330(ushort *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  ushort local_1704;
  undefined1 auStack_1702 [2];
  undefined1 auStack_1700 [5796];
  ushort local_5c [2];
  byte local_58 [4];
  uint local_54;
  
  puVar3 = PTR_DAT_04bb3170;
  puVar2 = PTR_DAT_04bb3128;
  uVar8 = *param_1;
  if ((uVar8 != *(ushort *)PTR_DAT_04bb3170) && (*param_2 < 8)) {
    if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0))
    {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar7 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar8 >> 0xb)) goto LAB_008013cc;
        uVar7 = uVar7 + 1;
      } while (DAT_04c8c0f0 != uVar7);
    }
    uVar7 = 0;
LAB_008013cc:
    local_54 = (uint)uVar7;
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar9 = local_54;
    if (DAT_04c8c0f0 <= local_54) {
      uVar9 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 0) {
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar9 = local_54;
      if (DAT_04c8c0f0 <= local_54) {
        uVar9 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 1) {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        uVar9 = local_54;
        if (DAT_04c8c0f0 <= local_54) {
          uVar9 = 0;
        }
        if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 4) {
          if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
            FUN_00706e58(&DAT_04c8c0f0);
            __cxa_guard_release(&DAT_04c8c100);
          }
          uVar9 = local_54;
          if (DAT_04c8c0f0 <= local_54) {
            uVar9 = 0;
          }
          if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 5) {
            if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
              FUN_00706e58(&DAT_04c8c0f0);
              __cxa_guard_release(&DAT_04c8c100);
            }
            uVar9 = local_54;
            if (DAT_04c8c0f0 <= local_54) {
              uVar9 = 0;
            }
            if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 0x1a) {
              return 0;
            }
          }
        }
      }
    }
    local_58[0] = *param_2;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
    lVar5 = FUN_025830c0(DAT_055021a0,local_58,1);
    if (lVar5 != 0) {
      if ((*(long **)(lVar5 + 0x3278) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x3278), puVar6 == (undefined8 *)0x0)) {
        sVar10 = *(short *)(*(long *)(lVar5 + 0x3260) + *(long *)(lVar5 + 0x3258) + 10);
      }
      else {
        uVar7 = (**(code **)*puVar6)();
        sVar10 = *(short *)(*(long *)(lVar5 + 0x3260) + *(long *)(lVar5 + 0x3258) + 10);
        if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x3278) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x3278) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
      }
      if (sVar10 != *(short *)puVar3) {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar7 = 0;
          do {
            if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == 9) goto LAB_0080156c;
            uVar7 = uVar7 + 1;
          } while (DAT_04c8c0f0 != uVar7);
        }
        uVar7 = 0;
LAB_0080156c:
        bVar1 = *param_2;
        local_5c[0] = 0;
        uVar8 = bVar1 & 0x7f;
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        uVar9 = (uint)uVar7;
        if (DAT_04c8c0f0 <= uVar9) {
          uVar9 = 0;
        }
        if (7 < bVar1) {
          uVar8 = 0x7f;
        }
        local_5c[0] = uVar8 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) << 0xb);
        FUN_007ef010(auStack_1702,local_5c);
        FUN_007e4920(auStack_1700,auStack_1702);
        FUN_007e8e30(&local_1704,auStack_1700);
        if (*param_1 == local_1704) {
          return 1;
        }
      }
    }
  }
  return 0;
}

