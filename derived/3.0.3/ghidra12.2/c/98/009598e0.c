
undefined8 FUN_009598e0(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined *local_198;
  char *local_190;
  undefined *local_188;
  char *local_180;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  if (param_3 != 8) {
    plVar1 = (long *)(param_1 + 8);
    plVar4 = plVar1 + (ulong)param_3 * 2;
    if (9 < param_3) {
      plVar4 = plVar1;
    }
    if (*plVar4 == 0 && (plVar4[1] == 0 || (plVar4[1] & 1U) == 0 && *plVar4 == 0)) {
      return 0;
    }
    plVar4 = plVar1 + (ulong)param_3 * 2;
    if (9 < param_3) {
      plVar4 = plVar1;
    }
    UNRECOVERED_JUMPTABLE = (code *)*plVar4;
    plVar1 = (long *)(param_1 + (plVar4[1] >> 1));
    if ((plVar4[1] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x009599fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)(plVar1,param_2);
    return uVar6;
  }
  local_164[0] = '\0';
  local_168 = 0x100;
  lVar11 = 0;
  local_65 = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_164[lVar11] == '\0') goto LAB_00959a14;
    if (local_164[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959a14;
    }
    if (local_164[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959a14;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959a14:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  uVar3 = 3;
  if (0xfc < uVar2) {
    uVar3 = 0xff - uVar2;
  }
  local_170 = local_164;
  if (0 < (int)uVar3) {
    memcpy(local_164 + uVar2,&DAT_040d993a,(ulong)uVar3);
    local_164[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  pcVar14 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar11 = 0;
  do {
    if (local_170[lVar11] == '\0') goto LAB_00959aac;
    if (local_170[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959aac;
    }
    if (local_170[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959aac;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959aac:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = 0;
  do {
    if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_00959b0c;
    lVar8 = param_2[1] + lVar11;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959b0c;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959b0c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959b0c:
  uVar3 = (uint)lVar11;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar11) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(pcVar14 + uVar2,(void *)param_2[1],(ulong)uVar3);
    pcVar14[(int)(uVar3 + uVar2)] = '\0';
  }
  puVar5 = PTR_DAT_04bb2020;
  local_188 = PTR_DAT_04bb2020 + 0x10;
  local_180 = "_";
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar11 = 0;
  do {
    if (local_170[lVar11] == '\0') goto LAB_00959bcc;
    if (local_170[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959bcc;
    }
    if (local_170[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959bcc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959bcc:
  (**(code **)(local_188 + 0x18))(&local_188);
  lVar8 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_180[lVar8] == '\0') {
LAB_00959c18:
      iVar7 = (int)lVar8;
      if (iVar10 < iVar7) goto LAB_00959d48;
LAB_00959c30:
      if ((int)lVar8 < 1) goto LAB_00959ca8;
      uVar12 = 0;
      goto LAB_00959c44;
    }
    if (local_180[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00959c18;
    }
    if (local_180[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      iVar7 = (int)lVar8;
      if (iVar7 <= iVar10) goto LAB_00959c30;
      goto LAB_00959d48;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (-1 < iVar10) {
LAB_00959ca8:
    (**(code **)(local_188 + 0x18))(&local_188);
LAB_00959cc4:
    (**(code **)(local_178 + 0x18))(&local_178);
    uVar12 = 0;
    do {
      if (local_170[uVar12] == '\0') {
LAB_00959d10:
        iVar10 = (int)uVar12;
joined_r0x00959d14:
        if (0 < iVar10) {
          if (uVar12 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (local_170[uVar13] == '_') {
                local_170[uVar13] = '\0';
              }
              if (local_170[uVar13 + 1] == '_') {
                local_170[uVar13 + 1] = '\0';
              }
              uVar13 = uVar13 + 2;
            } while ((uVar12 & 0xfffffffffffffffe) != uVar13);
          }
          if (((uVar12 & 1) != 0) && (local_170[uVar13] == '_')) {
            local_170[uVar13] = '\0';
          }
        }
        break;
      }
      if (local_170[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        goto LAB_00959d10;
      }
      if (local_170[uVar12 + 2] == '\0') {
        uVar12 = uVar12 + 2;
        iVar10 = (int)uVar12;
        goto joined_r0x00959d14;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
  }
LAB_00959d48:
  local_198 = puVar5 + 0x10;
  local_190 = ".";
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar11 = 0;
  do {
    if (local_170[lVar11] == '\0') goto LAB_00959dac;
    if (local_170[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959dac;
    }
    if (local_170[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959dac;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959dac:
  (**(code **)(local_198 + 0x18))(&local_198);
  lVar8 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_190[lVar8] == '\0') {
LAB_00959df8:
      iVar7 = (int)lVar8;
      if (iVar10 < iVar7) goto LAB_00959f28;
LAB_00959e10:
      if ((int)lVar8 < 1) goto LAB_00959e88;
      uVar12 = 0;
      goto LAB_00959e24;
    }
    if (local_190[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00959df8;
    }
    if (local_190[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      iVar7 = (int)lVar8;
      if (iVar7 <= iVar10) goto LAB_00959e10;
      goto LAB_00959f28;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (-1 < iVar10) {
LAB_00959e88:
    (**(code **)(local_198 + 0x18))(&local_198);
LAB_00959ea4:
    (**(code **)(local_178 + 0x18))(&local_178);
    uVar12 = 0;
    do {
      if (local_170[uVar12] == '\0') {
LAB_00959ef0:
        iVar10 = (int)uVar12;
joined_r0x00959ef4:
        if (0 < iVar10) {
          if (uVar12 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (local_170[uVar13] == '.') {
                local_170[uVar13] = '\0';
              }
              if (local_170[uVar13 + 1] == '.') {
                local_170[uVar13 + 1] = '\0';
              }
              uVar13 = uVar13 + 2;
            } while ((uVar12 & 0xfffffffffffffffe) != uVar13);
          }
          if (((uVar12 & 1) != 0) && (local_170[uVar13] == '.')) {
            local_170[uVar13] = '\0';
          }
        }
        break;
      }
      if (local_170[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        goto LAB_00959ef0;
      }
      if (local_170[uVar12 + 2] == '\0') {
        uVar12 = uVar12 + 2;
        iVar10 = (int)uVar12;
        goto joined_r0x00959ef4;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
  }
LAB_00959f28:
  pcVar14 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar11 = 0;
  do {
    if (local_170[lVar11] == '\0') goto LAB_00959f7c;
    if (local_170[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_00959f7c;
    }
    if (local_170[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_00959f7c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_00959f7c:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_168 - uVar2) < 5) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar14 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar14[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  uVar6 = FUN_00954300(param_1,&local_178);
  return uVar6;
  while( true ) {
    pcVar9 = local_180;
    lVar11 = lVar8;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (pcVar14[uVar12] != *pcVar9) break;
      if ((pcVar14[uVar12] == '\0') || (pcVar14 = pcVar14 + 1, pcVar9 = pcVar9 + 1, lVar11 == 0))
      goto LAB_00959cbc;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar10 - iVar7) + 1) break;
LAB_00959c44:
    pcVar14 = local_170;
    pcVar9 = local_170 + uVar12;
    (**(code **)(local_188 + 0x18))(&local_188);
    if (pcVar9 == local_180) {
LAB_00959cbc:
      if ((int)uVar12 != -1) goto LAB_00959cc4;
      break;
    }
  }
  goto LAB_00959d48;
  while( true ) {
    pcVar9 = local_190;
    lVar11 = lVar8;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (pcVar14[uVar12] != *pcVar9) break;
      if ((pcVar14[uVar12] == '\0') || (pcVar14 = pcVar14 + 1, pcVar9 = pcVar9 + 1, lVar11 == 0))
      goto LAB_00959e9c;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar10 - iVar7) + 1) break;
LAB_00959e24:
    pcVar14 = local_170;
    pcVar9 = local_170 + uVar12;
    (**(code **)(local_198 + 0x18))(&local_198);
    if (pcVar9 == local_190) {
LAB_00959e9c:
      if ((int)uVar12 != -1) goto LAB_00959ea4;
      break;
    }
  }
  goto LAB_00959f28;
}

