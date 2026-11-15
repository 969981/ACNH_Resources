
uint FUN_020fc100(uint *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b4;
  undefined *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined8 local_94;
  undefined *local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_74;
  undefined1 local_64 [4];
  
  puVar7 = PTR_DAT_04bb6a30;
  local_78 = 8;
  local_74._7_1_ = 0;
  puVar1 = PTR_DAT_04bb6a30 + 0x10;
  local_88 = puVar1;
  local_80 = &local_74;
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar13 = (undefined8 *)param_3[1];
  if (&local_74 != puVar13) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar11 = 0;
    do {
      if (*(char *)(param_3[1] + lVar11) == '\0') goto LAB_020fc1cc;
      lVar3 = param_3[1] + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_020fc1cc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_020fc1cc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_020fc1cc:
    iVar4 = (int)lVar11;
    if (local_78 <= (int)lVar11) {
      iVar4 = local_78 + -1;
    }
    memcpy(&local_74,puVar13,(long)iVar4);
    *(undefined1 *)((long)&local_74 + (long)iVar4) = 0;
  }
  puVar13 = local_80;
  puVar6 = PTR_DAT_04bb3768;
  local_98 = 8;
  local_94._7_1_ = 0;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  *(undefined1 *)((long)local_80 + (long)local_78 + -1) = 0;
  local_a0 = &local_94;
  local_88 = puVar2;
  if (&local_94 != local_80) {
    local_a8 = puVar1;
    (**(code **)(PTR_DAT_04bb3768 + 0x28))(&local_88);
    lVar11 = 0;
    do {
      if (*(char *)((long)local_80 + lVar11) == '\0') goto LAB_020fc28c;
      if (*(char *)((long)local_80 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_020fc28c;
      }
      if (*(char *)((long)local_80 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_020fc28c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_020fc28c:
    iVar4 = (int)lVar11;
    if (local_98 <= (int)lVar11) {
      iVar4 = local_98 + -1;
    }
    memcpy(&local_94,puVar13,(long)iVar4);
    *(undefined1 *)((long)&local_94 + (long)iVar4) = 0;
  }
  local_b4._7_1_ = 0;
  local_b8 = 8;
  local_c8 = puVar7 + 0x10;
  local_c0 = &local_b4;
  local_a8 = puVar2;
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar13 = local_80;
  if (&local_b4 != local_80) {
    (**(code **)(local_88 + 0x18))(&local_88);
    lVar11 = 0;
    do {
      if (*(char *)((long)local_80 + lVar11) == '\0') goto LAB_020fc34c;
      if (*(char *)((long)local_80 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_020fc34c;
      }
      if (*(char *)((long)local_80 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_020fc34c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_020fc34c:
    iVar4 = (int)lVar11;
    if (local_b8 <= (int)lVar11) {
      iVar4 = local_b8 + -1;
    }
    memcpy(&local_b4,puVar13,(long)iVar4);
    *(undefined1 *)((long)&local_b4 + (long)iVar4) = 0;
  }
  local_c8 = puVar6 + 0x10;
  if (local_98 < 4) {
    (**(code **)(local_a8 + 0x18))(&local_a8);
  }
  else {
    *(undefined1 *)((long)local_a0 + 3) = 0;
  }
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = 0;
  puVar7 = PTR_DAT_04bb9e38;
  uVar10 = 0;
  do {
    local_d0 = &DAT_0407ebb1;
    if (uVar10 < 0x23) {
      local_d0 = *(undefined8 **)(puVar7 + (ulong)uVar10 * 8 + 0xb0);
    }
    local_d8 = puVar1 + 0x10;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar8 = local_a0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    iVar4 = local_b8;
    puVar13 = local_c0;
    if (puVar8 == local_d0) {
LAB_020fc4ac:
      local_d8 = puVar1 + 0x10;
      *param_1 = uVar10;
      local_d0 = &DAT_0407ebb1;
      local_64[0] = 0;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      puVar8 = local_c0;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar11 = 0;
      goto LAB_020fc4f0;
    }
    uVar12 = 0;
    bVar9 = true;
    do {
      if (*(char *)((long)local_a0 + uVar12) != *(char *)((long)local_d0 + uVar12)) break;
      if (*(char *)((long)local_a0 + uVar12) == '\0') {
        if (bVar9) goto LAB_020fc4ac;
        break;
      }
      cVar5 = *(char *)((long)local_a0 + uVar12 + 1);
      if (cVar5 != *(char *)((long)local_d0 + uVar12 + 1)) break;
      if (cVar5 == '\0') goto LAB_020fc4ac;
      cVar5 = *(char *)((long)local_a0 + uVar12 + 2);
      if (cVar5 != *(char *)((long)local_d0 + uVar12 + 2)) break;
      if (cVar5 == '\0') goto LAB_020fc4ac;
      bVar9 = uVar12 < 0x7fffe;
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar14 = 0x23;
    if ((int)uVar10 < 0x23) {
      uVar14 = uVar10 + 1;
    }
    uVar10 = uVar14;
  } while (uVar14 != 0x23);
  uVar10 = 0;
  goto LAB_020fc560;
  while( true ) {
    if (*(char *)((long)local_c0 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_020fc52c;
    }
    if (*(char *)((long)local_c0 + lVar11 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_020fc52c;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_020fc4f0:
    if (*(char *)((long)local_c0 + lVar11) == '\0') goto LAB_020fc52c;
  }
  lVar11 = 0;
LAB_020fc52c:
  FUN_038d0770(puVar13,0,iVar4,puVar8,lVar11,&local_a8,&local_d8,local_64);
  uVar10 = FUN_038d2c30(param_2,&local_c8,10);
LAB_020fc560:
  return uVar10 & 1;
}

