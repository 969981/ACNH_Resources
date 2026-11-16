
undefined8 FUN_027c6680(long param_1,ushort *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  ushort *puVar9;
  uint uVar10;
  int iVar11;
  uint local_90 [4];
  ushort local_80;
  byte local_7e;
  long local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar4 = PTR_DAT_04bc27f0;
  local_80 = *param_2;
  local_7e = (byte)param_2[1];
  uVar5 = (ulong)(byte)*param_2;
  if (0x22 < uVar5) {
    return 0;
  }
  if ((byte)PTR_DAT_04bc27f0[uVar5] < *(byte *)((long)param_2 + 1)) {
    return 0;
  }
  if ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(*(byte *)((long)param_2 + 1) & 0x1f) & 1)
      == 0) {
    return 0;
  }
  local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80000);
  puVar9 = (ushort *)(param_1 + 0x2c);
  uVar3 = *puVar9;
  local_70 = (undefined *)CONCAT62(local_70._2_6_,0x23);
  local_78 = param_1;
  if ((byte)(uVar3 >> 8) < 0x23) {
    FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
  }
  if (((ushort)local_70 & 0xff) < 0x23) {
    if ((((uint)(byte)puVar4[(ulong)local_70 & 0xff] < (uint)((ushort)local_70 >> 8)) ||
        ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
          (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) == 0)) ||
       (puVar6 = puVar9,
       (ushort)(*param_2 >> 8 | *param_2 << 8) !=
       (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6784;
LAB_027c6b3c:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "AmiiboCampSiteCall";
    FUN_0273f3c4(&local_70,1);
    FUN_027c64dc(param_1,param_2);
    FUN_027c6ea0(param_1,puVar6);
  }
  else {
LAB_027c6784:
    puVar6 = (ushort *)(param_1 + 0x48);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 100);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 0x80);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 0x9c);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 0xb8);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 0xd4);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    puVar6 = (ushort *)(param_1 + 0xf0);
    uVar3 = *puVar6;
    local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
    if ((byte)(uVar3 >> 8) < 0x23) {
      FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
    }
    if (((ushort)local_70 & 0xff) < 0x23) {
      if ((((uint)((ushort)local_70 >> 8) <= (uint)(byte)puVar4[(ulong)local_70 & 0xff]) &&
          ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
            (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) &&
         ((ushort)(*param_2 >> 8 | *param_2 << 8) ==
          (ushort)((ushort)local_70 >> 8 | (ushort)local_70 << 8))) goto LAB_027c6b3c;
    }
    uVar10 = 0;
    local_90[0] = 8;
    local_90[1] = 8;
    local_90[2] = 8;
    local_90[3] = 8;
    iVar11 = 0;
    do {
      puVar7 = puVar9 + (long)iVar11 * 0xe;
      local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80000);
      local_70 = (undefined *)CONCAT62(local_70._2_6_,0x23);
      uVar3 = *puVar7;
      if ((byte)(uVar3 >> 8) < 0x23) {
        FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
      }
      if (0x22 < ((ushort)local_70 & 0xff)) {
LAB_027c6d48:
        *puVar7 = 0xffff;
        local_70 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_70);
        puVar9[(long)iVar11 * 0xe + 2] = (ushort)local_70;
        puVar9[(long)iVar11 * 0xe + 6] = (ushort)local_70;
        puVar9[(long)iVar11 * 0xe + 10] = (ushort)local_70;
        *(undefined1 *)(puVar9 + (long)iVar11 * 0xe + 3) = local_70._2_1_;
        *(undefined1 *)((long)puVar9 + (long)iVar11 * 0x1c + 7) = local_70._3_1_;
        *(undefined4 *)(puVar9 + (long)iVar11 * 0xe + 4) = local_70._4_4_;
        *(undefined1 *)(puVar9 + (long)iVar11 * 0xe + 7) = local_70._2_1_;
        *(undefined1 *)((long)puVar9 + (long)iVar11 * 0x1c + 0xf) = local_70._3_1_;
        *(undefined4 *)(puVar9 + (long)iVar11 * 0xe + 8) = local_70._4_4_;
        *(undefined1 *)(puVar9 + (long)iVar11 * 0xe + 0xb) = local_70._2_1_;
        *(undefined1 *)((long)puVar9 + (long)iVar11 * 0x1c + 0x17) = local_70._3_1_;
        *(undefined4 *)(puVar9 + (long)iVar11 * 0xe + 0xc) = local_70._4_4_;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar7 = local_80 >> 8 | local_80 << 8;
        pcStack_68 = "AmiiboCampSiteCall";
        FUN_0273f3c4(&local_70,1);
        goto LAB_027c6e70;
      }
      uVar2 = (uint)(byte)((ulong)local_70 >> 8);
      if (((byte)puVar4[(ulong)local_70 & 0xff] < uVar2) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >> (ulong)(uVar2 & 0x1f) & 1)
          == 0)) goto LAB_027c6d48;
      uVar5 = (ulong)(puVar9[(long)iVar11 * 0xe + 6] != 0xfffe);
      if (puVar9[(long)iVar11 * 0xe + 2] != 0xfffe) {
        uVar5 = uVar5 + 1;
      }
      if (puVar9[(long)iVar11 * 0xe + 10] != 0xfffe) {
        uVar5 = uVar5 + 1;
      }
      uVar2 = uVar10;
      if (local_90[uVar5] <= uVar10) {
        uVar2 = local_90[uVar5];
      }
      uVar10 = uVar10 + 1;
      local_90[uVar5] = uVar2;
      iVar11 = iVar11 + 1;
    } while (uVar10 != 8);
    uVar10 = local_90[0];
    if ((((7 < local_90[0]) && (uVar10 = local_90[1], 7 < local_90[1])) &&
        (uVar10 = local_90[2], 7 < local_90[2])) && (uVar10 = local_90[3], 7 < local_90[3])) {
      return 0;
    }
    lVar8 = 0;
    uVar5 = 0;
    do {
      if ((uVar10 <= uVar5) && (lVar8 != 0xc4)) {
        lVar1 = param_1 + lVar8;
        uVar3 = *(ushort *)(lVar1 + 0x48);
        local_70 = (undefined *)CONCAT53(local_70._3_5_,0x80023);
        if ((byte)(uVar3 >> 8) < 0x23) {
          FUN_020fd218(&local_70,uVar3 >> 8,uVar3 & 0xff);
        }
        *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x4c);
        *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar1 + 0x50);
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar1 + 0x54);
        *(ushort *)(lVar1 + 0x2c) = (ushort)local_70 >> 8 | (ushort)local_70 << 8;
        *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x5c);
        *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(lVar1 + 0x60);
      }
      lVar8 = lVar8 + 0x1c;
      uVar5 = uVar5 + 1;
    } while (lVar8 != 0xe0);
    *(undefined2 *)(param_1 + 0xf0) = 0xffff;
    local_70 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_70);
    *(ushort *)(param_1 + 0xf4) = (ushort)local_70;
    *(ushort *)(param_1 + 0xfc) = (ushort)local_70;
    *(ushort *)(param_1 + 0x104) = (ushort)local_70;
    *(undefined1 *)(param_1 + 0xf6) = local_70._2_1_;
    *(undefined1 *)(param_1 + 0xf7) = local_70._3_1_;
    *(undefined4 *)(param_1 + 0xf8) = local_70._4_4_;
    *(undefined1 *)(param_1 + 0xfe) = local_70._2_1_;
    *(undefined1 *)(param_1 + 0xff) = local_70._3_1_;
    *(undefined4 *)(param_1 + 0x100) = local_70._4_4_;
    *(undefined1 *)(param_1 + 0x106) = local_70._2_1_;
    *(undefined1 *)(param_1 + 0x107) = local_70._3_1_;
    *(undefined4 *)(param_1 + 0x108) = local_70._4_4_;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    *(ushort *)(param_1 + 0xf0) = local_80 >> 8 | local_80 << 8;
    pcStack_68 = "AmiiboCampSiteCall";
    FUN_0273f3c4(&local_70,1);
    puVar7 = puVar6;
LAB_027c6e70:
    FUN_027c64dc(param_1,&local_80);
    FUN_027c6ea0(param_1,puVar7);
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  return 1;
}

