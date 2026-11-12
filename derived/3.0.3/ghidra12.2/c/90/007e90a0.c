
void FUN_007e90a0(ushort *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  short local_50 [2];
  short local_4c [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = (ulong)*param_1;
  uVar5 = (uint)*param_1;
  if (uVar5 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar6 = (ulong)uVar5;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar6 = (ulong)uVar5;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e912c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_007e912c:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar7);
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar5 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar5 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) == 0x11) {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
LAB_007e91ac:
      lVar8 = *(long *)(param_1 + 4);
      lVar4 = *(long *)(lVar8 + 0x28);
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
          lVar4 = *(long *)(lVar8 + 0x28);
          uVar6 = uVar6 & 0xffffffff;
          if (lVar4 == 0) goto LAB_007e9258;
        }
        plVar2 = *(long **)(lVar4 + 0x20);
        if (plVar2 != (long *)0x0) {
          local_48 = *(undefined8 *)(lVar8 + 8);
          uStack_40 = *(undefined8 *)(lVar8 + 0x10);
          local_38 = 0x2a8;
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
        }
      }
LAB_007e9258:
      lVar4 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
      FUN_007ef010(local_50,param_2);
      local_4c[0] = local_50[0];
      goto LAB_007e9270;
    }
    lVar4 = *(long *)(lVar8 + 0x28);
    if (lVar4 != 0) goto LAB_007e9168;
LAB_007e91a4:
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_007ef180(param_1);
    if ((uVar6 & 1) == 0) goto LAB_007e91ac;
    lVar8 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar8 + 0x28);
    if (lVar4 == 0) goto LAB_007e91a4;
LAB_007e9168:
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      lVar4 = *(long *)(lVar8 + 0x28);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar4 == 0) goto LAB_007e9210;
    }
    plVar2 = *(long **)(lVar4 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar8 + 8);
      uStack_40 = *(undefined8 *)(lVar8 + 0x10);
      local_38 = 0x8a8;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    }
  }
LAB_007e9210:
  lVar4 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
  FUN_007ef010(local_4c,param_2);
LAB_007e9270:
  *(short *)(lVar4 + 0x72) = local_4c[0] + 1;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

