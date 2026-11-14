
undefined8
FUN_01736170(float param_1,float param_2,float param_3,float *param_4,undefined4 param_5,
            undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long local_78;
  char local_70;
  char local_6e;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb4848;
  if (*(long *)PTR_DAT_04bb4848 == 0) {
    return 0;
  }
  local_68 = 0;
  local_60 = 0x40a0000000000000;
  local_58 = *(undefined4 *)PTR_DAT_04bb3238;
  local_54 = local_58;
  local_44 = param_5;
  uVar5 = FUN_022924b4(*(long *)PTR_DAT_04bb4848,&local_68,0);
  if (((uVar5 & 1) != 0) &&
     ((((FUN_0071cb58(&local_78,&local_54,&local_44,0), local_78 == 0 || (local_70 == '\0')) ||
       (local_6e == '\0')) ||
      ((*(long **)(local_78 + 0x60) == (long *)0x0 ||
       (uVar5 = (**(code **)(**(long **)(local_78 + 0x60) + 0x100))(), (uVar5 & 1) != 0)))))) {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (param_3 < local_60._4_4_) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_3)) {
        bVar2 = param_3 < 0.0;
        bVar3 = param_3 == 0.0;
        bVar4 = false;
      }
    }
    fVar7 = param_3;
    if (bVar3 || bVar2 != bVar4) {
      fVar7 = local_60._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_60) * (param_4[2] - (float)local_60) +
             (*param_4 - (float)local_68) * (*param_4 - (float)local_68)) < fVar7 * 0.999 + param_1)
    {
      if (param_2 <= 0.0) goto LAB_01736510;
      fVar6 = param_4[1] - local_68._4_4_;
      fVar7 = -fVar6;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      if (fVar7 < param_2) goto LAB_01736510;
    }
  }
  uVar5 = FUN_022924b4(*(undefined8 *)puVar1,&local_68,1);
  if (((uVar5 & 1) != 0) &&
     (((FUN_0071cb58(&local_78,&local_54,&local_44,0), local_78 == 0 || (local_70 == '\0')) ||
      ((local_6e == '\0' ||
       ((*(long **)(local_78 + 0x60) == (long *)0x0 ||
        (uVar5 = (**(code **)(**(long **)(local_78 + 0x60) + 0x100))(), (uVar5 & 1) != 0)))))))) {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (param_3 < local_60._4_4_) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_3)) {
        bVar2 = param_3 < 0.0;
        bVar3 = param_3 == 0.0;
        bVar4 = false;
      }
    }
    fVar7 = param_3;
    if (bVar3 || bVar2 != bVar4) {
      fVar7 = local_60._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_60) * (param_4[2] - (float)local_60) +
             (*param_4 - (float)local_68) * (*param_4 - (float)local_68)) < fVar7 * 0.999 + param_1)
    {
      if (param_2 <= 0.0) goto LAB_01736510;
      fVar6 = param_4[1] - local_68._4_4_;
      fVar7 = -fVar6;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      if (fVar7 < param_2) goto LAB_01736510;
    }
  }
  uVar5 = FUN_022924b4(*(undefined8 *)puVar1,&local_68,2);
  if (((uVar5 & 1) != 0) &&
     ((((FUN_0071cb58(&local_78,&local_54,&local_44,0), local_78 == 0 || (local_70 == '\0')) ||
       (local_6e == '\0')) ||
      ((*(long **)(local_78 + 0x60) == (long *)0x0 ||
       (uVar5 = (**(code **)(**(long **)(local_78 + 0x60) + 0x100))(), (uVar5 & 1) != 0)))))) {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (param_3 < local_60._4_4_) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_3)) {
        bVar2 = param_3 < 0.0;
        bVar3 = param_3 == 0.0;
        bVar4 = false;
      }
    }
    fVar7 = param_3;
    if (bVar3 || bVar2 != bVar4) {
      fVar7 = local_60._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_60) * (param_4[2] - (float)local_60) +
             (*param_4 - (float)local_68) * (*param_4 - (float)local_68)) < fVar7 * 0.999 + param_1)
    {
      if (param_2 <= 0.0) goto LAB_01736510;
      fVar6 = param_4[1] - local_68._4_4_;
      fVar7 = -fVar6;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      if (fVar7 < param_2) goto LAB_01736510;
    }
  }
  uVar5 = FUN_022924b4(*(undefined8 *)puVar1,&local_68,3);
  if (((uVar5 & 1) != 0) &&
     (((FUN_0071cb58(&local_78,&local_54,&local_44,0), local_78 == 0 || (local_70 == '\0')) ||
      ((local_6e == '\0' ||
       ((*(long **)(local_78 + 0x60) == (long *)0x0 ||
        (uVar5 = (**(code **)(**(long **)(local_78 + 0x60) + 0x100))(), (uVar5 & 1) != 0)))))))) {
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (param_3 < local_60._4_4_) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(param_3)) {
        bVar2 = param_3 < 0.0;
        bVar3 = param_3 == 0.0;
        bVar4 = false;
      }
    }
    if (bVar3 || bVar2 != bVar4) {
      param_3 = local_60._4_4_;
    }
    if (SQRT((param_4[2] - (float)local_60) * (param_4[2] - (float)local_60) +
             (*param_4 - (float)local_68) * (*param_4 - (float)local_68)) <
        param_3 * 0.999 + param_1) {
      if (0.0 < param_2) {
        local_68._4_4_ = param_4[1] - local_68._4_4_;
        fVar7 = -local_68._4_4_;
        if (0.0 <= local_68._4_4_) {
          fVar7 = local_68._4_4_;
        }
        if (param_2 <= fVar7) {
          return 0;
        }
      }
LAB_01736510:
      if (param_8 == (undefined4 *)0x0) {
        return 1;
      }
      *param_8 = local_54;
      return 1;
    }
  }
  return 0;
}

