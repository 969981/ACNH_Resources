
void FUN_007e80d0(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar5 = (ulong)*param_1;
  uVar1 = (uint)*param_1;
  if (uVar1 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar5 = (ulong)uVar1;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar5 = (ulong)uVar1;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == (int)(uVar5 >> 0xb)) goto LAB_007e815c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_007e815c:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar7);
  if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar1 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar1 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) == 0x11) {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) goto LAB_007e81e4;
    lVar6 = *(long *)(lVar8 + 0x28);
    if (lVar6 == 0) goto LAB_007e81d4;
LAB_007e8198:
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
LAB_007e8228:
      plVar3 = *(long **)(lVar6 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar8 + 8);
        uStack_40 = *(undefined8 *)(lVar8 + 0x10);
        local_38 = 0x8a8;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar8 + 0x28);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar6 != 0) goto LAB_007e8228;
    }
    FUN_027c1eb0(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
  }
  else {
    uVar5 = FUN_007ef180(param_1);
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 8);
      lVar6 = *(long *)(lVar8 + 0x28);
      if (lVar6 != 0) goto LAB_007e8198;
LAB_007e81d4:
      FUN_027c1eb0(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      goto LAB_007e82bc;
    }
LAB_007e81e4:
    lVar8 = *(long *)(param_1 + 4);
    lVar6 = *(long *)(lVar8 + 0x28);
    if (lVar6 == 0) {
      FUN_027c1830(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      goto LAB_007e82bc;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
LAB_007e8268:
      plVar3 = *(long **)(lVar6 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar8 + 8);
        uStack_40 = *(undefined8 *)(lVar8 + 0x10);
        local_38 = 0x2a8;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar8 + 0x28);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar6 != 0) goto LAB_007e8268;
    }
    FUN_027c1830(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
LAB_007e82bc:
  FUN_02582a24(&DAT_0548e140);
  uVar1 = FUN_02582d8c(&DAT_0548e140,1);
  if (((uVar1 < 8) &&
      (lVar8 = *(long *)PTR_DAT_04bb4fb8, *(char *)(lVar8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
      ) && (*(int *)(lVar8 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 0)) {
    uVar1 = (uint)*(byte *)(lVar8 + (ulong)uVar1 * 0x13f0 + 0x13d5);
  }
  else {
    uVar1 = 0xffffffff;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  FUN_007e5260(param_1,&local_48);
  return;
}

