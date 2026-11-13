
uint FUN_011e1180(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_w14;
  uint extraout_w14_00;
  uint uVar8;
  long *local_30;
  char local_28;
  char local_26;
  int local_4;
  
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return 0;
  }
  local_4 = DAT_050dfb28;
  uVar6 = 0;
  if (DAT_050dfb28 != 0) {
    FUN_0071cb58(&local_30,&local_4,param_1,0);
    plVar2 = local_30;
    uVar8 = extraout_w14;
    if (local_30 != (long *)0x0) {
      if ((*PTR_DAT_04bbbb10 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04bbbb10);
        if (iVar4 != 0) {
          *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbbb10);
        }
      }
      uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bbbb08);
      uVar8 = extraout_w14_00;
      if ((uVar5 & 1) == 0) {
        local_26 = '\0';
      }
    }
    uVar6 = 0;
    if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) {
      iVar4 = (int)local_30[0x49ef];
      if (iVar4 < 1) {
        uVar6 = 0;
      }
      else {
        iVar7 = 0;
        local_30 = local_30 + 0x52;
        uVar3 = 1;
        do {
          uVar6 = uVar3;
          uVar1 = *(ushort *)(local_30 + 10);
          uVar8 = (uint)uVar1;
          if ((((uVar1 >> 3 & 1) != 0) && ((int)*local_30 == *(int *)(param_2 + 8))) &&
             (*(int *)((long)local_30 + 4) == *(int *)(param_2 + 0xc))) {
            uVar8 = uVar1 >> 0xd & 1;
            break;
          }
          iVar7 = iVar7 + 1;
          local_30 = local_30 + 0xf;
          uVar6 = (uint)(iVar7 < iVar4);
          uVar3 = (uint)(iVar7 < iVar4);
        } while (iVar4 != iVar7);
      }
      uVar6 = uVar6 & uVar8;
    }
  }
  return uVar6;
}

