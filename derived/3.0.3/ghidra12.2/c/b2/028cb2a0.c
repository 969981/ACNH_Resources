
int FUN_028cb2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_240;
  char *local_238;
  int local_230;
  char local_22c [127];
  undefined1 local_1ad;
  undefined8 local_1a8;
  undefined *local_1a0;
  char *local_198;
  int local_190;
  char local_18c [127];
  undefined1 local_10d;
  undefined *local_108;
  char *local_100;
  int local_f8;
  char local_f4 [127];
  undefined1 local_75;
  int local_6c;
  
  lVar2 = DAT_0556ca20;
  if (DAT_0556ca20 == 0) {
    return 7;
  }
  local_75 = 0;
  local_f8 = 0x80;
  local_100 = local_f4;
  local_f4[0] = '\0';
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_108 = puVar1;
  uVar4 = FUN_02701810(&local_108,param_5,param_7);
  if ((uVar4 & 1) != 0) {
    if (*local_100 != '\0') {
      (**(code **)(local_108 + 0x18))(&local_108);
      lVar5 = 0;
      do {
        if (local_100[lVar5] == '\0') goto LAB_028cb3a4;
        if (local_100[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028cb3a4;
        }
        if (local_100[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028cb3a4;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_028cb3a4:
      if ((int)lVar5 < local_f8 + -1) {
        (local_100 + (int)lVar5)[0] = '/';
        (local_100 + (int)lVar5)[1] = '\0';
      }
    }
    FUN_02701270(&local_108,param_6);
  }
  local_190 = 0x80;
  local_198 = local_18c;
  local_10d = 0;
  local_18c[0] = '\0';
  local_1a0 = puVar1;
  uVar4 = FUN_02701810(&local_1a0,param_5,param_7);
  if ((uVar4 & 1) != 0) {
    if (*local_198 != '\0') {
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
      lVar5 = 0;
      do {
        if (local_198[lVar5] == '\0') goto LAB_028cb46c;
        if (local_198[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_028cb46c;
        }
        if (local_198[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_028cb46c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_028cb46c:
      if ((int)lVar5 < local_190 + -1) {
        (local_198 + (int)lVar5)[0] = '/';
        (local_198 + (int)lVar5)[1] = '\0';
      }
    }
    FUN_027014c0(&local_1a0,param_6);
  }
  local_1a8 = 0x10000000000;
  nn::os::GetSystemTick();
  iVar3 = FUN_028cb670(param_1,param_2,param_4,&local_1a8,param_5,param_6,param_7);
  nn::os::GetSystemTick();
  if (iVar3 == 0) {
    local_1ad = 0;
    local_230 = 0x80;
    local_22c[0] = '\0';
    local_238 = local_22c;
    local_240 = PTR_DAT_04bb2d88 + 0x10;
    uVar4 = FUN_02701810(&local_240,param_5,param_7);
    if ((uVar4 & 1) != 0) {
      if (*local_238 != '\0') {
        (**(code **)(local_240 + 0x18))(&local_240);
        lVar5 = 0;
        do {
          if (local_238[lVar5] == '\0') goto LAB_028cb5d0;
          if (local_238[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_028cb5d0;
          }
          if (local_238[lVar5 + 2] == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_028cb5d0;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_028cb5d0:
        if ((int)lVar5 < local_230 + -1) {
          (local_238 + (int)lVar5)[0] = '/';
          (local_238 + (int)lVar5)[1] = '\0';
        }
      }
      FUN_027014c0(&local_240,param_6);
    }
    local_6c = FUN_026ce9d0(lVar2,param_3,0x100,&local_240,0);
    if (local_6c != 1) {
      return local_6c;
    }
    iVar3 = FUN_026eb980(param_2,param_3,0x100,&local_108,&local_1a0,0);
  }
  else {
    local_6c = FUN_026eb5c0(param_2,param_3,param_4 & 0xffffffff,&local_108,&local_1a0);
    if (local_6c != 1) {
      return local_6c;
    }
    local_6c = FUN_026d0728(lVar2,&local_108,param_4 & 0xffffffff);
    if (local_6c != 1) {
      return local_6c;
    }
    iVar3 = FUN_026d0728(lVar2,&local_1a0,0x300);
  }
  if (iVar3 == 1) {
    iVar3 = 1;
  }
  return iVar3;
}

