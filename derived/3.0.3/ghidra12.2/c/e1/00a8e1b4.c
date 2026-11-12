
undefined4 FUN_00a8e1b4(long param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 local_38;
  
  local_38 = FUN_00a8c31c(DAT_04da7238);
  iVar1 = FUN_00a8d9f0(param_1,param_1 + 0x651f0,&local_38);
  if ((-1 < iVar1) && (piVar3 = (int *)(param_1 + 0x653a0), iVar1 < *piVar3)) {
    local_38._0_4_ = iVar1;
    piVar2 = (int *)(**(code **)(*(long *)**(undefined8 **)
                                            (*(long *)(*(long *)(param_1 + 0x108) + (long)iVar1 * 8)
                                            + 0x670) + 0xf0))();
    if (*piVar2 != 0) {
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) + 8)
                                     + 0xf0))(), *piVar2 == 0)) {
        return 1;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x10) + 0xf0))(), *piVar2 == 0)) {
        return 2;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x18) + 0xf0))(), *piVar2 == 0)) {
        return 3;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x20) + 0xf0))(), *piVar2 == 0)) {
        return 4;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x28) + 0xf0))(), *piVar2 == 0)) {
        return 5;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x30) + 0xf0))(), *piVar2 == 0)) {
        return 6;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x38) + 0xf0))(), *piVar2 == 0)) {
        return 7;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x40) + 0xf0))(), *piVar2 == 0)) {
        return 8;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x48) + 0xf0))(), *piVar2 == 0)) {
        return 9;
      }
      if (((iVar1 < 0) || (*piVar3 <= iVar1)) ||
         (local_38._0_4_ = iVar1,
         piVar2 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                     (long)iVar1 * 8) + 0x670) +
                                                 0x50) + 0xf0))(), *piVar2 == 0)) {
        return 10;
      }
      if (iVar1 < 0) {
        return 0xb;
      }
      if (*piVar3 <= iVar1) {
        return 0xb;
      }
      local_38 = CONCAT44(local_38._4_4_,iVar1);
      piVar3 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x108) +
                                                                  (long)iVar1 * 8) + 0x670) + 0x58)
                                  + 0xf0))();
      uVar4 = 0xb;
      if (*piVar3 != 0) {
        uVar4 = 6;
      }
      return uVar4;
    }
  }
  return 0;
}

