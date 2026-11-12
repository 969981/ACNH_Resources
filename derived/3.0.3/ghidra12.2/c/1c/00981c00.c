
void FUN_00981c00(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  char *local_e8;
  undefined1 *local_e0;
  undefined **local_d8;
  char *local_d0;
  int local_c8;
  char local_c4 [15];
  undefined1 local_b5;
  undefined **local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [15];
  undefined1 local_8d;
  undefined **local_88;
  char *local_80;
  int local_78;
  char local_74 [15];
  undefined1 local_65;
  undefined *local_60;
  long local_58;
  
  puVar8 = PTR_DAT_04bb2020;
  local_74[0] = '\0';
  local_78 = 0x10;
  local_a0 = 0x10;
  lVar6 = 0;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = param_1;
  local_c8 = 0x10;
  local_8d = 0;
  local_9c[0] = '\0';
  local_b5 = 0;
  local_d0 = local_c4;
  local_c4[0] = '\0';
  local_88 = &PTR_LAB_048fb098;
  local_b0 = &PTR_LAB_048fb098;
  local_d8 = &PTR_LAB_048fb098;
  do {
    if (*(char *)(param_1 + lVar6) == '\0') {
LAB_00981cc0:
      if ((int)lVar6 == 7) {
LAB_00981cc8:
        lVar6 = 0;
        local_65 = 0;
        goto LAB_00981cd4;
      }
      break;
    }
    if (*(char *)(param_1 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981cc0;
    }
    if (*(char *)(param_1 + lVar6 + 2) == '\0') {
      if ((int)lVar6 == 5) goto LAB_00981cc8;
      break;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  return;
  while( true ) {
    if (local_74[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981d28;
    }
    if (local_74[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00981d28;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_00981cd4:
    if (local_74[lVar6] == '\0') goto LAB_00981d28;
  }
  lVar6 = 0;
LAB_00981d28:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 2;
  if (0xd < uVar1) {
    uVar2 = 0xf - uVar1;
  }
  local_a8 = local_9c;
  local_80 = local_74;
  if (0 < (int)uVar2) {
    memcpy(local_74 + uVar1,&DAT_040a3bfa,(ulong)uVar2);
    local_74[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  local_e8 = puVar8 + 0x10;
  local_e0 = &DAT_040a3bfa;
  FUN_038d1248(&local_b0);
  lVar6 = 0;
  do {
    if (local_a8[lVar6] == '\0') goto LAB_00981dc0;
    if (local_a8[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981dc0;
    }
    if (local_a8[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00981dc0;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00981dc0:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_e8 + 0x18))(&local_e8);
  lVar6 = 0;
  do {
    if (local_e0[lVar6] == '\0') goto LAB_00981e1c;
    if (local_e0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981e1c;
    }
    if (local_e0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00981e1c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00981e1c:
  uVar2 = (uint)lVar6;
  if ((int)(local_a0 - uVar1) <= (int)(uint)lVar6) {
    uVar2 = local_a0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    memcpy(local_9c + uVar1,local_e0,(ulong)uVar2);
    local_9c[(int)(uVar2 + uVar1)] = '\0';
  }
  pcVar3 = local_d0;
  local_e8 = puVar8 + 0x10;
  local_e0 = &DAT_040a3bfa;
  (*(code *)local_d8[3])(&local_d8);
  lVar6 = 0;
  do {
    if (local_d0[lVar6] == '\0') goto LAB_00981ecc;
    if (local_d0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981ecc;
    }
    if (local_d0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00981ecc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00981ecc:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_e8 + 0x18))(&local_e8);
  lVar6 = 0;
  do {
    if (local_e0[lVar6] == '\0') goto LAB_00981f2c;
    if (local_e0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981f2c;
    }
    if (local_e0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00981f2c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00981f2c:
  uVar2 = (uint)lVar6;
  if ((int)(local_c8 - uVar1) <= (int)(uint)lVar6) {
    uVar2 = local_c8 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    memcpy(pcVar3 + uVar1,local_e0,(ulong)uVar2);
    pcVar3[(int)(uVar2 + uVar1)] = '\0';
  }
  (**(code **)(local_60 + 0x18))(&local_60);
  pcVar3 = local_80;
  lVar6 = 0;
  do {
    if (*(char *)(local_58 + lVar6) == '\0') {
LAB_00981fc0:
      iVar7 = (int)lVar6;
joined_r0x00981fc4:
      if (0 < iVar7) {
        local_e0 = (undefined1 *)(local_58 + 1);
        goto LAB_00981fe8;
      }
      break;
    }
    if (*(char *)(local_58 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00981fc0;
    }
    if (*(char *)(local_58 + lVar6 + 2) == '\0') {
      iVar7 = (int)lVar6 + 2;
      goto joined_r0x00981fc4;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  local_e0 = PTR_DAT_04c4b988;
LAB_00981fe8:
  local_e8 = puVar8 + 0x10;
  (*(code *)local_88[3])(&local_88);
  lVar6 = 0;
  do {
    if (local_80[lVar6] == '\0') goto LAB_0098204c;
    if (local_80[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0098204c;
    }
    if (local_80[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0098204c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0098204c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 2;
  if ((int)(local_78 - uVar1) < 3) {
    uVar2 = local_78 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(local_e8 + 0x18))(&local_e8);
    memcpy(pcVar3 + uVar1,local_e0,(ulong)uVar2);
    pcVar3[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  (**(code **)(local_60 + 0x18))(&local_60);
  pcVar3 = local_a8;
  lVar6 = 0;
  do {
    if (*(char *)(local_58 + lVar6) == '\0') {
LAB_009820f0:
      iVar7 = (int)lVar6;
joined_r0x009820f4:
      if (2 < iVar7) {
        puVar8 = (undefined *)(local_58 + 3);
        goto LAB_00982118;
      }
      break;
    }
    if (*(char *)(local_58 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009820f0;
    }
    if (*(char *)(local_58 + lVar6 + 2) == '\0') {
      iVar7 = (int)lVar6 + 2;
      goto joined_r0x009820f4;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  puVar8 = PTR_DAT_04c4b988;
LAB_00982118:
  (*(code *)local_b0[3])(&local_b0);
  lVar6 = 0;
  do {
    if (local_a8[lVar6] == '\0') goto LAB_0098216c;
    if (local_a8[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0098216c;
    }
    if (local_a8[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0098216c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0098216c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 2;
  if ((int)(local_a0 - uVar1) < 3) {
    uVar2 = local_a0 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(pcVar3 + uVar1,puVar8,(ulong)uVar2);
    pcVar3[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  (**(code **)(local_60 + 0x18))(&local_60);
  pcVar3 = local_d0;
  lVar6 = 0;
  do {
    if (*(char *)(local_58 + lVar6) == '\0') {
LAB_009821f4:
      iVar7 = (int)lVar6;
joined_r0x009821f8:
      if (4 < iVar7) {
        puVar8 = (undefined *)(local_58 + 5);
        goto LAB_0098221c;
      }
      break;
    }
    if (*(char *)(local_58 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009821f4;
    }
    if (*(char *)(local_58 + lVar6 + 2) == '\0') {
      iVar7 = (int)lVar6 + 2;
      goto joined_r0x009821f8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  puVar8 = PTR_DAT_04c4b988;
LAB_0098221c:
  (*(code *)local_d8[3])(&local_d8);
  lVar6 = 0;
  do {
    if (local_d0[lVar6] == '\0') goto LAB_00982270;
    if (local_d0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00982270;
    }
    if (local_d0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00982270;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00982270:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 2;
  if ((int)(local_c8 - uVar1) < 3) {
    uVar2 = local_c8 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(pcVar3 + uVar1,puVar8,(ulong)uVar2);
    pcVar3[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  (*(code *)local_88[3])(&local_88);
  lVar6 = strtol(local_80,&local_e8,0x10);
  if (*local_e8 == '\0') {
    (*(code *)local_b0[3])(&local_b0);
    lVar4 = strtol(local_a8,&local_e8,0x10);
    if (*local_e8 == '\0') {
      (*(code *)local_d8[3])(&local_d8);
      lVar5 = strtol(local_d0,&local_e8,0x10);
      if (*local_e8 == '\0') {
        *param_2 = (float)lVar6 / 255.0;
        param_2[1] = (float)lVar4 / 255.0;
        param_2[2] = (float)lVar5 / 255.0;
        goto LAB_00982344;
      }
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
LAB_00982344:
  param_2[3] = 1.0;
  return;
}

