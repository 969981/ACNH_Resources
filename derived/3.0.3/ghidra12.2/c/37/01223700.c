
undefined8 FUN_01223700(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  lVar13 = *(long *)puVar1;
  if (lVar13 == 0) {
    return 0;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_48 = 0;
  local_50 = *param_3;
  uStack_4c = param_3[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (uVar3 < *(uint *)(lVar13 + 0x1d8)) {
        lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8);
        if (lVar13 != 0) {
          local_48 = lVar13;
        }
      }
    }
  }
  uVar4 = FUN_01aff960(&local_58);
  bVar10 = *param_1;
  bVar2 = 7 < bVar10;
  if (bVar2) {
    bVar10 = 0xff;
  }
  puVar9 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar10 * 0x79;
  if (bVar2) {
    puVar9 = &DAT_0514cb68;
  }
  puVar9[100] = uVar4;
  *(undefined8 *)(puVar9 + 0x65) = 0x6400000000;
  puVar9[0x67] = *param_2;
  puVar9[0x68] = param_2[1];
  puVar9[0x69] = param_2[2];
  bVar10 = *param_1;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)(puVar9 + 0x6a) = bVar10;
  local_60 = 0x9d1;
  FUN_0277d4ac(&local_60);
  *(char *)(puVar9 + 0x77) = (char)uVar4;
  puVar9[0x6b] = (undefined4)local_60;
  puVar9[0x6c] = local_60._4_4_;
  uVar7 = FUN_01b00bc8(&local_58);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_01b00ff4(&local_58);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_01aff1fc(&local_58,3);
      if ((uVar7 & 1) != 0) {
        *(undefined2 *)(puVar9 + 0x6b) = *(undefined2 *)param_3;
        *(undefined1 *)((long)puVar9 + 0x1ae) = *(undefined1 *)((long)param_3 + 2);
        *(undefined1 *)((long)puVar9 + 0x1af) = *(undefined1 *)((long)param_3 + 3);
        puVar9[0x6c] = param_3[1];
        goto LAB_012239cc;
      }
    }
    else {
      local_60 = 0xddc;
      FUN_0277d4ac(&local_60);
      puVar9[0x6b] = (undefined4)local_60;
      puVar9[0x6c] = local_60._4_4_;
    }
    if ((int)puVar9[100] < 1) {
      return 1;
    }
  }
  else {
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    iVar5 = FUN_01ad7260(&local_58);
    if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_58), puVar8 == (ushort *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar8 & 7;
      uVar6 = FUN_01ad7260(&local_58);
      if (uVar6 <= uVar3) {
        uVar3 = 0;
      }
    }
    uVar7 = FUN_03425c00(&local_60,uVar3);
    if ((uVar7 & 1) == 0) {
      local_68 = 0x11ad;
      FUN_0277d4ac(&local_68);
      local_60._0_2_ = (undefined2)local_68;
      local_60._2_1_ = local_68._2_1_;
      local_60._3_1_ = local_68._3_1_;
      local_60._4_4_ = local_68._4_4_;
    }
    else {
    }
    *(undefined2 *)(puVar9 + 0x6b) = (undefined2)local_60;
    *(undefined1 *)((long)puVar9 + 0x1ae) = local_60._2_1_;
    *(undefined1 *)((long)puVar9 + 0x1af) = local_60._3_1_;
    puVar9[0x6c] = local_60._4_4_;
LAB_012239cc:
    *(undefined1 *)(puVar9 + 0x77) = 1;
    puVar9[100] = 1;
  }
  uVar7 = 0;
  do {
    uVar12 = DAT_0514cb64;
    uVar11 = DAT_0514cb60;
    uVar6 = DAT_0514cb5c;
    uVar3 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
    DAT_0514cb64 = uVar3 >> 8 ^ uVar12 >> 0x13 ^ uVar3 ^ uVar12;
    puVar9[uVar7] = (int)((ulong)DAT_0514cb64 * 100 >> 0x20);
    if (0x62 < uVar7) {
      DAT_0514cb58 = uVar6;
      DAT_0514cb5c = uVar11;
      DAT_0514cb60 = uVar12;
      return 1;
    }
    uVar7 = uVar7 + 1;
    DAT_0514cb58 = uVar6;
    DAT_0514cb5c = uVar11;
    DAT_0514cb60 = uVar12;
  } while ((long)uVar7 < (long)(int)puVar9[100]);
  return 1;
}

