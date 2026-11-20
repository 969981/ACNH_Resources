
void FUN_03f32ef0(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  undefined **local_1a8;
  undefined2 local_1a0;
  undefined1 local_19e;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *puStack_168;
  char *local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined *local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined *local_40;
  undefined *puStack_38;
  
  FUN_03f32d90();
  plVar7 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar7 + 1) & 1) != 0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if ((int)plVar7[0xd] == 0) {
    bVar8 = 1;
    bVar1 = *(byte *)(plVar7 + 1);
  }
  else {
    lVar6 = (long)(int)plVar7[0xd] * 8;
    plVar4 = (long *)plVar7[0xe];
    do {
      lVar6 = lVar6 + -8;
      bVar8 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar6 != 0);
    bVar1 = *(byte *)(plVar7 + 1);
  }
  if ((bVar1 & 1) != 0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  if (bVar8 == 0) {
    lVar6 = 5;
    if (*(uint *)(plVar7 + 5) < 6) {
      lVar6 = 0;
    }
    lVar9 = plVar7[6] + lVar6 * 0x40;
    if ((*(char *)(plVar7[6] + lVar6 * 0x40) == '\0') || (*(long *)(lVar9 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x30));
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar7 + 1) & 1) != 0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if ((int)plVar7[0xd] == 0) {
    bVar8 = 1;
    bVar1 = *(byte *)(plVar7 + 1);
  }
  else {
    lVar6 = (long)(int)plVar7[0xd] * 8;
    plVar4 = (long *)plVar7[0xe];
    do {
      lVar6 = lVar6 + -8;
      bVar8 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar6 != 0);
    bVar1 = *(byte *)(plVar7 + 1);
  }
  if ((bVar1 & 1) != 0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  if ((bVar8 == 0) &&
     ((lVar6 = plVar7[6] + (ulong)(4 < *(uint *)(plVar7 + 5)) * 0x100,
      *(char *)(plVar7[6] + (ulong)(4 < *(uint *)(plVar7 + 5)) * 0x100) == '\0' ||
      (*(long *)(lVar6 + 8) == 0)))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x30));
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x140) + 0x180);
  if ((*(byte *)(plVar7 + 1) & 1) != 0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if ((int)plVar7[0xd] == 0) {
    bVar8 = 1;
    bVar1 = *(byte *)(plVar7 + 1);
  }
  else {
    lVar6 = (long)(int)plVar7[0xd] * 8;
    plVar4 = (long *)plVar7[0xe];
    do {
      lVar6 = lVar6 + -8;
      bVar8 = *(byte *)(*plVar4 + 0x104) >> 3 & 1;
      if ((*(byte *)(*plVar4 + 0x104) >> 3 & 1) == 0) break;
      plVar4 = plVar4 + 1;
    } while (lVar6 != 0);
    bVar1 = *(byte *)(plVar7 + 1);
  }
  if ((bVar1 & 1) != 0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  if (bVar8 == 0) {
    lVar6 = 3;
    if (*(uint *)(plVar7 + 5) < 4) {
      lVar6 = 0;
    }
    lVar9 = plVar7[6] + lVar6 * 0x40;
    if ((*(char *)(plVar7[6] + lVar6 * 0x40) == '\0') || (*(long *)(lVar9 + 8) == 0)) {
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x30));
    }
  }
  lVar6 = *(long *)(param_1 + 0x1c0);
  bVar2 = false;
  lVar9 = *(long *)(lVar6 + 0x28);
  uVar5 = *(uint *)(lVar6 + 0x40);
  if ((lVar9 != 0) && (uVar5 == 5)) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    uVar5 = *(uint *)(lVar6 + 0x40);
    bVar2 = lVar9 == lVar3;
  }
  puStack_168 = PTR_DAT_04bb2020;
  if (((uVar5 < 7) && ((1 << (ulong)(uVar5 & 0x1f) & 0x43U) != 0)) || (bVar2)) {
    uStack_180 = 0;
    local_1a8 = &PTR_LAB_04ba8c98;
    local_158 = 0;
    *(undefined8 *)(param_1 + 0x480) = 0xffffffff;
    puStack_138 = local_12c;
    puStack_168 = puStack_168 + 0x10;
    local_150 = 0;
    uStack_148 = 0;
    local_130 = 0x80;
    local_ad = 0;
    local_12c[0] = 0;
    local_170 = 0;
    local_140 = PTR_DAT_04bb2d88 + 0x10;
    local_a0 = 1;
    puStack_90 = PTR_DAT_04bb2120;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_a8 = PTR_DAT_04bdf0b0 + 0x10;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
    local_84 = 0;
    local_44 = 0;
    local_1a0 = 1;
    local_178 = 0;
    local_88 = 0x1010100;
    local_83 = 0x1010101;
    local_19e = 7;
    local_198 = *(undefined8 *)(param_1 + 0x148);
    puStack_38 = PTR_DAT_04bb2120;
    local_160 = "DefragAllMemoryMgr";
    uStack_190 = 0;
    local_188 = param_1 + 0x400;
    local_98 = puStack_168;
    local_40 = puStack_168;
    FUN_03f44830(*(undefined8 *)(param_1 + 0x1c0),&local_1a8);
  }
  return;
}

