
void FUN_007e5260(ushort *param_1,int *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb3128;
  uVar3 = *param_1;
  if (uVar3 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar10 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar10 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e52f0;
      uVar10 = uVar10 + 1;
    } while (DAT_04c8c0f0 != uVar10);
  }
  uVar10 = 0;
LAB_007e52f0:
  local_58 = CONCAT44(local_58._4_4_,(int)uVar10);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar9 = (uint)local_58;
  if (DAT_04c8c0f0 <= (uint)local_58) {
    uVar9 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 0) {
    uVar3 = *param_1;
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar10 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar10 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e535c;
        uVar10 = uVar10 + 1;
      } while (DAT_04c8c0f0 != uVar10);
    }
    uVar10 = 0;
LAB_007e535c:
    uVar9 = (uint)uVar10;
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (DAT_04c8c0f0 <= uVar9) {
      uVar9 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 1) {
      uVar3 = *param_1;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar10 = 0;
        do {
          if (*(uint *)(DAT_04c8c0f8 + uVar10 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e53cc;
          uVar10 = uVar10 + 1;
        } while (DAT_04c8c0f0 != uVar10);
      }
      uVar10 = 0;
LAB_007e53cc:
      uVar9 = (uint)uVar10;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (DAT_04c8c0f0 <= uVar9) {
        uVar9 = 0;
      }
      if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 4) {
        uVar3 = *param_1;
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (0 < (int)DAT_04c8c0f0) {
          uVar10 = 0;
          do {
            if (*(uint *)(DAT_04c8c0f8 + uVar10 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007e543c;
            uVar10 = uVar10 + 1;
          } while (DAT_04c8c0f0 != uVar10);
        }
        uVar10 = 0;
LAB_007e543c:
        uVar9 = (uint)uVar10;
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
        }
        if (DAT_04c8c0f0 <= uVar9) {
          uVar9 = 0;
        }
        if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) != 5) {
          return;
        }
      }
    }
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  uVar3 = *param_1;
  uVar10 = (ulong)uVar3;
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x276cb0;
  }
  if ((*puVar4 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(&DAT_04c8c100);
    uVar10 = (ulong)(uint)uVar3;
    if (iVar5 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar10 = (ulong)(uint)uVar3;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == (int)(uVar10 >> 0xb)) goto LAB_007e54dc;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_007e54dc:
  local_58 = CONCAT44(local_58._4_4_,(int)uVar11);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar9 = (uint)local_58;
  if (DAT_04c8c0f0 <= (uint)local_58) {
    uVar9 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) == 0x11) {
    uVar10 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar10 = FUN_007ef180(param_1);
    uVar10 = uVar10 & 1;
  }
  if (uVar10 == 0) {
    lVar6 = *(long *)(lVar1 + 0x370);
    if (lVar6 == 0) {
      uVar10 = 0;
    }
    else {
      if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        lVar6 = *(long *)(lVar1 + 0x370);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar6 == 0) goto LAB_007e55fc;
      }
      plVar7 = *(long **)(lVar6 + 0x20);
      if (plVar7 != (long *)0x0) {
        local_58 = *(undefined8 *)(lVar1 + 0x350);
        uStack_50 = *(undefined8 *)(lVar1 + 0x358);
        local_48 = 200;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
      }
    }
LAB_007e55fc:
    puVar12 = (undefined1 *)(*(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350));
    uVar3 = *param_1;
    goto LAB_007e560c;
  }
  lVar6 = *(long *)(lVar1 + 0x370);
  if (lVar6 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar1 + 0x370);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar6 == 0) goto LAB_007e55b4;
    }
    plVar7 = *(long **)(lVar6 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar1 + 0x350);
      uStack_50 = *(undefined8 *)(lVar1 + 0x358);
      local_48 = 200;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_007e55b4:
  uVar3 = *param_1;
  puVar12 = (undefined1 *)(*(long *)(lVar1 + 0x358) + *(long *)(lVar1 + 0x350) + 100);
LAB_007e560c:
  iVar5 = *param_2;
  puVar2 = puVar12 + ((ulong)uVar3 & 0x7f);
  if (99 < (uint)((ulong)uVar3 & 0x7f)) {
    puVar2 = puVar12;
  }
  if (7 < iVar5) {
    iVar5 = -1;
  }
  *puVar2 = (char)iVar5;
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar1 + 0x370) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x370) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

