
void FUN_03d7e540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined1 auStack_160 [88];
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  long local_58;
  
  FUN_03d6627c();
  plVar3 = *(long **)(param_1 + 0x58);
  local_58 = 0;
  if (((plVar3 == (long *)0x0) || ((**(code **)(*plVar3 + 0x28))(plVar3,&local_58), local_58 == 0))
     || (plVar3 = (long *)(local_58 + 0xb8), *plVar3 == 0)) {
    puVar4 = (undefined1 *)0x0;
    plVar3 = (long *)0x0;
    bVar10 = true;
LAB_03d7e618:
    local_b0 = PTR_DAT_04bb2030 + 0x10;
    local_5d = 0;
    local_a0 = 0x40;
    local_a8 = local_9c;
    lVar9 = 0;
    do {
      if (puVar4[lVar9] == '\0') {
LAB_03d7e654:
        iVar7 = (int)lVar9;
joined_r0x03d7e658:
        if (0x3f < iVar7) {
          iVar7 = 0x3f;
        }
        goto LAB_03d7e660;
      }
      if (puVar4[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03d7e654;
      }
      if (puVar4[lVar9 + 2] == '\0') {
        iVar7 = (int)lVar9 + 2;
        goto joined_r0x03d7e658;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    iVar7 = 0;
LAB_03d7e660:
    memcpy(local_a8,puVar4,(long)iVar7);
    local_9c[iVar7] = 0;
    lVar9 = (long)local_a0 + -1;
    puVar4 = local_a8;
  }
  else {
    puVar4 = (undefined1 *)FUN_00364d70(plVar3,"TimeText");
    local_a8 = local_9c;
    local_5d = 0;
    bVar10 = false;
    local_a0 = 0x40;
    if (local_a8 != puVar4) goto LAB_03d7e618;
    lVar9 = 0x3f;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  lVar8 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  puVar4[lVar9] = 0;
  do {
    if (local_a8[lVar8] == '\0') goto LAB_03d7e6dc;
    if (local_a8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03d7e6dc;
    }
    if (local_a8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03d7e6dc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03d7e6dc:
  iVar6 = (int)lVar8;
  iVar7 = iVar6;
  if (2 < iVar6) {
    iVar7 = 3;
  }
  local_a8[iVar6 - iVar7] = 0;
  uVar5 = FUN_03c688b0(param_2,&local_b0);
  *(undefined8 *)(param_1 + 0x200) = uVar5;
  if (bVar10) {
    return;
  }
  puVar4 = (undefined1 *)FUN_00364e30(plVar3,"StateCount");
  if (puVar4 != (undefined1 *)0x0) {
    lVar9 = 0;
    do {
      if (puVar4[lVar9] == '\0') {
LAB_03d7e760:
        iVar7 = (int)lVar9;
joined_r0x03d7e764:
        if (3 < iVar7) {
          local_b5 = 0;
          local_f8 = 0x40;
          local_100 = local_f4;
          if (local_f4 != puVar4) {
            lVar9 = 0;
            goto LAB_03d7e7a0;
          }
          lVar9 = 0x3f;
          goto LAB_03d7e810;
        }
        break;
      }
      if (puVar4[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03d7e760;
      }
      if (puVar4[lVar9 + 2] == '\0') {
        iVar7 = (int)lVar9 + 2;
        goto joined_r0x03d7e764;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
LAB_03d7e964:
  puVar4 = (undefined1 *)FUN_00364e30(plVar3,"StateLoop");
  if (puVar4 != (undefined1 *)0x0) {
    lVar9 = 0;
    do {
      if (puVar4[lVar9] == '\0') {
LAB_03d7e9b0:
        iVar7 = (int)lVar9;
joined_r0x03d7e9b4:
        if (iVar7 < 4) {
          return;
        }
        local_b5 = 0;
        local_f8 = 0x40;
        local_100 = local_f4;
        if (local_f4 != puVar4) {
          lVar9 = 0;
          goto LAB_03d7e9f0;
        }
        lVar9 = 0x3f;
        goto LAB_03d7ea60;
      }
      if (puVar4[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03d7e9b0;
      }
      if (puVar4[lVar9 + 2] == '\0') {
        iVar7 = (int)lVar9 + 2;
        goto joined_r0x03d7e9b4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  return;
  while( true ) {
    if (puVar4[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_03d7e7e4;
    }
    if (puVar4[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_03d7e7e4;
    }
    lVar9 = lVar9 + 3;
    if (lVar9 == 0x80001) break;
LAB_03d7e7a0:
    if (puVar4[lVar9] == '\0') {
LAB_03d7e7e4:
      iVar7 = (int)lVar9;
      if (0x3f < iVar7) {
        iVar7 = 0x3f;
      }
      goto LAB_03d7e7f0;
    }
  }
  iVar7 = 0;
LAB_03d7e7f0:
  memcpy(local_f4,puVar4,(long)iVar7);
  local_f4[iVar7] = 0;
  lVar9 = (long)local_f8 + -1;
  puVar4 = local_100;
LAB_03d7e810:
  local_108 = puVar2 + 0x10;
  lVar8 = 0;
  puVar4[lVar9] = 0;
  do {
    if (local_100[lVar8] == '\0') goto LAB_03d7e860;
    if (local_100[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03d7e860;
    }
    if (local_100[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03d7e860;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03d7e860:
  iVar6 = (int)lVar8;
  iVar7 = iVar6;
  if (2 < iVar6) {
    iVar7 = 3;
  }
  local_100[iVar6 - iVar7] = 0;
  (**(code **)(puVar2 + 0x28))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,0);
  puVar1 = PTR_PTR_04bb2238;
  uVar5 = FUN_03c68d44(param_2,auStack_160,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x210) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,1);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar1);
  *(undefined8 *)(param_1 + 0x218) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,2);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar1);
  *(undefined8 *)(param_1 + 0x220) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,3);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar1);
  *(undefined8 *)(param_1 + 0x228) = uVar5;
  goto LAB_03d7e964;
  while( true ) {
    if (puVar4[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_03d7ea34;
    }
    if (puVar4[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_03d7ea34;
    }
    lVar9 = lVar9 + 3;
    if (lVar9 == 0x80001) break;
LAB_03d7e9f0:
    if (puVar4[lVar9] == '\0') {
LAB_03d7ea34:
      iVar7 = (int)lVar9;
      if (0x3f < iVar7) {
        iVar7 = 0x3f;
      }
      goto LAB_03d7ea40;
    }
  }
  iVar7 = 0;
LAB_03d7ea40:
  memcpy(local_f4,puVar4,(long)iVar7);
  local_f4[iVar7] = 0;
  lVar9 = (long)local_f8 + -1;
  puVar4 = local_100;
LAB_03d7ea60:
  local_108 = puVar2 + 0x10;
  lVar8 = 0;
  puVar4[lVar9] = 0;
  do {
    if (local_100[lVar8] == '\0') goto LAB_03d7eab0;
    if (local_100[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03d7eab0;
    }
    if (local_100[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03d7eab0;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_03d7eab0:
  iVar6 = (int)lVar8;
  iVar7 = iVar6;
  if (2 < iVar6) {
    iVar7 = 3;
  }
  local_100[iVar6 - iVar7] = 0;
  (**(code **)(puVar2 + 0x28))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,0);
  puVar2 = PTR_PTR_04bb2238;
  uVar5 = FUN_03c68d44(param_2,auStack_160,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x230) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,1);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar2);
  *(undefined8 *)(param_1 + 0x238) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,2);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar2);
  *(undefined8 *)(param_1 + 0x240) = uVar5;
  (**(code **)(local_108 + 0x18))(&local_108);
  FUN_0071b954(auStack_160,"%s_%02d",local_100,3);
  uVar5 = FUN_03c68d44(param_2,auStack_160,puVar2);
  *(undefined8 *)(param_1 + 0x248) = uVar5;
  return;
}

