
float FUN_02569a20(float *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long *local_70;
  char local_68;
  char local_66;
  undefined4 local_5c;
  long *local_58;
  char local_50;
  char local_4e;
  int local_48;
  undefined4 local_44;
  
  fVar7 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1);
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
  if (*pfVar4 <= fVar7) {
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
    fVar6 = *pfVar4;
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
    fVar6 = (fVar7 - *pfVar4) / (1.0 - fVar6);
    fVar7 = 0.9999;
    if (fVar6 <= 0.9999) {
      fVar7 = fVar6;
    }
    if ((0.0 <= fVar6) && (fVar7 != 0.0)) {
      local_44 = param_2;
      FUN_02569464(&local_48,param_1);
      FUN_0071cb58(&local_58,PTR_DAT_04bb32f8,&local_44,0);
      plVar1 = local_58;
      if (local_58 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
        if ((uVar5 & 1) == 0) {
          local_4e = '\0';
        }
      }
      if (((local_58 != (long *)0x0) && (local_50 != '\0')) && (local_4e != '\0')) {
        local_5c = *(undefined4 *)((long)local_58 + 0x274);
        FUN_0071cb58(&local_70,&local_5c,&local_44,0);
        plVar1 = local_70;
        if (local_70 != (long *)0x0) {
          if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32d8);
          }
          uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb32d0);
          if ((uVar5 & 1) == 0) {
            local_66 = '\0';
          }
        }
        if (((local_70 != (long *)0x0) && (local_68 != '\0')) && (local_66 != '\0')) {
          iVar2 = FUN_006f0400(*(float *)(local_70 + 0x52) - *(float *)(local_70 + 0x55),
                               *(float *)(local_70 + 0x53) - *(float *)(local_70 + 0x56));
          fVar7 = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1);
          lVar3 = FUN_0251e98c(1);
          pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
          if (*pfVar4 <= fVar7) {
            lVar3 = FUN_0251e98c(1);
            pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
            fVar6 = *pfVar4;
            lVar3 = FUN_0251e98c(1);
            pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x120) + 0xf0))(lVar3 + 0x120);
            fVar6 = (fVar7 - *pfVar4) / (1.0 - fVar6);
            fVar7 = 0.9999;
            if (fVar6 <= 0.9999) {
              fVar7 = fVar6;
            }
            if ((0.0 <= fVar6) && (fVar7 != 0.0)) {
              return fVar7 * (*(float *)(PTR_DAT_04bb2d00 +
                                        (ulong)((uint)(local_48 + iVar2) >> 0x18) * 0x10) +
                             (float)(local_48 + iVar2 & 0xffffff) * 5.9604645e-08 *
                             *(float *)((long)(PTR_DAT_04bb2d00 +
                                              (ulong)((uint)(local_48 + iVar2) >> 0x18) * 0x10) + 4)
                             );
            }
          }
        }
      }
    }
  }
  return *param_1;
}

