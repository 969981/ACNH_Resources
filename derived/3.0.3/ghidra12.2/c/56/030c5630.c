
void FUN_030c5630(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *__src;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  undefined *local_100;
  uint *local_f8;
  int local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  uint local_a4;
  undefined *local_a0;
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_4d;
  uint local_44;
  
  if (param_3 < 0) {
    return;
  }
  if (*(long *)(param_1 + 0x208) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x228) + (ulong)param_2 * 10;
  if (6 < param_2) {
    plVar1 = (long *)(param_1 + 0x228);
  }
  if (*plVar1 == 0) {
    return;
  }
  if (*(long *)(*plVar1 + 8) == 0) {
    return;
  }
  uVar3 = *(uint *)(plVar1 + 5);
  if (uVar3 != 0xffffffff) {
    plVar1[2] = plVar1[7];
    *(int *)(plVar1 + 3) = (int)plVar1[8];
    *(int *)(plVar1 + 4) = (int)plVar1[9];
    if (uVar3 < 0x10e) {
      lVar6 = *(long *)(param_1 + 0x208) + 8;
      lVar7 = lVar6 + (ulong)uVar3 * 0x1a8;
      if (*(int *)(lVar7 + 0x1a0) != 0) {
        lVar6 = lVar6 + (ulong)uVar3 * 0x1a8;
        **(undefined1 **)(lVar6 + 0x60) = 0;
        *(undefined1 *)(lVar6 + 0xf0) = 0;
        if (((*(int *)(lVar6 + 0x100) != 1) && ((*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) &&
           (*(int *)(lVar6 + 0x140) == -1)) {
          *(undefined4 *)(lVar6 + 0x140) = 1;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
    }
    *(undefined1 *)((long)plVar1 + 0x2c) = 0;
    *(undefined4 *)(plVar1 + 5) = 0xffffffff;
  }
  local_ad = 0;
  local_f0 = 0x40;
  local_f8 = (uint *)local_ec;
  local_ec[0] = 0;
  local_100 = PTR_DAT_04bb2bc0 + 0x10;
  local_90 = 0x40;
  local_4d = 0;
  local_8c = local_8c & 0xffffff00;
  local_a4 = param_2;
  local_a0 = local_100;
  local_98 = &local_8c;
  local_44 = param_2;
  switch(param_2) {
  case 0:
    if (**(char **)(param_1 + 0x488) == '\0') {
      local_86 = 0;
      local_88 = 0x3030;
      local_8c = 0x65636146;
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x480) + 0x18))(param_1 + 0x480);
      puVar9 = *(uint **)(param_1 + 0x488);
      if (&local_8c != puVar9) {
        (**(code **)(*(long *)(param_1 + 0x480) + 0x18))(param_1 + 0x480);
        lVar6 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x488) + lVar6) == '\0') goto LAB_030c59f0;
          lVar7 = *(long *)(param_1 + 0x488) + lVar6;
          if (*(char *)(lVar7 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_030c59f0;
          }
          if (*(char *)(lVar7 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_030c59f0;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_030c59f0:
        iVar5 = (int)lVar6;
        if (local_90 <= (int)lVar6) {
          iVar5 = local_90 + -1;
        }
        memcpy(&local_8c,puVar9,(long)iVar5);
        *(char *)((long)&local_8c + (long)iVar5) = '\0';
      }
    }
    goto switchD_030c5780_default;
  case 1:
    pcVar4 = "Hair%02d";
    break;
  case 2:
    local_8c = 0x657945;
    goto LAB_030c5844;
  case 3:
    local_88 = 0x6c;
    local_8c = 0x69707550;
LAB_030c5844:
    FUN_030c5a20(&local_a0,param_3);
    goto switchD_030c5780_default;
  case 4:
    pcVar4 = "Nose%02d";
    break;
  case 5:
    pcVar4 = "Mouth%02d";
    break;
  case 6:
    pcVar4 = "Cheek%02d";
    break;
  default:
    goto switchD_030c5780_default;
  }
  FUN_038d1270(&local_a0,pcVar4);
switchD_030c5780_default:
  puVar9 = local_f8;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  __src = local_98;
  if (puVar9 != local_98) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar6 = 0;
    do {
      if (*(char *)((long)local_98 + lVar6) == '\0') goto LAB_030c58fc;
      if (*(char *)((long)local_98 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_030c58fc;
      }
      if (*(char *)((long)local_98 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_030c58fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_030c58fc:
    iVar5 = (int)lVar6;
    if (local_f0 <= (int)lVar6) {
      iVar5 = local_f0 + -1;
    }
    memcpy(puVar9,__src,(long)iVar5);
    *(char *)((long)puVar9 + (long)iVar5) = '\0';
  }
  if ((char)*local_f8 != '\0') {
    iVar8 = 0;
    iVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x208) + 8;
    uVar2 = 5;
    if (*(char *)((long)plVar1 + 0x2d) != '\0') {
      uVar2 = 0x10;
    }
    do {
      if ((*(int *)(lVar6 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
         (lVar7 = lVar6 + (long)iVar5 * 0x1a8, (*(byte *)(lVar7 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar7,&local_100,PTR_DAT_04bb37e0,uVar2);
        goto LAB_030c59a4;
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar5 != 0x10e);
    iVar8 = -1;
LAB_030c59a4:
    *(int *)(plVar1 + 5) = iVar8;
    *(undefined1 *)((long)plVar1 + 0x2c) = 1;
  }
  return;
}

