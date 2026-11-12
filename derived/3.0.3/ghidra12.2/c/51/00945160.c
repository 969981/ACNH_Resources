
uint FUN_00945160(undefined4 param_1,float param_2,long param_3,long *param_4,undefined8 param_5,
                 undefined4 *param_6,undefined4 *param_7,uint param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined *local_1a0;
  char *local_198;
  undefined *local_190;
  char *local_188;
  int local_180;
  char local_17c [255];
  undefined1 local_7d;
  
  bVar4 = false;
  if ((0.7853982 < param_2) && (bVar4 = false, !NAN(param_2))) {
    bVar4 = param_2 < 2.3561945;
  }
  if (bVar4) {
    uVar15 = 0x42b40000;
  }
  else if ((param_2 < 2.3561945) || (3.926991 <= param_2)) {
    bVar4 = true;
    bVar5 = false;
    if (param_2 < 5.4977875) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_2)) {
        bVar4 = param_2 < 3.926991;
        bVar5 = false;
      }
    }
    uVar15 = 0x43870000;
    if (bVar4 != bVar5) {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 0x43340000;
  }
  local_17c[0] = '\0';
  local_180 = 0x100;
  lVar11 = 0;
  local_7d = 0;
  local_190 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_17c[lVar11] == '\0') goto LAB_0094529c;
    if (local_17c[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094529c;
    }
    if (local_17c[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094529c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094529c:
  uVar6 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  uVar1 = 3;
  if (0xfc < uVar6) {
    uVar1 = 0xff - uVar6;
  }
  local_188 = local_17c;
  if (0 < (int)uVar1) {
    memcpy(local_17c + uVar6,&DAT_040d993a,(ulong)uVar1);
    local_17c[(ulong)uVar1 + (ulong)uVar6] = '\0';
  }
  pcVar14 = local_188;
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar11 = 0;
  do {
    if (local_188[lVar11] == '\0') goto LAB_0094533c;
    if (local_188[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094533c;
    }
    if (local_188[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094533c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094533c:
  uVar6 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar11 = 0;
  do {
    if (*(char *)(param_4[1] + lVar11) == '\0') goto LAB_0094539c;
    lVar8 = param_4[1] + lVar11;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094539c;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094539c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094539c:
  uVar1 = (uint)lVar11;
  if ((int)(local_180 - uVar6) <= (int)(uint)lVar11) {
    uVar1 = local_180 + ~uVar6;
  }
  if (0 < (int)uVar1) {
    (**(code **)(*param_4 + 0x18))(param_4);
    memcpy(pcVar14 + uVar6,(void *)param_4[1],(ulong)uVar1);
    pcVar14[(int)(uVar1 + uVar6)] = '\0';
  }
  puVar2 = PTR_DAT_04bb2020;
  local_1a0 = PTR_DAT_04bb2020 + 0x10;
  local_198 = "_";
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar11 = 0;
  do {
    if (local_188[lVar11] == '\0') goto LAB_0094545c;
    if (local_188[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094545c;
    }
    if (local_188[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094545c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094545c:
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  lVar8 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_198[lVar8] == '\0') {
LAB_009454a8:
      iVar7 = (int)lVar8;
      if (iVar10 < iVar7) goto LAB_00945618;
LAB_009454c0:
      if ((int)lVar8 < 1) goto LAB_00945568;
      uVar12 = 0;
      goto LAB_009454d8;
    }
    if (local_198[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_009454a8;
    }
    if (local_198[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      iVar7 = (int)lVar8;
      if (iVar7 <= iVar10) goto LAB_009454c0;
      goto LAB_00945618;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (-1 < iVar10) {
LAB_00945568:
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
LAB_00945598:
    (**(code **)(local_190 + 0x18))(&local_190);
    uVar12 = 0;
    do {
      if (local_188[uVar12] == '\0') {
LAB_009455e0:
        iVar10 = (int)uVar12;
joined_r0x009455e4:
        if (0 < iVar10) {
          if (uVar12 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (local_188[uVar13] == '_') {
                local_188[uVar13] = '\0';
              }
              if (local_188[uVar13 + 1] == '_') {
                local_188[uVar13 + 1] = '\0';
              }
              uVar13 = uVar13 + 2;
            } while ((uVar12 & 0xfffffffffffffffe) != uVar13);
          }
          if (((uVar12 & 1) != 0) && (local_188[uVar13] == '_')) {
            local_188[uVar13] = '\0';
          }
        }
        break;
      }
      if (local_188[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        goto LAB_009455e0;
      }
      if (local_188[uVar12 + 2] == '\0') {
        uVar12 = uVar12 + 2;
        iVar10 = (int)uVar12;
        goto joined_r0x009455e4;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
  }
LAB_00945618:
  pcVar14 = local_188;
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar11 = 0;
  do {
    if (local_188[lVar11] == '\0') goto LAB_0094566c;
    if (local_188[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094566c;
    }
    if (local_188[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094566c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094566c:
  uVar6 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  uVar1 = 4;
  if ((int)(local_180 - uVar6) < 5) {
    uVar1 = local_180 + ~uVar6;
  }
  if (0 < (int)uVar1) {
    memcpy(pcVar14 + uVar6,&DAT_0405c04e,(ulong)uVar1);
    pcVar14[(ulong)uVar1 + (ulong)uVar6] = '\0';
  }
  puVar3 = PTR_DAT_04bb2228;
  lVar11 = FUN_00954300(*(undefined8 *)PTR_DAT_04bb2228,&local_190);
  if (lVar11 == 0) {
    local_1b0 = puVar2 + 0x10;
    pcStack_1a8 = "colBase.pbc";
    lVar11 = FUN_00954300(*(undefined8 *)puVar3,&local_1b0);
    uVar6 = 0;
    if (lVar11 == 0) goto LAB_0094574c;
  }
  uVar6 = 0;
  if ((-1 < *(int *)(lVar11 + 4) + -1) && (-1 < *(int *)(lVar11 + 8) + -1)) {
    lVar8 = 0x68;
    if ((param_8 & 1) == 0) {
      lVar8 = 0x80;
    }
    uVar6 = FUN_009692a0(param_1,uVar15,*(undefined8 *)(param_3 + lVar8),lVar11,param_5,0);
    *param_6 = *(undefined4 *)(lVar11 + 4);
    *param_7 = *(undefined4 *)(lVar11 + 8);
  }
LAB_0094574c:
  return uVar6 & 1;
  while( true ) {
    pcVar9 = local_198;
    lVar11 = lVar8;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (pcVar14[uVar12] != *pcVar9) break;
      if ((pcVar14[uVar12] == '\0') || (pcVar14 = pcVar14 + 1, pcVar9 = pcVar9 + 1, lVar11 == 0))
      goto LAB_0094557c;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar10 - iVar7) + 1) break;
LAB_009454d8:
    pcVar14 = local_188;
    pcVar9 = local_188 + uVar12;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    if (pcVar9 == local_198) {
LAB_0094557c:
      if ((int)uVar12 != -1) goto LAB_00945598;
      break;
    }
  }
  goto LAB_00945618;
}

