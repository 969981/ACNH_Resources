
void FUN_007e5ab0(ushort *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = (ulong)*param_1;
  uVar1 = (uint)*param_1;
  if (uVar1 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar6 = (ulong)uVar1;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar6 = (ulong)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e5b3c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_007e5b3c:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar7);
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar1 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar1 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) == 0x11) {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
LAB_007e5bbc:
      lVar4 = *(long *)(param_1 + 4);
      lVar8 = *(long *)(lVar4 + 0x28);
      if (lVar8 == 0) {
        lVar5 = *(long *)(lVar4 + 8);
        lVar8 = *(long *)(lVar4 + 0x10);
        goto LAB_007e5bf0;
      }
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar1 = 1;
LAB_007e5c48:
        plVar3 = *(long **)(lVar8 + 0x20);
        if (plVar3 != (long *)0x0) {
          local_48 = *(undefined8 *)(lVar4 + 8);
          uStack_40 = *(undefined8 *)(lVar4 + 0x10);
          local_38 = 0x2a8;
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
        }
      }
      else {
        uVar1 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar4 + 0x28);
        uVar1 = uVar1 ^ 1;
        if (lVar8 != 0) goto LAB_007e5c48;
      }
      *(undefined8 *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 8) = param_2;
      if ((uVar1 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)(lVar4 + 0x28);
      goto joined_r0x007e5c84;
    }
    lVar4 = *(long *)(lVar8 + 0x28);
  }
  else {
    uVar6 = FUN_007ef180(param_1);
    if ((uVar6 & 1) == 0) goto LAB_007e5bbc;
    lVar8 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar8 + 0x28);
  }
  if (lVar4 == 0) {
    lVar5 = *(long *)(lVar8 + 8);
    lVar8 = *(long *)(lVar8 + 0x10);
LAB_007e5bf0:
    *(undefined8 *)(lVar8 + lVar5 + 8) = param_2;
    return;
  }
  if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
LAB_007e5c00:
    plVar3 = *(long **)(lVar4 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar8 + 8);
      uStack_40 = *(undefined8 *)(lVar8 + 0x10);
      local_38 = 0x8a8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
    lVar4 = *(long *)(lVar8 + 0x28);
    uVar1 = uVar1 ^ 1;
    if (lVar4 != 0) goto LAB_007e5c00;
  }
  *(undefined8 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 8) = param_2;
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
joined_r0x007e5c84:
  if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar8 + 0x18))();
  }
  return;
}

