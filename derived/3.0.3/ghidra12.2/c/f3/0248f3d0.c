
undefined8 FUN_0248f3d0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float local_b4;
  float fStack_b0;
  float local_ac;
  undefined4 local_a8;
  byte local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined1 local_92;
  undefined8 local_90;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return 0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  if (*(char *)(lVar9 + 0xee) == '\0') {
    return 0;
  }
  lVar9 = lVar9 + ((ulong)*(uint *)(lVar9 + 0x10) & 1) * 0x20;
  uVar5 = *(undefined2 *)(lVar9 + 0x14);
  uVar3 = *(undefined1 *)(lVar9 + 0x16);
  uVar4 = *(undefined1 *)(lVar9 + 0x17);
  uVar2 = *(undefined4 *)(lVar9 + 0x18);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_70 = uVar5;
  local_6e = uVar3;
  local_6d = uVar4;
  local_6c = uVar2;
  uVar7 = FUN_0277d6c4(&local_70);
  lVar9 = *(long *)puVar6;
  if (lVar9 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_78 = 0;
  local_80 = uVar5;
  local_7e = uVar3;
  local_7d = uVar4;
  local_7c = uVar2;
  uVar7 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar6 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_70);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar10 != (uint *)0x0)) {
        uVar7 = *puVar10;
        local_b4 = 0.0;
        if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          local_b4 = 0.0;
          if (*puVar11 != 0) {
            uVar7 = puVar11[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar7);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_b4 = (float)(uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   (uint)local_b4 < 0xbd)) goto LAB_0248f5e4;
              }
            }
            local_b4 = 0.0;
          }
        }
        goto LAB_0248f5e4;
      }
    }
  }
  local_b4 = 2.63444e-43;
LAB_0248f5e4:
  if (local_b4 == 7.00649e-44) {
    local_94 = 0x101;
    local_90 = 0x1000000000000;
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
    fVar14 = cosf(fVar13 * 1.4629181e-09);
    fVar13 = sinf(fVar13 * 1.4629181e-09);
    lVar9 = *(long *)(param_1 + 0x68);
    local_a0 = *(undefined4 *)(param_1 + 0x230);
    local_92 = 0;
    fStack_b0 = *(float *)(lVar9 + 0x27c) + 0.0;
    local_a8 = 0x40000000;
    local_b4 = *(float *)(lVar9 + 0x278) + fVar13 * 5.0 + fVar14 * 0.0;
    local_a4 = *(byte *)(param_1 + 0x1ee8);
    local_ac = (fVar14 * 5.0 - fVar13 * 0.0) + *(float *)(lVar9 + 0x280);
    if (7 < local_a4) {
      local_a4 = 0xff;
    }
    local_9c = 0x414800000000000a;
    uVar8 = FUN_0251fad0(&local_b4,0);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xb34) = 0;
    local_68 = 0xef;
    lVar12 = *(long *)(param_1 + 0x70);
    uVar7 = 0;
    lVar9 = 0;
    if (lVar12 != 0) {
      uVar7 = 0;
      if (*(uint *)(lVar12 + 0x280) < 0x149) {
        uVar7 = *(uint *)(lVar12 + 0x280);
      }
      lVar9 = lVar12 + 0x278;
    }
    if (uVar7 != 0xef) {
      local_64 = 0xef;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      FUN_03ebb160(lVar9,0xef);
      return 1;
    }
  }
  return 0;
}

