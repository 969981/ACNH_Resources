
undefined8 FUN_02544db8(byte *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_8;
  int local_4;
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_8 = *puVar7;
  FUN_0071c8d0(&local_30,&local_8,PTR_DAT_04bb3238,0);
  plVar6 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3770);
    if ((uVar2 & 1) == 0) {
      local_27 = '\0';
    }
  }
  uVar3 = 0;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    local_4 = FUN_00a74b78(local_30 + 0x3dd);
    if (local_4 == 0x13) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if ((*(uint *)(local_30 + 0x302) < 10) &&
         ((1 << (ulong)(*(uint *)(local_30 + 0x302) & 0x1f) & 0x222U) != 0)) {
        lVar4 = FUN_0251e98c(1);
        pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x4e0) + 0xf0))(lVar4 + 0x4e0);
        fVar8 = *pfVar5;
        plVar6 = (long *)local_30[0xd];
        fVar9 = -fVar8;
        if (0.0 <= fVar8) {
          fVar9 = fVar8;
        }
        local_4 = (int)(long)(fVar9 * 11930465.0);
        if ((param_2 & 1) == 0) {
          local_4 = *(int *)((long)plVar6 + 0x2b4) + local_4;
        }
        else {
          local_4 = *(int *)((long)plVar6 + 0x2b4) - local_4;
        }
        (**(code **)(*plVar6 + 0x160))(plVar6,&local_4);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

