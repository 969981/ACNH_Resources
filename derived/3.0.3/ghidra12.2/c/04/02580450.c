
bool FUN_02580450(uint *param_1,undefined2 *param_2,ulong param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  short sVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined2 *puVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  undefined4 local_a0;
  undefined *local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  long local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  byte local_64 [4];
  
  FUN_02580320(&local_88);
  if (7 < (byte)local_88) {
    uVar17 = *param_1;
LAB_025804f4:
    puVar1 = PTR_DAT_04bb37e0;
    *param_1 = *(uint *)PTR_DAT_04bb4e20;
    *param_2 = *(undefined2 *)puVar1;
    *(undefined *)(param_2 + 1) = puVar1[2];
    *(undefined *)((long)param_2 + 3) = puVar1[3];
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 4);
    return uVar17 != *param_1;
  }
  local_6c = CONCAT11(local_6c._1_1_,(byte)local_88);
  lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_6c,1);
  uVar17 = *param_1;
  if (lVar18 == 0) goto LAB_025804f4;
  FUN_02580320(local_64,param_1);
  if ((*(long **)(lVar18 + 0x1aa0) == (long *)0x0) ||
     (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x1aa0), puVar19 == (undefined8 *)0x0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = (**(code **)*puVar19)();
    uVar20 = uVar20 & 0xffffffff;
  }
  uVar12 = FUN_028169a0(*(long *)(lVar18 + 0x1a88) + *(long *)(lVar18 + 0x1a80));
  if ((((uVar20 & 1) != 0) && (*(long *)(lVar18 + 0x1aa0) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x1aa0) + 8), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  FUN_02580320(&local_88,param_1);
  if ((byte)local_88 < 8) {
    uVar13 = FUN_02672e00(&local_88);
  }
  else {
    uVar13 = 0;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x15c) == 0)) {
    bVar11 = true;
  }
  else {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar18 + 0x158);
    }
    bVar23 = *pbVar2;
    if (7 < bVar23) {
      bVar23 = 0xff;
    }
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    bVar11 = bVar23 == local_64[0];
  }
  uVar14 = FUN_0235a630(local_64);
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
LAB_025806a4:
    local_a0 = 0;
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x19);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar3 >> 0x19 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b))
    goto LAB_025806a4;
    local_a0 = 1;
  }
  if (0x27 < uVar12) {
    uVar15 = *param_1;
    if (0x27 < uVar15) {
      uVar15 = 0;
    }
joined_r0x02580838:
    if (uVar13 == 0) {
      return false;
    }
    bVar10 = true;
    uVar24 = 0;
    iVar25 = -1;
    if ((param_3 & 1) != 0) {
      iVar25 = 1;
    }
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      uVar22 = uVar15;
      if ((int)uVar15 < 0) {
        do {
          uVar22 = uVar22 + uVar13;
        } while ((int)uVar22 < 0);
      }
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = uVar22 / uVar13;
      }
      uVar22 = uVar22 - uVar16 * uVar13;
      puVar21 = (undefined2 *)FUN_02677ea0(local_64);
      puVar9 = PTR_DAT_04bb43c0;
      uVar7 = *puVar21;
      uVar5 = *(undefined1 *)(puVar21 + 1);
      uVar6 = *(undefined1 *)((long)puVar21 + 3);
      uVar4 = *(undefined4 *)(puVar21 + 2);
      lVar18 = *(long *)PTR_DAT_04bb43c0;
      local_6c = uVar7;
      local_6a = uVar5;
      local_69 = uVar6;
      local_68 = uVar4;
      uVar16 = FUN_0277d6c4(&local_6c);
      lVar26 = *(long *)puVar9;
      if (lVar26 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar18 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          local_78 = 0;
          local_88 = puVar1;
          local_80 = uVar7;
          local_7e = uVar5;
          local_7d = uVar6;
          local_7c = uVar4;
          uVar16 = FUN_0277d6c4(&local_80);
          if (*(long *)PTR_DAT_04bb43c0 != 0) {
            lVar18 = *(long *)(lVar26 + 0x57e58);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
              lVar18 = *(long *)PTR_DAT_04bc0428;
              uVar16 = FUN_0277d6c4(&local_6c);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if (uVar16 < *(uint *)(lVar18 + 0x1d8)) {
                lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar16 * 8);
                if (lVar18 != 0) {
                  local_78 = lVar18;
                }
              }
            }
          }
          uVar20 = FUN_01adbe40(&local_88,bVar11,uVar14 & 1,local_a0,0);
          puVar9 = PTR_DAT_04bb37e0;
          if ((uVar20 & 1) != 0) {
            if ((bVar11 == false) &&
               ((int)uVar22 <= (int)*param_1 && *param_1 != *(uint *)PTR_DAT_04bb4e20)) {
              *param_1 = *(uint *)PTR_DAT_04bb4e20;
              *param_2 = *(undefined2 *)puVar9;
              *(undefined *)(param_2 + 1) = puVar9[2];
              *(undefined *)((long)param_2 + 3) = puVar9[3];
              *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar9 + 4);
              return bVar10;
            }
            if (((0x13 < uVar12) && (0x13 < uVar12 - 0x14)) || (uVar17 != uVar22)) {
              *param_2 = uVar7;
              *(undefined1 *)(param_2 + 1) = uVar5;
              *(undefined1 *)((long)param_2 + 3) = uVar6;
              *(undefined4 *)(param_2 + 2) = uVar4;
              *param_1 = uVar22;
              return bVar10;
            }
          }
        }
      }
      uVar24 = uVar24 + 1;
      bVar10 = uVar24 < uVar13;
      uVar15 = uVar15 + iVar25;
      if (uVar24 == uVar13) {
        return bVar10;
      }
    } while( true );
  }
  puVar21 = (undefined2 *)FUN_02677ea0(local_64,uVar12);
  puVar1 = PTR_DAT_04bb43c0;
  uVar7 = *puVar21;
  uVar5 = *(undefined1 *)(puVar21 + 1);
  uVar6 = *(undefined1 *)((long)puVar21 + 3);
  uVar4 = *(undefined4 *)(puVar21 + 2);
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  local_6c = uVar7;
  local_6a = uVar5;
  local_69 = uVar6;
  local_68 = uVar4;
  uVar15 = FUN_0277d6c4(&local_6c);
  lVar18 = *(long *)puVar1;
  if (lVar18 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_78 = 0;
      local_80 = uVar7;
      local_7e = uVar5;
      local_7d = uVar6;
      local_7c = uVar4;
      uVar15 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar1 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar18 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(&local_6c);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if (uVar15 < *(uint *)(lVar18 + 0x1d8)) {
            lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8);
            if (lVar18 != 0) {
              local_78 = lVar18;
            }
          }
        }
      }
      uVar20 = FUN_01adbe40(&local_88,bVar11,uVar14 & 1,local_a0,0);
      if ((uVar20 & 1) == 0) {
        *param_1 = *(uint *)PTR_DAT_04bb4e20;
      }
    }
  }
  if (uVar12 == *param_1) {
    if ((param_3 & 1) == 0) {
      uVar15 = uVar12 - 1;
    }
    else {
      uVar15 = uVar12 + 1;
    }
    goto joined_r0x02580838;
  }
  puVar19 = (undefined8 *)FUN_02677ea0(local_64,uVar12);
  local_88 = (undefined *)*puVar19;
  lVar18 = *(long *)puVar1;
  uVar17 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar1 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) goto LAB_02580ac0;
  }
  uVar12 = uVar13 - 1;
  if (0x27 < uVar12) {
    uVar12 = 0xffffffff;
  }
LAB_02580ac0:
  *param_1 = uVar12;
  return false;
}

