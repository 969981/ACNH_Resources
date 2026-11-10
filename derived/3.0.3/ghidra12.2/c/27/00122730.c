
undefined8 FUN_00122730(long param_1,long param_2,short *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
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
  lVar15 = *(long *)(lVar11 + 8);
  if (sVar8 < 1) {
    local_dc = 1;
    uVar4 = (*(uint *)(lVar15 + 0x50) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar15 + 0x50) & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    local_e4 = 3;
    lVar11 = *(long *)(param_3 + 8);
    uVar13 = local_e4;
    uVar6 = local_dc;
  }
  else {
    iVar1 = *(int *)(lVar11 + 0x70);
    sVar7 = FUN_00128940(lVar11,*(undefined8 *)(param_2 + 0x30),(int)sVar8,&uStack_d4,&local_d8);
    if (sVar7 < 0) goto LAB_00122aa8;
    if (((*(char *)(param_2 + 0x50) == '\x01') && (*(char *)(param_1 + 0x62751) != '\0')) &&
       ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) != 0)) {
      sVar7 = FUN_00126b50(param_1,param_2,param_3,param_4 & 0xffffffff);
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
    if (iVar1 == 0x40050001) {
      sVar8 = FUN_00128a70();
    }
    else {
      sVar8 = FUN_00129300(*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 8),
                           *(undefined1 *)(param_2 + 0x50),uStack_d4,local_d8,
                           *(undefined8 *)(param_2 + 0x30),(int)sVar8,0,0xffff,&local_dc,&local_e0,
                           &local_e4);
    }
    if (sVar8 < 0) {
      if ((*(char *)(param_2 + 0x50) == '\0') && (sVar8 == -2)) {
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        return 0;
      }
      goto LAB_00122aa8;
    }
    lVar11 = *(long *)(param_3 + 8);
    uVar13 = local_e4;
    uVar4 = local_e0;
    uVar6 = local_dc;
  }
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar11 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar15 + 0x12) << 8 | (ulong)*(byte *)(lVar15 + 0x13)) +
             0x3c;
  }
  lVar15 = *(long *)(*(long *)(param_3 + 4) + 0x60);
  uVar14 = uVar6;
  local_e4 = uVar13;
  local_e0 = uVar4;
  local_dc = uVar6;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(char *)(param_2 + 0x51) == '\0') {
      uVar16 = (uint)*(byte *)(param_1 + 0x6d648);
      if ((int)(uint)*(byte *)(param_1 + 0x6d648) <= (int)uVar13) {
        uVar16 = uVar13;
      }
      if (uVar6 <= uVar4) {
        bVar5 = false;
        local_f0 = 0xffffd8f0;
        uVar13 = uVar6;
LAB_00122b14:
        uVar17 = uVar13 * 2 - 1;
        do {
          if (*(char *)(param_2 + 0x53) < '\0') {
            if (lVar11 != 0) {
              uVar9 = (uint)*(char *)(lVar11 + (ulong)(uVar13 - 1));
              if ((uVar9 >> 6 & 1) != 0) goto LAB_00122c94;
              if ((int)uVar9 < 0) goto LAB_00122ba0;
            }
LAB_00122b94:
            if (0x3f < *(byte *)(lVar15 + (ulong)uVar17)) {
LAB_00122ba0:
              uVar9 = FUN_0012a7e0(param_1,uVar13,*(byte *)(lVar15 + (ulong)uVar17) & 0x3f,param_3,
                                   local_e8,param_4 & 0xffffffff);
              if ((int)uVar9 <= (int)local_f0) goto joined_r0x00122ce8;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00122ca8;
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
              uVar10 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar9);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar4);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0012ab00(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_00122ca8;
            }
          }
          else if (lVar11 == 0) {
LAB_00122b38:
            if (uVar16 == 2) {
              if (-1 < (char)(*(char *)(lVar15 + (ulong)uVar17) + -0x40)) goto LAB_00122ba0;
            }
            else if (uVar16 == 1) {
              if ((*(byte *)(lVar15 + (ulong)uVar17) & 0xc0) == 0x40) goto LAB_00122ba0;
            }
            else if (2 < (int)uVar16) goto LAB_00122b94;
          }
          else {
            uVar9 = (uint)*(char *)(lVar11 + (ulong)(uVar13 - 1));
            if ((uVar9 >> 6 & 1) == 0) {
              if (-1 < (int)uVar9) goto LAB_00122b38;
              goto LAB_00122ba0;
            }
          }
LAB_00122c94:
          uVar13 = uVar13 + 1;
          uVar17 = uVar17 + 2;
          if (uVar4 < uVar13) goto LAB_00122d3c;
        } while( true );
      }
    }
    else if (uVar6 <= uVar4) {
      if (lVar11 == 0) {
        uVar16 = uVar6 * 2 - 1;
        do {
          if (*(char *)(param_2 + 0x53) < '\0') {
            bVar2 = *(byte *)(lVar15 + (ulong)uVar16);
joined_r0x00122dc0:
            local_f0 = (uint)bVar2;
            if (0x3f < bVar2) {
LAB_00122dc4:
              local_f0 = local_f0 & 0x3f;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00122eac;
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
              local_98 = CONCAT44(local_98._4_4_,uVar14);
              uVar10 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar14);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar4);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0012ab00(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_00122eac;
            }
          }
          else if (uVar13 == 1) {
            local_f0 = (uint)*(byte *)(lVar15 + (ulong)uVar16);
            if ((*(byte *)(lVar15 + (ulong)uVar16) & 0xc0) == 0x40) goto LAB_00122dc4;
          }
          else if (uVar13 == 2) {
            local_f0 = (uint)*(byte *)(lVar15 + (ulong)uVar16);
            if (-1 < (char)(*(byte *)(lVar15 + (ulong)uVar16) - 0x40)) goto LAB_00122dc4;
          }
          else if (2 < (int)uVar13) {
            bVar2 = *(byte *)(lVar15 + (ulong)uVar16);
            goto joined_r0x00122dc0;
          }
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + 2;
        } while (uVar14 <= uVar4);
      }
      else {
        uVar16 = uVar6 * 2 - 1;
        do {
          cVar3 = *(char *)(lVar11 + (ulong)(uVar14 - 1));
          if (*(char *)(param_2 + 0x53) < '\0') {
            if (((uint)(int)cVar3 >> 6 & 1) == 0) {
              if (-1 < cVar3) {
LAB_00122974:
                if (*(byte *)(lVar15 + (ulong)uVar16) < 0x40) goto LAB_00122a48;
              }
LAB_00122980:
              local_f0 = *(byte *)(lVar15 + (ulong)uVar16) & 0x3f;
              if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00122eac;
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
              local_98 = CONCAT44(local_98._4_4_,uVar14);
              uVar10 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar14);
              local_98 = CONCAT44(uVar6,(undefined4)local_98);
              local_90 = CONCAT44(local_90._4_4_,uVar4);
              local_78 = CONCAT44(local_78._4_4_,uVar10);
              sVar7 = *param_3;
              sVar8 = param_3[0x35];
              if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar8 = sVar7;
              }
              local_d0 = CONCAT62((int6)((ulong)local_d0 >> 0x10),sVar8);
              sVar8 = FUN_0012ab00(param_1,&local_d0);
              if (sVar8 != 0) goto LAB_00122eac;
            }
          }
          else if (((uint)(int)cVar3 >> 6 & 1) == 0) {
            if (cVar3 < 0) goto LAB_00122980;
            if (uVar13 == 2) {
              if (-1 < (char)(*(char *)(lVar15 + (ulong)uVar16) + -0x40)) goto LAB_00122980;
            }
            else if (uVar13 == 1) {
              if ((*(byte *)(lVar15 + (ulong)uVar16) & 0xc0) == 0x40) goto LAB_00122980;
            }
            else if (2 < (int)uVar13) goto LAB_00122974;
          }
LAB_00122a48:
          uVar14 = uVar14 + 1;
          uVar16 = uVar16 + 2;
        } while (uVar14 <= uVar4);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x50) != '\0') {
LAB_00122aa8:
      *(undefined1 *)((long)param_3 + 0x5f) = 4;
      return 0;
    }
    if (uVar6 <= uVar4) {
      uVar13 = uVar6 * 2 - 2;
      do {
        if ((*(byte *)(lVar15 + (ulong)uVar13) >> 6 & 1) != 0) {
          local_f0 = *(byte *)(lVar15 + (ulong)uVar13) & 0x3f;
          goto LAB_00122eac;
        }
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 + 2;
      } while (uVar14 <= uVar4);
    }
  }
  goto LAB_00122e90;
LAB_00122ca8:
  *(bool *)(param_1 + (param_4 & 0xffff) + 0x6f4fc) = local_e8[0] == '\x01';
  bVar5 = true;
  uVar14 = uVar13;
  local_f0 = uVar9;
joined_r0x00122ce8:
  uVar13 = uVar13 + 1;
  if (uVar4 < uVar13) goto LAB_00122d3c;
  goto LAB_00122b14;
LAB_00122d3c:
  if (bVar5) {
LAB_00122eac:
    *(uint *)(param_3 + 0x1c) = uVar14;
    uVar10 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar14);
    *(uint *)(param_3 + 0x1e) = uVar6;
    *(uint *)(param_3 + 0x20) = uVar4;
    iVar1 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * local_f0;
    sVar7 = param_3[2] +
            ((short)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (short)(iVar1 >> 0x1f));
    *(undefined4 *)(param_3 + 0x2c) = uVar10;
    *param_3 = sVar7;
    sVar8 = param_3[0x35];
    if ((sVar8 <= sVar7) && (sVar8 = param_3[0x34], sVar7 <= param_3[0x34])) {
      sVar8 = sVar7;
    }
    *param_3 = sVar8;
    return 1;
  }
LAB_00122e90:
  uVar12 = 3;
  if (*(char *)(param_2 + 0x50) != '\0') {
    uVar12 = 4;
  }
  *(undefined1 *)((long)param_3 + 0x5f) = uVar12;
  return 0;
}

