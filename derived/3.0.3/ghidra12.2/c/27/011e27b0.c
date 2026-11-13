
uint FUN_011e27b0(float *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *local_50;
  char local_48;
  char local_46;
  long *local_40;
  char local_38;
  char local_36;
  undefined *local_30;
  uint local_28;
  uint local_24;
  int local_8;
  int local_4;
  
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 1;
  }
  local_28 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  local_24 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_30 = PTR_DAT_04bbbad8 + 0x10;
  if ((local_28 & 1) != 0) {
    local_28 = local_28 - 1;
  }
  if ((local_24 & 1) != 0) {
    local_24 = local_24 - 1;
  }
  local_4 = DAT_050dfb28;
  if (DAT_050dfb28 != 0) {
    FUN_0071cb58(&local_40,&local_4,param_2,0);
    plVar1 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb10);
      }
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb08);
      if ((uVar4 & 1) == 0) {
        local_36 = '\0';
      }
    }
    uVar2 = 1;
    if ((((local_40 == (long *)0x0) || (local_38 == '\0')) || (local_36 == '\0')) ||
       (iVar3 = (int)local_40[0x49ef], iVar3 < 1)) goto LAB_011e2978;
    local_40 = local_40 + 0x50;
    do {
      if ((((*(ushort *)(local_40 + 0xc) >> 3 & 1) != 0) &&
          (*(char *)((long)local_40 + 0x66) < '\0')) &&
         ((local_28 == *(uint *)(local_40 + 2) && (local_24 == *(uint *)((long)local_40 + 0x14)))))
      {
        if ((*(ushort *)(local_40 + 0xc) & 0x10) == 0 && (int)local_40[0xb] == 0) {
          FUN_011e2aa0(&local_50,local_40,param_2);
          uVar2 = 1;
          if (((local_50 == (long *)0x0) || (local_48 == '\0')) ||
             ((local_46 == '\0' ||
              ((local_50[0xc] == 0 || ((*(byte *)(local_50[0xc] + 0x11a1) >> 1 & 1) == 0))))))
          goto LAB_011e2978;
        }
        else {
          local_8 = DAT_050dfb2c;
          if (DAT_050dfb2c != 0) {
            FUN_0071cb58(&local_50,&local_8,param_2,0);
            plVar1 = local_50;
            if (local_50 != (long *)0x0) {
              if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar3 != 0)) {
                *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbbb50);
              }
              uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
              if ((uVar4 & 1) == 0) {
                local_46 = '\0';
              }
            }
            uVar2 = 0;
            if (((local_46 != '\0') && (local_50 != (long *)0x0)) && (local_48 != '\0')) {
              uVar2 = FUN_011c9080(local_50,&local_30);
            }
            goto LAB_011e2978;
          }
        }
        uVar2 = 0;
        goto LAB_011e2978;
      }
      iVar3 = iVar3 + -1;
      local_40 = local_40 + 0xf;
    } while (iVar3 != 0);
  }
  uVar2 = 1;
LAB_011e2978:
  return uVar2 & 1;
}

