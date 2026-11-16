
void FUN_027b6e30(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined *__src;
  long lVar4;
  char *__dest;
  size_t __n;
  uint uVar5;
  undefined1 *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [8];
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_55;
  
  local_d8 = 0x80;
  local_cc = 0x2f686d6d;
  local_c8 = 0;
  local_d4 = (char  [8])s_System_Smmh__040c6139._0_8_;
  local_e8 = &DAT_048fc708;
  local_e0 = local_d4;
  switch(param_3) {
  case 1:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b709c;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b709c;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b709c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b709c:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_04097a8b;
    break;
  case 2:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b7114;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b7114;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b7114;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b7114:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040bc195;
    break;
  case 3:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b7150;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b7150;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b7150;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b7150:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040d05f5;
    break;
  case 4:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b718c;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b718c;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b718c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b718c:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040a74c9;
    break;
  case 5:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b71c8;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b71c8;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b71c8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b71c8:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040f5b2a;
    break;
  case 6:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b7204;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b7204;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b7204;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b7204:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040c122d;
    break;
  default:
    lVar4 = 0;
    local_55 = 0;
    do {
      if (local_d4[lVar4] == '\0') goto LAB_027b70d8;
      if (local_d4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_027b70d8;
      }
      if (local_d4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_027b70d8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_027b70d8:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    uVar1 = 3;
    if (0x7c < uVar5) {
      uVar1 = 0x7f - uVar5;
    }
    __n = (size_t)uVar1;
    if ((int)uVar1 < 1) goto LAB_027b7240;
    pcVar3 = local_d4 + uVar5;
    __src = &DAT_040ffc9b;
  }
  local_55 = 0;
  memcpy(pcVar3,__src,__n);
  local_d4[(int)__n + uVar5] = '\0';
LAB_027b7240:
  FUN_038d13f0(&local_e8,"_%u_%u.byml",param_4,param_5);
  if (param_2 != 0) {
    __dest = *(char **)(param_2 + 8);
    (**(code **)(local_e8 + 0x18))(&local_e8);
    pcVar3 = local_e0;
    if (__dest != local_e0) {
      (**(code **)(local_e8 + 0x18))(&local_e8);
      lVar4 = 0;
      do {
        if (local_e0[lVar4] == '\0') goto LAB_027b72d0;
        if (local_e0[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_027b72d0;
        }
        if (local_e0[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_027b72d0;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_027b72d0:
      iVar2 = (int)lVar4;
      if (*(int *)(param_2 + 0x10) <= (int)lVar4) {
        iVar2 = *(int *)(param_2 + 0x10) + -1;
      }
      memcpy(__dest,pcVar3,(long)iVar2);
      __dest[iVar2] = '\0';
    }
  }
  return;
}

