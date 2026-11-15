
undefined8 FUN_01ece2e0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulong local_1c80;
  undefined1 *puStack_1c78;
  undefined8 ******local_1c70;
  undefined8 ******ppppppuStack_1c68;
  undefined8 ******local_1c60 [29];
  undefined8 ******local_1b78 [29];
  undefined8 ******local_1a90 [29];
  undefined8 ******local_19a8 [29];
  undefined8 ******local_18c0 [29];
  undefined8 ******local_17d8 [29];
  undefined8 ******local_16f0 [29];
  undefined8 ******local_1608 [29];
  undefined8 ******local_1520 [29];
  undefined8 ******local_1438 [29];
  undefined8 ******local_1350 [29];
  undefined8 ******local_1268 [29];
  undefined8 ******local_1180 [29];
  undefined8 ******local_1098 [29];
  undefined8 ******local_fb0 [29];
  undefined8 ******local_ec8 [29];
  undefined8 ******local_de0 [29];
  undefined8 ******local_cf8 [29];
  undefined8 ******local_c10 [29];
  undefined8 ******local_b28 [29];
  undefined8 ******local_a40 [29];
  undefined8 ******local_958 [29];
  undefined8 ******local_870 [29];
  undefined8 ******local_788 [29];
  undefined8 *****local_6a0 [29];
  undefined8 ****local_5b8 [29];
  undefined8 ***local_4d0 [29];
  undefined8 **local_3e8 [29];
  undefined8 *local_300 [29];
  undefined8 local_218 [29];
  undefined1 auStack_130 [240];
  
  lVar9 = DAT_0534bef8;
  lVar8 = *(long *)(param_1 + 8);
  if (DAT_0534bef8 != 0 && *(long *)(lVar8 + 0x68) != 0) {
    local_218[0] = 0;
    local_1c60[0] = local_1b78;
    local_1b78[0] = local_1a90;
    local_1a90[0] = local_19a8;
    local_1c70 = local_1c60;
    local_18c0[0] = local_17d8;
    local_19a8[0] = local_18c0;
    local_17d8[0] = local_16f0;
    local_16f0[0] = local_1608;
    local_1608[0] = local_1520;
    local_1520[0] = local_1438;
    local_1438[0] = local_1350;
    local_1350[0] = local_1268;
    local_1268[0] = local_1180;
    local_1180[0] = local_1098;
    local_1098[0] = local_fb0;
    local_fb0[0] = local_ec8;
    local_ec8[0] = local_de0;
    local_de0[0] = local_cf8;
    local_cf8[0] = local_c10;
    local_c10[0] = local_b28;
    local_1c80 = 0;
    puStack_1c78 = (undefined1 *)0x0;
    local_b28[0] = local_a40;
    local_a40[0] = local_958;
    local_958[0] = local_870;
    local_870[0] = local_788;
    local_788[0] = local_6a0;
    local_6a0[0] = local_5b8;
    local_5b8[0] = local_4d0;
    local_4d0[0] = local_3e8;
    local_3e8[0] = local_300;
    local_300[0] = local_218;
    if (auStack_130 != (undefined1 *)0x0) {
      local_1c80 = 0x1e00000000;
      puStack_1c78 = auStack_130;
    }
    ppppppuStack_1c68 = local_1c70;
    if (DAT_05aed670 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
        lVar8 = *(long *)(param_1 + 8);
      }
    }
    uVar2 = *(undefined4 *)(puVar13 + 7);
    lVar8 = FUN_0265c2a0(*(undefined4 *)(lVar8 + 0x508));
    if (lVar8 == 0) {
      pbVar14 = (byte *)&DAT_053e6f44;
    }
    else if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar13 == (undefined8 *)0x0)) {
      pbVar14 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    }
    else {
      uVar6 = (**(code **)*puVar13)();
      pbVar14 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
    }
    uVar6 = (ulong)*pbVar14;
    if ((uVar6 < 0x23) && (pbVar14[1] <= (byte)PTR_DAT_04bc27f0[uVar6])) {
      uVar7 = 0;
      if ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) & 1 << (ulong)(pbVar14[1] & 0x1f)) != 0) {
        uVar7 = uVar6;
      }
    }
    else {
      uVar7 = 0;
    }
    FUN_01c23f70(lVar9,&local_1c80,uVar2,uVar7,1,1);
    if ((int)(uint)local_1c80 < 1) {
      uVar11 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xaf38);
      if ((uint)local_1c80 == 1) {
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
        uVar10 = 0;
        uVar11 = 0;
        do {
          uVar12 = 1 << (ulong)(uVar10 & 0x1f);
          if (uVar3 == uVar10 || 0x1d < uVar10) {
            uVar12 = 0;
          }
          uVar1 = uVar10 + 1;
          uVar10 = uVar10 + 2;
          uVar4 = 1 << (ulong)(uVar1 & 0x1f);
          if (uVar3 == uVar1 || 0x1d < uVar1) {
            uVar4 = 0;
          }
          uVar11 = uVar4 | uVar12 | uVar11;
        } while (uVar10 != ((uint)local_1c80 & 0xfffffffe));
      }
      uVar12 = 1 << (ulong)(uVar10 & 0x1f);
      if (uVar3 == uVar10 || 0x1d < uVar10) {
        uVar12 = 0;
      }
      if ((local_1c80 & 1) != 0) {
        uVar11 = uVar12 | uVar11;
      }
    }
    uVar3 = uVar11 - (uVar11 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
    if (uVar3 != 0) {
      lVar9 = *(long *)(param_1 + 8);
      uVar10 = *(uint *)(lVar9 + 0x288);
      *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
      uVar10 = uVar10 ^ uVar10 << 0xb;
      *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
      uVar12 = *(uint *)(lVar9 + 0x294);
      *(uint *)(lVar9 + 0x290) = uVar12;
      uVar12 = uVar10 >> 8 ^ uVar12 >> 0x13 ^ uVar10 ^ uVar12;
      *(uint *)(lVar9 + 0x294) = uVar12;
      uVar10 = 0xffffffff;
      if ((uVar11 != 0) && (uVar12 = (uint)((ulong)uVar12 * (ulong)uVar3 >> 0x20), uVar12 < uVar3))
      {
        iVar5 = uVar12 + 2;
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 2) {
            uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
            uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
            uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
            uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
            uVar11 = uVar11 + (uVar11 >> 8);
            uVar10 = uVar11 + (uVar11 >> 0x10) & 0x3f;
            break;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      *(uint *)(param_1 + 0xaf38) = uVar10;
      return 1;
    }
  }
  return 0;
}

