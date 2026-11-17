
void FUN_02b23658(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  uint *local_138;
  int local_130;
  uint local_12c;
  undefined *local_128;
  int local_120;
  uint local_11c;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined8 local_110;
  undefined1 local_ad;
  undefined4 local_a8;
  char local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined4 local_44;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_02ad7db8(param_1 + 200);
  local_44 = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x3c);
  FUN_02b674f0(&local_44);
  local_4c = *(undefined1 *)(param_2 + 0x1d);
  local_ad = 0;
  local_130 = 0x80;
  local_138 = &local_12c;
  local_12c = local_12c & 0xffffff00;
  local_54 = local_44;
  uStack_50 = 0;
  local_a8 = 0;
  local_a4 = '\0';
  local_140 = PTR_DAT_04bb2d88 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  uStack_98 = 0;
  local_5c = 0;
  uStack_78 = 0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  uStack_68 = 0;
  local_90 = 0;
  local_148 = PTR_DAT_04bc49b8 + 0x10;
  local_a0 = puVar1;
  puStack_88 = puVar2;
  local_80 = puVar1;
  local_70 = puVar1;
  FUN_02b34590(&local_148,&local_54);
  if (local_a4 != '\0') {
    local_150 = 0;
    local_170 = PTR_DAT_04bbc5d8 + 0x10;
    puStack_168 = PTR_DAT_04bb2018 + 0x10;
    local_160 = 0;
    puStack_158 = puStack_168;
    FUN_02b1cfe4(param_1,&local_170,param_2,&local_148);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,local_44);
    local_110 = 0;
    uStack_112 = 0;
    uStack_114 = 0;
    fVar7 = (float)(int)local_160 * 10.0 + 2.5;
    fVar8 = (float)local_160._4_4_ * 10.0 + 2.5;
    fVar6 = (float)local_150._4_4_ * 10.0 + 10.0 + -2.5;
    fVar5 = (float)(int)local_150 * 10.0 + 10.0 + -2.5;
    local_120 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    local_11c = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar3 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    uVar4 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    local_130 = local_120;
    if (iVar3 <= local_120) {
      local_130 = iVar3;
    }
    if (local_120 <= iVar3) {
      local_120 = iVar3;
    }
    uStack_113 = *(undefined1 *)(param_2 + 0x1d);
    local_12c = local_11c;
    if ((int)uVar4 <= (int)local_11c) {
      local_12c = uVar4;
    }
    if ((int)local_11c <= (int)uVar4) {
      local_11c = uVar4;
    }
    uStack_118 = 0;
    local_140 = puVar2;
    local_138 = (uint *)puVar1;
    local_128 = puVar1;
    FUN_02a7bc88(param_1 + 0x10,&local_148);
  }
  return;
}

