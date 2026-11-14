
undefined8
FUN_01735b38(float param_1,float param_2,float param_3,float *param_4,undefined4 param_5,
            ulong param_6,ulong param_7,undefined4 *param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  long local_88;
  char local_80;
  char local_7e;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb4848;
  if (*(long *)PTR_DAT_04bb4848 == 0) {
    return 0;
  }
  local_78 = 0;
  local_70 = 0x40a0000000000000;
  local_68 = *(undefined4 *)PTR_DAT_04bb3238;
  local_64 = param_5;
  uVar7 = FUN_022921a8(*(long *)PTR_DAT_04bb4848,&local_78,0);
  if ((uVar7 & 1) != 0) {
    FUN_0071cb58(&local_88,&local_68,&local_64,0);
    lVar2 = local_88;
    if (((local_88 != 0) && (local_80 != '\0')) && (local_7e != '\0')) {
      if ((*(long **)(local_88 + 0x60) != (long *)0x0) &&
         (uVar7 = (**(code **)(**(long **)(local_88 + 0x60) + 0x100))(), (uVar7 & 1) == 0))
      goto LAB_01735cc8;
      plVar8 = *(long **)(lVar2 + 0x90);
      if (plVar8 != (long *)0x0) {
        if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5b58);
        }
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb5b50);
        if ((uVar7 & 1) != 0) {
          uVar7 = param_6;
          if (*(int *)(plVar8[0x4f] + 0x40) == 0x201) {
            uVar7 = param_7;
          }
          if ((uVar7 & 1) == 0) goto LAB_01735cc8;
        }
      }
    }
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (param_3 < local_70._4_4_) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_3)) {
        bVar3 = param_3 < 0.0;
        bVar4 = param_3 == 0.0;
        bVar5 = false;
      }
    }
    fVar10 = param_3;
    if (bVar4 || bVar3 != bVar5) {
      fVar10 = local_70._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_70) * (param_4[2] - (float)local_70) +
             (*param_4 - (float)local_78) * (*param_4 - (float)local_78)) < fVar10 * 0.999 + param_1
       ) {
      if (param_2 <= 0.0) goto LAB_01735de8;
      fVar9 = param_4[1] - local_78._4_4_;
      fVar10 = -fVar9;
      if (0.0 <= fVar9) {
        fVar10 = fVar9;
      }
      if (fVar10 < param_2) goto LAB_01735de8;
    }
  }
LAB_01735cc8:
  uVar7 = FUN_022921a8(*(undefined8 *)puVar1,&local_78,1);
  if ((uVar7 & 1) != 0) {
    FUN_0071cb58(&local_88,&local_68,&local_64,0);
    if (((local_88 != 0) && (local_80 != '\0')) && (local_7e != '\0')) {
      if ((*(long **)(local_88 + 0x60) != (long *)0x0) &&
         (uVar7 = (**(code **)(**(long **)(local_88 + 0x60) + 0x100))(), (uVar7 & 1) == 0)) {
        return 0;
      }
      plVar8 = *(long **)(local_88 + 0x90);
      if (plVar8 != (long *)0x0) {
        if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5b58);
        }
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb5b50);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(plVar8[0x4f] + 0x40) == 0x201) {
            param_6 = param_7;
          }
          if ((param_6 & 1) == 0) {
            return 0;
          }
        }
      }
    }
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (param_3 < local_70._4_4_) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_3)) {
        bVar3 = param_3 < 0.0;
        bVar4 = param_3 == 0.0;
        bVar5 = false;
      }
    }
    if (bVar4 || bVar3 != bVar5) {
      param_3 = local_70._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_70) * (param_4[2] - (float)local_70) +
             (*param_4 - (float)local_78) * (*param_4 - (float)local_78)) <
        param_3 * 0.999 + param_1) {
      if (0.0 < param_2) {
        local_78._4_4_ = param_4[1] - local_78._4_4_;
        fVar10 = -local_78._4_4_;
        if (0.0 <= local_78._4_4_) {
          fVar10 = local_78._4_4_;
        }
        if (param_2 <= fVar10) {
          return 0;
        }
      }
LAB_01735de8:
      if (param_8 == (undefined4 *)0x0) {
        return 1;
      }
      *param_8 = local_68;
      return 1;
    }
  }
  return 0;
}

