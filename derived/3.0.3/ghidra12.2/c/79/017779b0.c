
void FUN_017779b0(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined **local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  if (param_1 != 0) {
    local_a8 = 0x40;
    local_65 = 0;
    local_b8 = &PTR_LAB_048fd2d8;
    local_b0 = local_a4;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar7 = (undefined1 *)param_2[1];
    if (local_a4 != puVar7) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01777a80;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01777a80;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01777a80;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01777a80:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(local_a4,puVar7,(long)iVar3);
      local_a4[iVar3] = 0;
    }
    puVar7 = local_b0;
    lVar6 = 0;
    local_b8 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    local_b0[(long)local_a8 + -1] = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01777b0c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777b0c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777b0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777b0c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cbb0 + 0x18))(&DAT_0528cbb0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cbb8 + lVar6) == '\0') goto LAB_01777b6c;
      if (*(char *)((long)DAT_0528cbb8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777b6c;
      }
      if (*(char *)((long)DAT_0528cbb8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777b6c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777b6c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cbb0 + 0x18))(&DAT_0528cbb0);
      memcpy(puVar7 + uVar2,DAT_0528cbb8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    *param_3 = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01777c6c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01777c6c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01777c6c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01777c6c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01777cec;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777cec;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777cec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777cec:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cbd0 + 0x18))(&DAT_0528cbd0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cbd8 + lVar6) == '\0') goto LAB_01777d4c;
      if (*(char *)((long)DAT_0528cbd8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777d4c;
      }
      if (*(char *)((long)DAT_0528cbd8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777d4c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777d4c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cbd0 + 0x18))(&DAT_0528cbd0);
      memcpy(puVar7 + uVar2,DAT_0528cbd8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[2] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01777e4c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01777e4c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01777e4c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01777e4c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01777ecc;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777ecc;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777ecc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777ecc:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cbe8 + lVar6) == '\0') goto LAB_01777f2c;
      if (*(char *)((long)DAT_0528cbe8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01777f2c;
      }
      if (*(char *)((long)DAT_0528cbe8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01777f2c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01777f2c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
      memcpy(puVar7 + uVar2,DAT_0528cbe8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[3] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0177802c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0177802c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0177802c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0177802c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_017780ac;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_017780ac;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_017780ac;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_017780ac:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cbf8 + lVar6) == '\0') goto LAB_0177810c;
      if (*(char *)((long)DAT_0528cbf8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177810c;
      }
      if (*(char *)((long)DAT_0528cbf8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177810c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177810c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
      memcpy(puVar7 + uVar2,DAT_0528cbf8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[4] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0177820c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0177820c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0177820c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0177820c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_0177828c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177828c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177828c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177828c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc08 + lVar6) == '\0') goto LAB_017782ec;
      if (*(char *)((long)DAT_0528cc08 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_017782ec;
      }
      if (*(char *)((long)DAT_0528cc08 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_017782ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_017782ec:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
      memcpy(puVar7 + uVar2,DAT_0528cc08,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[5] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_017783ec;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_017783ec;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_017783ec;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_017783ec:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_0177846c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177846c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177846c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177846c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cbc0 + 0x18))(&DAT_0528cbc0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cbc8 + lVar6) == '\0') goto LAB_017784cc;
      if (*(char *)((long)DAT_0528cbc8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_017784cc;
      }
      if (*(char *)((long)DAT_0528cbc8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_017784cc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_017784cc:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cbc0 + 0x18))(&DAT_0528cbc0);
      memcpy(puVar7 + uVar2,DAT_0528cbc8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[1] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_017785cc;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_017785cc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_017785cc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_017785cc:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_0177864c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177864c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177864c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177864c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc50 + 0x18))(&DAT_0528cc50);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc58 + lVar6) == '\0') goto LAB_017786ac;
      if (*(char *)((long)DAT_0528cc58 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_017786ac;
      }
      if (*(char *)((long)DAT_0528cc58 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_017786ac;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_017786ac:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc50 + 0x18))(&DAT_0528cc50);
      memcpy(puVar7 + uVar2,DAT_0528cc58,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[6] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_017787ac;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_017787ac;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_017787ac;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_017787ac:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_0177882c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177882c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177882c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177882c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc60 + 0x18))(&DAT_0528cc60);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc68 + lVar6) == '\0') goto LAB_0177888c;
      if (*(char *)((long)DAT_0528cc68 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177888c;
      }
      if (*(char *)((long)DAT_0528cc68 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177888c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177888c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc60 + 0x18))(&DAT_0528cc60);
      memcpy(puVar7 + uVar2,DAT_0528cc68,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[7] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0177898c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0177898c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0177898c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0177898c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01778a0c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778a0c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778a0c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778a0c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc70 + 0x18))(&DAT_0528cc70);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc78 + lVar6) == '\0') goto LAB_01778a6c;
      if (*(char *)((long)DAT_0528cc78 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778a6c;
      }
      if (*(char *)((long)DAT_0528cc78 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778a6c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778a6c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc70 + 0x18))(&DAT_0528cc70);
      memcpy(puVar7 + uVar2,DAT_0528cc78,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[8] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01778b6c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01778b6c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01778b6c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01778b6c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01778bec;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778bec;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778bec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778bec:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc80 + 0x18))(&DAT_0528cc80);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc88 + lVar6) == '\0') goto LAB_01778c4c;
      if (*(char *)((long)DAT_0528cc88 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778c4c;
      }
      if (*(char *)((long)DAT_0528cc88 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778c4c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778c4c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc80 + 0x18))(&DAT_0528cc80);
      memcpy(puVar7 + uVar2,DAT_0528cc88,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[9] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01778d4c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01778d4c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01778d4c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01778d4c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01778dcc;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778dcc;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778dcc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778dcc:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc90 + 0x18))(&DAT_0528cc90);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cc98 + lVar6) == '\0') goto LAB_01778e2c;
      if (*(char *)((long)DAT_0528cc98 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778e2c;
      }
      if (*(char *)((long)DAT_0528cc98 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778e2c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778e2c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cc90 + 0x18))(&DAT_0528cc90);
      memcpy(puVar7 + uVar2,DAT_0528cc98,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[10] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01778f2c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01778f2c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01778f2c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01778f2c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_01778fac;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01778fac;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01778fac;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01778fac:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cca0 + 0x18))(&DAT_0528cca0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528cca8 + lVar6) == '\0') goto LAB_0177900c;
      if (*(char *)((long)DAT_0528cca8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177900c;
      }
      if (*(char *)((long)DAT_0528cca8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177900c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177900c:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528cca0 + 0x18))(&DAT_0528cca0);
      memcpy(puVar7 + uVar2,DAT_0528cca8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    puVar7 = local_b0;
    param_3[0xb] = uVar5;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar8 = (undefined1 *)param_2[1];
    if (puVar7 != puVar8) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0177910c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0177910c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0177910c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0177910c:
      iVar3 = (int)lVar6;
      if (local_a8 <= (int)lVar6) {
        iVar3 = local_a8 + -1;
      }
      memcpy(puVar7,puVar8,(long)iVar3);
      puVar7[iVar3] = 0;
    }
    puVar7 = local_b0;
    (*(code *)local_b8[3])(&local_b8);
    lVar6 = 0;
    do {
      if (local_b0[lVar6] == '\0') goto LAB_0177918c;
      if (local_b0[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0177918c;
      }
      if (local_b0[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0177918c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0177918c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528ccb0 + 0x18))(&DAT_0528ccb0);
    lVar6 = 0;
    do {
      if (*(char *)((long)DAT_0528ccb8 + lVar6) == '\0') goto LAB_017791ec;
      if (*(char *)((long)DAT_0528ccb8 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_017791ec;
      }
      if (*(char *)((long)DAT_0528ccb8 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_017791ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_017791ec:
    uVar4 = (uint)lVar6;
    if ((int)(local_a8 - uVar2) <= (int)(uint)lVar6) {
      uVar4 = local_a8 + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(DAT_0528ccb0 + 0x18))(&DAT_0528ccb0);
      memcpy(puVar7 + uVar2,DAT_0528ccb8,(ulong)uVar4);
      puVar7[(int)(uVar4 + uVar2)] = 0;
    }
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (*(code *)local_b8[3])(&local_b8);
      uVar5 = FUN_038fe510(lVar6,local_b0);
    }
    param_3[0xc] = uVar5;
  }
  if (param_4 != 0) {
    if ((*(long *)(param_4 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (**(code **)(DAT_0528ca70 + 0x18))(&DAT_0528ca70);
      uVar5 = FUN_038fe510(lVar6,DAT_0528ca78);
    }
    param_3[0x10] = uVar5;
    if ((*(long *)(param_4 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (**(code **)(DAT_0528ca20 + 0x18))(&DAT_0528ca20);
      uVar5 = FUN_038fe510(lVar6,DAT_0528ca28);
    }
    param_3[0x11] = uVar5;
    if ((*(long *)(param_4 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (**(code **)(DAT_0528c990 + 0x18))(&DAT_0528c990);
      uVar5 = FUN_038fe510(lVar6,DAT_0528c998);
    }
    param_3[0x12] = uVar5;
    if ((*(long *)(param_4 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_4 + 8) + 0x20), lVar6 == 0)) {
      uVar5 = 0;
    }
    else {
      (**(code **)(DAT_0528c9a0 + 0x18))(&DAT_0528c9a0);
      uVar5 = FUN_038fe510(lVar6,DAT_0528c9a8);
    }
    param_3[0x13] = uVar5;
  }
  return;
}

