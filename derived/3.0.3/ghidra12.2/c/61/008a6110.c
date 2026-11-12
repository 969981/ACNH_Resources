
void FUN_008a6110(byte *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  uint local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar2 = PTR_DAT_04bb32e0;
  **(undefined2 **)(param_1 + 0x18) = 0;
  bVar3 = *puVar2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  param_1[2] = bVar3;
  local_ac = param_1[1] & 0xffffff80 | 0x4c;
  param_1[0xc] = 0xff;
  param_1[0xd] = 0xff;
  param_1[0xe] = 0xff;
  param_1[0xf] = 0xff;
  param_1[1] = (byte)local_ac;
  local_b8 = 0;
  uVar4 = (uint)local_b4 >> 0x10;
  local_a4 = *param_1 & 0xffffffc0 | *param_1 & 3 | (param_2 & 0xf) << 2;
  local_28 = param_2 & 0xf;
  *param_1 = (byte)local_a4;
  puVar2 = PTR_DAT_04bb27d0;
  local_b4 = CONCAT22((ushort)uVar4 & 0xff00,0xff00);
  if (-1 < *(int *)(PTR_DAT_04bc2b98 + 8)) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc2b98 + 8),&local_b8,
                 &local_28,4,0);
    bVar3 = param_1[2];
    local_ac = (uint)param_1[1];
    local_a4 = (uint)*param_1;
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_b8 = CONCAT31(local_b8._1_3_,bVar3);
  uStack_a8 = local_ac >> 3 & 0xf;
  local_ac = local_ac & 7;
  pbVar6 = param_1 + 0x10;
  local_b4 = *(undefined4 *)(param_1 + 4);
  uStack_b0 = *(undefined4 *)(param_1 + 8);
  local_a4 = local_a4 & 3;
  (**(code **)(*(long *)pbVar6 + 0x18))(pbVar6);
  lVar5 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0x18) + lVar5 * 2) == 0) goto LAB_008a628c;
    lVar1 = *(long *)(param_1 + 0x18) + lVar5 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar5 = lVar5 + 1;
      goto LAB_008a628c;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      lVar5 = lVar5 + 2;
      goto LAB_008a628c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_008a628c:
  uVar4 = (uint)lVar5;
  if (0x2e < (int)uVar4) {
    uVar4 = 0x2f;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(pbVar6);
  memcpy(&local_a0,*(void **)(param_1 + 0x18),(ulong)uVar4 << 1);
  uStack_48 = uStack_48 & 0xffffffffffff;
  local_28 = 0;
  local_22 = 0;
  local_24 = 0xff00;
  if (-1 < *(int *)(PTR_DAT_04bc2ba0 + 8)) {
    FUN_01db1df0(**(long **)puVar2 + 0x480,*(int *)(PTR_DAT_04bc2ba0 + 8),&local_28,&local_b8,0x78,0
                );
  }
  if ((param_2 == 0) && (lVar5 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x11e610), lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x4b) = 0;
    *(undefined8 *)(lVar5 + 0x4c) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0x58) = 0xffffffffffffffff;
    *(undefined1 *)(lVar5 + 0x48) = 1;
    *(undefined2 *)(lVar5 + 0x49) = 0x101;
  }
  return;
}

