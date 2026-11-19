
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_03877cd0(long *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  uint local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined1 *local_90;
  uint local_88;
  undefined1 local_84 [15];
  undefined1 local_75;
  undefined1 local_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined8 uStack_6c;
  
  uStack_6c = 0;
  local_70 = 1;
  local_88 = 0x10;
  local_75 = 0;
  local_90 = local_84;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb2ab0 + 0x10;
  (**(code **)(*param_1 + 0x18))();
  pcVar5 = (char *)param_1[1];
  lVar6 = 0;
  do {
    if (pcVar5[lVar6] == '\0') {
LAB_03877d88:
      if ((int)lVar6 < 0) {
        pcVar5 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar5[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03877d88;
    }
    if (pcVar5[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03877d88;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  cVar1 = *pcVar5;
  uStack_6f = cVar1 == 's';
  (**(code **)(*param_1 + 0x18))(param_1);
  local_a0 = param_1[1];
  lVar6 = 0;
  local_c0 = 0;
  if (cVar1 == 's') {
    local_a0 = local_a0 + 1;
  }
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = &DAT_040b5039;
  do {
    local_a8 = local_b8;
    if (*(char *)(local_a0 + lVar6) == '\0') {
LAB_03877e30:
      iVar4 = (int)lVar6;
joined_r0x03877e30:
      if (iVar4 < 0) goto LAB_03877f08;
      break;
    }
    if (*(char *)(local_a0 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03877e30;
    }
    if (*(char *)(local_a0 + lVar6 + 2) == '\0') {
      iVar4 = (int)lVar6 + 2;
      goto joined_r0x03877e30;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  (**(code **)(local_98 + 0x18))(&local_98);
  puVar2 = local_90;
  uVar9 = (ulong)local_88;
  if (0 < (int)local_88) {
    uVar10 = 0;
    do {
      lVar6 = local_a0;
      if (*(char *)(local_a0 + uVar10) == '\0') {
LAB_03877efc:
        local_c0 = (int)uVar10 + 1;
        puVar2[uVar10 & 0xffffffff] = 0;
        break;
      }
      (**(code **)(local_b8 + 0x18))(&local_b8);
      uVar7 = 0;
      bVar3 = true;
      cVar1 = *(char *)(lVar6 + uVar10);
      do {
        if (local_b0[uVar7] == '\0') break;
        if (local_b0[uVar7] == cVar1) {
          if (bVar3) goto LAB_03877efc;
          break;
        }
        if (local_b0[uVar7 + 1] == '\0') break;
        if (local_b0[uVar7 + 1] == cVar1) goto LAB_03877efc;
        if (local_b0[uVar7 + 2] == '\0') break;
        if (local_b0[uVar7 + 2] == cVar1) goto LAB_03877efc;
        bVar3 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      puVar2[uVar10] = cVar1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
LAB_03877f08:
  FUN_038d2c30((long)&uStack_6c + 4,&local_98,0xffffffff);
  uVar9 = (ulong)local_c0;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  lVar6 = 0;
  do {
    if (*(char *)(local_a0 + lVar6) == '\0') {
LAB_03877f78:
      iVar4 = (int)lVar6;
      goto joined_r0x03877f78;
    }
    if (*(char *)(local_a0 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03877f78;
    }
    if (*(char *)(local_a0 + lVar6 + 2) == '\0') {
      iVar4 = (int)lVar6 + 2;
      goto joined_r0x03877f78;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar4 = 0;
joined_r0x03877f78:
  if ((-1 < (int)local_c0) && ((int)local_c0 <= iVar4)) {
    (**(code **)(local_98 + 0x18))(&local_98);
    puVar2 = local_90;
    uVar10 = (ulong)local_88;
    if (0 < (int)local_88) {
      uVar7 = 0;
      do {
        lVar6 = local_a0;
        if (*(char *)(local_a0 + uVar9) == '\0') {
LAB_03878050:
          local_c0 = (int)uVar9 + 1;
          puVar2[uVar7 & 0xffffffff] = 0;
          break;
        }
        (**(code **)(local_b8 + 0x18))(&local_b8);
        uVar8 = 0;
        bVar3 = true;
        cVar1 = *(char *)(lVar6 + uVar9);
        do {
          if (local_b0[uVar8] == '\0') break;
          if (local_b0[uVar8] == cVar1) {
            if (bVar3) goto LAB_03878050;
            break;
          }
          if (local_b0[uVar8 + 1] == '\0') break;
          if (local_b0[uVar8 + 1] == cVar1) goto LAB_03878050;
          if (local_b0[uVar8 + 2] == '\0') break;
          if (local_b0[uVar8 + 2] == cVar1) goto LAB_03878050;
          bVar3 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        puVar2[uVar7] = cVar1;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar10);
    }
  }
  FUN_038d2c30((ulong)&local_70 | 4,&local_98,0xffffffff);
  uVar9 = (ulong)local_c0;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  lVar6 = 0;
  do {
    if (*(char *)(local_a0 + lVar6) == '\0') {
LAB_038780c8:
      iVar4 = (int)lVar6;
      goto joined_r0x038780c8;
    }
    if (*(char *)(local_a0 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038780c8;
    }
    if (*(char *)(local_a0 + lVar6 + 2) == '\0') {
      iVar4 = (int)lVar6 + 2;
      goto joined_r0x038780c8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar4 = 0;
joined_r0x038780c8:
  if ((-1 < (int)local_c0) && ((int)local_c0 <= iVar4)) {
    (**(code **)(local_98 + 0x18))(&local_98);
    puVar2 = local_90;
    uVar10 = (ulong)local_88;
    if (0 < (int)local_88) {
      uVar7 = 0;
      do {
        lVar6 = local_a0;
        if (*(char *)(local_a0 + uVar9) == '\0') {
LAB_038781a0:
          puVar2[uVar7 & 0xffffffff] = 0;
          break;
        }
        (**(code **)(local_b8 + 0x18))(&local_b8);
        uVar8 = 0;
        bVar3 = true;
        cVar1 = *(char *)(lVar6 + uVar9);
        do {
          if (local_b0[uVar8] == '\0') break;
          if (local_b0[uVar8] == cVar1) {
            if (bVar3) goto LAB_038781a0;
            break;
          }
          if (local_b0[uVar8 + 1] == '\0') break;
          if (local_b0[uVar8 + 1] == cVar1) goto LAB_038781a0;
          if (local_b0[uVar8 + 2] == '\0') break;
          if (local_b0[uVar8 + 2] == cVar1) goto LAB_038781a0;
          bVar3 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        puVar2[uVar7] = cVar1;
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar10);
    }
  }
  FUN_038d1960(&local_70,&local_98,0xffffffff);
  auVar11[1] = uStack_6f;
  auVar11[0] = local_70;
  auVar11._2_2_ = uStack_6e;
  auVar11._4_8_ = uStack_6c;
  auVar11._12_4_ = 0;
  return auVar11;
}

