
void FUN_039f2bd0(undefined4 param_1,undefined4 param_2,long param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar10 = *(long *)(lVar9 + 0x3a0);
  lVar1 = lVar9 + 0x390;
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  lVar12 = **(long **)(lVar9 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar12 + 0xbc) * 4];
  uVar11 = (ulong)bVar2;
  uVar3 = (**(code **)(*(long *)(lVar9 + 0x390) + 0x18))(lVar1);
  if (bVar2 != 0) {
    uVar5 = (ulong)*(ushort *)(lVar12 + 0xb8);
    uVar4 = uVar11 & 3;
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_4;
        puVar6[-1] = param_4[1];
        *puVar6 = param_4[2];
        puVar8 = param_4 + 3;
        param_4 = param_4 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + lVar12 * 4);
      uVar7 = uVar4;
      puVar8 = param_4;
      do {
        param_4 = puVar8 + 1;
        uVar7 = uVar7 - 1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = param_4;
      } while (uVar7 != 0);
    }
    uVar3 = uVar3 & 0xff;
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar3 * 4 + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_4;
        puVar6[-1] = param_4[1];
        *puVar6 = param_4[2];
        puVar8 = param_4 + 3;
        param_4 = param_4 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + lVar12 * 4 + uVar3 * 4);
      uVar7 = uVar4;
      puVar8 = param_4;
      do {
        param_4 = puVar8 + 1;
        uVar7 = uVar7 - 1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = param_4;
      } while (uVar7 != 0);
    }
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar3 * 8 + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_4;
        puVar6[-1] = param_4[1];
        *puVar6 = param_4[2];
        puVar8 = param_4 + 3;
        param_4 = param_4 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + uVar3 * 8 + lVar12 * 4);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = *param_4;
        puVar6 = puVar6 + 1;
        param_4 = param_4 + 1;
      } while (uVar4 != 0);
    }
  }
  lVar10 = *(long *)(lVar9 + 0x3a0);
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  lVar12 = **(long **)(lVar9 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar12 + 0xbc) * 4];
  uVar11 = (ulong)bVar2;
  uVar3 = (**(code **)(*(long *)(lVar9 + 0x390) + 0x18))(lVar1);
  if (bVar2 != 0) {
    uVar5 = (ulong)*(ushort *)(lVar12 + 0xb8);
    uVar3 = uVar3 & 0xff;
    uVar4 = uVar11 & 3;
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar3 * 0xc + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_5;
        puVar6[-1] = param_5[1];
        *puVar6 = param_5[2];
        puVar8 = param_5 + 3;
        param_5 = param_5 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + lVar12 * 4 + uVar3 * 0xc);
      uVar7 = uVar4;
      puVar8 = param_5;
      do {
        param_5 = puVar8 + 1;
        uVar7 = uVar7 - 1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = param_5;
      } while (uVar7 != 0);
    }
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar3 * 0x10 + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_5;
        puVar6[-1] = param_5[1];
        *puVar6 = param_5[2];
        puVar8 = param_5 + 3;
        param_5 = param_5 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + uVar3 * 0x10 + lVar12 * 4);
      uVar7 = uVar4;
      puVar8 = param_5;
      do {
        param_5 = puVar8 + 1;
        uVar7 = uVar7 - 1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = param_5;
      } while (uVar7 != 0);
    }
    if (bVar2 < 4) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar3 * 0x14 + lVar10 + 8);
      do {
        lVar12 = lVar12 + -4;
        puVar6[-2] = *param_5;
        puVar6[-1] = param_5[1];
        *puVar6 = param_5[2];
        puVar8 = param_5 + 3;
        param_5 = param_5 + 4;
        puVar6[1] = *puVar8;
        puVar6 = puVar6 + 4;
      } while (-lVar12 != (uVar11 & 0xfc));
      lVar12 = -lVar12;
    }
    if ((bVar2 & 3) != 0) {
      puVar6 = (undefined4 *)(lVar10 + uVar5 + lVar12 * 4 + uVar3 * 0x14);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = *param_5;
        puVar6 = puVar6 + 1;
        param_5 = param_5 + 1;
      } while (uVar4 != 0);
    }
  }
  lVar10 = *(long *)(lVar9 + 0x3a0);
  local_68 = 0;
  local_70 = param_1;
  uStack_6c = param_2;
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x20))(lVar1);
  lVar12 = **(long **)(lVar9 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar12 + 200) * 4];
  (**(code **)(*(long *)(lVar9 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar10 + (ulong)*(ushort *)(lVar12 + 0xc4)),&local_70,(ulong)bVar2 << 2);
  }
  return;
}

