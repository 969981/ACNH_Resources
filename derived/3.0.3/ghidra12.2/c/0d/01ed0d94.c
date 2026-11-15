
void FUN_01ed0d94(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined *local_1ca8;
  undefined8 *puStack_1ca0;
  undefined4 local_1c94;
  undefined *local_1c90;
  undefined8 *local_1c88;
  undefined8 ****local_1c80;
  undefined8 ****ppppuStack_1c78;
  undefined8 ****local_1c70 [29];
  undefined8 ****local_1b88 [29];
  undefined8 ****local_1aa0 [29];
  undefined8 ****local_19b8 [29];
  undefined8 ****local_18d0 [29];
  undefined8 ****local_17e8 [29];
  undefined8 ****local_1700 [29];
  undefined8 ****local_1618 [29];
  undefined8 ****local_1530 [29];
  undefined8 ****local_1448 [29];
  undefined8 ****local_1360 [29];
  undefined8 ****local_1278 [29];
  undefined8 ****local_1190 [29];
  undefined8 ****local_10a8 [29];
  undefined8 ****local_fc0 [29];
  undefined8 ****local_ed8 [29];
  undefined8 ****local_df0 [29];
  undefined8 ****local_d08 [29];
  undefined8 ****local_c20 [29];
  undefined8 ****local_b38 [29];
  undefined8 ****local_a50 [29];
  undefined8 ****local_968 [29];
  undefined8 ****local_880 [29];
  undefined8 ****local_798 [29];
  undefined8 ****local_6b0 [29];
  undefined8 ****local_5c8 [29];
  undefined8 ***local_4e0 [29];
  undefined8 **local_3f8 [29];
  undefined8 *local_310 [29];
  undefined8 local_228 [29];
  undefined1 auStack_140 [240];
  
  local_1c90 = (undefined *)CONCAT44(local_1c90._4_4_,3);
  cVar5 = *(char *)(param_1 + 0xaf68);
  *(ushort *)(param_1 + 0xad28) = *(ushort *)(param_1 + 0xad28) | 8;
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0xaf54) = 0;
  }
  *(undefined1 *)(param_1 + 0xaf98) = 1;
  *(undefined1 *)(param_1 + 0xaf68) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0x13;
  puVar7 = PTR_DAT_04bb2720;
  lVar13 = *(long *)(param_1 + 8);
  if ((9 < *(uint *)(lVar13 + 0x508)) ||
     (lVar16 = (ulong)*(uint *)(lVar13 + 0x508) * 0xba0, puVar14 = &DAT_053fe348 + lVar16,
     (&DAT_053fee41)[lVar16] == '\0')) {
    puVar14 = (undefined *)0x0;
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_1c90 = (undefined *)CONCAT44(local_1c90._4_4_,0x13);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x13 & 1) != 0) {
      if (puVar14 == (undefined *)0x0) {
        return;
      }
      lVar16 = *(long *)PTR_DAT_04bb4828;
      if (lVar16 == 0) {
        return;
      }
      local_1c90 = (undefined *)0x0;
      local_1c88 = (undefined8 *)0x0;
      local_1c70[0] = local_1b88;
      local_1b88[0] = local_1aa0;
      local_1c80 = local_1c70;
      local_1aa0[0] = local_19b8;
      local_19b8[0] = local_18d0;
      local_18d0[0] = local_17e8;
      local_17e8[0] = local_1700;
      local_1700[0] = local_1618;
      local_228[0] = 0;
      local_1618[0] = local_1530;
      local_1530[0] = local_1448;
      local_1448[0] = local_1360;
      local_1360[0] = local_1278;
      local_1278[0] = local_1190;
      local_1190[0] = local_10a8;
      local_10a8[0] = local_fc0;
      local_fc0[0] = local_ed8;
      local_ed8[0] = local_df0;
      local_df0[0] = local_d08;
      local_d08[0] = local_c20;
      local_c20[0] = local_b38;
      local_b38[0] = local_a50;
      local_a50[0] = local_968;
      local_968[0] = local_880;
      local_880[0] = local_798;
      local_798[0] = local_6b0;
      local_6b0[0] = local_5c8;
      local_5c8[0] = local_4e0;
      local_4e0[0] = local_3f8;
      local_3f8[0] = local_310;
      local_310[0] = local_228;
      if (auStack_140 != (undefined1 *)0x0) {
        local_1c90 = (undefined *)0x1e00000000;
        local_1c88 = (undefined8 *)auStack_140;
      }
      lVar15 = *(long *)PTR_DAT_04bb2720;
      ppppuStack_1c78 = local_1c80;
      if (lVar15 == 0) {
        puVar17 = &DAT_055c04a0;
      }
      else {
        puVar17 = &DAT_055c04a0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar17 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar9 = FUN_006bd550(*puVar17,0);
          puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar17 = &DAT_055c04a0;
          }
          lVar13 = *(long *)(param_1 + 8);
        }
      }
      uVar2 = *(undefined4 *)(puVar17 + 7);
      lVar13 = FUN_0265c2a0(*(undefined4 *)(lVar13 + 0x508));
      if (lVar13 == 0) {
        pbVar18 = PTR_DAT_04bb9cf0;
      }
      else if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
              (puVar17 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar17 == (undefined8 *)0x0)) {
        pbVar18 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
      }
      else {
        uVar11 = (**(code **)*puVar17)();
        pbVar18 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        if ((uVar11 & 1) != 0) {
          if (*(long *)(lVar13 + 0x28) != 0) {
            puVar17 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8);
            if (puVar17 != (undefined8 *)0x0) {
              (**(code **)*puVar17)();
            }
          }
        }
      }
      uVar11 = (ulong)*pbVar18;
      if ((uVar11 < 0x23) && (pbVar18[1] <= (byte)PTR_DAT_04bc27f0[uVar11])) {
        uVar12 = 0;
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) & 1 << (ulong)(pbVar18[1] & 0x1f)) != 0) {
          uVar12 = uVar11;
        }
      }
      else {
        uVar12 = 0;
      }
      FUN_01c23f70(lVar16,&local_1c90,uVar2,uVar12,1,1);
      if ((uint)local_1c90 <= *(uint *)(param_1 + 0xaf38)) {
        *(undefined8 *)(param_1 + 0xaf54) = 0x3900000039;
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
        lVar13 = *(long *)(param_1 + 8);
        uVar3 = *(uint *)(lVar13 + 0x288);
        *(undefined4 *)(lVar13 + 0x288) = *(undefined4 *)(lVar13 + 0x28c);
        uVar3 = uVar3 ^ uVar3 << 0xb;
        *(undefined4 *)(lVar13 + 0x28c) = *(undefined4 *)(lVar13 + 0x290);
        uVar4 = *(uint *)(lVar13 + 0x294);
        *(uint *)(lVar13 + 0x290) = uVar4;
        uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
        *(uint *)(lVar13 + 0x294) = uVar3;
        *(int *)(param_1 + 0xaf48) = (int)((ulong)uVar3 * 10 >> 0x20) * 0x1e + 600;
        return;
      }
      if (cVar5 != '\0') {
        local_1c94 = *(undefined4 *)
                      (*(long *)((long)local_1c88 + (long)(int)*(uint *)(param_1 + 0xaf38) * 8) +
                      0xc);
        FUN_01e39778(*(undefined8 *)(param_1 + 8),
                     *(long *)((long)local_1c88 + (long)(int)*(uint *)(param_1 + 0xaf38) * 8),
                     &local_1c94,0);
      }
      FUN_01ecc5d8(param_1,&local_1c90);
      local_1ca8 = PTR_DAT_04bb2020 + 0x10;
      puStack_1ca0 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),param_1 + 0xaf50,PTR_DAT_04bb65b0,&local_1ca8,6);
      bVar8 = FUN_01ecbe20(param_1);
      *(byte *)(param_1 + 0xaf69) = bVar8 & 1;
      return;
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb2720;
  iVar9 = 0;
  if (lVar13 != 0) {
    if (*(long *)(lVar13 + 0x330) == 0) {
      iVar9 = 0;
    }
    else {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar10 = FUN_006bd550(*puVar17,0);
      iVar9 = 0;
      if (iVar10 == 0x758f7eaf) {
        iVar9 = 0;
        if (*(long *)puVar7 != 0) {
          lVar13 = *(long *)(*(long *)puVar7 + 0x330);
          iVar9 = 0;
          if (lVar13 != 0) {
            iVar9 = *(int *)(lVar13 + 0x244);
          }
        }
      }
    }
  }
  puVar14 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x14) == iVar9) {
    FUN_01ecc8b0(param_1);
  }
  else {
    lVar13 = *(long *)puVar7;
    iVar9 = 0;
    if (lVar13 != 0) {
      if (*(long *)(lVar13 + 0x330) == 0) {
        iVar9 = 0;
      }
      else {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
        iVar10 = FUN_006bd550(*puVar17,0);
        iVar9 = 0;
        if (iVar10 == 0x758f7eaf) {
          iVar9 = 0;
          if (*(long *)puVar7 != 0) {
            lVar13 = *(long *)(*(long *)puVar7 + 0x330);
            iVar9 = 0;
            if (lVar13 != 0) {
              iVar9 = *(int *)(lVar13 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar14 + 0x34) != iVar9) {
      return;
    }
    FUN_01eccda8(param_1);
  }
  FUN_01ecca70(param_1);
  local_1c90 = PTR_DAT_04bb2020 + 0x10;
  local_1c88 = &DAT_0407ebb1;
  FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),param_1 + 0xaf50,PTR_DAT_04bb65b0,&local_1c90,6);
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  *(undefined4 *)(param_1 + 0xaf6c) = *(undefined4 *)(lVar13 + 0x278);
  *(undefined4 *)(param_1 + 0xaf70) = *(undefined4 *)(lVar13 + 0x27c);
  *(undefined4 *)(param_1 + 0xaf74) = *(undefined4 *)(lVar13 + 0x280);
  return;
}

