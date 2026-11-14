
void FUN_0152a7e0(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *local_1d0;
  undefined1 *local_1c8;
  int local_1c0;
  undefined1 local_1bc [127];
  undefined1 local_13d;
  undefined **local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [31];
  undefined1 local_105;
  undefined **local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined *local_68;
  undefined2 local_60;
  byte local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_60 = *(undefined2 *)(param_1 + 0x129c);
  bVar2 = *(byte *)(param_1 + 0x129e);
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_5d = *(undefined1 *)(param_1 + 0x129f);
  local_5c = *(undefined4 *)(param_1 + 0x12a0);
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_5e = bVar2;
  uVar4 = FUN_0277d6c4(&local_60);
  lVar5 = DAT_0532a768;
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_1 + 0x129c);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
        local_58 = lVar5;
      }
    }
  }
  FUN_01adf970(&local_1d0,&local_68);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar5 != 0) {
    FUN_0074ed40(lVar5,&local_1d0,0);
  }
  uVar4 = *(uint *)(param_1 + 0x1298);
  *(uint *)(param_1 + 0x1298) = uVar4 | 0x10;
  if ((bVar2 >> 3 & 1) == 0) {
    if ((uVar4 >> 1 & 1) != 0) {
      FUN_01ade370(&local_1d0,&local_68);
      puVar6 = *(undefined1 **)(param_1 + 0x280);
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      puVar7 = local_1c8;
      if (puVar6 == local_1c8) goto LAB_0152ad14;
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      lVar5 = 0;
      do {
        if (local_1c8[lVar5] == '\0') goto LAB_0152acec;
        if (local_1c8[lVar5 + 1] == '\0') goto LAB_0152ace0;
        if (local_1c8[lVar5 + 2] == '\0') goto LAB_0152ace8;
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      goto LAB_0152acd8;
    }
    if ((uVar4 >> 10 & 1) == 0) {
      FUN_01ade5d0(&local_1d0,&local_68);
      puVar6 = *(undefined1 **)(param_1 + 0x280);
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      puVar7 = local_1c8;
      if (puVar6 != local_1c8) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        lVar5 = 0;
        do {
          if (local_1c8[lVar5] == '\0') goto LAB_0152ad30;
          if (local_1c8[lVar5 + 1] == '\0') goto LAB_0152ad24;
          if (local_1c8[lVar5 + 2] == '\0') goto LAB_0152ad2c;
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
LAB_0152ab08:
        lVar5 = 0;
        goto LAB_0152ad30;
      }
    }
    else {
      FUN_01532800(&local_1d0,param_1);
      puVar6 = *(undefined1 **)(param_1 + 0x280);
      (**(code **)(local_1d0 + 0x18))(&local_1d0);
      puVar7 = local_1c8;
      if (puVar6 != local_1c8) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        lVar5 = 0;
        do {
          if (local_1c8[lVar5] == '\0') goto LAB_0152ad30;
          if (local_1c8[lVar5 + 1] == '\0') goto LAB_0152ad24;
          if (local_1c8[lVar5 + 2] == '\0') goto LAB_0152ad2c;
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        goto LAB_0152ab08;
      }
    }
    goto LAB_0152ad58;
  }
  FUN_01ade370(&local_1d0,&local_68);
  local_f0 = 0x80;
  local_6d = 0;
  local_100 = &PTR_LAB_048fcff0;
  local_f8 = local_ec;
  (**(code **)(local_1d0 + 0x18))(&local_1d0);
  puVar7 = local_1c8;
  if (local_ec != local_1c8) {
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    lVar5 = 0;
    do {
      if (local_1c8[lVar5] == '\0') goto LAB_0152ab1c;
      if (local_1c8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0152ab1c;
      }
      if (local_1c8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0152ab1c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0152ab1c:
    iVar1 = (int)lVar5;
    if (local_f0 <= (int)lVar5) {
      iVar1 = local_f0 + -1;
    }
    memcpy(local_ec,puVar7,(long)iVar1);
    local_ec[iVar1] = 0;
  }
  iVar1 = local_f0;
  puVar7 = local_f8;
  puVar3 = PTR_DAT_04bb2d88;
  local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffffffffff00);
  local_100 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  local_f8[(long)local_f0 + -1] = 0;
  (**(code **)(puVar3 + 0x28))(&local_100);
  lVar5 = 0;
  do {
    if (local_f8[lVar5] == '\0') goto LAB_0152abbc;
    if (local_f8[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0152abbc;
    }
    if (local_f8[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_0152abbc;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_0152abbc:
  FUN_038d0770(puVar7,0,iVar1,puVar7,lVar5,&DAT_0520f258,&DAT_0520f268,&local_1d0);
  if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) != 0) {
    puVar6 = *(undefined1 **)(param_1 + 0x280);
    (*(code *)local_100[3])(&local_100);
    puVar7 = local_f8;
    if (puVar6 == local_f8) goto LAB_0152ad14;
    (*(code *)local_100[3])(&local_100);
    lVar5 = 0;
    do {
      if (local_f8[lVar5] == '\0') goto LAB_0152acec;
      if (local_f8[lVar5 + 1] == '\0') goto LAB_0152ace0;
      if (local_f8[lVar5 + 2] == '\0') goto LAB_0152ace8;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
LAB_0152acd8:
    lVar5 = 0;
    goto LAB_0152acec;
  }
  FUN_01ada670(&local_1d0,&local_68);
  puVar6 = *(undefined1 **)(param_1 + 0x280);
  (**(code **)(local_1d0 + 0x18))(&local_1d0);
  puVar7 = local_1c8;
  if (puVar6 != local_1c8) {
    (**(code **)(local_1d0 + 0x18))(&local_1d0);
    lVar5 = 0;
    do {
      if (local_1c8[lVar5] == '\0') goto LAB_0152ae20;
      if (local_1c8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0152ae20;
      }
      if (local_1c8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0152ae20;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0152ae20:
    iVar1 = (int)lVar5;
    if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
      iVar1 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(puVar6,puVar7,(long)iVar1);
    puVar6[iVar1] = 0;
  }
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  local_1c0 = 0x80;
  puStack_130 = local_124;
  puVar7 = local_1bc;
  local_13d = 0;
  local_1d0 = puVar3 + 0x10;
  local_1bc[0] = 0;
  local_128 = 0x20;
  local_105 = 0;
  local_124[0] = 0;
  local_138 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  local_1c8 = puVar7;
  (*(code *)local_100[3])(&local_100);
  puVar6 = local_f8;
  if (puVar7 == local_f8) goto LAB_0152af24;
  (*(code *)local_100[3])(&local_100);
  lVar5 = 0;
  do {
    if (local_f8[lVar5] == '\0') goto LAB_0152aefc;
    if (local_f8[lVar5 + 1] == '\0') goto LAB_0152aef0;
    if (local_f8[lVar5 + 2] == '\0') goto LAB_0152aef8;
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  goto LAB_0152aee8;
LAB_0152ad24:
  lVar5 = lVar5 + 1;
  goto LAB_0152ad30;
LAB_0152ad2c:
  lVar5 = lVar5 + 2;
LAB_0152ad30:
  iVar1 = (int)lVar5;
  if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
    iVar1 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(puVar6,puVar7,(long)iVar1);
  puVar6[iVar1] = 0;
LAB_0152ad58:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  local_13d = 0;
  local_1bc[0] = 0;
  local_1d0 = PTR_DAT_04bb2d88 + 0x10;
  local_1c0 = 0x80;
  local_128 = 0x20;
  local_1c8 = local_1bc;
  local_105 = 0;
  puStack_130 = local_124;
  local_124[0] = 0;
  local_138 = &PTR_LAB_048f9700;
  FUN_01ade370(&local_100,&local_68);
  puVar7 = local_1c8;
  (*(code *)local_100[3])(&local_100);
  puVar6 = local_f8;
  if (puVar7 == local_f8) goto LAB_0152af24;
  (*(code *)local_100[3])(&local_100);
  lVar5 = 0;
  do {
    if (local_f8[lVar5] == '\0') goto LAB_0152aefc;
    if (local_f8[lVar5 + 1] == '\0') goto LAB_0152aef0;
    if (local_f8[lVar5 + 2] == '\0') goto LAB_0152aef8;
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
LAB_0152aee8:
  lVar5 = 0;
  goto LAB_0152aefc;
LAB_0152ace0:
  lVar5 = lVar5 + 1;
  goto LAB_0152acec;
LAB_0152aef0:
  lVar5 = lVar5 + 1;
  goto LAB_0152aefc;
LAB_0152ace8:
  lVar5 = lVar5 + 2;
LAB_0152acec:
  iVar1 = (int)lVar5;
  if (*(int *)(param_1 + 0x288) <= (int)lVar5) {
    iVar1 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(puVar6,puVar7,(long)iVar1);
  puVar6[iVar1] = 0;
LAB_0152ad14:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  return;
LAB_0152aef8:
  lVar5 = lVar5 + 2;
LAB_0152aefc:
  iVar1 = (int)lVar5;
  if (local_1c0 <= (int)lVar5) {
    iVar1 = local_1c0 + -1;
  }
  memcpy(puVar7,puVar6,(long)iVar1);
  puVar7[iVar1] = 0;
LAB_0152af24:
  FUN_0152da00(param_1,&local_1d0);
  return;
}

