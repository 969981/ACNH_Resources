
void FUN_01d4f530(void)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined6 uStack_c0;
  undefined1 auStack_ba [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined2 local_7c;
  undefined1 local_7a;
  byte local_79;
  undefined1 local_78;
  undefined4 local_70 [2];
  undefined8 *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  uVar7 = (ulong)*(byte *)(*DAT_0537d558 + 0x471);
  if (7 < uVar7) {
    return;
  }
  lVar8 = *DAT_0537d558 + 0x44c;
  if (*(char *)(lVar8 + uVar7 * 4 + 2) == -1) {
    return;
  }
  uVar7 = (ulong)*(ushort *)(lVar8 + uVar7 * 4);
  if (7 < uVar7) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb4fb8;
  if (*(char *)(lVar8 + uVar7 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  puVar9 = (uint *)(lVar8 + uVar7 * 0x13f0);
  uVar3 = puVar9[0x4f4];
  if ((2 < uVar3 || 7 < *puVar9) || *(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  if (uVar3 != 2) {
    if (uVar3 != 0) {
      uVar7 = (ulong)*(byte *)(lVar8 + uVar7 * 0x13f0 + 0x13d5);
      if (7 < uVar7) {
        return;
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10);
      if (lVar8 == 0) {
        return;
      }
      lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0xf0);
      if (lVar8 == 0) {
        return;
      }
      puVar4 = *(undefined1 **)(lVar8 + 0x20);
      if (puVar4 == (undefined1 *)0x0) {
        return;
      }
      goto LAB_01d4f614;
    }
    if (7 < *(byte *)(lVar8 + uVar7 * 0x13f0 + 0x13d5)) {
      return;
    }
    puVar4 = (undefined1 *)FUN_026eed64();
    if (puVar4 != (undefined1 *)0x0) goto LAB_01d4f614;
  }
  if (DAT_055021a0 == 0) {
    return;
  }
  puVar4 = &LAB_001fdf00 + DAT_055021a0;
LAB_01d4f614:
  if ((*(long **)(puVar4 + 0x17bb0) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(puVar4 + 0x17bb0), puVar5 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)(*(long *)(puVar4 + 0x17b98) + *(long *)(puVar4 + 0x17b90));
    local_90 = puVar5[5];
    uStack_88 = puVar5[6];
    local_a0 = puVar5[3];
    uStack_98 = puVar5[4];
    local_b8 = *puVar5;
    local_b0 = puVar5[1];
    local_a8 = puVar5[2];
  }
  else {
    uVar7 = (**(code **)*puVar5)();
    puVar5 = (undefined8 *)(*(long *)(puVar4 + 0x17b98) + *(long *)(puVar4 + 0x17b90));
    local_b0 = puVar5[1];
    local_a8 = puVar5[2];
    local_b8 = *puVar5;
    local_90 = puVar5[5];
    uStack_88 = puVar5[6];
    local_a0 = puVar5[3];
    uStack_98 = puVar5[4];
    if ((((uVar7 & 1) != 0) && (*(long *)(puVar4 + 0x17bb0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(puVar4 + 0x17bb0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  if ((*(long **)(puVar4 + 0x18cc0) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(puVar4 + 0x18cc0), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  puVar1 = (undefined2 *)(*(long *)(puVar4 + 0x18ca8) + *(long *)(puVar4 + 0x18ca0));
  local_80 = *puVar1;
  local_7e = *(undefined1 *)(puVar1 + 1);
  local_7c = puVar1[2];
  local_7a = *(undefined1 *)(puVar1 + 3);
  local_79 = 0;
  if (*(byte *)((long)puVar1 + 7) < 3) {
    local_79 = *(byte *)((long)puVar1 + 7);
  }
  local_1b0._0_4_ = 0;
  if (*(byte *)(puVar1 + 4) < 3) {
    local_1b0._0_4_ = (uint)*(byte *)(puVar1 + 4);
  }
  local_78 = (undefined1)(uint)local_1b0;
  if ((((uVar3 & 1) == 0) && (*(long *)(puVar4 + 0x18cc0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(puVar4 + 0x18cc0) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  local_1b0 = (undefined *)((ulong)local_1b0._7_1_ << 0x38);
  local_1b0 = (undefined *)CONCAT26(local_1b0._6_2_,0xff0600000000);
  if (-1 < DAT_0536d2f8) {
    FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_0536d2f8,&local_1b0,&local_b8,0x44,0);
  }
  local_19c = 0;
  local_1a0 = 0xb;
  local_198 = 0xffffffff;
  uStack_190 = 0xffffffff00000000;
  puStack_178 = local_16c;
  puStack_1a8 = &local_d0;
  local_188 = 0xffffffff;
  local_170 = 0x40;
  local_12d = 0;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb2bc0 + 0x10;
  local_118 = 0x40;
  local_d5 = 0;
  local_114[0] = 0;
  puStack_120 = local_114;
  uStack_c0 = 0;
  local_1b0 = PTR_DAT_04bb5128 + 0x10;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  puVar4 = auStack_ba;
  if (auStack_ba <= (undefined1 *)((long)&local_d0 + 2U)) {
    puVar4 = (undefined1 *)((long)&local_d0 + 2U);
  }
  local_128 = local_180;
  memset(puStack_1a8,0,(ulong)(puVar4 + (-0xe1 - (long)&local_1b0)) & 0xfffffffffffffffc | 2);
  local_70[0] = 10;
  local_68 = &uStack_98;
  FUN_0082b014(&local_1b0);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_58 = 0;
  FUN_02906b00(&local_60,&local_1b0,local_70);
  iVar2 = uStack_88._4_4_;
  puVar6 = (undefined4 *)(**(code **)(local_1b0 + 0x40))(&local_1b0);
  uVar10 = 1;
  if (iVar2 == 1) {
    uVar10 = 2;
  }
  *puVar6 = uVar10;
  return;
}

