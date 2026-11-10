
undefined8 FUN_001353b0(long param_1,long param_2,short *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_f0;
  char local_e8 [4];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_e4 = 0;
  sVar8 = *(short *)(param_2 + 0x4c);
  local_e8[0] = '\0';
  lVar11 = *(long *)(param_3 + 4);
  if (sVar8 < 1) {
    local_dc = 1;
    uVar1 = (*(uint *)(lVar11 + 0x50) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar11 + 0x50) & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    local_e4 = 3;
    lVar11 = *(long *)(param_3 + 8);
    uVar13 = local_e4;
    uVar6 = local_dc;
  }
  else {
    uVar1 = *(uint *)(lVar11 + 8);
    sVar7 = FUN_0013a8b0(lVar11,*(undefined8 *)(param_2 + 0x30),(int)sVar8,&uStack_d4,&local_d8);
    if (sVar7 < 0) goto LAB_0013574c;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    if (((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x62751) != '\0')) &&
       ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) != 0)) {
      sVar7 = FUN_001385b0(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (sVar7 < 1) {
        uVar10 = 0;
        *(undefined4 *)(param_1 + (param_4 & 0xffff) * 8 + 0x641ec) = 0;
      }
      else {
        *(undefined4 *)(param_1 + (param_4 & 0xffff) * 8 + 0x641ec) =
             *(undefined4 *)(param_3 + 0x1e);
        uVar10 = *(undefined4 *)(param_3 + 0x20);
      }
      *(undefined4 *)(param_1 + (param_4 & 0xffff) * 8 + 0x641f0) = uVar10;
      *(undefined1 *)((long)param_3 + 0x5f) = 1;
    }
    else {
      *(undefined8 *)(param_1 + (param_4 & 0xffff) * 8 + 0x641ec) = 0;
    }
    if ((uVar1 >> 0x10 | uVar1 << 0x10) == 0x50001) {
      sVar8 = FUN_0013aa00();
    }
    else {
      sVar8 = FUN_0013b1c0(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                           *(undefined1 *)(param_2 + 0x50),uStack_d4,local_d8,
                           *(undefined8 *)(param_2 + 0x30),(int)sVar8,0,0xffff,&local_dc,&local_e0,
                           &local_e4);
    }
    if (sVar8 < 0) {
      if ((*(char *)(param_2 + 0x50) == '\0') && (sVar8 == -2)) {
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        return 0;
      }
      goto LAB_0013574c;
    }
    lVar11 = *(long *)(param_3 + 8);
    uVar13 = local_e4;
    uVar1 = local_e0;
    uVar6 = local_dc;
  }
  if (lVar11 == 0) {
    lVar14 = *(long *)(param_3 + 4);
    lVar11 = 0;
  }
  else {
    lVar14 = *(long *)(param_3 + 4);
    lVar11 = lVar11 + ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13)) +
             0x3c;
  }
  lVar14 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x28) << 0x18 |
                     (ulong)*(byte *)(lVar14 + 0x29) << 0x10 | (ulong)*(byte *)(lVar14 + 0x2a) << 8
                    | (ulong)*(byte *)(lVar14 + 0x2b));
  uVar15 = uVar6;
  local_e4 = uVar13;
  local_e0 = uVar1;
  local_dc = uVar6;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(char *)(param_2 + 0x51) == '\0') {
      uVar16 = (uint)*(byte *)(param_1 + 0x6d648);
      if ((int)(uint)*(byte *)(param_1 + 0x6d648) <= (int)uVar13) {
        uVar16 = uVar13;
      }
      if (uVar6 <= uVar1) {
        bVar5 = false;
        local_f0 = 0xffffd8f0;
        uVar13 = uVar6;
LAB_001357b8:
        uVar17 = uVar13 * 2 - 1;
        do {
          if (*(char *)(param_2 + 0x53) < '\0') {
            if (lVar11 != 0) {
              uVar9 = (uint)*(char *)(lVar11 + (ulong)(uVar13 - 1));
              if ((uVar9 >> 6 & 1) != 0) goto LAB_00135938;
              if ((int)uVar9 < 0) goto LAB_00135844;
            }
LAB_00135838:
            if (0x3f < *(byte *)(lVar14 + (ulong)uVar17)) {
LAB_00135844:
              uVar9 = FUN_0013bc70(param_1,uVar13,*(byte *)(lVar14 + (ulong)uVar17) & 0x3f,param_3,
                                   local_e8,param_4 & 0xffffffff);
              if ((int)uVar9 <= (int)local_f0) goto joined_r0x0013598c;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_0013594c;
              local_a0 = *(undefined8 *)(param_3 + 0x18);
              local_90 = *(undefined8 *)(param_3 + 0x20);
              uStack_88 = *(undefined8 *)(param_3 + 0x24);
              local_d0 = *(undefined8 *)param_3;
              uStack_c8 = *(undefined8 *)(param_3 + 4);
              local_c0 = *(undefined8 *)(param_3 + 8);
              uStack_b8 = *(undefined8 *)(param_3 + 0xc);
              local_b0 = *(undefined8 *)(param_3 + 0x10);
              uStack_a8 = *(undefined8 *)(param_3 + 0x14);
              local_80 = *(undefined8 *)(param_3 + 0x28);
              local_78 = *(undefined8 *)(param_3 + 0x2c);
              local_70 = *(undefined8 *)(param_3 + 0x30);
              uStack_68 = *(undefined8 *)(param_3 + 0x34);
              local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
              local_98 = CONCAT44(local_98._4_4_,uVar13);
              uVar10 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar9);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar1);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0013c020(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_0013594c;
            }
          }
          else if (lVar11 == 0) {
LAB_001357dc:
            if (uVar16 == 2) {
              if (-1 < (char)(*(char *)(lVar14 + (ulong)uVar17) + -0x40)) goto LAB_00135844;
            }
            else if (uVar16 == 1) {
              if ((*(byte *)(lVar14 + (ulong)uVar17) & 0xc0) == 0x40) goto LAB_00135844;
            }
            else if (2 < (int)uVar16) goto LAB_00135838;
          }
          else {
            uVar9 = (uint)*(char *)(lVar11 + (ulong)(uVar13 - 1));
            if ((uVar9 >> 6 & 1) == 0) {
              if (-1 < (int)uVar9) goto LAB_001357dc;
              goto LAB_00135844;
            }
          }
LAB_00135938:
          uVar13 = uVar13 + 1;
          uVar17 = uVar17 + 2;
          if (uVar1 < uVar13) goto LAB_001359e0;
        } while( true );
      }
    }
    else if (uVar6 <= uVar1) {
      if (lVar11 == 0) {
        uVar16 = uVar6 * 2 - 1;
        do {
          if (*(char *)(param_2 + 0x53) < '\0') {
            bVar2 = *(byte *)(lVar14 + (ulong)uVar16);
joined_r0x00135a64:
            local_f0 = (uint)bVar2;
            if (0x3f < bVar2) {
LAB_00135a68:
              local_f0 = local_f0 & 0x3f;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00135b50;
              local_a0 = *(undefined8 *)(param_3 + 0x18);
              local_90 = *(undefined8 *)(param_3 + 0x20);
              uStack_88 = *(undefined8 *)(param_3 + 0x24);
              local_d0 = *(undefined8 *)param_3;
              uStack_c8 = *(undefined8 *)(param_3 + 4);
              local_c0 = *(undefined8 *)(param_3 + 8);
              uStack_b8 = *(undefined8 *)(param_3 + 0xc);
              local_b0 = *(undefined8 *)(param_3 + 0x10);
              uStack_a8 = *(undefined8 *)(param_3 + 0x14);
              local_80 = *(undefined8 *)(param_3 + 0x28);
              local_78 = *(undefined8 *)(param_3 + 0x2c);
              local_70 = *(undefined8 *)(param_3 + 0x30);
              uStack_68 = *(undefined8 *)(param_3 + 0x34);
              local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
              local_98 = CONCAT44(local_98._4_4_,uVar15);
              uVar10 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar15);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar1);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0013c020(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_00135b50;
            }
          }
          else if (uVar13 == 1) {
            local_f0 = (uint)*(byte *)(lVar14 + (ulong)uVar16);
            if ((*(byte *)(lVar14 + (ulong)uVar16) & 0xc0) == 0x40) goto LAB_00135a68;
          }
          else if (uVar13 == 2) {
            local_f0 = (uint)*(byte *)(lVar14 + (ulong)uVar16);
            if (-1 < (char)(*(byte *)(lVar14 + (ulong)uVar16) - 0x40)) goto LAB_00135a68;
          }
          else if (2 < (int)uVar13) {
            bVar2 = *(byte *)(lVar14 + (ulong)uVar16);
            goto joined_r0x00135a64;
          }
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 + 2;
        } while (uVar15 <= uVar1);
      }
      else {
        uVar16 = uVar6 * 2 - 1;
        do {
          cVar3 = *(char *)(lVar11 + (ulong)(uVar15 - 1));
          if (*(char *)(param_2 + 0x53) < '\0') {
            if (((uint)(int)cVar3 >> 6 & 1) == 0) {
              if (-1 < cVar3) {
LAB_00135618:
                if (*(byte *)(lVar14 + (ulong)uVar16) < 0x40) goto LAB_001356ec;
              }
LAB_00135624:
              local_f0 = *(byte *)(lVar14 + (ulong)uVar16) & 0x3f;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00135b50;
              local_a0 = *(undefined8 *)(param_3 + 0x18);
              local_90 = *(undefined8 *)(param_3 + 0x20);
              uStack_88 = *(undefined8 *)(param_3 + 0x24);
              local_d0 = *(undefined8 *)param_3;
              uStack_c8 = *(undefined8 *)(param_3 + 4);
              local_c0 = *(undefined8 *)(param_3 + 8);
              uStack_b8 = *(undefined8 *)(param_3 + 0xc);
              local_b0 = *(undefined8 *)(param_3 + 0x10);
              uStack_a8 = *(undefined8 *)(param_3 + 0x14);
              local_80 = *(undefined8 *)(param_3 + 0x28);
              local_78 = *(undefined8 *)(param_3 + 0x2c);
              local_70 = *(undefined8 *)(param_3 + 0x30);
              uStack_68 = *(undefined8 *)(param_3 + 0x34);
              local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
              local_98 = CONCAT44(local_98._4_4_,uVar15);
              uVar10 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar15);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar1);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0013c020(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_00135b50;
            }
          }
          else if (((uint)(int)cVar3 >> 6 & 1) == 0) {
            if (cVar3 < 0) goto LAB_00135624;
            if (uVar13 == 2) {
              if (-1 < (char)(*(char *)(lVar14 + (ulong)uVar16) + -0x40)) goto LAB_00135624;
            }
            else if (uVar13 == 1) {
              if ((*(byte *)(lVar14 + (ulong)uVar16) & 0xc0) == 0x40) goto LAB_00135624;
            }
            else if (2 < (int)uVar13) goto LAB_00135618;
          }
LAB_001356ec:
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 + 2;
        } while (uVar15 <= uVar1);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x50) != '\0') {
LAB_0013574c:
      *(undefined1 *)((long)param_3 + 0x5f) = 4;
      return 0;
    }
    if (uVar6 <= uVar1) {
      uVar13 = uVar6 * 2 - 2;
      do {
        if ((*(byte *)(lVar14 + (ulong)uVar13) >> 6 & 1) != 0) {
          local_f0 = *(byte *)(lVar14 + (ulong)uVar13) & 0x3f;
          goto LAB_00135b50;
        }
        uVar15 = uVar15 + 1;
        uVar13 = uVar13 + 2;
      } while (uVar15 <= uVar1);
    }
  }
  goto LAB_00135b34;
LAB_0013594c:
  *(bool *)(param_1 + (param_4 & 0xffff) + 0x6f4fc) = local_e8[0] == '\x01';
  bVar5 = true;
  uVar15 = uVar13;
  local_f0 = uVar9;
joined_r0x0013598c:
  uVar13 = uVar13 + 1;
  if (uVar1 < uVar13) goto LAB_001359e0;
  goto LAB_001357b8;
LAB_001359e0:
  if (bVar5) {
LAB_00135b50:
    *(uint *)(param_3 + 0x1c) = uVar15;
    uVar10 = FUN_0013be30(*(undefined8 *)(param_3 + 4),uVar15);
    *(uint *)(param_3 + 0x1e) = uVar6;
    *(uint *)(param_3 + 0x20) = uVar1;
    iVar4 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * local_f0;
    sVar7 = param_3[2] +
            ((short)((ulong)((long)iVar4 * 0x51eb851f) >> 0x25) - (short)(iVar4 >> 0x1f));
    *(undefined4 *)(param_3 + 0x2c) = uVar10;
    *param_3 = sVar7;
    sVar8 = param_3[0x35];
    if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
      sVar8 = sVar7;
    }
    *param_3 = sVar8;
    return 1;
  }
LAB_00135b34:
  uVar12 = 3;
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar12 = 4;
  }
  *(undefined1 *)((long)param_3 + 0x5f) = uVar12;
  return 0;
}

