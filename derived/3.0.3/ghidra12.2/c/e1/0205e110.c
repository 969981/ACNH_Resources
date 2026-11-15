
/* WARNING: Type propagation algorithm not settling */

void FUN_0205e110(long param_1)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 ******ppppppuVar16;
  uint uVar17;
  undefined8 ******ppppppuVar18;
  undefined4 *puVar19;
  uint local_140;
  uint uStack_13c;
  undefined8 *******local_138;
  undefined8 *******local_130;
  undefined8 *******local_120;
  undefined8 *******local_118;
  undefined8 *******local_110;
  undefined8 ******local_108;
  undefined8 *****local_100;
  undefined8 ****local_f8;
  undefined8 ***local_f0;
  undefined8 **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *******local_d0 [10];
  undefined4 local_80;
  undefined1 uStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  uint uStack_79;
  undefined2 local_75;
  
  puVar10 = PTR_DAT_04bb5018;
  puVar9 = PTR_DAT_04bb37e0;
  local_140 = 0;
  uStack_13c = 0;
  local_138 = (undefined8 *******)0x0;
  pppppppuVar1 = &local_118;
  local_118 = &local_110;
  local_108 = &local_100;
  local_110 = &local_108;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  pppppppuVar2 = local_d0;
  local_d8 = 0;
  local_120 = pppppppuVar1;
  if (pppppppuVar2 == (undefined8 *******)0x0) {
    uVar11 = 0;
    iVar7 = *(int *)(param_1 + 200);
    pppppppuVar1 = &local_120;
    pppppppuVar2 = local_138;
  }
  else {
    local_140 = 0;
    uStack_13c = 10;
    if (*(int *)(param_1 + 0x90) == 0) {
      uVar11 = 0;
      iVar7 = *(int *)(param_1 + 200);
      pppppppuVar1 = &local_120;
    }
    else {
      uVar11 = 1;
      local_120 = (undefined8 *******)((ulong)pppppppuVar1 & 0xffffffff00000000);
      local_140 = 1;
      uStack_13c = 10;
      iVar7 = *(int *)(param_1 + 200);
      local_d0[0] = &local_120;
    }
  }
  local_130 = pppppppuVar1;
  if ((iVar7 != 0) && (uVar11 < uStack_13c)) {
    if (pppppppuVar1 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*pppppppuVar1;
    }
    *(undefined4 *)pppppppuVar1 = 1;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  puVar19 = (undefined4 *)(param_1 + 0x90);
  if ((*(int *)(param_1 + 0x100) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 2;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x138) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 3;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x170) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 4;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x1a8) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 5;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x1e0) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 6;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x218) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 7;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  pppppppuVar1 = local_130;
  if ((*(int *)(param_1 + 0x250) != 0) && (uVar11 < uStack_13c)) {
    if (local_130 != (undefined8 *******)0x0) {
      local_130 = (undefined8 *******)*local_130;
    }
    *(undefined4 *)pppppppuVar1 = 8;
    uVar11 = local_140;
    if (local_140 < uStack_13c) {
      pppppppuVar2[(int)local_140] = pppppppuVar1;
      uVar11 = local_140 + 1;
      local_140 = uVar11;
    }
  }
  if (((*(int *)(param_1 + 0x288) != 0) && (uVar11 < uStack_13c)) &&
     (*(undefined4 *)local_130 = 9, uVar11 = local_140, local_140 < uStack_13c)) {
    pppppppuVar2[(int)local_140] = local_130;
    uVar11 = local_140 + 1;
  }
  if (5 < uVar11) {
    uVar13 = 0;
    uVar17 = uVar11 - 1;
    lVar3 = param_1 + 0x90;
    do {
      if ((int)uVar17 <= (int)uVar13) break;
      ppppppuVar16 = pppppppuVar2[uVar13];
      uVar12 = (ulong)uVar13;
      uVar14 = (ulong)uVar17;
      uVar15 = uVar12;
      uVar17 = uVar13;
      do {
        ppppppuVar18 = pppppppuVar2[uVar15 + 1];
        puVar4 = (undefined4 *)(lVar3 + (ulong)*(uint *)ppppppuVar16 * 0x38);
        if (9 < *(uint *)ppppppuVar16) {
          puVar4 = puVar19;
        }
        puVar5 = (undefined4 *)(lVar3 + (ulong)*(uint *)ppppppuVar18 * 0x38);
        if (9 < *(uint *)ppppppuVar18) {
          puVar5 = puVar19;
        }
        if ((int)puVar5[2] < (int)puVar4[2]) {
          uVar17 = (uint)uVar15;
          pppppppuVar2[uVar15 + 1] = ppppppuVar16;
          pppppppuVar2[uVar15] = ppppppuVar18;
        }
        else {
          ppppppuVar16 = ppppppuVar18;
        }
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
      if ((int)uVar17 <= (int)uVar13) break;
      ppppppuVar16 = pppppppuVar2[uVar17];
      uVar15 = (ulong)uVar17;
      uVar13 = uVar17;
      do {
        ppppppuVar18 = pppppppuVar2[uVar15 - 1];
        puVar4 = (undefined4 *)(lVar3 + (ulong)*(uint *)ppppppuVar16 * 0x38);
        if (9 < *(uint *)ppppppuVar16) {
          puVar4 = puVar19;
        }
        puVar5 = (undefined4 *)(lVar3 + (ulong)*(uint *)ppppppuVar18 * 0x38);
        if (9 < *(uint *)ppppppuVar18) {
          puVar5 = puVar19;
        }
        if ((int)puVar4[2] < (int)puVar5[2]) {
          uVar13 = (uint)uVar15;
          pppppppuVar2[uVar15 - 1] = ppppppuVar16;
          pppppppuVar2[uVar15] = ppppppuVar18;
        }
        else {
          ppppppuVar16 = ppppppuVar18;
        }
        uVar15 = uVar15 - 1;
      } while ((long)uVar12 < (long)uVar15);
    } while (uVar13 != uVar17);
    uVar15 = 0;
    do {
      local_80 = 0;
      local_75 = 0;
      uStack_7c = 0xff;
      puVar4 = (undefined4 *)(param_1 + 0x90 + (ulong)*(uint *)pppppppuVar2[uVar15] * 0x38);
      if (9 < *(uint *)pppppppuVar2[uVar15]) {
        puVar4 = puVar19;
      }
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 1) = 0xffffffffff080023;
      *(undefined2 *)(puVar4 + 0xc) = 0xffff;
      bVar8 = *puVar10;
      uVar6 = *(undefined4 *)(puVar9 + 4);
      bStack_7b = bVar8 << 2 | 3;
      puVar4[3] = *(undefined4 *)puVar9;
      puVar4[4] = uVar6;
      bStack_7a = bVar8 >> 6 | bVar8 << 2;
      uStack_79 = (uint)(byte)(bVar8 >> 6 | 4);
      FUN_020e9c5c(&local_80,(long)puVar4 + 0x32);
      uVar15 = uVar15 + 1;
    } while (uVar11 - 5 != uVar15);
  }
  return;
}

