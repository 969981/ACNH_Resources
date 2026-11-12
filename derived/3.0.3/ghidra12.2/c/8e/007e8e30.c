
void FUN_007e8e30(short *param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *param_2;
  if ((uVar1 == *(ushort *)PTR_DAT_04bb3170) ||
     (*(long *)(param_2 + 8) == 0 && *(long *)(param_2 + 4) == 0)) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c8c100), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar7 * 4) == (uint)(uVar1 >> 0xb)) goto LAB_007e8ebc;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_007e8ebc:
  uVar3 = (uint)uVar7;
  if (((DAT_04c8c100 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar4 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar3) {
    uVar3 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar3 * 4) == 0x11) {
    lVar8 = *(long *)(param_2 + 8);
    if (lVar8 != 0) {
      plVar6 = *(long **)(lVar8 + 0x28);
joined_r0x007e8f2c:
      if ((plVar6 == (long *)0x0) || ((undefined8 *)*plVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (*(code *)**(undefined8 **)*plVar6)();
        uVar3 = uVar3 ^ 1;
      }
      sVar2 = *(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x72);
      if (sVar2 == 0) {
        FUN_007ef010(param_1,PTR_DAT_04bb3170);
      }
      else {
        *param_1 = sVar2 + -1;
      }
      if ((uVar3 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)(lVar8 + 0x28);
      goto joined_r0x007e8ff4;
    }
  }
  else {
    uVar7 = FUN_007ef180(param_2);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(param_2 + 8);
      plVar6 = *(long **)(lVar8 + 0x28);
      goto joined_r0x007e8f2c;
    }
  }
  lVar8 = *(long *)(param_2 + 4);
  if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  sVar2 = *(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x72);
  if (sVar2 == 0) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
  }
  else {
    *param_1 = sVar2 + -1;
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x28);
joined_r0x007e8ff4:
  if ((lVar8 == 0) || (*(undefined8 **)(lVar8 + 8) == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007e9014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(lVar8 + 8))();
  return;
}

