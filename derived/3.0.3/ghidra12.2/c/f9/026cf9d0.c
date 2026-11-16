
int FUN_026cf9d0(undefined8 param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                int param_6)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  size_t __n;
  undefined1 *puVar8;
  undefined *local_120;
  long *local_118;
  long *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [128];
  int local_34;
  
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_110 = (long *)0x0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  local_e8 = 0;
  local_118 = (long *)0x0;
  local_120 = puVar1;
  iVar5 = FUN_026d1548(&local_120,param_4,param_5,0);
  plVar3 = local_118;
  if (iVar5 != 1) goto LAB_026cfe90;
  if ((((local_118 == (long *)0x0) || ((char)local_118[0xf] == '\0')) ||
      (uVar7 = (**(code **)(*local_118 + 0x48))(local_118,&local_120), (uVar7 & 1) == 0)) ||
     (uVar7 = (**(code **)(*plVar3 + 0xa0))(plVar3,&local_120,(long)param_6,0), (uVar7 & 1) == 0)) {
    local_d0[0] = 0;
    local_e0 = local_d0;
    local_34 = 0;
    uStack_d8 = 0x8000000000;
    if ((local_118 == (long *)0x0) || ((char)local_118[0xf] == '\0')) {
LAB_026cfb08:
      __n = 0x27;
LAB_026cfb0c:
      puVar8 = local_e0;
      memcpy(local_e0,&DAT_040a1d72,__n);
      puVar8 = puVar8 + __n;
LAB_026cfb28:
      *puVar8 = 0;
    }
    else {
      uVar7 = (**(code **)(*local_118 + 0xb8))(local_118,&local_34,&local_120);
      if ((uVar7 & 1) == 0) {
        if (local_e0 != &DAT_040a1d72) {
          if (0x27 < uStack_d8._4_4_) goto LAB_026cfb08;
          puVar8 = local_e0;
          if (1 < uStack_d8._4_4_) {
            __n = (size_t)(uStack_d8._4_4_ - 1);
            goto LAB_026cfb0c;
          }
          goto LAB_026cfb28;
        }
      }
      else {
        FUN_038d16fc(&local_e0,&DAT_040c7be9,local_34);
      }
    }
    local_34 = 7;
  }
  else {
    local_34 = 1;
  }
  plVar4 = local_110;
  plVar3 = local_118;
  if (local_34 != 1) {
    if (((local_110 == (long *)0x0) || ((char)local_110[0xf] == '\0')) ||
       ((uVar7 = (**(code **)(*local_110 + 0x48))(local_110,&local_120), (uVar7 & 1) == 0 ||
        (uVar7 = (**(code **)(*plVar4 + 0x70))(plVar4,&local_120), (uVar7 & 1) == 0)))) {
      plVar3 = local_118;
      iVar5 = 7;
      if (local_118 != (long *)0x0) {
        iVar5 = 1;
      }
      if (iVar5 == 1) {
        local_e0._0_4_ = iVar5;
        if ((*PTR_DAT_04bc3648 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04bc3648);
          if (iVar5 != 0) {
            *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
            __cxa_guard_release(PTR_DAT_04bc3648);
          }
        }
        uVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3640);
        iVar5 = 7;
        if ((uVar7 & 1) != 0) {
          iVar5 = 1;
        }
      }
      local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,iVar5);
      iVar5 = local_34;
    }
    else {
      local_118 = (long *)0x0;
      local_110 = (long *)0x0;
      iVar5 = local_34;
    }
    goto LAB_026cfe90;
  }
  if ((((local_118 == (long *)0x0) || ((char)local_118[0xf] == '\0')) ||
      (uVar7 = (**(code **)(*local_118 + 0x48))(local_118,&local_120), param_2 == 0)) ||
     ((uVar7 & 1) == 0)) {
LAB_026cfcbc:
    plVar3 = local_118;
    iVar5 = 7;
    if (local_118 != (long *)0x0) {
      iVar5 = 1;
    }
    if (iVar5 == 1) {
      local_e0._0_4_ = iVar5;
      if ((*PTR_DAT_04bc3648 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04bc3648);
        if (iVar5 != 0) {
          *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
          __cxa_guard_release(PTR_DAT_04bc3648);
        }
      }
      uVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3640);
      iVar5 = 7;
      if ((uVar7 & 1) != 0) {
        iVar5 = 1;
      }
    }
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,iVar5);
    iVar5 = 7;
  }
  else {
    if (local_e8 == 0) {
      uVar7 = (**(code **)(*plVar3 + 0x90))(plVar3,0,&local_120,param_2,param_3);
      if ((uVar7 & 1) == 0) goto LAB_026cfcbc;
    }
    else {
      do {
        local_e0 = (undefined1 *)((ulong)local_e0 & 0xffffffff00000000);
        uVar2 = param_3;
        if ((int)local_e8 <= (int)param_3) {
          uVar2 = local_e8;
        }
        uVar7 = (**(code **)(*plVar3 + 0x90))(plVar3,&local_e0,&local_120,param_2,uVar2);
        if ((uVar7 & 1) == 0) goto LAB_026cfcbc;
        if ((uint)local_e0 < uVar2) break;
        param_2 = param_2 + ((ulong)local_e0 & 0xffffffff);
        param_3 = param_3 - uVar2;
      } while (param_3 != 0);
    }
    iVar5 = 1;
  }
  plVar3 = local_110;
  if (iVar5 == 1) {
    if (((local_110 == (long *)0x0) || ((char)local_110[0xf] == '\0')) ||
       ((uVar7 = (**(code **)(*local_110 + 0x48))(local_110,&local_120), (uVar7 & 1) == 0 ||
        (uVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_120), (uVar7 & 1) == 0)))) {
      plVar3 = local_118;
      iVar5 = 7;
      if (local_118 != (long *)0x0) {
        iVar5 = 1;
      }
      if (iVar5 == 1) {
        local_e0._0_4_ = iVar5;
        if ((*PTR_DAT_04bc3648 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04bc3648);
          if (iVar5 != 0) {
            *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
            __cxa_guard_release(PTR_DAT_04bc3648);
          }
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3640);
      }
      local_e0 = (undefined1 *)((ulong)local_e0._4_4_ << 0x20);
      iVar5 = 7;
    }
    else {
      iVar5 = 1;
      local_118 = (long *)0x0;
      local_110 = (long *)0x0;
    }
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,iVar5);
  }
  else if (((local_110 == (long *)0x0) || ((char)local_110[0xf] == '\0')) ||
          ((uVar7 = (**(code **)(*local_110 + 0x48))(local_110,&local_120), (uVar7 & 1) == 0 ||
           (uVar7 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_120), (uVar7 & 1) == 0)))) {
    plVar3 = local_118;
    iVar6 = 7;
    if (local_118 != (long *)0x0) {
      iVar6 = 1;
    }
    if (iVar6 == 1) {
      local_e0._0_4_ = iVar6;
      if ((*PTR_DAT_04bc3648 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3648);
        if (iVar6 != 0) {
          *(undefined ***)PTR_DAT_04bc3640 = &PTR_LAB_04a893a8;
          __cxa_guard_release(PTR_DAT_04bc3648);
        }
      }
      uVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3640);
      iVar6 = 7;
      if ((uVar7 & 1) != 0) {
        iVar6 = 1;
      }
    }
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,iVar6);
  }
  else {
    local_118 = (long *)0x0;
    local_110 = (long *)0x0;
  }
LAB_026cfe90:
  plVar3 = local_110;
  if ((local_110 != (long *)0x0) && ((char)local_110[0xf] != '\0')) {
    local_120 = puVar1;
    uVar7 = (**(code **)(*local_110 + 0x48))(local_110,&local_120);
    if ((uVar7 & 1) != 0) {
      (**(code **)(*plVar3 + 0x70))(plVar3,&local_120);
    }
  }
  return iVar5;
}

