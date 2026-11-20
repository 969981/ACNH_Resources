
void FUN_03f84d8c(long *param_1,ulong param_2,ulong param_3,uint param_4,long param_5,int param_6,
                 long param_7,long param_8)

{
  int iVar1;
  char *pcVar2;
  short *psVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  undefined4 uVar20;
  uint *puVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  undefined1 uVar25;
  undefined4 uVar26;
  long *plVar27;
  uint uVar28;
  long *plVar29;
  uint in_w18;
  long unaff_x19;
  uint uVar30;
  short *unaff_x20;
  ulong uVar31;
  ushort uVar32;
  ushort *unaff_x21;
  ulong uVar33;
  ulong unaff_x22;
  int iVar34;
  long *unaff_x23;
  int iVar35;
  undefined8 *unaff_x24;
  short *unaff_x25;
  int iVar36;
  ulong unaff_x26;
  int unaff_w27;
  uint uVar37;
  int unaff_w28;
  long unaff_x29;
  
  plVar16 = (long *)(param_2 & 0xff);
  puVar21 = (uint *)(param_1 + 0x20ba);
  uVar12 = (uint)param_3;
  bVar19 = (byte)param_3;
  *(byte *)((long)param_1 + 0x105e9) =
       ((undefined1 *)((long)param_1 + (long)plVar16))[0x10550] ^ bVar19;
  ((undefined1 *)((long)param_1 + (long)plVar16))[0x10550] = bVar19;
  uVar13 = (uint)param_2;
  if ((uVar13 >> 7 & 1) != 0) {
    return;
  }
  uVar28 = 0x41eb3c2;
  plVar29 = (long *)((ulong)(&switchD_03f84ddc::switchdataD_041eb3c2)[(long)plVar16] * 4 + 0x3f84de0
                    );
  puVar14 = (ushort *)((long)param_1 + 0x1009a);
  uVar30 = uVar12 & 0xff;
  plVar23 = (long *)(ulong)uVar30;
  uVar37 = uVar13 & 0xff;
  plVar27 = (long *)(ulong)uVar37;
  uVar11 = (uint)puVar14;
  iVar34 = (int)unaff_x23;
  puVar15 = puVar14;
  switch(plVar16) {
  case (long *)0x0:
  case (long *)0x10:
  case (long *)0x20:
  case (long *)0x30:
  case (long *)0x40:
  case (long *)0x50:
  case (long *)0x60:
  case (long *)0x70:
  case (long *)0xc0:
  case (long *)0xc4:
  case (long *)0xc6:
  case (long *)0xc8:
  case (long *)0xca:
  case (long *)0xcc:
  case (long *)0xce:
  case (long *)0xd0:
  case (long *)0xd2:
  case (long *)0xd4:
  case (long *)0xd6:
  case (long *)0xd8:
  case (long *)0xda:
  case (long *)0xdc:
  case (long *)0xde:
  case (long *)0xe0:
  case (long *)0xe2:
  case (long *)0xe4:
  case (long *)0xe6:
  case (long *)0xe8:
  case (long *)0xea:
  case (long *)0xec:
  case (long *)0xee:
  case (long *)0xf0:
  case (long *)0xf2:
  case (long *)0xf4:
  case (long *)0xf6:
  case (long *)0xf8:
  case (long *)0xfa:
  case (long *)0xfc:
  case (long *)0xfe:
    puVar21 = (uint *)(ulong)(uint)(int)(char)bVar19;
  case (long *)0xff:
    puVar14 = (ushort *)(ulong)(uVar13 >> 4 & 0xf);
  case (long *)0xfd:
    uVar30 = 0xffffff00;
  case (long *)0xfb:
    in_NG = (int)puVar21 < 0;
    in_OV = '\0';
  case (long *)0xf9:
    uVar30 = uVar30 & 0xffffff00 | uVar12 & 0xff;
  case (long *)0xf7:
    puVar21 = (uint *)&DAT_00000090;
  case (long *)0xf5:
    puVar14 = (ushort *)
              ((long)param_1 + ((ulong)puVar14 & 0xffffffff) * ((ulong)puVar21 & 0xffffffff));
    plVar16 = (long *)(ulong)(uVar12 & 0xff);
  case (long *)0xf3:
    if (in_NG == in_OV) {
      uVar30 = (uint)plVar16;
    }
    plVar16 = (long *)(ulong)uVar30;
    puVar14 = puVar14 + 0x8000;
  case (long *)0x80:
  case (long *)0xf1:
    puVar15 = puVar14 + 0x68;
    puVar21 = (uint *)(long)(short)puVar14[0x96];
  case (long *)0xef:
    puVar15[0x2c] = (ushort)plVar16;
  case (long *)0x88:
    *(int *)(puVar15 + 0x28) = (int)puVar21 * (int)plVar16 >> 3;
code_r0x03f84e20:
    return;
  case (long *)0x1:
  case (long *)0x11:
  case (long *)0x21:
  case (long *)0x31:
  case (long *)0x41:
  case (long *)0x51:
  case (long *)0x61:
  case (long *)0x71:
    puVar21 = (uint *)(ulong)(uint)(int)(char)bVar19;
    puVar14 = (ushort *)(ulong)(uVar13 >> 4 & 0xf);
  case (long *)0x98:
    uVar30 = 0xffffff00;
  case (long *)0xeb:
    in_NG = (int)puVar21 < 0;
    in_OV = '\0';
    uVar30 = uVar30 & 0xffffff00 | uVar12 & 0xff;
  case (long *)0xa0:
    puVar15 = (ushort *)(param_1 + ((ulong)puVar14 & 0xffffffff) * 0x12);
  case (long *)0xe9:
    if (in_NG == in_OV) {
      uVar30 = uVar12 & 0xff;
    }
    puVar14 = puVar15 + 0x8068;
    puVar15[0x8095] = (ushort)uVar30;
    plVar16 = (long *)(ulong)(uint)((int)((int)(short)puVar15[0x8096] * uVar30) >> 3);
code_r0x03f84e60:
    *(int *)(puVar14 + 0x2a) = (int)plVar16;
    return;
  case (long *)0x2:
  case (long *)0x12:
  case (long *)0x22:
  case (long *)0x32:
  case (long *)0x42:
  case (long *)0x52:
  case (long *)0x62:
  case (long *)0x72:
    puVar14 = (ushort *)(param_1 + (ulong)(uVar37 >> 4) * 0x12);
  case (long *)0xbc:
    plVar16 = (long *)0x1011c;
    puVar21 = (uint *)(ulong)*(uint *)(puVar14 + 0x808e);
code_r0x03f84e80:
    *(uint *)((long)puVar14 + (long)plVar16) = (uint)puVar21 & 0x3f000 | uVar30 << 4;
    return;
  case (long *)0x3:
  case (long *)0x13:
  case (long *)0x23:
  case (long *)0x33:
  case (long *)0x43:
  case (long *)0x53:
  case (long *)0x63:
  case (long *)0x73:
    puVar14 = (ushort *)(ulong)(uVar37 >> 4);
    plVar16 = (long *)&DAT_00000090;
  case (long *)0xa8:
    puVar14 = (ushort *)((long)param_1 + ((ulong)puVar14 & 0xffffffff) * (long)plVar16);
    plVar16 = (long *)0x11c;
  case (long *)0xe3:
    plVar16 = (long *)(ulong)((uint)plVar16 | 0x10000);
  case (long *)0xb0:
    puVar21 = (uint *)(ulong)(*(uint *)((long)puVar14 + (long)plVar16) & 0xff0 |
                             (uVar12 & 0x3f) << 0xc);
code_r0x03f84eb0:
    *(int *)((long)puVar14 + (long)plVar16) = (int)puVar21;
    return;
  case (long *)0x4:
  case (long *)0x14:
  case (long *)0x24:
  case (long *)0x34:
  case (long *)0x44:
  case (long *)0x54:
  case (long *)0x64:
  case (long *)0x74:
    plVar16 = (long *)(ulong)(uVar13 >> 4 & 0xf);
    uVar30 = (uVar12 & 0xff) * 4;
    plVar27 = param_1 + (long)plVar16 * 0x12 + 0x201a;
    *(short *)((long)param_1 + (long)plVar16 * 0x90 + 0x10132) =
         *(short *)((long)param_1 + 0x100ce) + (short)uVar30;
    puVar14 = (ushort *)param_1[0x20be];
  case (long *)0xe1:
    *(short *)(plVar27 + 0xc) = (short)uVar30;
    if ((*(int *)(puVar14 + 0x32) != 0) && ((char)param_1[(long)plVar16 * 0x12 + 0x202a] == '\x02'))
    {
      *(undefined2 *)((long)param_1 + (long)plVar16 * 0x90 + 0x1012c) = 0;
      param_1[(long)plVar16 * 0x12 + 0x2024] = 0;
code_r0x03f84f20:
      return;
    }
    break;
  case (long *)0x5:
  case (long *)0x15:
  case (long *)0x25:
  case (long *)0x35:
  case (long *)0x45:
  case (long *)0x55:
  case (long *)0x65:
  case (long *)0x75:
    uVar37 = uVar30 >> 3;
    plVar16 = (long *)(ulong)(uVar13 >> 4 & 0xf);
    plVar27 = (long *)&DAT_041eb544;
    uVar30 = (uint)*(ushort *)(&DAT_040587c0 + (ulong)(uVar12 & 0xf) * 2);
    uVar28 = *(uint *)(&DAT_041eb544 + (ulong)(uVar37 & 0xe | 0x10) * 4);
    plVar29 = param_1 + (long)plVar16 * 0x12 + 0x201a;
  case (long *)0xdd:
    *(short *)((long)plVar29 + 0x66) = (short)uVar30;
    *(short *)(plVar29 + 0xd) = (short)uVar28;
    *(byte *)((long)plVar29 + 0x82) = bVar19 & 0x80;
    if ((uVar12 >> 7 & 1) == 0) {
      if ((*(byte *)((long)param_1 + (long)plVar16 * 0x90 + 0x10157) &
          *(byte *)((long)param_1 + 0x105e4)) != 0) {
        bVar19 = *(byte *)((long)param_1 + (long)plVar16 * 0x90 + 0x10151);
        puVar21 = (uint *)(ulong)(uint)bVar19;
        if ((char)bVar19 < '\0') {
LAB_03f852e0:
          uVar25 = (undefined1)((ulong)puVar21 >> 5);
          uVar20 = *(undefined4 *)((long)plVar27 + ((ulong)puVar21 & 0x1f) * 4);
          uVar26 = 1;
        }
        else {
          iVar34 = (uint)bVar19 * 0x10;
          plVar23 = param_1 + (long)plVar16 * 0x12 + 0x201a;
          lVar17 = param_1[(long)plVar16 * 0x12 + 0x2025];
          *(short *)((long)param_1 + (long)plVar16 * 0x90 + 0x1012c) = (short)iVar34;
          uVar28 = *(short *)((long)param_1 + (long)plVar16 * 0x90 + 0x1012a) * iVar34;
          puVar21 = (uint *)&DAT_ffffffff;
          uVar37 = (short)lVar17 * iVar34 >> 3;
code_r0x03f84fe0:
          uVar20 = SUB84(puVar21,0);
          *(uint *)(plVar23 + 10) = uVar37;
          *(int *)((long)plVar23 + 0x54) = (int)uVar28 >> 3;
          uVar25 = 3;
          uVar26 = uVar20;
        }
        plVar16 = param_1 + (long)plVar16 * 0x12;
        *(undefined1 *)(plVar16 + 0x202a) = uVar25;
        *(undefined4 *)((long)plVar16 + 0x10144) = uVar20;
LAB_03f85340:
        *(undefined4 *)(plVar16 + 0x2028) = uVar26;
        *(byte *)((long)param_1 + 0x105cc) =
             *(byte *)((long)param_1 + 0x105cc) & *(byte *)(plVar16 + 0x202b);
        return;
      }
    }
    else if ((char)param_1[(long)plVar16 * 0x12 + 0x202a] == '\n') {
      uVar28 = uVar28 & 0xffff;
      uVar13 = *(uint *)(param_1 + (long)plVar16 * 0x12 + 0x2028);
      *(uint *)((long)param_1 + (long)plVar16 * 0x90 + 0x10144) = uVar28;
      if (uVar28 < uVar13) {
        *(uint *)(param_1 + (long)plVar16 * 0x12 + 0x2028) = uVar28;
        return;
      }
    }
    else if ((char)param_1[(long)plVar16 * 0x12 + 0x202a] == '\t') {
      puVar14 = (ushort *)(param_1 + (long)plVar16 * 0x12 + 0x201a);
code_r0x03f850e0:
      *(uint *)(puVar14 + 0x3a) = uVar30;
      if (uVar30 < *(uint *)(puVar14 + 0x38)) {
        *(uint *)(puVar14 + 0x38) = uVar30;
        return;
      }
    }
    break;
  case (long *)0x6:
  case (long *)0x16:
  case (long *)0x26:
  case (long *)0x36:
  case (long *)0x46:
  case (long *)0x56:
  case (long *)0x66:
  case (long *)0x76:
    uVar37 = uVar13 >> 4 & 0xf;
    *(short *)((long)param_1 + (ulong)uVar37 * 0x90 + 0x1013a) = (short)(uVar30 >> 5) * 0xff + 0xff;
    uVar13 = *(uint *)(&DAT_041eb544 + (ulong)(uVar12 & 0x1f) * 4);
    *(uint *)((long)param_1 + (ulong)uVar37 * 0x90 + 0x1013c) = uVar13;
    if ((char)param_1[(ulong)uVar37 * 0x12 + 0x202a] == '\v') {
      uVar12 = *(uint *)(param_1 + (ulong)uVar37 * 0x12 + 0x2028);
      *(uint *)((long)param_1 + (ulong)uVar37 * 0x90 + 0x10144) = uVar13;
      if (uVar13 < uVar12) {
        *(uint *)(param_1 + (ulong)uVar37 * 0x12 + 0x2028) = uVar13;
        return;
      }
    }
    break;
  case (long *)0x7:
  case (long *)0x17:
  case (long *)0x27:
  case (long *)0x37:
  case (long *)0x47:
  case (long *)0x57:
  case (long *)0x67:
  case (long *)0x77:
    uVar13 = uVar13 >> 4 & 0xf;
    *(byte *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x10151) = bVar19;
    if (*(char *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x10152) != '\0') {
      return;
    }
    if ((*(byte *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x10157) &
        *(byte *)((long)param_1 + 0x105e4)) == 0) {
      return;
    }
    if ((uVar12 >> 7 & 1) == 0) {
      iVar34 = (uVar12 & 0xff) * 0x10;
      lVar17 = param_1[(ulong)uVar13 * 0x12 + 0x2025];
      sVar7 = *(short *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x1012a);
      *(short *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x1012c) = (short)iVar34;
      uVar20 = 0xffffffff;
      *(int *)(param_1 + (ulong)uVar13 * 0x12 + 0x2024) = (short)lVar17 * iVar34 >> 3;
      *(int *)((long)param_1 + (ulong)uVar13 * 0x90 + 0x10124) = sVar7 * iVar34 >> 3;
      bVar19 = 3;
      uVar26 = 0xffffffff;
    }
    else {
      bVar19 = (byte)(uVar12 >> 5) & 7;
      uVar20 = *(undefined4 *)(&DAT_041eb544 + (param_3 & 0x1f) * 4);
      uVar26 = 1;
    }
    plVar16 = param_1 + (ulong)uVar13 * 0x12;
    *(byte *)(plVar16 + 0x202a) = bVar19;
    *(undefined4 *)((long)plVar16 + 0x10144) = uVar20;
    goto LAB_03f85340;
  case (long *)0x8:
  case (long *)0x9:
  case (long *)0xa:
  case (long *)0xb:
  case (long *)0xd:
  case (long *)0xe:
  case (long *)0xf:
  case (long *)0x18:
  case (long *)0x19:
  case (long *)0x1a:
  case (long *)0x1b:
  case (long *)0x1d:
  case (long *)0x1e:
  case (long *)0x28:
  case (long *)0x29:
  case (long *)0x2a:
  case (long *)0x2b:
  case (long *)0x2e:
  case (long *)0x38:
  case (long *)0x39:
  case (long *)0x3a:
  case (long *)0x3b:
  case (long *)0x3e:
  case (long *)0x48:
  case (long *)0x49:
  case (long *)0x4a:
  case (long *)0x4b:
  case (long *)0x4e:
  case (long *)0x58:
  case (long *)0x59:
  case (long *)0x5a:
  case (long *)0x5b:
  case (long *)0x5e:
  case (long *)0x68:
  case (long *)0x69:
  case (long *)0x6a:
  case (long *)0x6b:
  case (long *)0x6e:
  case (long *)0x78:
  case (long *)0x79:
  case (long *)0x7a:
  case (long *)0x7b:
  case (long *)0x7e:
    break;
  case (long *)0xc:
    *puVar21 = -(uVar12 >> 7 & 1) & 0xffff8000 | (uVar12 & 0xff) << 7;
    return;
  case (long *)0x1c:
    *(uint *)((long)param_1 + 0x105d4) = -(uVar12 >> 7 & 1) & 0xffff8000 | (uVar12 & 0xff) << 7;
    return;
  case (long *)0x1f:
  case (long *)0x2f:
  case (long *)0x3f:
  case (long *)0x4f:
  case (long *)0x5f:
  case (long *)0x6f:
  case (long *)0x7f:
    bVar19 = (byte)(1 << (uVar37 >> 4));
    if ((param_3 & 0xff) == 0) {
      *(byte *)((long)param_1 + 0x100bc) = *(byte *)((long)param_1 + 0x100bc) & (bVar19 ^ 0xff);
      return;
    }
    *(byte *)((long)param_1 + 0x100bc) = *(byte *)((long)param_1 + 0x100bc) | bVar19;
    return;
  case (long *)0x2c:
    *(int *)(param_1 + 0x20bb) = (int)(char)bVar19;
    return;
  case (long *)0x2d:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      *(byte *)((long)param_1 + 0x101e3) = *(byte *)((long)param_1 + 0x101e7) & bVar19;
      *(byte *)((long)param_1 + 0x10273) = *(byte *)((long)param_1 + 0x10277) & bVar19;
      *(byte *)((long)param_1 + 0x10303) = *(byte *)((long)param_1 + 0x10307) & bVar19;
      *(byte *)((long)param_1 + 0x10393) = *(byte *)((long)param_1 + 0x10397) & bVar19;
      *(byte *)((long)param_1 + 0x10423) = *(byte *)((long)param_1 + 0x10427) & bVar19;
      *(byte *)((long)param_1 + 0x104b3) = *(byte *)((long)param_1 + 0x104b7) & bVar19;
      *(byte *)((long)param_1 + 0x10543) = *(byte *)((long)param_1 + 0x10547) & bVar19;
      return;
    }
    break;
  case (long *)0x3c:
    *(int *)((long)param_1 + 0x105dc) = (int)(char)bVar19;
    return;
  case (long *)0x3d:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      *(byte *)((long)param_1 + 0x10154) = bVar19 & 1;
      *(byte *)((long)param_1 + 0x101e4) = bVar19 & 2;
      *(byte *)((long)param_1 + 0x10274) = bVar19 & 4;
      *(byte *)((long)param_1 + 0x10304) = bVar19 & 8;
      *(byte *)((long)param_1 + 0x10394) = bVar19 & 0x10;
      *(byte *)((long)param_1 + 0x10424) = bVar19 & 0x20;
      plVar16 = (long *)(ulong)(uVar12 & 0x40);
      goto code_r0x03f851e0;
    }
    break;
  case (long *)0x4c:
    *(undefined4 *)(param_1 + 0x20bc) = *(undefined4 *)param_1[1];
    if ((param_3 & 0xff) != 0) {
      puVar14 = (ushort *)((long)param_1 + 0x105ac);
      uVar30 = uVar12 & (*(byte *)puVar14 ^ 0xffffffff);
      puVar21 = (uint *)(ulong)(*(byte *)puVar14 & uVar12);
      *(byte *)((long)param_1 + 0x105cc) = *(byte *)((long)param_1 + 0x105cc) & (bVar19 ^ 0xff);
      uVar13 = uVar30 & 0xff;
      in_ZR = uVar13 == 0;
      plVar16 = (long *)(ulong)uVar13;
      *(char *)((long)param_1 + 0x105e5) = (char)uVar30;
      goto code_r0x03f853e0;
    }
    break;
  case (long *)0x4d:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      plVar16 = param_1 + 0x200a;
      plVar27 = param_1 + 0x2009;
      plVar29 = plVar27;
      if ((param_3 & 1) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x2029] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 2) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x203b] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 4) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x204d] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 8) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x205f] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 0x10) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x2071] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 0x20) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x2083] = (long)plVar29;
      plVar29 = plVar27;
      if ((param_3 & 0x40) != 0) {
        plVar29 = plVar16;
      }
      param_1[0x2095] = (long)plVar29;
      if (-1 < (char)bVar19) {
        plVar16 = plVar27;
      }
      param_1[0x20a7] = (long)plVar16;
      return;
    }
    break;
  case (long *)0x5c:
    uVar13 = (uint)*(byte *)((long)param_1 + 0x105e6);
    if ((*(byte *)((long)param_1 + 0x105e6) != 0) &&
       (*(int *)(param_1[0x20be] + 0x30) * 0x3f < *(int *)param_1[1] - (int)param_1[0x20bc])) {
      uVar13 = 0;
      *(undefined1 *)((long)param_1 + 0x105e6) = 0;
    }
    bVar19 = *(byte *)((long)param_1 + 0x105e4);
    uVar30 = uVar12 & 0xff ^ 0xff;
    uVar12 = (uint)bVar19 & uVar12 & 0xff;
    uVar13 = uVar13 & uVar30;
    *(char *)((long)param_1 + 0x105e7) = (char)uVar12;
    bVar10 = (byte)uVar13;
    *(byte *)((long)param_1 + 0x105e5) = bVar10;
    if (uVar13 != 0) {
      *(byte *)((long)param_1 + 0x105e4) = bVar10 | bVar19;
      FUN_03f87f60();
      bVar19 = *(byte *)((long)param_1 + 0x105e4);
      uVar12 = (uint)*(byte *)((long)param_1 + 0x105e7);
    }
    bVar10 = (byte)uVar30;
    *(byte *)((long)param_1 + 0x1059c) = *(byte *)((long)param_1 + 0x1059c) & bVar10;
    *(byte *)((long)param_1 + 0x105e4) = bVar19 & bVar10;
    if (uVar12 != 0) {
      if ((*(byte *)((long)param_1 + 0x10157) & uVar12) != 0) {
        param_1[0x2028] = 0x100000001;
        *(undefined1 *)(param_1 + 0x202a) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x101e7) & uVar12) != 0) {
        param_1[0x203a] = 0x100000001;
        *(undefined1 *)(param_1 + 0x203c) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x10277) & uVar12) != 0) {
        param_1[0x204c] = 0x100000001;
        *(undefined1 *)(param_1 + 0x204e) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x10307) & uVar12) != 0) {
        param_1[0x205e] = 0x100000001;
        *(undefined1 *)(param_1 + 0x2060) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x10397) & uVar12) != 0) {
        param_1[0x2070] = 0x100000001;
        *(undefined1 *)(param_1 + 0x2072) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x10427) & uVar12) != 0) {
        param_1[0x2082] = 0x100000001;
        *(undefined1 *)(param_1 + 0x2084) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x104b7) & uVar12) != 0) {
        param_1[0x2094] = 0x100000001;
        *(undefined1 *)(param_1 + 0x2096) = 2;
      }
      if ((*(byte *)((long)param_1 + 0x10547) & uVar12) != 0) {
        param_1[0x20a6] = 0x100000001;
        *(undefined1 *)(param_1 + 0x20a8) = 2;
      }
    }
    return;
  case (long *)0x5d:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      plVar16 = (long *)(ulong)(uVar12 * 0x100);
      puVar14 = (ushort *)((long)param_1 + 0x100ce);
      uVar32 = (ushort)(uVar12 * 0x100);
      *puVar14 = uVar32;
      *(ushort *)((long)param_1 + 0x10132) = (short)param_1[0x2026] + uVar32;
      *(ushort *)((long)param_1 + 0x101c2) = (short)param_1[0x2038] + uVar32;
      *(ushort *)((long)param_1 + 0x10252) = (short)param_1[0x204a] + uVar32;
      *(ushort *)((long)param_1 + 0x102e2) = (short)param_1[0x205c] + uVar32;
      *(ushort *)((long)param_1 + 0x10372) = (short)param_1[0x206e] + uVar32;
      *(ushort *)((long)param_1 + 0x10402) = (short)param_1[0x2080] + uVar32;
      *(ushort *)((long)param_1 + 0x10492) = (short)param_1[0x2092] + uVar32;
      goto code_r0x03f855e0;
    }
    break;
  case (long *)0x6c:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      *(byte *)(param_1 + 0x20bd) = (byte)(uVar12 >> 6) & 1;
      pcVar2 = (char *)((long)param_1 + 0x100bd);
      if ((uVar12 >> 7 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0x105ac) = 0;
        *(undefined1 *)((long)param_1 + 0x1059c) = 0;
        *(undefined1 *)((long)param_1 + 0x105cc) = 0xff;
        *(undefined1 *)((long)param_1 + 0x105e4) = 0;
        *(undefined4 *)(param_1 + 0x2019) = 1;
        *(undefined1 *)(param_1 + 0x20bd) = 1;
        *pcVar2 = '\0';
        *(undefined2 *)(param_1 + 0x202a) = 0;
        param_1[0x2028] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x1011c) = 0;
        *(undefined2 *)((long)param_1 + 0x1012c) = 0;
        *(undefined2 *)((long)param_1 + 0x1015a) = 0;
        *(undefined2 *)(param_1 + 0x203c) = 0;
        param_1[0x203a] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x101ac) = 0;
        *(undefined2 *)((long)param_1 + 0x101bc) = 0;
        *(undefined2 *)((long)param_1 + 0x101ea) = 0;
        *(undefined2 *)(param_1 + 0x204e) = 0;
        param_1[0x204c] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x1023c) = 0;
        *(undefined2 *)((long)param_1 + 0x1024c) = 0;
        *(undefined2 *)((long)param_1 + 0x1027a) = 0;
        *(undefined2 *)(param_1 + 0x2060) = 0;
        param_1[0x205e] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x102cc) = 0;
        *(undefined2 *)((long)param_1 + 0x102dc) = 0;
        *(undefined2 *)((long)param_1 + 0x1030a) = 0;
        *(undefined2 *)(param_1 + 0x2072) = 0;
        param_1[0x2070] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x1035c) = 0;
        *(undefined2 *)((long)param_1 + 0x1036c) = 0;
        *(undefined2 *)((long)param_1 + 0x1039a) = 0;
        *(undefined2 *)(param_1 + 0x2084) = 0;
        param_1[0x2082] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x103ec) = 0;
        *(undefined2 *)((long)param_1 + 0x103fc) = 0;
        *(undefined2 *)((long)param_1 + 0x1042a) = 0;
        *(undefined2 *)(param_1 + 0x2096) = 0;
        param_1[0x2094] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x1047c) = 0;
        *(undefined2 *)((long)param_1 + 0x1048c) = 0;
        *(undefined2 *)((long)param_1 + 0x104ba) = 0;
        *(undefined2 *)(param_1 + 0x20a8) = 0;
        param_1[0x20a6] = 0x100000001;
        *(undefined4 *)((long)param_1 + 0x1050c) = 0;
        *(undefined2 *)((long)param_1 + 0x1051c) = 0;
        *(undefined2 *)((long)param_1 + 0x1054a) = 0;
      }
      if (((uVar12 & 0xff) >> 5 & 1) == 0) {
        if (*pcVar2 == '\0') {
          *pcVar2 = '\x01';
          param_1[0x200b] = 0;
          param_1[0x200c] = 0;
          param_1[0x200d] = 0;
          param_1[0x200e] = 0;
          param_1[0x200f] = 0;
          param_1[0x2010] = 0;
          param_1[0x2011] = 0;
          param_1[0x2012] = 0;
        }
      }
      else {
        *pcVar2 = '\0';
      }
      uVar20 = *(undefined4 *)(&DAT_041eb544 + (ulong)(uVar12 & 0x1f) * 4);
      *(undefined4 *)((long)param_1 + 0x100c4) = uVar20;
      *(undefined4 *)(param_1 + 0x2018) = uVar20;
      return;
    }
    break;
  case (long *)0x6d:
    if (*(char *)((long)param_1 + 0x105e9) != '\0') {
      lVar17 = *param_1 + (param_3 & 0xff) * 0x100;
      param_1[0x2014] = lVar17;
      param_1[0x2015] = lVar17;
      param_1[0x2016] = lVar17 + (ulong)*puVar14;
      return;
    }
    break;
  case (long *)0x7c:
    *(undefined1 *)((long)param_1 + 0x105cc) = 0;
    return;
  case (long *)0x7d:
    uVar13 = 4;
    if ((param_3 & 0xf) != 0) {
      uVar13 = (uVar12 & 0xf) << 0xb;
    }
    *puVar14 = (ushort)uVar13;
    uVar33 = param_1[0x2014] + (ulong)uVar13;
    param_1[0x2016] = uVar33;
    if (uVar33 <= (ulong)param_1[0x2015]) {
      param_1[0x2015] = param_1[0x2014];
      return;
    }
    break;
  default:
    bVar19 = *(byte *)((long)param_1 + 0x1012e);
    *(int *)(param_1 + 2) =
         (int)param_1[2] + (short)param_1[(ulong)*(byte *)((long)param_1 + 10) * 4 + 0x20be] * 2;
    uVar33 = FUN_03f5f068(param_1,(int)param_1[1]);
    *(char *)((long)param_1 + 0xc) = (char)(uVar33 >> 8);
    *(int *)(param_1 + 1) = (int)param_1[1] + 2;
    uVar31 = uVar33 & 0xffff | (ulong)bVar19 << 0x10;
    *(int *)(param_1 + 2) =
         (int)param_1[2] +
         *(short *)((long)param_1 + (uVar33 >> 0xb & 0x1e) + (ulong)bVar19 * 0x20 + 0x105f0) * 2;
    uVar13 = FUN_03f5f068(param_1,uVar31);
    *(char *)((long)param_1 + 0x1011c) = (char)((uVar13 << 1 & 0xfffe) >> 0xf);
    *(bool *)((long)param_1 + 0x1011b) = (uVar13 << 1 & 0xfffe) == 0;
    *(byte *)((long)param_1 + 0x1011d) = (byte)(uVar13 >> 0xf) & 1;
    *(undefined1 *)((long)param_1 + 0x10123) = 1;
    FUN_03f8d280(param_1,uVar31);
    *(int *)(param_1 + 2) = (int)param_1[2] + 0x200;
    return;
  case (long *)0x90:
  case (long *)0xed:
    goto code_r0x03f84e20;
  case (long *)0xa2:
    *(int *)(unaff_x19 + 0x10) = *(int *)(unaff_x19 + 0x10) + 0x200;
    return;
  case (long *)0xb8:
    goto code_r0x03f84eb0;
  case (long *)0xba:
code_r0x03f872bc:
    uVar13 = (uint)unaff_x22;
    if ((bool)in_ZR || in_NG != in_OV) {
      uVar13 = param_4;
    }
    unaff_x20[1] = (short)(uVar13 << 1);
    uVar32 = unaff_x21[1];
    uVar13 = (int)(char)(byte)uVar32 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[2] = (short)(uVar13 << 1);
    uVar13 = (int)(char)((byte)uVar32 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[3] = (short)(uVar13 << 1);
    bVar19 = *(byte *)((long)unaff_x21 + 3);
    uVar13 = (int)(char)bVar19 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[4] = (short)(uVar13 << 1);
    uVar13 = (int)(char)(bVar19 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[5] = (short)(uVar13 << 1);
    uVar32 = unaff_x21[2];
    uVar13 = (int)(char)(byte)uVar32 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[6] = (short)(uVar13 << 1);
    uVar13 = (int)(char)((byte)uVar32 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[7] = (short)(uVar13 << 1);
    bVar19 = *(byte *)((long)unaff_x21 + 5);
    uVar13 = (int)(char)bVar19 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[8] = (short)(uVar13 << 1);
    uVar13 = (int)(char)(bVar19 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[9] = (short)(uVar13 << 1);
    uVar32 = unaff_x21[3];
    uVar13 = (int)(char)(byte)uVar32 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[10] = (short)(uVar13 << 1);
    uVar13 = (int)(char)((byte)uVar32 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[0xb] = (short)(uVar13 << 1);
    bVar19 = *(byte *)((long)unaff_x21 + 7);
    uVar13 = (int)(char)bVar19 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[0xc] = (short)(uVar13 << 1);
    uVar13 = (int)(char)(bVar19 << 4) & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[0xd] = (short)(uVar13 << 1);
    uVar32 = unaff_x21[4];
    uVar13 = (int)(char)(byte)uVar32 & 0xfffff800;
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[0xe] = (short)(uVar13 << 1);
    uVar13 = (int)(char)((byte)uVar32 << 4) & 0xfffff800;
LAB_03f87e2c:
    if ((int)uVar12 <= (int)uVar13) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < -0x7fff) {
      uVar13 = param_4;
    }
    unaff_x20[0xf] = (short)(uVar13 << 1);
LAB_03f87e44:
    *(short *)((long)plVar16 + 100) = *(short *)((long)plVar16 + 100) + 9;
LAB_03f87e50:
    do {
      sVar7 = *(short *)((long)plVar16 + 0x4a);
      sVar6 = *(short *)((long)plVar16 + 0x8a);
      if (*(short *)((long)plVar16 + 0x8a) <= sVar7) {
        sVar6 = sVar7;
      }
      *(short *)((long)plVar16 + 0x8a) = sVar6;
      if (sVar6 < 3) {
        *(undefined2 *)((long)plVar16 + 0x46) = 0;
        cVar4 = *(char *)((long)param_1 + 0x105c2);
      }
      else {
        psVar3 = (short *)((long)plVar16 + (long)sVar7 * 2);
        uVar33 = (ulong)(*(ushort *)(plVar16 + 9) >> 6) & 0x3fc;
        uVar13 = (uint)uVar33;
        uVar32 = 0;
        if (*(int *)(param_7 + uVar33) != 0) {
          uVar32 = (ushort)(((int)*(short *)(param_5 + uVar33 * 2) * (int)*psVar3 +
                             (int)*(short *)(param_5 + (ulong)(uVar13 | 1) * 2) * (int)psVar3[1] +
                             (int)*(short *)(param_5 + (ulong)(uVar13 | 2) * 2) * (int)psVar3[2] +
                            (int)*(short *)(param_5 + (ulong)(uVar13 | 3) * 2) * (int)psVar3[3]) /
                           *(int *)(param_7 + uVar33));
        }
        *(ushort *)((long)plVar16 + 0x46) = uVar32 & 0xfffe;
        cVar4 = *(char *)((long)param_1 + 0x105c2);
      }
      plVar27 = plVar16;
      if (cVar4 != '\0') goto LAB_03f861a4;
LAB_03f87ee0:
      *(int *)plVar16[0xf] =
           *(int *)plVar16[0xf] +
           ((int)(((int)*(short *)((long)plVar16 + 0x46) * (int)*(short *)((long)plVar16 + 0x5c) >>
                   0xb & 0xfffffffeU) * (int)(short)plVar16[0xb]) >> 7);
      *(int *)(plVar16[0xf] + 4) =
           *(int *)(plVar16[0xf] + 4) +
           ((int)(((int)*(short *)((long)plVar16 + 0x46) * (int)*(short *)((long)plVar16 + 0x5c) >>
                   0xb & 0xfffffffeU) * (int)*(short *)((long)plVar16 + 0x5a)) >> 7);
      plVar27 = plVar16;
LAB_03f861a4:
      while( true ) {
        while( true ) {
          plVar16 = plVar27 + 0x12;
          if (plVar23 <= plVar16) {
            return;
          }
          if (*(byte *)(plVar27 + 0x22) != 0) break;
          *(undefined1 *)(plVar27 + 0x22) = 0;
          *(byte *)((long)param_1 + 0x105a6) =
               *(byte *)((long)param_1 + 0x105a6) | *(byte *)((long)plVar27 + 0x117);
          if (*(int *)(*(long *)((long)param_1 + 0x105ca) + 0x68) == 0) {
            *(byte *)((long)param_1 + 0x10586) =
                 *(byte *)((long)param_1 + 0x10586) & *(byte *)(plVar27 + 0x23);
          }
          *(byte *)((long)param_1 + 0x105be) =
               *(byte *)((long)param_1 + 0x105be) & *(byte *)(plVar27 + 0x23);
          plVar27 = plVar16;
        }
        iVar34 = (int)plVar27[0x20] + -1;
        *(int *)(plVar27 + 0x20) = iVar34;
        if (iVar34 == 0) break;
        if (*(char *)((long)plVar27 + 0x114) != '\0') goto LAB_03f861d0;
LAB_03f863d4:
        if (*(char *)((long)plVar27 + 0x113) == '\0') {
          uVar13 = (int)plVar27[0x1b] + *(int *)((long)plVar27 + 0xdc);
        }
        else {
          uVar13 = *(uint *)((long)plVar27 + 0xdc) >> 4;
          uVar13 = uVar13 + ((int)(((int)*(short *)((long)plVar27 + 0x5c) *
                                    (int)*(short *)((long)plVar27 + 0x46) >> 0x10) * uVar13) >> 10);
          uVar37 = *(uint *)(plVar27 + 0x1b) >> 4 & 0x3fff;
          uVar30 = uVar37 ^ 0x7fff;
          if ((int)(uVar13 + uVar37) < 0x8000) {
            uVar30 = uVar13;
          }
          uVar13 = *(uint *)(plVar27 + 0x1b) + uVar30 * 0x10;
        }
        *(uint *)(plVar27 + 0x1b) = uVar13;
        uVar30 = uVar13 >> 0x10 & 0x10;
        if (*(ushort *)((long)plVar27 + 0xee) == uVar30) goto LAB_03f87e50;
        *(short *)((long)plVar27 + 0xee) = (short)uVar30;
        *(ushort *)((long)plVar27 + 0xda) = (ushort)(uVar13 >> 0x10) & 0x1f;
        *(short *)plVar16 = (short)plVar27[0x1a];
        *(undefined4 *)((long)plVar27 + 0x92) = *(undefined4 *)((long)plVar27 + 0xd2);
        if (*(char *)((long)plVar27 + 0x115) == '\0') {
          uVar32 = *(ushort *)((long)plVar27 + 0xf4);
LAB_03f86498:
          unaff_x20 = (short *)((long)plVar16 + (ulong)uVar30 * 2 + 6);
          if (in_w18 <= uVar32) {
            *(short *)((long)plVar27 + 0x115) = (short)param_2;
            *(undefined8 *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = 0;
            *(undefined8 *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = 0;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            unaff_x20[2] = 0;
            unaff_x20[3] = 0;
            *(undefined8 *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = 0;
            goto LAB_03f87e44;
          }
          unaff_x21 = (ushort *)(*param_1 + (ulong)(uint)uVar32);
          bVar19 = (byte)*unaff_x21;
          *(byte *)((long)plVar27 + 0x115) = bVar19 & 1;
          if (((bVar19 & 1) != 0) &&
             (*(byte *)((long)plVar27 + 0x116) = bVar19 & 2, (bVar19 >> 1 & 1) == 0)) {
            *(undefined2 *)((long)plVar27 + 0xec) = 0;
          }
          bVar10 = bVar19 >> 2 & 3;
          sVar7 = *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 4);
          uVar37 = (uint)(char)*(byte *)((long)unaff_x21 + 1);
          sVar6 = *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 2);
          uVar13 = (uint)sVar7;
          unaff_w27 = (int)uVar13 >> 1;
          iVar36 = (int)sVar6;
          iVar34 = iVar36 >> 1;
          if (bVar19 < 0xd0) {
            uVar11 = (uint)(bVar19 >> 4);
            uVar28 = (((int)(char)*(byte *)((long)unaff_x21 + 1) >> 4) << (ulong)uVar11) >> 1;
            if (bVar10 == 1) {
              uVar28 = unaff_w27 + ((int)-uVar13 >> 5) + uVar28;
              if ((int)uVar12 <= (int)uVar28) {
                uVar28 = uVar12;
              }
              if ((int)uVar28 < -0x7fff) {
                uVar28 = param_4;
              }
              sVar7 = (short)(uVar28 << 1);
              iVar34 = (int)sVar7;
              *unaff_x20 = sVar7;
              uVar13 = (-iVar34 >> 5) + ((((int)(uVar37 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else if (bVar10 == 3) {
              uVar28 = ((uVar13 + ((int)(uVar13 * param_6) >> 7)) - iVar34) + (iVar34 + iVar36 >> 4)
                       + uVar28;
              if ((int)uVar12 <= (int)uVar28) {
                uVar28 = uVar12;
              }
              if ((int)uVar28 < -0x7fff) {
                uVar28 = param_4;
              }
              sVar7 = (short)(uVar28 << 1);
              *unaff_x20 = sVar7;
              iVar34 = (int)sVar7;
              uVar13 = (((int)(unaff_w27 + uVar13) >> 4) - unaff_w27) +
                       ((((int)(uVar37 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) + iVar34 +
                       (iVar34 * param_6 >> 7);
            }
            else {
              iVar36 = (int)(uVar37 << 0x1c) >> 0x1c;
              if (bVar10 == 2) {
                iVar8 = (int)sVar7 >> 1;
                uVar28 = ((int)sVar7 - ((int)sVar6 >> 1)) + ((int)sVar6 >> 5) +
                         (-iVar8 - (int)sVar7 >> 5) + uVar28;
                if ((int)uVar12 <= (int)uVar28) {
                  uVar28 = uVar12;
                }
                if ((int)uVar28 < -0x7fff) {
                  uVar28 = param_4;
                }
                sVar6 = (short)(uVar28 << 1);
                *unaff_x20 = sVar6;
                iVar34 = (int)sVar6;
                uVar13 = (((int)sVar7 >> 5) - iVar8) + ((iVar36 << (ulong)uVar11) >> 1) + iVar34 +
                         (-(iVar34 + (iVar34 >> 1)) >> 5);
              }
              else {
                if ((int)uVar12 <= (int)uVar28) {
                  uVar28 = uVar12;
                }
                if ((int)uVar28 < -0x7fff) {
                  uVar28 = param_4;
                }
                sVar7 = (short)(uVar28 << 1);
                *unaff_x20 = sVar7;
                iVar34 = (int)sVar7;
                uVar13 = (iVar36 << (ulong)uVar11) >> 1;
              }
            }
            if ((int)uVar12 <= (int)uVar13) {
              uVar13 = uVar12;
            }
            if ((int)uVar13 < -0x7fff) {
              uVar13 = param_4;
            }
            sVar7 = (short)(uVar13 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 8) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)(byte)unaff_x21[1];
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xc) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)*(byte *)((long)unaff_x21 + 3);
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x10) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)(byte)unaff_x21[2];
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x14) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)*(byte *)((long)unaff_x21 + 5);
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x18) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)(byte)unaff_x21[3];
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1c) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)*(byte *)((long)unaff_x21 + 7);
            uVar13 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar13 = iVar36 + (-iVar8 >> 5) + uVar13;
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = sVar7;
              iVar34 = (int)sVar7;
              uVar37 = (-iVar34 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       (iVar34 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar13 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = sVar7;
                iVar34 = (int)sVar7;
                uVar37 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + iVar34 + (iVar34 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar13 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar37 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  uVar37 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = sVar7;
                  iVar34 = (int)sVar7;
                }
              }
            }
            if ((int)uVar12 <= (int)uVar37) {
              uVar37 = uVar12;
            }
            if ((int)uVar37 < -0x7fff) {
              uVar37 = param_4;
            }
            sVar7 = (short)(uVar37 << 1);
            *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x20) = sVar7;
            iVar8 = (int)sVar7;
            iVar35 = (int)(char)(byte)unaff_x21[4];
            uVar37 = ((iVar35 >> 4) << (ulong)uVar11) >> 1;
            iVar36 = iVar8 >> 1;
            if (bVar10 == 1) {
              uVar37 = iVar36 + (-iVar8 >> 5) + uVar37;
              if ((int)uVar12 <= (int)uVar37) {
                uVar37 = uVar12;
              }
              if ((int)uVar37 < -0x7fff) {
                uVar37 = param_4;
              }
              sVar7 = (short)(uVar37 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x22) = sVar7;
              uVar13 = (-(int)sVar7 >> 5) + ((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) +
                       ((int)sVar7 >> 1);
            }
            else {
              iVar1 = iVar34 >> 1;
              if (bVar10 == 3) {
                uVar13 = (iVar8 - iVar1) + (iVar1 + iVar34 >> 4) + uVar37 + (iVar8 * param_6 >> 7);
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                if ((int)uVar13 < -0x7fff) {
                  uVar13 = param_4;
                }
                sVar7 = (short)(uVar13 << 1);
                *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x22) = sVar7;
                uVar13 = (((((iVar35 << 0x1c) >> 0x1c) << (ulong)uVar11) >> 1) - iVar36) +
                         (iVar36 + iVar8 >> 4) + (int)sVar7 + (sVar7 * param_6 >> 7);
              }
              else {
                iVar35 = (iVar35 << 0x1c) >> 0x1c;
                if (bVar10 == 2) {
                  uVar13 = (iVar8 - iVar1) + (iVar34 >> 5) + uVar37 + (-iVar36 - iVar8 >> 5);
                  if ((int)uVar12 <= (int)uVar13) {
                    uVar13 = uVar12;
                  }
                  if ((int)uVar13 < -0x7fff) {
                    uVar13 = param_4;
                  }
                  sVar7 = (short)(uVar13 << 1);
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x22) = sVar7;
                  iVar34 = (int)sVar7;
                  uVar13 = ((iVar8 >> 5) - iVar36) + ((iVar35 << (ulong)uVar11) >> 1) + iVar34 +
                           (-(iVar34 + (iVar34 >> 1)) >> 5);
                }
                else {
                  if ((int)uVar12 <= (int)uVar37) {
                    uVar37 = uVar12;
                  }
                  uVar13 = (iVar35 << (ulong)uVar11) >> 1;
                  if ((int)uVar37 < -0x7fff) {
                    uVar37 = param_4;
                  }
                  *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x22) = (short)(uVar37 << 1);
                }
              }
            }
          }
          else {
            uVar28 = uVar37 & 0xfffff800;
            cVar4 = (char)(uVar37 << 4);
            if (bVar10 == 1) {
              uVar28 = uVar28 + (int)(short)((short)(uVar13 >> 1) + (short)(-uVar13 >> 5));
              if ((int)uVar12 <= (int)uVar28) {
                uVar28 = uVar12;
              }
              if ((int)uVar28 < -0x7fff) {
                uVar28 = param_4;
              }
              sVar7 = (short)(uVar28 << 1);
              *unaff_x20 = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)cVar4 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 8) = sVar7;
              uVar32 = unaff_x21[1];
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(byte)uVar32 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)((byte)uVar32 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xc) = sVar7;
              bVar19 = *(byte *)((long)unaff_x21 + 3);
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)bVar19 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(bVar19 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x10) = sVar7;
              uVar32 = unaff_x21[2];
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(byte)uVar32 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)((byte)uVar32 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x14) = sVar7;
              bVar19 = *(byte *)((long)unaff_x21 + 5);
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)bVar19 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(bVar19 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x18) = sVar7;
              uVar32 = unaff_x21[3];
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(byte)uVar32 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)((byte)uVar32 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1c) = sVar7;
              unaff_x23 = (long *)(long)(char)*(byte *)((long)unaff_x21 + 7);
              unaff_x25 = (short *)(ulong)((uint)(int)sVar7 >> 1);
              unaff_x22 = (ulong)(uint)-(int)sVar7;
code_r0x03f86de0:
              uVar13 = (int)(short)((short)unaff_x25 + (short)((uint)unaff_x22 >> 5)) +
                       (int)(short)((ushort)unaff_x23 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xc] = sVar7;
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)((int)unaff_x23 << 4) & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xd] = sVar7;
              uVar32 = unaff_x21[4];
              uVar13 = (int)(short)((short)((uint)(int)sVar7 >> 1) + (short)((uint)-(int)sVar7 >> 5)
                                   ) + (int)(short)((short)(char)(byte)uVar32 & 0xf800);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xe] = sVar7;
              uVar13 = ((int)(char)((byte)uVar32 << 4) & 0xfffff800U) + (-(int)sVar7 >> 5) +
                       ((int)sVar7 >> 1);
            }
            else if (bVar10 == 2) {
              uVar28 = (uVar13 - iVar34) + (iVar36 >> 5) + ((int)(-unaff_w27 - uVar13) >> 5) +
                       uVar28;
              if ((int)uVar12 <= (int)uVar28) {
                uVar28 = uVar12;
              }
              if ((int)uVar28 < -0x7fff) {
                uVar28 = param_4;
              }
              sVar7 = (short)(uVar28 << 1);
              *unaff_x20 = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar28 << 0x11) >> 0x11;
              uVar13 = (((int)cVar4 & 0xfffff800U) - unaff_w27) + ((int)uVar13 >> 5) + iVar36 +
                       (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 8) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[1];
              uVar13 = (iVar35 - iVar34) + (iVar36 >> 5) + (-(iVar8 + iVar35) >> 5) +
                       ((int)(char)(byte)uVar32 & 0xfffff800U);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 10) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) +
                       iVar36 + (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xc) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 3);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0xe) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) + iVar36 +
                       (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x10) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[2];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x12) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) +
                       iVar36 + (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x14) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 5);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x16) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) + iVar36 +
                       (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x18) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[3];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1a) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) +
                       iVar36 + (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1c) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 7);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x1e) = sVar7;
              iVar36 = (int)sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) + iVar36 +
                       (-(iVar34 + iVar36) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x20) = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[4];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar36 >> 5) + iVar35 +
                       (-(iVar8 + iVar35) >> 5);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              *(short *)((long)plVar16 + (ulong)uVar30 * 2 + 0x22) = sVar7;
              iVar34 = (int)sVar7;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) + (iVar35 >> 5) +
                       iVar34 + (-(iVar34 + (iVar34 >> 1)) >> 5);
            }
            else {
              if (bVar10 != 3) {
                if ((int)uVar12 <= (int)uVar28) {
                  uVar28 = uVar12;
                }
                if ((int)uVar28 < -0x7fff) {
                  uVar28 = param_4;
                }
                *unaff_x20 = (short)(uVar28 << 1);
                uVar13 = (int)cVar4 & 0xfffff800;
                if ((int)uVar12 <= (int)uVar13) {
                  uVar13 = uVar12;
                }
                unaff_x22 = (ulong)uVar13;
                in_OV = SCARRY4(uVar13,0x8000);
                in_NG = (int)(uVar13 + 0x8000) < 0;
                in_ZR = uVar13 == 0xffff8000;
                goto code_r0x03f872bc;
              }
              unaff_x23 = (long *)(ulong)((int)cVar4 & 0xfffff800);
              unaff_x26 = (ulong)(uint)(iVar34 + iVar36);
              unaff_x22 = (ulong)(((uVar13 + ((int)(uVar13 * param_6) >> 7)) - iVar34) + uVar28);
              unaff_x24 = (undefined8 *)(ulong)(unaff_w27 + uVar13);
code_r0x03f865e0:
              uVar13 = (int)unaff_x22 + ((int)unaff_x26 >> 4);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              *unaff_x20 = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = ((int)unaff_x23 - unaff_w27) + ((int)unaff_x24 >> 4) + iVar36 +
                       (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[1] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[1];
              uVar13 = (iVar35 - iVar34) + (iVar34 + iVar36 >> 4) + (iVar35 * param_6 >> 7) +
                       ((int)(char)(byte)uVar32 & 0xfffff800U);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[2] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) +
                       (iVar8 + iVar35 >> 4) + iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[3] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 3);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[4] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar8 + iVar35 >> 4) +
                       iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[5] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[2];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[6] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) +
                       (iVar8 + iVar35 >> 4) + iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[7] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 5);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[8] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar8 + iVar35 >> 4) +
                       iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[9] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[3];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[10] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) +
                       (iVar8 + iVar35 >> 4) + iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xb] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              bVar19 = *(byte *)((long)unaff_x21 + 7);
              uVar13 = (((int)(char)bVar19 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              iVar36 = (int)sVar7;
              unaff_x20[0xc] = sVar7;
              iVar34 = (int)(uVar13 << 0x11) >> 0x11;
              uVar13 = (((int)(char)(bVar19 << 4) & 0xfffff800U) - iVar8) + (iVar8 + iVar35 >> 4) +
                       iVar36 + (iVar36 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xd] = sVar7;
              iVar35 = (int)sVar7;
              iVar8 = (int)(uVar13 << 0x11) >> 0x11;
              uVar32 = unaff_x21[4];
              uVar13 = (((int)(char)(byte)uVar32 & 0xfffff800U) - iVar34) + (iVar34 + iVar36 >> 4) +
                       iVar35 + (iVar35 * param_6 >> 7);
              if ((int)uVar12 <= (int)uVar13) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < -0x7fff) {
                uVar13 = param_4;
              }
              sVar7 = (short)(uVar13 << 1);
              unaff_x20[0xe] = sVar7;
              uVar13 = (((int)(char)((byte)uVar32 << 4) & 0xfffff800U) - iVar8) +
                       (iVar8 + iVar35 >> 4) + (int)sVar7 + (sVar7 * param_6 >> 7);
            }
          }
          goto LAB_03f87e2c;
        }
        if (*(char *)((long)plVar27 + 0x116) != '\0') {
          *(byte *)((long)param_1 + 0x105a6) =
               *(byte *)((long)param_1 + 0x105a6) | *(byte *)((long)plVar27 + 0x117);
          *(undefined1 *)((long)plVar27 + 0x115) = 0;
          uVar32 = *(ushort *)((ulong)*(ushort *)((long)plVar27 + 0xf2) + *param_1 + 2);
          uVar30 = (uint)*(ushort *)((long)plVar27 + 0xee);
          *(ushort *)((long)plVar27 + 0xf4) = uVar32;
          goto LAB_03f86498;
        }
        *(char *)(plVar27 + 0x22) = (char)param_2;
        plVar27[0x20] = param_8;
        plVar27 = plVar16;
        if (*(char *)((long)param_1 + 0x105c2) == '\0') goto LAB_03f87ee0;
      }
      uVar13 = *(byte *)(plVar27 + 0x22) - 1;
      if (uVar13 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x03f86238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(unaff_x19 + (ulong)uVar13) * 4 + 0x3f8623c))();
        return;
      }
      *(undefined4 *)(plVar27 + 0x20) = *(undefined4 *)((long)plVar27 + 0x104);
      *(int *)(plVar27 + 0x1c) =
           (int)(short)plVar27[0x1d] * (int)*(short *)((long)plVar27 + 0xec) >> 3;
      *(int *)((long)plVar27 + 0xe4) =
           (int)*(short *)((long)plVar27 + 0xea) * (int)*(short *)((long)plVar27 + 0xec) >> 3;
      if (*(char *)((long)plVar27 + 0x114) == '\0') goto LAB_03f863d4;
LAB_03f861d0:
      uVar13 = (int)plVar27[0x1b] + 0x10000;
      unaff_x20 = (short *)(ulong)uVar13;
      unaff_x23 = (long *)(ulong)*(ushort *)((long)plVar27 + 0xee);
      unaff_x21 = (ushort *)(ulong)(uVar13 >> 0x10);
code_r0x03f861e0:
      *(int *)(plVar16 + 9) = (int)unaff_x20;
      uVar32 = (ushort)unaff_x21;
      uVar13 = (uint)unaff_x21 & 0x10;
      if ((uint)unaff_x23 != uVar13) {
        *(short *)((long)plVar16 + 0x5e) = (short)uVar13;
        *(short *)plVar16 = (short)plVar16[8];
        *(undefined4 *)((long)plVar16 + 2) = *(undefined4 *)((long)plVar16 + 0x42);
        uVar32 = (ushort)((ulong)unaff_x20 >> 0x10) & 0x1f;
        *(ushort *)((long)plVar16 + 0x4a) = uVar32;
      }
      *(undefined2 *)((long)plVar16 + (long)(short)uVar32 * 2 + 6) =
           *(undefined2 *)((long)param_1 + 0x100a6);
    } while( true );
  case (long *)0xbb:
    uVar13 = FUN_03f5f2f4();
    *(byte *)(unaff_x21 + 4) = 1;
    *(byte *)(unaff_x21 + 1) = (byte)(uVar13 >> 7) & 1;
    *(bool *)unaff_x21 = (uVar13 << 1 & 0xfe) == 0;
    *(byte *)((long)unaff_x21 + 1) = (byte)((uVar13 << 1 & 0xfe) >> 7);
    FUN_03f5ef94();
    return;
  case (long *)0xbd:
    bVar19 = *(byte *)((long)unaff_x20 + 0x17);
    *(uint *)(unaff_x19 + 0x10) =
         uVar11 + (int)(short)unaff_x21[(param_2 & 0xff) * 0x10 +
                                        (ulong)((uint)((int)plVar16 + (int)param_1) >> 0xc & 0xf)] +
         0x400;
    bVar10 = FUN_03f5f2f4();
    *(byte *)((long)unaff_x20 + 0x17) = bVar10 | bVar19;
    bVar10 = bVar10 | bVar19;
    *(byte *)((long)unaff_x20 + 1) = bVar10 >> 7;
    *(bool *)unaff_x20 = bVar10 == 0;
    *(undefined1 *)(unaff_x20 + 4) = 1;
    return;
  case (long *)0xbe:
    *(char *)(unaff_x20 + 4) = (char)puVar14;
    return;
  case (long *)0xbf:
  case (long *)0xdf:
    goto code_r0x03f84f20;
  case (long *)0xc1:
  case (long *)0xc2:
    bVar19 = *(byte *)((long)unaff_x24 + 0xf);
    *(ushort *)((long)unaff_x24 + 6) = (short)puVar21 + 1U & (ushort)plVar16;
    unaff_x23[0x16] = unaff_x23[0x10];
    unaff_x24[9] = unaff_x24[5];
    unaff_x23[0xb] = 0;
    *(undefined4 *)(unaff_x23 + 10) = 0x88888888;
    *(uint *)((long)unaff_x23 + 0x54) =
         uVar30 >> (ulong)(-(uint)bVar19 & 0x1f) | uVar30 << (ulong)(bVar19 & 0x1f);
    *(undefined1 *)((long)unaff_x25 + 0xb) = 8;
    *(undefined1 *)((long)unaff_x25 + 0xbb) = 8;
    *(undefined1 *)((long)unaff_x23 + 0x7a) = 0xe;
    *(undefined2 *)((long)unaff_x24 + 0x12) = 0x1202;
    bVar19 = *(byte *)((long)unaff_x20 + 0x17);
    if (uVar11 != bVar19) {
      plVar16 = (long *)(unaff_x19 + 0x226a80);
      if (*(int *)(*(long *)(unaff_x22 + 0x170) + 0x38) != 0) {
        if (bVar19 == 2) {
          uVar25 = 0;
          uVar13 = 0x2f;
          bVar10 = 1;
        }
        else {
          uVar25 = (undefined1)*unaff_x25;
          bVar10 = (byte)unaff_x21[0x214];
          uVar13 = (uint)*(byte *)((long)unaff_x21 + 0x429);
        }
        *(undefined1 *)((long)unaff_x25 + 1) = uVar25;
        bVar5 = (byte)unaff_x21[0x218];
        *(byte *)(unaff_x21 + 0x213) = bVar10;
        *(byte *)(unaff_x21 + 0x217) = (byte)uVar13;
        uVar30 = (uint)bVar5;
        uVar12 = 1;
        if ((uVar13 & 0x20) != 0) {
          uVar12 = ~uVar30;
        }
        uVar9 = (ushort)(uVar12 << 0xf);
        unaff_x21[0x203] = uVar9;
        iVar34 = (uVar30 & (int)(uVar13 << 0x1c) >> 0x1f) * -0x202;
        *(uint *)(unaff_x23 + 2) = ((uint)bVar5 & (int)(uVar13 << 0x1b) >> 0x1f) << 7;
        iVar36 = (-(uVar13 & 1) & uVar30) * -0x202;
        iVar8 = ((uint)bVar5 & (int)(uVar13 << 0x1e) >> 0x1f) * -0x202;
        iVar35 = (uVar30 & (int)(uVar13 << 0x1d) >> 0x1f) * -0x202;
        uVar32 = *unaff_x21;
        *(int *)(unaff_x22 + 0x50) = iVar34;
        *(int *)(unaff_x23 + 0x17) = iVar36;
        *(int *)(unaff_x24 + 10) = iVar8;
        *(int *)(unaff_x24 + 0x21) = iVar35;
        unaff_x21[0x204] = uVar32 | uVar9;
        lVar17 = *(long *)((long)unaff_x25 + 0x5b);
        *(long *)((long)unaff_x25 + 0xf3) = *(long *)((long)unaff_x25 + 0x43) + (long)iVar36;
        *(long *)((long)unaff_x25 + 0xfb) = *(long *)((long)unaff_x25 + 0x4b) + (long)iVar8;
        *unaff_x23 = *(long *)((long)unaff_x25 + 0x53) + (long)iVar35;
        unaff_x23[1] = lVar17 + iVar34;
      }
      if ((ushort)*(byte *)(unaff_x22 + 0x184) != *(ushort *)(unaff_x22 + 0x182)) {
        *(char *)(unaff_x22 + 0x184) = (char)*(ushort *)(unaff_x22 + 0x182);
        *(char *)(*plVar16 + 0x7802b) = *(char *)(*plVar16 + 0x7802b) + '\x01';
        *(undefined1 *)(*plVar16 + (ulong)*(byte *)(*plVar16 + 0x7802b) * 3 + 0x7802c) =
             *(undefined1 *)(unaff_x22 + 0x182);
        *(undefined1 *)(*plVar16 + (ulong)*(byte *)(*plVar16 + 0x7802b) * 3 + 0x7802e) =
             *(undefined1 *)(unaff_x22 + 0x179);
        bVar19 = *(byte *)((long)unaff_x20 + 0x17);
      }
      *(byte *)(*plVar16 + (ulong)*(byte *)(*plVar16 + 0x7802b) * 3 + 0x7802d) = bVar19 - 1;
    }
    if (((char)unaff_x20[0xc] != '\0') && (*(char *)((long)unaff_x20 + 0x19) == '\x01')) {
      FUN_03fc5434();
    }
    FUN_03fe5eb0();
    FUN_03fc56a4();
    if ((byte)unaff_x21[0x212] != 0) {
      FUN_03fc56a4();
    }
    FUN_03fc3320();
    uVar13 = ((byte)unaff_x21[0x213] ^ 3 | (uint)*(byte *)((long)unaff_x21 + 0x425)) &
             (uint)(byte)unaff_x21[0x216];
    uVar32 = unaff_x21[0x218];
    *(byte *)((long)unaff_x21 + 0x42b) = (byte)uVar13;
    uVar13 = uVar13 & 1;
    *(byte *)((long)unaff_x21 + 0x42d) = (byte)uVar13;
    uVar13 = *(byte *)((long)unaff_x21 + 0x423) & uVar13 | (uint)(byte)uVar32;
    *(byte *)(unaff_x21 + 0x218) = (byte)uVar13;
    if ((byte)uVar32 != uVar13) {
      bVar19 = (byte)unaff_x21[0x217];
      uVar30 = (uint)bVar19;
      uVar12 = 1;
      if ((bVar19 & 0x20) != 0) {
        uVar12 = ~uVar13;
      }
      uVar32 = (ushort)(uVar12 << 0xf);
      unaff_x21[0x203] = uVar32;
      unaff_x21[0x204] = *unaff_x21 | uVar32;
      lVar17 = *(long *)((long)unaff_x25 + 0x43);
      *(uint *)(unaff_x23 + 2) = (uVar13 & (int)(uVar30 << 0x1b) >> 0x1f) << 7;
      iVar34 = (-(uVar30 & 1) & uVar13) * -0x202;
      iVar36 = (uVar13 & (int)((uint)bVar19 << 0x1e) >> 0x1f) * -0x202;
      iVar8 = (uVar13 & (int)(uVar30 << 0x1d) >> 0x1f) * -0x202;
      iVar35 = (uVar13 & (int)(uVar30 << 0x1c) >> 0x1f) * -0x202;
      lVar24 = *(long *)((long)unaff_x25 + 0x4b);
      *(int *)(unaff_x23 + 0x17) = iVar34;
      lVar18 = *(long *)((long)unaff_x25 + 0x53);
      *(int *)(unaff_x22 + 0x50) = iVar35;
      *(int *)(unaff_x24 + 10) = iVar36;
      *(int *)(unaff_x24 + 0x21) = iVar8;
      *(long *)((long)unaff_x25 + 0xf3) = lVar17 + iVar34;
      lVar17 = *(long *)((long)unaff_x25 + 0x5b);
      *(long *)((long)unaff_x25 + 0xfb) = lVar24 + iVar36;
      *unaff_x23 = lVar18 + iVar8;
      unaff_x23[1] = lVar17 + iVar35;
    }
    if (((((((uint)unaff_x26 >> (ulong)(*(byte *)(unaff_x20 + 0xb) & 0x1f) & 1) == 0) &&
          (*(char *)((long)unaff_x20 + 0x17) != '\x02')) &&
         (*(int *)(*(long *)(unaff_x22 + 0x170) + 0x50) == 0)) &&
        ((*(int *)(*(long *)(unaff_x22 + 0x170) + 0x60) == 0 &&
         (*(byte *)((long)unaff_x20 + 0x19) < 2)))) && ((byte)unaff_x21[0x212] == 0)) {
      *(undefined8 *)(unaff_x19 + 0x3170f8) = &LAB_03fcb350;
      uVar25 = 4;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x3170f8) = &LAB_03fcbe70;
      uVar25 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0x317100) = uVar25;
    return;
  case (long *)0xc3:
    goto code_r0x03f86de0;
  case (long *)0xc5:
    goto code_r0x03f865e0;
  case (long *)0xc7:
    goto code_r0x03f861e0;
  case (long *)0xc9:
    do {
      iVar8 = (int)plVar16 * (int)puVar14;
      iVar36 = (int)plVar23 + (iVar34 + (int)plVar27 * iVar8 >> 0xe);
      if (unaff_w27 <= iVar36) {
        iVar36 = unaff_w27;
      }
      if (iVar36 < -0x7fff) {
        iVar36 = unaff_w28;
      }
      **(undefined2 **)(unaff_x22 + 0x6c) = (short)iVar36;
      iVar36 = (*(int *)(unaff_x22 + 0xc) + *(int *)(unaff_x22 + 0x14)) * *(int *)unaff_x21 +
               *(int *)(unaff_x21 + 4) * iVar8 + 0x2000 >> 0xe;
      if (unaff_w27 <= iVar36) {
        iVar36 = unaff_w27;
      }
      if (iVar36 < -0x7fff) {
        iVar36 = unaff_w28;
      }
      *unaff_x20 = (short)iVar36;
      lVar17 = *(long *)(unaff_x22 + 0x6c);
      *(long *)(unaff_x22 + 0x6c) = lVar17 + 2;
      uVar32 = *(short *)(unaff_x22 + 0x5c) + 1;
      *(ushort *)(unaff_x22 + 0x5c) = uVar32;
      *(undefined2 *)((long)puVar21 + (ulong)uVar32 * 2) = *(undefined2 *)(lVar17 + 2);
      bVar19 = *(byte *)(unaff_x22 + 0x521);
      uVar13 = bVar19 | 0xffffff00;
      if (-1 < (char)bVar19) {
        uVar13 = (uint)bVar19;
      }
      iVar8 = (int)*(char *)(unaff_x22 + 0x523) *
              (int)*(short *)((long)puVar21 + (ulong)(*(ushort *)(unaff_x22 + 0x5c) + 2 & 0xf) * 2);
      iVar36 = *(int *)(unaff_x22 + 0x18) + ((int)(iVar34 + uVar13 * iVar8) >> 0xe);
      if (unaff_w27 <= iVar36) {
        iVar36 = unaff_w27;
      }
      if (iVar36 < -0x7fff) {
        iVar36 = unaff_w28;
      }
      **(undefined2 **)(unaff_x22 + 0x6c) = (short)iVar36;
      iVar36 = (*(int *)(unaff_x22 + 0x10) + *(int *)(unaff_x22 + 0x18)) * *(int *)(unaff_x21 + 2) +
               *(int *)(unaff_x21 + 6) * iVar8 + 0x2000 >> 0xe;
      if (unaff_w27 <= iVar36) {
        iVar36 = unaff_w27;
      }
      if (iVar36 < -0x7fff) {
        iVar36 = unaff_w28;
      }
      unaff_x20[1] = (short)iVar36;
      uVar33 = *(long *)(unaff_x22 + 0x6c) + 2;
      *(ulong *)(unaff_x22 + 0x6c) = uVar33;
      if (*(ulong *)(unaff_x22 + 0x74) <= uVar33) {
        *(undefined8 *)(unaff_x22 + 0x6c) = *(undefined8 *)(unaff_x22 + 100);
      }
      unaff_x20 = unaff_x20 + 2;
      *(ushort *)(unaff_x22 + 0x5c) = *(short *)(unaff_x22 + 0x5c) + 1U & 0xf;
      if (unaff_x25 <= unaff_x20) {
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar13 = *(uint *)(unaff_x29 + -4);
                if ((uVar13 & 0xffff) == 0) {
                  if (((byte)unaff_x21[0xb] != 0) &&
                     (iVar34 = *(int *)(unaff_x21 + 8) -
                               *(int *)(*(long *)(unaff_x21 + 0x10) + 0x28),
                     piVar22 = *(int **)(unaff_x19 + 8), *(int *)(unaff_x21 + 8) = iVar34,
                     *(int *)(*(long *)(unaff_x21 + 0x10) + 0x30) * 0x3f < *piVar22 - iVar34)) {
                    *(byte *)(unaff_x21 + 0xb) = 0;
                  }
                  *(undefined2 *)(unaff_x22 + 2) = 0;
                  return;
                }
                unaff_x20 = *(short **)(unaff_x19 + 0x10);
                *(short *)(unaff_x22 + 2) = (short)uVar13;
                uVar28 = 0;
LAB_03f85810:
                uVar32 = unaff_x21[0xc];
                *(uint *)(unaff_x29 + -4) = uVar28;
                lVar17 = (long)(int)(-(uVar13 >> 0xf & 1) & 0xfffe0000 | (uVar13 & 0xffff) << 1);
                if ((byte)uVar32 == 0) break;
                memset(unaff_x20,0,lVar17 << 1);
                FUN_03f860a0();
              }
              unaff_x25 = unaff_x20 + lVar17;
              sVar7 = (short)uVar13;
              if (*(char *)(unaff_x22 + 0x81) != '\0') break;
              if (*(char *)(unaff_x22 + 0x80) == '\0') {
                if (0 < sVar7) {
                  do {
                    *unaff_x24 = 0;
                    unaff_x24[1] = 0;
                    FUN_03f860a0();
                    iVar36 = *(int *)(unaff_x22 + 0x14);
                    iVar8 = *(int *)(unaff_x22 + 0xc);
                    *(undefined2 *)(unaff_x26 + (ulong)*(ushort *)(unaff_x22 + 0x5c) * 2) =
                         **(undefined2 **)(unaff_x22 + 0x6c);
                    iVar36 = (iVar8 + iVar36) * *(int *)unaff_x21 +
                             (int)*(char *)(unaff_x22 + 0x523) *
                             (int)*(short *)(unaff_x26 +
                                            (ulong)(*(ushort *)(unaff_x22 + 0x5c) + 2 & 0xf) * 2) *
                             *(int *)(unaff_x21 + 4) + 0x2000 >> 0xe;
                    if (unaff_w27 <= iVar36) {
                      iVar36 = unaff_w27;
                    }
                    if (iVar36 < -0x7fff) {
                      iVar36 = unaff_w28;
                    }
                    *unaff_x20 = (short)iVar36;
                    lVar17 = *(long *)(unaff_x22 + 0x6c);
                    iVar36 = *(int *)(unaff_x22 + 0x18);
                    iVar8 = *(int *)(unaff_x22 + 0x10);
                    *(long *)(unaff_x22 + 0x6c) = lVar17 + 2;
                    uVar32 = *(short *)(unaff_x22 + 0x5c) + 1;
                    *(ushort *)(unaff_x22 + 0x5c) = uVar32;
                    *(undefined2 *)(unaff_x26 + (ulong)uVar32 * 2) = *(undefined2 *)(lVar17 + 2);
                    iVar36 = (iVar8 + iVar36) * *(int *)(unaff_x21 + 2) +
                             (int)*(char *)(unaff_x22 + 0x523) *
                             (int)*(short *)(unaff_x26 +
                                            (ulong)(*(ushort *)(unaff_x22 + 0x5c) + 2 & 0xf) * 2) *
                             *(int *)(unaff_x21 + 6) + 0x2000 >> 0xe;
                    if (unaff_w27 <= iVar36) {
                      iVar36 = unaff_w27;
                    }
                    if (iVar36 < -0x7fff) {
                      iVar36 = unaff_w28;
                    }
                    unaff_x20[1] = (short)iVar36;
                    uVar33 = *(long *)(unaff_x22 + 0x6c) + 2;
                    *(ulong *)(unaff_x22 + 0x6c) = uVar33;
                    if (*(ulong *)(unaff_x22 + 0x74) <= uVar33) {
                      *(undefined8 *)(unaff_x22 + 0x6c) = *(undefined8 *)(unaff_x22 + 100);
                    }
                    unaff_x20 = unaff_x20 + 2;
                    *(ushort *)(unaff_x22 + 0x5c) = *(short *)(unaff_x22 + 0x5c) + 1U & 0xf;
                  } while (unaff_x20 < unaff_x25);
                }
              }
              else if (0 < sVar7) {
                do {
                  *unaff_x24 = 0;
                  unaff_x24[1] = 0;
                  FUN_03f860a0();
                  lVar17 = unaff_x19 + 0x10058;
                  *(undefined2 *)(lVar17 + (ulong)*(ushort *)(unaff_x22 + 0x5c) * 2) =
                       **(undefined2 **)(unaff_x22 + 0x6c);
                  uVar32 = *(ushort *)(unaff_x22 + 0x5c);
                  uVar13 = (uint)uVar32;
                  iVar36 = (*(int *)(unaff_x22 + 0xc) + *(int *)(unaff_x22 + 0x14)) *
                           *(int *)unaff_x21 +
                           *(int *)(unaff_x21 + 4) *
                           ((int)*(char *)(unaff_x22 + 0x523) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 2) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x533) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 4) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x543) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 6) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x553) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 8) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x563) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 10) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x573) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 0xc) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x583) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 0xe) & 0xf) * 2) +
                           (int)*(char *)(unaff_x22 + 0x593) *
                           (int)*(short *)(lVar17 + (ulong)(uint)uVar32 * 2)) + 0x2000 >> 0xe;
                  if (unaff_w27 <= iVar36) {
                    iVar36 = unaff_w27;
                  }
                  if (iVar36 < -0x7fff) {
                    iVar36 = unaff_w28;
                  }
                  *unaff_x20 = (short)iVar36;
                  lVar18 = *(long *)(unaff_x22 + 0x6c);
                  *(long *)(unaff_x22 + 0x6c) = lVar18 + 2;
                  uVar32 = *(short *)(unaff_x22 + 0x5c) + 1;
                  *(ushort *)(unaff_x22 + 0x5c) = uVar32;
                  *(undefined2 *)(lVar17 + (ulong)uVar32 * 2) = *(undefined2 *)(lVar18 + 2);
                  uVar32 = *(ushort *)(unaff_x22 + 0x5c);
                  uVar13 = (uint)uVar32;
                  iVar36 = (*(int *)(unaff_x22 + 0x10) + *(int *)(unaff_x22 + 0x18)) *
                           *(int *)(unaff_x21 + 2) +
                           *(int *)(unaff_x21 + 6) *
                           ((int)*(char *)(unaff_x22 + 0x523) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 2) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x533) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 4) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x543) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 6) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x553) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 8) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x563) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 10) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x573) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar13 + 0xc) & 0xf) * 2) +
                            (int)*(char *)(unaff_x22 + 0x583) *
                            (int)*(short *)(lVar17 + ((ulong)(uVar32 + 0xe) & 0xf) * 2) +
                           (int)*(char *)(unaff_x22 + 0x593) *
                           (int)*(short *)(lVar17 + (ulong)(uint)uVar32 * 2)) + 0x2000 >> 0xe;
                  if (unaff_w27 <= iVar36) {
                    iVar36 = unaff_w27;
                  }
                  if (iVar36 < -0x7fff) {
                    iVar36 = unaff_w28;
                  }
                  unaff_x20[1] = (short)iVar36;
                  uVar33 = *(long *)(unaff_x22 + 0x6c) + 2;
                  *(ulong *)(unaff_x22 + 0x6c) = uVar33;
                  if (*(ulong *)(unaff_x22 + 0x74) <= uVar33) {
                    *(undefined8 *)(unaff_x22 + 0x6c) = *(undefined8 *)(unaff_x22 + 100);
                  }
                  unaff_x20 = unaff_x20 + 2;
                  *(ushort *)(unaff_x22 + 0x5c) = *(short *)(unaff_x22 + 0x5c) + 1U & 0xf;
                } while (unaff_x20 < unaff_x25);
              }
            }
            if (*(char *)(unaff_x22 + 0x80) == '\0') break;
            if (0 < sVar7) {
              do {
                *unaff_x24 = 0;
                unaff_x24[1] = 0;
                FUN_03f860a0();
                puVar14 = (ushort *)(unaff_x19 + 0x10058);
                puVar14[*(ushort *)(unaff_x22 + 0x5c)] = **(ushort **)(unaff_x22 + 0x6c);
                uVar32 = *(ushort *)(unaff_x22 + 0x5c);
                uVar12 = (uint)uVar32;
                bVar19 = *(byte *)(unaff_x22 + 0x521);
                uVar13 = bVar19 | 0xffffff00;
                if (-1 < (char)bVar19) {
                  uVar13 = (uint)bVar19;
                }
                iVar8 = (int)*(char *)(unaff_x22 + 0x523) *
                        (int)(short)puVar14[(ulong)(uVar32 + 2) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x533) *
                        (int)(short)puVar14[(ulong)(uVar32 + 4) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x543) *
                        (int)(short)puVar14[(ulong)(uVar12 + 6) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x553) *
                        (int)(short)puVar14[(ulong)(uVar12 + 8) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x563) *
                        (int)(short)puVar14[(ulong)(uVar12 + 10) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x573) *
                        (int)(short)puVar14[(ulong)(uVar12 + 0xc) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x583) *
                        (int)(short)puVar14[(ulong)(uVar32 + 0xe) & 0xf] +
                        (int)*(char *)(unaff_x22 + 0x593) * (int)(short)puVar14[(uint)uVar32];
                iVar36 = *(int *)(unaff_x22 + 0x14) + ((int)(iVar34 + uVar13 * iVar8) >> 0xe);
                if (unaff_w27 <= iVar36) {
                  iVar36 = unaff_w27;
                }
                if (iVar36 < -0x7fff) {
                  iVar36 = unaff_w28;
                }
                **(undefined2 **)(unaff_x22 + 0x6c) = (short)iVar36;
                iVar36 = (*(int *)(unaff_x22 + 0xc) + *(int *)(unaff_x22 + 0x14)) *
                         *(int *)unaff_x21 + *(int *)(unaff_x21 + 4) * iVar8 + 0x2000 >> 0xe;
                if (unaff_w27 <= iVar36) {
                  iVar36 = unaff_w27;
                }
                if (iVar36 < -0x7fff) {
                  iVar36 = unaff_w28;
                }
                *unaff_x20 = (short)iVar36;
                plVar16 = *(long **)(unaff_x22 + 0x6c);
                *(undefined2 **)(unaff_x22 + 0x6c) = (undefined2 *)((long)plVar16 + 2);
code_r0x03f859e0:
                uVar32 = *(short *)(unaff_x22 + 0x5c) + 1;
                *(ushort *)(unaff_x22 + 0x5c) = uVar32;
                puVar14[uVar32] = *(ushort *)((long)plVar16 + 2);
                uVar32 = *(ushort *)(unaff_x22 + 0x5c);
                uVar13 = (uint)uVar32;
                bVar19 = *(byte *)(unaff_x22 + 0x521);
                iVar36 = (int)*(char *)(unaff_x22 + 0x523) *
                         (int)(short)puVar14[(ulong)(uVar32 + 2) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x533) *
                         (int)(short)puVar14[(ulong)(uVar32 + 4) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x543) *
                         (int)(short)puVar14[(ulong)(uVar13 + 6) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x553) *
                         (int)(short)puVar14[(ulong)(uVar13 + 8) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x563) *
                         (int)(short)puVar14[(ulong)(uVar13 + 10) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x573) *
                         (int)(short)puVar14[(ulong)(uVar13 + 0xc) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x583) *
                         (int)(short)puVar14[(ulong)(uVar32 + 0xe) & 0xf] +
                         (int)*(char *)(unaff_x22 + 0x593) * (int)(short)puVar14[(uint)uVar32];
                uVar13 = bVar19 | 0xffffff00;
                if (-1 < (char)bVar19) {
                  uVar13 = (uint)bVar19;
                }
                iVar8 = *(int *)(unaff_x22 + 0x18) + ((int)(iVar34 + uVar13 * iVar36) >> 0xe);
                if (unaff_w27 <= iVar8) {
                  iVar8 = unaff_w27;
                }
                if (iVar8 < -0x7fff) {
                  iVar8 = unaff_w28;
                }
                **(undefined2 **)(unaff_x22 + 0x6c) = (short)iVar8;
                iVar36 = (*(int *)(unaff_x22 + 0x10) + *(int *)(unaff_x22 + 0x18)) *
                         *(int *)(unaff_x21 + 2) + *(int *)(unaff_x21 + 6) * iVar36 + 0x2000 >> 0xe;
                if (unaff_w27 <= iVar36) {
                  iVar36 = unaff_w27;
                }
                if (iVar36 < -0x7fff) {
                  iVar36 = unaff_w28;
                }
                unaff_x20[1] = (short)iVar36;
                uVar33 = *(long *)(unaff_x22 + 0x6c) + 2;
                *(ulong *)(unaff_x22 + 0x6c) = uVar33;
                if (*(ulong *)(unaff_x22 + 0x74) <= uVar33) {
                  *(undefined8 *)(unaff_x22 + 0x6c) = *(undefined8 *)(unaff_x22 + 100);
                }
                unaff_x20 = unaff_x20 + 2;
                *(ushort *)(unaff_x22 + 0x5c) = *(short *)(unaff_x22 + 0x5c) + 1U & 0xf;
              } while (unaff_x20 < unaff_x25);
            }
          }
        } while (sVar7 < 1);
      }
      *unaff_x24 = 0;
      unaff_x24[1] = 0;
      FUN_03f860a0();
      puVar21 = (uint *)(unaff_x19 + 0x10058);
      plVar23 = (long *)(ulong)*(uint *)(unaff_x22 + 0x14);
      *(undefined2 *)((long)puVar21 + (ulong)*(ushort *)(unaff_x22 + 0x5c) * 2) =
           **(undefined2 **)(unaff_x22 + 0x6c);
      plVar16 = (long *)(long)*(char *)(unaff_x22 + 0x523);
      bVar19 = *(byte *)(unaff_x22 + 0x521);
      uVar13 = bVar19 | 0xffffff00;
      if (-1 < (char)bVar19) {
        uVar13 = (uint)bVar19;
      }
      plVar27 = (long *)(ulong)uVar13;
      puVar14 = (ushort *)
                (long)*(short *)((long)puVar21 +
                                (ulong)(*(ushort *)(unaff_x22 + 0x5c) + 2 & 0xf) * 2);
    } while( true );
  case (long *)0xcb:
    goto code_r0x03f859e0;
  case (long *)0xcd:
    if (-1 < (int)-uVar30) {
      uVar30 = -(-uVar30 & 0x7fff);
    }
    uVar13 = (uint)puVar21;
    if (uVar30 < 0x4001) {
      uVar13 = uVar11;
    }
    *(short *)plVar16 = (short)uVar13;
    uVar13 = (uint)*(ushort *)(unaff_x22 + 2);
    unaff_x26 = unaff_x19 + 0x10058;
    goto LAB_03f85810;
  case (long *)0xcf:
code_r0x03f855e0:
    puVar14[0x22a] = puVar14[0x229] + (short)plVar16;
    return;
  case (long *)0xd1:
code_r0x03f853e0:
    *(byte *)(puVar14 + 0x1d) = (byte)puVar21;
    if ((bool)in_ZR) {
      return;
    }
    *(byte *)(puVar14 + 0x1c) = (byte)puVar14[0x1c] | (byte)plVar16;
    FUN_03f87f60();
    return;
  case (long *)0xd3:
    goto LAB_03f852e0;
  case (long *)0xd5:
code_r0x03f851e0:
    *(char *)((long)param_1 + 0x104b4) = (char)plVar16;
    *(byte *)((long)param_1 + 0x10544) = bVar19 & 0x80;
    return;
  case (long *)0xd7:
    goto code_r0x03f850e0;
  case (long *)0xd9:
    return;
  case (long *)0xdb:
    goto code_r0x03f84fe0;
  case (long *)0xe5:
    goto code_r0x03f84e80;
  case (long *)0xe7:
    goto code_r0x03f84e60;
  }
  return;
}

