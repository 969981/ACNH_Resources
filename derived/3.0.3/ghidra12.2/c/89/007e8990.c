
undefined8 FUN_007e8990(ushort *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  if (*param_1 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  if ((*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) ||
     (uVar6 = FUN_007e87a0(param_1), (uVar6 & 1) == 0)) {
    return 0;
  }
  FUN_007e6aa0(param_1);
  puVar3 = PTR_DAT_04bb3128;
  puVar2 = PTR_DAT_04bb3120;
  uVar9 = 0;
LAB_007e8a0c:
  uVar5 = 0;
  do {
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    if ((*puVar3 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(puVar3);
      uVar6 = (ulong)(uint)uVar1;
      if (iVar4 != 0) {
        FUN_00706e58(puVar2);
        __cxa_guard_release(puVar3);
        uVar6 = (ulong)(uint)uVar1;
      }
    }
    if (0 < (int)*(uint *)puVar2) {
      uVar8 = 0;
      do {
        if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e8a7c;
        uVar8 = uVar8 + 1;
      } while (*(uint *)puVar2 != uVar8);
    }
    uVar8 = 0;
LAB_007e8a7c:
    uVar7 = (uint)uVar8;
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
      FUN_00706e58(puVar2);
      __cxa_guard_release(puVar3);
    }
    if (*(uint *)puVar2 <= uVar7) {
      uVar7 = 0;
    }
    if (*(int *)(*(long *)(puVar2 + 8) + (long)(int)uVar7 * 4) == 0x11) {
      if (*(long *)(param_1 + 8) != 0) goto LAB_007e8ac0;
LAB_007e8a14:
      if (0x1f < uVar5) break;
    }
    else {
      uVar6 = FUN_007ef180(param_1);
      if ((uVar6 & 1) == 0) goto LAB_007e8a14;
LAB_007e8ac0:
      iVar4 = FUN_007e68d0(param_1);
      uVar7 = 0x20;
      if (iVar4 != 2) {
        uVar7 = 0x40;
      }
      if (uVar7 <= uVar5) break;
    }
    iVar4 = FUN_007e6e10(param_1,uVar5,uVar9);
    uVar5 = uVar5 + 1;
    if (iVar4 != 0xc) {
      return 0;
    }
  } while( true );
  uVar9 = uVar9 + 1;
  uVar5 = FUN_007e6aa0(param_1);
  if (uVar5 <= uVar9) {
    return 1;
  }
  goto LAB_007e8a0c;
}

