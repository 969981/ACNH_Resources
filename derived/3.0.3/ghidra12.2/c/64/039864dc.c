
undefined8
FUN_039864dc(long *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
            undefined4 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_04bb6230;
  if (((*PTR_DAT_04bb6230 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6230);
  }
  puVar1 = PTR_DAT_04bb6228;
  uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6228);
  puVar3 = PTR_DAT_04bd0ee0;
  if ((uVar5 & 1) == 0) {
    if (((*PTR_DAT_04bd0ee0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0ee0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bd0ed8 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0ee0);
    }
    puVar1 = PTR_DAT_04bd0ed8;
    uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bd0ed8);
    puVar2 = PTR_DAT_04bbdcb0;
    if ((uVar5 & 1) == 0) {
      if (((*PTR_DAT_04bbdcb0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bbdca8 = PTR_DAT_04bb6238 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbdcb0);
      }
      puVar1 = PTR_DAT_04bbdca8;
      uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bbdca8);
      if ((uVar5 & 1) == 0) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
        if (param_4 != (float *)0x0) {
          *param_4 = 1.0;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
      }
      else {
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbdcb0), iVar4 != 0)) {
          *(undefined **)puVar1 = PTR_DAT_04bb6238 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbdcb0);
        }
        uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bbdca8);
        if ((uVar5 & 1) == 0) {
          param_1 = (long *)0x0;
        }
        if (param_2 != (undefined4 *)0x0) {
          uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
          *param_2 = uVar6;
        }
        if (param_3 != (undefined4 *)0x0) {
          uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
          *param_3 = uVar6;
        }
        if (param_4 != (float *)0x0) {
          fVar8 = *(float *)(param_1 + 0x14) - *(float *)((long)param_1 + 0xa4);
          fVar7 = -fVar8;
          if (0.0 <= fVar8) {
            fVar7 = fVar8;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 1.0;
          }
          else {
            fVar9 = *(float *)(param_1 + 0x15) - *(float *)((long)param_1 + 0xac);
            fVar8 = -fVar9;
            if (0.0 <= fVar9) {
              fVar8 = fVar9;
            }
            fVar8 = fVar8 / fVar7;
            fVar7 = -fVar8;
            if (0.0 <= fVar8) {
              fVar7 = fVar8;
            }
          }
          *param_4 = fVar7;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = 0;
        }
      }
      if (param_6 == (undefined8 *)0x0) {
        return 0;
      }
      *param_6 = 0;
      return 0;
    }
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0ee0), iVar4 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd0ee0);
    }
    uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bd0ed8);
    if ((uVar5 & 1) == 0) {
      param_1 = (long *)0x0;
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      *param_2 = uVar6;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
      *param_3 = uVar6;
    }
    if (param_4 != (float *)0x0) {
      fVar7 = (float)(**(code **)(*param_1 + 0x38))(param_1);
      *param_4 = fVar7;
    }
    if (param_5 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      *param_5 = uVar6;
    }
    if (param_6 != (undefined8 *)0x0) {
      (**(code **)(*param_1 + 0x40))(param_1,param_6);
      return 1;
    }
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar4 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6230);
    }
    uVar5 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6228);
    if ((uVar5 & 1) == 0) {
      param_1 = (long *)0x0;
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      *param_2 = uVar6;
    }
    if (param_3 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
      *param_3 = uVar6;
    }
    if (param_4 != (float *)0x0) {
      fVar7 = (float)(**(code **)(*param_1 + 0x38))(param_1);
      *param_4 = fVar7;
    }
    if (param_5 != (undefined4 *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1);
      *param_5 = uVar6;
    }
    if (param_6 != (undefined8 *)0x0) {
      *(undefined4 *)param_6 = *(undefined4 *)((long)param_1 + 0xb4);
      *(int *)((long)param_6 + 4) = (int)param_1[0x17];
      return 1;
    }
  }
  return 1;
}

