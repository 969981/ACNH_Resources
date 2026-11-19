
void FUN_039f31e0(long param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 *param_6)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  lVar12 = *(long *)(param_1 + 0x18);
  lVar13 = *(long *)(lVar12 + 0x3a0);
  lVar1 = lVar12 + 0x390;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x140) * 4];
  local_70 = param_2;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar13 + (ulong)*(ushort *)(lVar15 + 0x13c)),&local_70,(ulong)bVar2 << 2);
  }
  lVar13 = *(long *)(lVar12 + 0x3a0);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x14c) * 4];
  local_70 = param_3;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar13 + (ulong)*(ushort *)(lVar15 + 0x148)),&local_70,(ulong)bVar2 << 2);
  }
  lVar13 = *(long *)(lVar12 + 0x3a0);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x158) * 4];
  local_70 = param_4;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar13 + (ulong)*(ushort *)(lVar15 + 0x154)),&local_70,(ulong)bVar2 << 2);
  }
  lVar13 = *(long *)(lVar12 + 0x3a0);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x164) * 4];
  local_70 = param_5;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar13 + (ulong)*(ushort *)(lVar15 + 0x160)),&local_70,(ulong)bVar2 << 2);
  }
  lVar13 = *(long *)(lVar12 + 0x3a0);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x170) * 4];
  uVar10 = (ulong)bVar2;
  uVar4 = (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if (bVar2 != 0) {
    uVar6 = (ulong)*(ushort *)(lVar15 + 0x16c);
    uVar5 = uVar10 & 3;
    if (bVar2 < 4) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      puVar7 = (undefined4 *)(uVar6 + lVar13 + 8);
      do {
        lVar15 = lVar15 + -4;
        puVar7[-2] = *param_6;
        puVar7[-1] = param_6[1];
        *puVar7 = param_6[2];
        puVar9 = param_6 + 3;
        param_6 = param_6 + 4;
        puVar7[1] = *puVar9;
        puVar7 = puVar7 + 4;
      } while (-lVar15 != (uVar10 & 0xfc));
      lVar15 = -lVar15;
    }
    if ((bVar2 & 3) != 0) {
      puVar7 = (undefined4 *)(lVar13 + uVar6 + lVar15 * 4);
      uVar8 = uVar5;
      puVar9 = param_6;
      do {
        param_6 = puVar9 + 1;
        uVar8 = uVar8 - 1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = param_6;
      } while (uVar8 != 0);
    }
    uVar4 = uVar4 & 0xff;
    if (bVar2 < 4) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      puVar7 = (undefined4 *)(uVar6 + uVar4 * 4 + lVar13 + 8);
      do {
        lVar15 = lVar15 + -4;
        puVar7[-2] = *param_6;
        puVar7[-1] = param_6[1];
        *puVar7 = param_6[2];
        puVar9 = param_6 + 3;
        param_6 = param_6 + 4;
        puVar7[1] = *puVar9;
        puVar7 = puVar7 + 4;
      } while (-lVar15 != (uVar10 & 0xfc));
      lVar15 = -lVar15;
    }
    if ((bVar2 & 3) != 0) {
      puVar7 = (undefined4 *)(lVar13 + uVar6 + lVar15 * 4 + uVar4 * 4);
      uVar8 = uVar5;
      puVar9 = param_6;
      do {
        param_6 = puVar9 + 1;
        uVar8 = uVar8 - 1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = param_6;
      } while (uVar8 != 0);
    }
    if (bVar2 < 4) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      puVar7 = (undefined4 *)(uVar6 + uVar4 * 8 + lVar13 + 8);
      do {
        lVar15 = lVar15 + -4;
        puVar7[-2] = *param_6;
        puVar7[-1] = param_6[1];
        *puVar7 = param_6[2];
        puVar9 = param_6 + 3;
        param_6 = param_6 + 4;
        puVar7[1] = *puVar9;
        puVar7 = puVar7 + 4;
      } while (-lVar15 != (uVar10 & 0xfc));
      lVar15 = -lVar15;
    }
    if ((bVar2 & 3) != 0) {
      puVar7 = (undefined4 *)(lVar13 + uVar6 + uVar4 * 8 + lVar15 * 4);
      do {
        uVar5 = uVar5 - 1;
        *puVar7 = *param_6;
        puVar7 = puVar7 + 1;
        param_6 = param_6 + 1;
      } while (uVar5 != 0);
    }
  }
  lVar13 = 0;
  pbVar11 = (byte *)((long)&DAT_05ae9b08 + 3);
  do {
    lVar15 = *(long *)(lVar12 + 0x3a0);
    local_70 = (float)NEON_ucvtf((uint)*pbVar11);
    local_70 = local_70 / 255.0;
    fStack_6c = (float)NEON_ucvtf((uint)pbVar11[-1]);
    fStack_6c = fStack_6c / 255.0;
    local_68 = (float)NEON_ucvtf((uint)pbVar11[-2]);
    fStack_64 = (float)NEON_ucvtf((uint)pbVar11[-3]);
    local_68 = local_68 / 255.0;
    fStack_64 = fStack_64 / 255.0;
    (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
    (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
    lVar14 = **(long **)(lVar12 + 0x398);
    bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar14 + 0x17c) * 4];
    uVar3 = (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
    if ((ulong)bVar2 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar14 + 0x178) +
                     (ulong)((int)lVar13 * (uVar3 & 0xff)) * 4),&local_70,(ulong)bVar2 << 2);
    }
    lVar13 = lVar13 + 1;
    pbVar11 = pbVar11 + 4;
  } while (lVar13 != 0x10);
  lVar13 = *(long *)(lVar12 + 0x3a0);
  local_70 = (float)NEON_ucvtf((uint)DAT_05ae9b80._3_1_);
  local_70 = local_70 / 255.0;
  fStack_6c = (float)NEON_ucvtf((uint)DAT_05ae9b80._2_1_);
  fStack_6c = fStack_6c / 255.0;
  local_68 = (float)NEON_ucvtf((uint)DAT_05ae9b80._1_1_);
  fStack_64 = (float)NEON_ucvtf((uint)(byte)DAT_05ae9b80);
  local_68 = local_68 / 255.0;
  fStack_64 = fStack_64 / 255.0;
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x20))(lVar1);
  lVar15 = **(long **)(lVar12 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x188) * 4];
  (**(code **)(*(long *)(lVar12 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar13 + (ulong)*(ushort *)(lVar15 + 0x184)),&local_70,(ulong)bVar2 << 2);
  }
  return;
}

