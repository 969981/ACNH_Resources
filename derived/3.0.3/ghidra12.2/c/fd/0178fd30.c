
void FUN_0178fd30(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  undefined *local_280;
  undefined1 *local_278;
  int local_270;
  undefined1 local_26c [127];
  undefined1 local_1ed;
  undefined4 local_1e8;
  undefined2 uStack_1e4;
  undefined2 uStack_1e2;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4 [127];
  undefined1 local_145;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  
  local_ad = 0;
  local_12c[0] = 0;
  local_145 = 0;
  local_130 = 0x80;
  local_138 = local_12c;
  local_1c8 = 0x80;
  local_1d0 = local_1c4;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_1c4[0] = 0;
  local_1d8 = puVar1;
  local_140 = puVar1;
  FUN_038d1270(&local_140,"RoomMdlOutsideCeling%d/OUTSIDECEILING:",param_2);
  FUN_038d1270(&local_1d8,"RoomMdlOutsideCeling%d/OUTSIDECEILING:",param_3);
  if (DAT_05292338 == 0) {
    fVar6 = 40.0;
    fVar7 = 40.0;
  }
  else {
    fVar6 = *(float *)(DAT_05292338 + 0xd74);
    fVar7 = *(float *)(DAT_05292338 + 0xd7c);
  }
  local_1e8 = 7;
  local_270 = 0x80;
  local_1ed = 0;
  local_26c[0] = 0;
  local_1e0 = 0;
  uStack_1e4 = 0;
  local_280 = puVar1;
  local_278 = local_26c;
  (**(code **)(local_140 + 0x18))(&local_140);
  puVar3 = local_138;
  if (local_26c != local_138) {
    (**(code **)(local_140 + 0x18))(&local_140);
    lVar4 = 0;
    do {
      if (local_138[lVar4] == '\0') goto LAB_0178feec;
      if (local_138[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0178feec;
      }
      if (local_138[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0178feec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0178feec:
    iVar2 = (int)lVar4;
    if (local_270 <= (int)lVar4) {
      iVar2 = local_270 + -1;
    }
    memcpy(local_26c,puVar3,(long)iVar2);
    local_26c[iVar2] = 0;
  }
  *(undefined1 *)(param_1 + 0x40a8) = 1;
  if (*(int *)(param_1 + 0x40bc) == 0) {
    *(undefined4 *)(param_1 + 0x40bc) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x40b8) = 8;
  *(undefined1 **)(param_1 + 0x4128) = (undefined1 *)(param_1 + 0x40a8);
  *(undefined4 *)(param_1 + 0x4170) = 0;
  *(undefined4 *)(param_1 + 0x4174) = 8;
  *(undefined4 *)(param_1 + 0x4178) = 0x43200000;
  *(undefined8 *)(param_1 + 0x4138) = 0;
  *(undefined1 **)(param_1 + 0x4130) = &LAB_0178f13c;
  *(ulong *)(param_1 + 0x417c) = (ulong)(uint)(fVar7 + (float)param_3 * -10.0 * 0.5) << 0x20;
  puVar5 = *(undefined1 **)(param_1 + 0x41a8);
  *(undefined ***)(param_1 + 0x4120) = &PTR_LAB_049c3940;
  *(undefined8 *)(param_1 + 0x4194) = 0;
  *(undefined8 *)(param_1 + 0x418c) = 0;
  *(undefined4 *)(param_1 + 0x4184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4188) = 0x80000000;
  (**(code **)(local_280 + 0x18))(&local_280);
  puVar3 = local_278;
  if (puVar5 != local_278) {
    (**(code **)(local_280 + 0x18))(&local_280);
    lVar4 = 0;
    do {
      if (local_278[lVar4] == '\0') goto LAB_0179001c;
      if (local_278[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0179001c;
      }
      if (local_278[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0179001c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0179001c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x41b0) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x41b0) + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
    puVar5 = local_278;
  }
  *(ulong *)(param_1 + 0x4238) = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,local_1e8));
  *(undefined8 *)(param_1 + 0x4240) = local_1e0;
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  puVar3 = local_1d0;
  if (puVar5 != local_1d0) {
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    lVar4 = 0;
    do {
      if (local_1d0[lVar4] == '\0') goto LAB_017900e0;
      if (local_1d0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017900e0;
      }
      if (local_1d0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017900e0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017900e0:
    iVar2 = (int)lVar4;
    if (local_270 <= (int)lVar4) {
      iVar2 = local_270 + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  *(undefined1 *)(param_1 + 0x4248) = 1;
  if (*(int *)(param_1 + 0x425c) == 0) {
    *(undefined4 *)(param_1 + 0x425c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined1 **)(param_1 + 0x42d0) = &LAB_0178f13c;
  *(undefined4 *)(param_1 + 0x4258) = 8;
  *(undefined1 **)(param_1 + 0x42c8) = (undefined1 *)(param_1 + 0x4248);
  *(undefined8 *)(param_1 + 0x42d8) = 0;
  *(undefined8 *)(param_1 + 0x431c) = 0x4320000000000000;
  *(undefined4 *)(param_1 + 0x4310) = 0;
  *(undefined4 *)(param_1 + 0x4314) = 8;
  *(float *)(param_1 + 0x4318) = fVar6 + (float)param_2 * -10.0 * 0.5;
  puVar5 = *(undefined1 **)(param_1 + 0x4348);
  *(undefined ***)(param_1 + 0x42c0) = &PTR_LAB_049c3940;
  *(undefined8 *)(param_1 + 0x4334) = 0;
  *(undefined8 *)(param_1 + 0x432c) = 0;
  *(undefined4 *)(param_1 + 0x4324) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4328) = 0xc0000000;
  (**(code **)(local_280 + 0x18))(&local_280);
  puVar3 = local_278;
  if (puVar5 != local_278) {
    (**(code **)(local_280 + 0x18))(&local_280);
    lVar4 = 0;
    do {
      if (local_278[lVar4] == '\0') goto LAB_0179020c;
      if (local_278[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0179020c;
      }
      if (local_278[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0179020c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0179020c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x4350) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x4350) + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
    puVar5 = local_278;
  }
  *(ulong *)(param_1 + 0x43d8) = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,local_1e8));
  *(undefined8 *)(param_1 + 0x43e0) = local_1e0;
  (**(code **)(local_140 + 0x18))(&local_140);
  puVar3 = local_138;
  if (puVar5 != local_138) {
    (**(code **)(local_140 + 0x18))(&local_140);
    lVar4 = 0;
    do {
      if (local_138[lVar4] == '\0') goto LAB_017902cc;
      if (local_138[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017902cc;
      }
      if (local_138[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017902cc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017902cc:
    iVar2 = (int)lVar4;
    if (local_270 <= (int)lVar4) {
      iVar2 = local_270 + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  *(undefined1 *)(param_1 + 0x43e8) = 1;
  if (*(int *)(param_1 + 0x43fc) == 0) {
    *(undefined4 *)(param_1 + 0x43fc) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x43f8) = 8;
  *(undefined1 **)(param_1 + 0x4470) = &LAB_0178f13c;
  *(undefined ***)(param_1 + 0x4460) = &PTR_LAB_049c3940;
  *(undefined1 **)(param_1 + 0x4468) = (undefined1 *)(param_1 + 0x43e8);
  *(undefined4 *)(param_1 + 0x44b0) = 0;
  *(undefined4 *)(param_1 + 0x44b4) = 8;
  *(undefined8 *)(param_1 + 0x4478) = 0;
  *(ulong *)(param_1 + 0x44bc) = (ulong)(uint)(fVar7 + (float)param_3 * 10.0 * 0.5) << 0x20;
  puVar5 = *(undefined1 **)(param_1 + 0x44e8);
  *(undefined4 *)(param_1 + 0x44b8) = 0x43200000;
  *(undefined4 *)(param_1 + 0x44c4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x44d4) = 0;
  *(undefined8 *)(param_1 + 0x44cc) = 0;
  *(undefined4 *)(param_1 + 0x44c8) = 0;
  (**(code **)(local_280 + 0x18))(&local_280);
  puVar3 = local_278;
  if (puVar5 != local_278) {
    (**(code **)(local_280 + 0x18))(&local_280);
    lVar4 = 0;
    do {
      if (local_278[lVar4] == '\0') goto LAB_017903f0;
      if (local_278[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017903f0;
      }
      if (local_278[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017903f0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017903f0:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x44f0) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x44f0) + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
    puVar5 = local_278;
  }
  *(ulong *)(param_1 + 0x4578) = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,local_1e8));
  *(undefined8 *)(param_1 + 0x4580) = local_1e0;
  (**(code **)(local_1d8 + 0x18))(&local_1d8);
  puVar3 = local_1d0;
  if (puVar5 != local_1d0) {
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    lVar4 = 0;
    do {
      if (local_1d0[lVar4] == '\0') goto LAB_017904ac;
      if (local_1d0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017904ac;
      }
      if (local_1d0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017904ac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017904ac:
    iVar2 = (int)lVar4;
    if (local_270 <= (int)lVar4) {
      iVar2 = local_270 + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  *(undefined1 *)(param_1 + 0x4588) = 1;
  if (*(int *)(param_1 + 0x459c) == 0) {
    *(undefined4 *)(param_1 + 0x459c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined1 **)(param_1 + 0x4610) = &LAB_0178f13c;
  *(undefined ***)(param_1 + 0x4600) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x4598) = 8;
  *(undefined8 *)(param_1 + 0x465c) = 0x4320000000000000;
  *(float *)(param_1 + 0x4658) = fVar6 + (float)param_2 * 10.0 * 0.5;
  *(undefined1 **)(param_1 + 0x4608) = (undefined1 *)(param_1 + 0x4588);
  *(undefined4 *)(param_1 + 18000) = 0;
  *(undefined4 *)(param_1 + 0x4654) = 8;
  *(undefined8 *)(param_1 + 0x4618) = 0;
  puVar5 = *(undefined1 **)(param_1 + 0x4688);
  *(undefined4 *)(param_1 + 0x4668) = 0x40000000;
  *(undefined4 *)(param_1 + 0x4664) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4674) = 0;
  *(undefined8 *)(param_1 + 0x466c) = 0;
  (**(code **)(local_280 + 0x18))(&local_280);
  puVar3 = local_278;
  if (puVar5 != local_278) {
    (**(code **)(local_280 + 0x18))(&local_280);
    lVar4 = 0;
    do {
      if (local_278[lVar4] == '\0') goto LAB_017905cc;
      if (local_278[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017905cc;
      }
      if (local_278[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017905cc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017905cc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x4690) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x4690) + -1;
    }
    memcpy(puVar5,puVar3,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  *(ulong *)(param_1 + 0x4718) = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,local_1e8));
  *(undefined8 *)(param_1 + 0x4720) = local_1e0;
  return;
}

