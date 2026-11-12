
undefined8 * FUN_007eada0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (**(long **)(*(long *)(param_1 + 2) + uVar3 * 8) == 0) {
        if (((-1 < (int)(uint)uVar3) && ((uint)uVar3 < uVar1)) &&
           (puVar6 = *(undefined8 **)(*(long *)(param_1 + 2) + uVar3 * 8),
           puVar6 != (undefined8 *)0x0)) {
          return puVar6;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  if ((int)uVar1 < (int)param_1[1]) {
    puVar6 = *(undefined8 **)(param_1 + 4);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar6;
    }
    *puVar6 = 0;
    FUN_007ef010(puVar6 + 1,PTR_DAT_04bb3170);
    *(undefined1 *)((long)puVar6 + 10) = 0;
    if ((int)*param_1 < (int)param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar6;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar3 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar3 * 4) == 0x11) goto LAB_007eaeac;
      uVar3 = uVar3 + 1;
    } while (DAT_04c8c0f0 != uVar3);
  }
  uVar3 = 0;
LAB_007eaeac:
  uVar1 = *param_1;
  puVar4 = &DAT_04c8c0f0;
  if (((DAT_04c8c100 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04c8c100), puVar4 = (uint *)PTR_DAT_04bb3120, iVar2 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
    puVar4 = (uint *)PTR_DAT_04bb3120;
  }
  uVar5 = (uint)uVar3;
  if (*puVar4 <= uVar5) {
    uVar5 = 0;
  }
  *(ushort *)(puVar6 + 1) =
       (short)uVar1 + 0x7fU & 0x7f |
       (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb);
  return puVar6;
}

