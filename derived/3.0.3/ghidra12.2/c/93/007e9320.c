
void FUN_007e9320(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar7 = (ulong)*param_1;
  uVar1 = (uint)*param_1;
  if (uVar1 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  pbVar4 = &DAT_04c8c100;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar7 = (ulong)uVar1;
    pbVar4 = PTR_DAT_04bb3128;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar7 = (ulong)uVar1;
      pbVar4 = PTR_DAT_04bb3128;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == (int)(uVar7 >> 0xb)) goto LAB_007e93ac;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_007e93ac:
  local_38 = CONCAT44(local_38._4_4_,(int)uVar8);
  if (((*pbVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar1 = (uint)local_38;
  if (DAT_04c8c0f0 <= (uint)local_38) {
    uVar1 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar1 * 4) == 0x11) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
LAB_007e942c:
      lVar5 = *(long *)(param_1 + 4);
      lVar9 = *(long *)(lVar5 + 0x28);
      if (lVar9 == 0) {
        lVar6 = *(long *)(lVar5 + 8);
        lVar9 = *(long *)(lVar5 + 0x10);
        goto LAB_007e9460;
      }
      if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
        uVar1 = 1;
LAB_007e94b8:
        plVar3 = *(long **)(lVar9 + 0x20);
        if (plVar3 != (long *)0x0) {
          local_38 = *(undefined8 *)(lVar5 + 8);
          uStack_30 = *(undefined8 *)(lVar5 + 0x10);
          local_28 = 0x2a8;
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
        }
      }
      else {
        uVar1 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        lVar9 = *(long *)(lVar5 + 0x28);
        uVar1 = uVar1 ^ 1;
        if (lVar9 != 0) goto LAB_007e94b8;
      }
      *(undefined2 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x72) = 0;
      if ((uVar1 & 1) != 0) {
        return;
      }
      lVar9 = *(long *)(lVar5 + 0x28);
      goto joined_r0x007e94f4;
    }
    lVar5 = *(long *)(lVar9 + 0x28);
  }
  else {
    uVar7 = FUN_007ef180(param_1);
    if ((uVar7 & 1) == 0) goto LAB_007e942c;
    lVar9 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(lVar9 + 0x28);
  }
  if (lVar5 == 0) {
    lVar6 = *(long *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
LAB_007e9460:
    *(undefined2 *)(lVar9 + lVar6 + 0x72) = 0;
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
LAB_007e9470:
    plVar3 = *(long **)(lVar5 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar9 + 8);
      uStack_30 = *(undefined8 *)(lVar9 + 0x10);
      local_28 = 0x8a8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    }
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    lVar5 = *(long *)(lVar9 + 0x28);
    uVar1 = uVar1 ^ 1;
    if (lVar5 != 0) goto LAB_007e9470;
  }
  *(undefined2 *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x72) = 0;
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x28);
joined_r0x007e94f4:
  if ((lVar9 != 0) && (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar9 + 0x18))();
  }
  return;
}

