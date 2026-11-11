
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00389614(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_170 [68];
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  local_38 = 0;
  local_50 = 0x3f80000000000000;
  puStack_48 = &DAT_3f8000003f800000;
  local_60 = 0xff;
  local_3c = 0xff;
  local_78 = 0;
  local_70 = 0x3f800000;
  local_5c = 0;
  local_6c = &DAT_3f8000003f800000;
  local_64 = 0x3f800000;
  local_58 = 0;
  local_40 = 0x3f800000;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if ((*(byte *)(param_3 + 0x62) >> 1 & 1) == 0) {
    local_d0 = *(undefined8 *)(param_3 + 0x80);
    uStack_c8 = *(undefined8 *)(param_3 + 0x88);
    local_c0 = *(undefined8 *)(param_3 + 0x90);
    uStack_b8 = *(undefined8 *)(param_3 + 0x98);
    local_e0 = *(undefined8 *)(param_3 + 0x70);
    uStack_d8 = *(undefined8 *)(param_3 + 0x78);
    fVar7 = (float)FUN_0037d114(param_3);
    lVar5 = *(long *)(param_3 + 0x138);
  }
  else {
    FUN_0038cdc0(&local_e0,param_4);
    fVar7 = (float)FUN_0037d114(param_3);
    lVar5 = *(long *)(param_3 + 0x138);
  }
  if (lVar5 == 0) {
    bVar1 = *(byte *)(param_3 + 0x116);
    if ((bVar1 & 3) == 2) {
      fVar8 = *(float *)(param_3 + 0x50);
      uVar2 = *(ushort *)(param_3 + 0x114);
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    else {
      fVar8 = 0.0;
      if ((bVar1 & 3) == 0) {
        fVar8 = *(float *)(param_3 + 0x50) * 0.5;
      }
      uVar2 = *(ushort *)(param_3 + 0x114);
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    uVar4 = (uint)uVar2;
    if (bVar1 == 2) {
      fVar10 = *(float *)(param_3 + 0x54);
    }
    else {
      fVar10 = 0.0;
      if (bVar1 == 0) {
        fVar10 = *(float *)(param_3 + 0x54) * 0.5;
      }
    }
  }
  else {
    uVar4 = (uint)*(ushort *)(param_3 + 0x114);
    fVar8 = 0.0;
    fVar10 = 0.0;
  }
  fVar7 = fVar7 + fVar8;
  param_2 = param_2 - fVar10;
  fVar11 = (float)((ulong)local_d0 >> 0x20);
  fVar9 = (float)local_d0;
  fVar10 = (float)((ulong)local_e0 >> 0x20);
  fVar8 = (float)local_e0;
  fVar13 = (float)((ulong)local_c0 >> 0x20);
  fVar12 = (float)local_c0;
  local_d0 = CONCAT44(-fVar11,fVar9);
  local_e0 = CONCAT44(-fVar10,fVar8);
  local_c0 = CONCAT44(-fVar13,fVar12);
  local_88 = &local_110;
  local_90 = &local_e0;
  uStack_c8 = CONCAT44((float)((ulong)uStack_c8 >> 0x20) + param_2 * fVar11 + fVar7 * fVar9,
                       (int)uStack_c8);
  uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) + param_2 * fVar10 + fVar7 * fVar8,
                       (int)uStack_d8);
  uStack_b8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) + param_2 * fVar13 + fVar7 * fVar12,
                       (int)uStack_b8);
  if ((uVar4 >> 3 & 1) != 0) {
    local_114 = *(float *)(param_3 + 0x134) * *(float *)(param_3 + 0xf8);
    local_12c = *(undefined4 *)(param_3 + 300);
    uStack_128 = *(undefined4 *)(param_3 + 0x130);
    local_124 = *(undefined8 *)(param_3 + 0x11c);
    local_11c = *(undefined8 *)(param_3 + 0x124);
    local_a8 = &local_12c;
  }
  local_110 = _DAT_04102200;
  uStack_108 = _UNK_04102208;
  uStack_100 = _DAT_04102880;
  uStack_f8 = _UNK_04102888;
  local_f0 = _DAT_041023d0;
  uStack_e8 = _UNK_041023d8;
  FUN_0038940c(param_3,&local_a8);
  if ((*(byte *)(param_3 + 0x62) >> 1 & 1) == 0) {
    puVar6 = (undefined1 *)(param_4 + 0x10);
  }
  else {
    FUN_0037e958(param_3,auStack_170);
    uVar3 = FUN_0037d42c(param_3);
    puVar6 = auStack_170;
    if ((uVar3 & 1) != 0) {
      local_60 = 0xff;
      puVar6 = auStack_170;
    }
  }
  FUN_003506b0(*(undefined8 *)(param_3 + 0x148),puVar6,&local_a8,
               *(ushort *)(param_3 + 0x114) >> 0xb & 1,*(ushort *)(param_3 + 0x114) >> 0xc & 1);
  return;
}

