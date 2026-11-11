
ushort * FUN_003de9b8(ushort *param_1,ushort *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  char cVar12;
  long lVar13;
  ushort *puVar14;
  
  lVar13 = *(long *)(param_2 + 0xec);
  cVar3 = (char)param_4;
  uVar7 = (ushort)param_5;
  if (param_3 < 0x100) {
    switch(param_3) {
    case 0x81:
      if ((int)param_4 < 0x10000) {
        *(uint *)(param_2 + 0x96) = param_4 & 0xffff;
        return param_1;
      }
      break;
    case 0x88:
      param_1 = (ushort *)FUN_003c6670(lVar13,param_4);
      if ((param_1 != (ushort *)0x0) && (param_1 != param_2)) {
        FUN_003bdc00(param_1);
        FUN_003bdc6c(param_1,*(undefined8 *)(param_2 + 0x34),param_5);
        puVar14 = (ushort *)FUN_003bdc78(param_1);
        return puVar14;
      }
      break;
    case 0x89:
      *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x34) + (long)(int)param_4;
      return param_1;
    case 0x8a:
      uVar10 = (ulong)(byte)param_2[0x90];
      if (uVar10 < 10) {
        puVar14 = param_2 + 0x34;
        lVar13 = *(long *)puVar14;
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        *(undefined1 *)(puVar14 + uVar10 * 8 + 0xc) = 0;
        *(undefined8 *)(puVar14 + uVar10 * 8 + 0x10) = uVar9;
        *(char *)(param_2 + 0x90) = (char)param_2[0x90] + '\x01';
        *(long *)(param_2 + 0x38) = lVar13 + (int)param_4;
        return param_1;
      }
      break;
    case 0xb0:
      *(char *)(lVar13 + 0x111) = cVar3;
      return param_1;
    case 0xb1:
      param_2[0xd2] = (ushort)param_4 & 0xff;
      return param_1;
    case 0xb2:
      *(bool *)((long)param_2 + 0x7b) = param_4 != 0;
      if (param_4 != 0) goto LAB_003dedc0;
      break;
    case 0xb3:
      *(char *)(param_2 + 0xcc) = cVar3;
      return param_1;
    case 0xb4:
      *(char *)(param_2 + 0xd3) = cVar3;
      return param_1;
    case 0xb5:
      *(float *)(param_2 + 0xd8) = (float)(int)param_4 / 127.0;
      return param_1;
    case 0xb6:
      *(char *)((long)param_2 + 299) = cVar3;
      return param_1;
    case 0xbd:
      *(char *)(param_2 + 0xb1) = cVar3;
      return param_1;
    case 0xbe:
      *(char *)((long)param_2 + 0x161) = cVar3;
      return param_1;
    case 0xbf:
      *(bool *)((long)param_2 + 0x121) = param_4 != 0;
      return param_1;
    case 0xc0:
      uVar6 = param_2[0xa1];
      if ((short)param_2[0xa2] < (short)uVar6) {
        cVar12 = '\0';
        if ((short)uVar6 != 0) {
          cVar12 = (char)((((int)*(char *)((long)param_2 + 0x141) - (int)(char)param_2[0xa0]) *
                          (int)(short)param_2[0xa2]) / (int)(short)uVar6);
        }
        cVar12 = (char)param_2[0xa0] + cVar12;
      }
      else {
        cVar12 = *(char *)((long)param_2 + 0x141);
      }
      *(char *)(param_2 + 0xa0) = cVar12;
      *(char *)((long)param_2 + 0x141) = cVar3 + -0x40;
      param_2[0xa1] = uVar7;
      param_2[0xa2] = 0;
      return param_1;
    case 0xc1:
      uVar6 = param_2[0x9b];
      if ((short)param_2[0x9c] < (short)uVar6) {
        cVar12 = '\0';
        if ((short)uVar6 != 0) {
          cVar12 = (char)((int)(((uint)*(byte *)((long)param_2 + 0x135) - (uint)(byte)param_2[0x9a])
                               * (int)(short)param_2[0x9c]) / (int)(short)uVar6);
        }
        cVar12 = (byte)param_2[0x9a] + cVar12;
      }
      else {
        cVar12 = *(char *)((long)param_2 + 0x135);
      }
      *(char *)(param_2 + 0x9a) = cVar12;
      *(char *)((long)param_2 + 0x135) = cVar3;
      param_2[0x9b] = uVar7;
      param_2[0x9c] = 0;
      return param_1;
    case 0xc2:
      sVar5 = *(short *)(lVar13 + 0x116);
      if (*(short *)(lVar13 + 0x118) < sVar5) {
        cVar12 = '\0';
        if (sVar5 != 0) {
          cVar12 = (char)((int)(((uint)*(byte *)(lVar13 + 0x115) - (uint)*(byte *)(lVar13 + 0x114))
                               * (int)*(short *)(lVar13 + 0x118)) / (int)sVar5);
        }
        cVar12 = *(byte *)(lVar13 + 0x114) + cVar12;
      }
      else {
        cVar12 = *(char *)(lVar13 + 0x115);
      }
      *(char *)(lVar13 + 0x114) = cVar12;
      *(char *)(lVar13 + 0x115) = cVar3;
      *(ushort *)(lVar13 + 0x116) = uVar7;
      *(undefined2 *)(lVar13 + 0x118) = 0;
      return param_1;
    case 0xc3:
      *(char *)(param_2 + 0xce) = cVar3;
      return param_1;
    case 0xc4:
      uVar6 = param_2[0xa7];
      if ((short)param_2[0xa8] < (short)uVar6) {
        cVar12 = '\0';
        if ((short)uVar6 != 0) {
          cVar12 = (char)((((int)*(char *)((long)param_2 + 0x14d) - (int)(char)param_2[0xa6]) *
                          (int)(short)param_2[0xa8]) / (int)(short)uVar6);
        }
        cVar12 = (char)param_2[0xa6] + cVar12;
      }
      else {
        cVar12 = *(char *)((long)param_2 + 0x14d);
      }
      *(char *)(param_2 + 0xa6) = cVar12;
      *(char *)((long)param_2 + 0x14d) = cVar3;
      param_2[0xa7] = uVar7;
      param_2[0xa8] = 0;
      return param_1;
    case 0xc5:
      *(char *)((long)param_2 + 0x199) = cVar3;
      return param_1;
    case 0xc6:
      *(char *)((long)param_2 + 0x19d) = cVar3;
      return param_1;
    case 199:
      *(bool *)((long)param_2 + 0x79) = param_4 != 0;
      return param_1;
    case 200:
      *(bool *)(param_2 + 0x3d) = param_4 != 0;
LAB_003dedc0:
      FUN_003bdc90(param_2,0xffffffff);
      puVar14 = (ushort *)FUN_003bdd20(param_2);
      return puVar14;
    case 0xc9:
      *(char *)(param_2 + 0xcf) = (char)param_2[0xce] + cVar3;
      *(undefined1 *)((long)param_2 + 0x129) = 1;
      return param_1;
    case 0xca:
      *(float *)(param_2 + 0xaa) = (float)(param_4 & 0xff) * 0.0078125;
      return param_1;
    case 0xcb:
      *(float *)(param_2 + 0xac) = (float)(param_4 & 0xff) * 0.390625;
      return param_1;
    case 0xcc:
      *(char *)(param_2 + 0xca) = cVar3;
      return param_1;
    case 0xcd:
      *(char *)(param_2 + 0xb0) = cVar3;
      return param_1;
    case 0xce:
      *(bool *)((long)param_2 + 0x129) = param_4 != 0;
      return param_1;
    case 0xcf:
      *(char *)((long)param_2 + 0x19f) = cVar3;
      return param_1;
    case 0xd0:
      *(char *)(param_2 + 0xd0) = cVar3;
      return param_1;
    case 0xd1:
      *(char *)((long)param_2 + 0x1a1) = cVar3;
      return param_1;
    case 0xd2:
      *(char *)(param_2 + 0xd1) = cVar3;
      return param_1;
    case 0xd3:
      *(char *)((long)param_2 + 0x1a3) = cVar3;
      return param_1;
    case 0xd4:
      uVar10 = (ulong)(byte)param_2[0x90];
      if (uVar10 < 10) {
        uVar9 = *(undefined8 *)(param_2 + 0x38);
        *(char *)((long)param_2 + uVar10 * 0x10 + 0x81) = cVar3;
        *(undefined8 *)(param_2 + uVar10 * 8 + 0x44) = uVar9;
        *(undefined1 *)(param_2 + uVar10 * 8 + 0x40) = 1;
        *(char *)(param_2 + 0x90) = (char)param_2[0x90] + '\x01';
        return param_1;
      }
      break;
    case 0xd5:
      uVar6 = param_2[0x9e];
      if ((short)param_2[0x9f] < (short)uVar6) {
        cVar12 = '\0';
        if ((short)uVar6 != 0) {
          cVar12 = (char)((int)(((uint)*(byte *)((long)param_2 + 0x13b) - (uint)(byte)param_2[0x9d])
                               * (int)(short)param_2[0x9f]) / (int)(short)uVar6);
        }
        cVar12 = (byte)param_2[0x9d] + cVar12;
      }
      else {
        cVar12 = *(char *)((long)param_2 + 0x13b);
      }
      *(char *)(param_2 + 0x9d) = cVar12;
      *(char *)((long)param_2 + 0x13b) = cVar3;
      param_2[0x9e] = uVar7;
      param_2[0x9f] = 0;
      return param_1;
    case 0xd6:
      if (DAT_04c69c00 != '\0') {
        if ((int)param_4 < 0x20) {
          puVar14 = (ushort *)FUN_003c689c(lVar13,param_4);
          return puVar14;
        }
        if (param_4 < 0x30) {
          puVar14 = (ushort *)FUN_003be77c(param_2,param_4 - 0x20);
          return puVar14;
        }
        return (ushort *)0x0;
      }
      break;
    case 0xd7:
      uVar6 = param_2[0xa4];
      if ((short)param_2[0xa5] < (short)uVar6) {
        cVar12 = '\0';
        if ((short)uVar6 != 0) {
          cVar12 = (char)((((int)*(char *)((long)param_2 + 0x147) - (int)(char)param_2[0xa3]) *
                          (int)(short)param_2[0xa5]) / (int)(short)uVar6);
        }
        cVar12 = (char)param_2[0xa3] + cVar12;
      }
      else {
        cVar12 = *(char *)((long)param_2 + 0x147);
      }
      *(char *)(param_2 + 0xa3) = cVar12;
      *(char *)((long)param_2 + 0x147) = cVar3;
      param_2[0xa4] = uVar7;
      param_2[0xa5] = 0;
      return param_1;
    case 0xd8:
      *(float *)(param_2 + 0xd6) = (float)(int)(param_4 - 0x40) * 0.015625;
      return param_1;
    case 0xd9:
      *(char *)(param_2 + 0xd4) = cVar3;
      return param_1;
    case 0xda:
      *(char *)((long)param_2 + 0x1a9) = cVar3;
      return param_1;
    case 0xdb:
      *(char *)((long)param_2 + 0x1a7) = cVar3;
      return param_1;
    case 0xdc:
      *(char *)(param_2 + 0xcd) = cVar3 + -0x40;
      return param_1;
    case 0xdd:
      puVar14 = (ushort *)FUN_003be5b0(param_2,param_4);
      return puVar14;
    case 0xde:
      *(char *)(param_2 + 0xd5) = cVar3;
      return param_1;
    case 0xdf:
      *(bool *)(param_2 + 0x95) = (param_4 & 0xc0) != 0;
      return param_1;
    case 0xe0:
      *(uint *)(param_2 + 0xae) = param_4 * 5;
      return param_1;
    case 0xe1:
      param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
      if (0x3fe < (int)param_4) {
        param_4 = 0x3ff;
      }
      *(short *)(lVar13 + 0x112) = (short)param_4;
      return param_1;
    case 0xe3:
      *(float *)(param_2 + 0x98) = (float)(int)param_4 * 0.015625;
      return param_1;
    case 0xe4:
      if (param_4 << 0x10 == 0) {
        param_2[0xac] = 0;
        param_2[0xad] = 0;
        return param_1;
      }
      *(float *)(param_2 + 0xac) = 100.0 / (float)((int)(param_4 << 0x10) >> 0x10);
      return param_1;
    case 0xfb:
      param_2[0xd0] = 0xffff;
      param_2[0xd1] = 0xffff;
      param_2[0xd2] = 0xff;
      return param_1;
    case 0xfc:
      bVar4 = (byte)param_2[0x90];
      if ((bVar4 != 0) && (uVar10 = (ulong)(bVar4 - 1), (char)param_2[uVar10 * 8 + 0x40] != '\0')) {
        pcVar11 = (char *)((long)param_2 + uVar10 * 0x10 + 0x81);
        cVar3 = *pcVar11;
        cVar12 = cVar3;
        if ((cVar3 == '\0') || (cVar12 = cVar3 + -1, cVar3 != '\x01')) {
          uVar9 = *(undefined8 *)(param_2 + uVar10 * 8 + 0x44);
          *pcVar11 = cVar12;
          *(undefined8 *)(param_2 + 0x38) = uVar9;
          return param_1;
        }
        *(byte *)(param_2 + 0x90) = bVar4 - 1;
        return param_1;
      }
      break;
    case 0xfd:
      uVar10 = (ulong)(byte)param_2[0x90];
      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffffffffffff) {
        *(char *)(param_2 + 0x90) = (char)uVar10;
        if ((char)param_2[(uVar10 & 0xff) * 8 + 0x40] == '\0') {
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + (uVar10 & 0xff) * 8 + 0x44);
          return param_1;
        }
      }
    }
  }
  else if (param_3 >> 0x10 == 0) {
    if ((param_3 & 0xe0 | 0x10) == 0x90) {
      if ((int)param_4 < 0x20) {
        param_1 = (ushort *)FUN_003c689c(lVar13,param_4);
      }
      else {
        if (0x2f < param_4) {
          return param_1;
        }
        param_1 = (ushort *)FUN_003be77c(param_2,param_4 - 0x20);
      }
      puVar14 = param_1;
      if (param_1 == (ushort *)0x0) {
        return (ushort *)0x0;
      }
    }
    else {
      puVar14 = (ushort *)0x0;
    }
    switch(param_3 & 0xff) {
    case 0x80:
      *puVar14 = uVar7;
      return param_1;
    case 0x81:
      *puVar14 = *puVar14 + uVar7;
      return param_1;
    case 0x82:
      *puVar14 = *puVar14 - uVar7;
      return param_1;
    case 0x83:
      *puVar14 = *puVar14 * uVar7;
      return param_1;
    case 0x84:
      if (param_5 != 0) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = (short)*puVar14 / (short)uVar7;
        }
        *puVar14 = uVar6;
        return param_1;
      }
      break;
    case 0x85:
      if ((int)param_5 < 0) {
        *puVar14 = (ushort)((int)(short)*puVar14 >> (-param_5 & 0x1f));
        return param_1;
      }
      *puVar14 = *puVar14 << (ulong)(param_5 & 0x1f);
      return param_1;
    case 0x86:
      puVar8 = (ushort *)FUN_003b7f88();
      uVar1 = (uint)puVar8 & 0xffff;
      uVar2 = (int)(short)-uVar7;
      if (-1 < (int)param_5) {
        uVar2 = param_5;
      }
      uVar7 = (ushort)(uVar1 + uVar1 * uVar2 >> 0x10);
      uVar6 = -uVar7;
      if (-1 < (int)param_5) {
        uVar6 = uVar7;
      }
      *puVar14 = uVar6;
      return puVar8;
    case 0x87:
      *puVar14 = *puVar14 & uVar7;
      return param_1;
    case 0x88:
      *puVar14 = *puVar14 | uVar7;
      return param_1;
    case 0x89:
      *puVar14 = *puVar14 ^ uVar7;
      return param_1;
    case 0x8a:
      *puVar14 = ~uVar7;
      return param_1;
    case 0x8b:
      if (param_5 != 0) {
        sVar5 = 0;
        if (param_5 != 0) {
          sVar5 = (short)((int)(short)*puVar14 / (int)param_5);
        }
        *puVar14 = *puVar14 - sVar5 * uVar7;
        return param_1;
      }
      break;
    case 0x90:
      *(bool *)(param_2 + 0x3c) = (int)(short)*puVar14 == param_5;
      return param_1;
    case 0x91:
      *(bool *)(param_2 + 0x3c) = (int)param_5 <= (int)(short)*puVar14;
      return param_1;
    case 0x92:
      *(bool *)(param_2 + 0x3c) = (int)param_5 < (int)(short)*puVar14;
      return param_1;
    case 0x93:
      *(bool *)(param_2 + 0x3c) = (int)(short)*puVar14 <= (int)param_5;
      return param_1;
    case 0x94:
      *(bool *)(param_2 + 0x3c) = (int)(short)*puVar14 < (int)param_5;
      return param_1;
    case 0x95:
      *(bool *)(param_2 + 0x3c) = (int)(short)*puVar14 != param_5;
      return param_1;
    case 0xa0:
      *(char *)((long)param_2 + 0x171) = cVar3;
      return param_1;
    case 0xa1:
      *(char *)(param_2 + 0xb9) = cVar3;
      return param_1;
    case 0xa2:
      *(float *)(param_2 + 0xb2) = (float)(param_4 & 0xff) * 0.0078125;
      return param_1;
    case 0xa3:
      *(float *)(param_2 + 0xb4) = (float)(param_4 & 0xff) * 0.390625;
      return param_1;
    case 0xa4:
      *(char *)((long)param_2 + 0x195) = cVar3;
      return param_1;
    case 0xa5:
      *(char *)(param_2 + 0xb8) = cVar3;
      return param_1;
    case 0xa6:
      *(char *)((long)param_2 + 0x181) = cVar3;
      return param_1;
    case 0xa7:
      *(char *)(param_2 + 0xc1) = cVar3;
      return param_1;
    case 0xa8:
      *(float *)(param_2 + 0xba) = (float)(param_4 & 0xff) * 0.0078125;
      return param_1;
    case 0xa9:
      *(float *)(param_2 + 0xbc) = (float)(param_4 & 0xff) * 0.390625;
      return param_1;
    case 0xaa:
      *(char *)(param_2 + 0xcb) = cVar3;
      return param_1;
    case 0xab:
      *(char *)(param_2 + 0xc0) = cVar3;
      return param_1;
    case 0xac:
      *(char *)((long)param_2 + 0x191) = cVar3;
      return param_1;
    case 0xad:
      *(char *)(param_2 + 0xc9) = cVar3;
      return param_1;
    case 0xae:
      *(float *)(param_2 + 0xc2) = (float)(param_4 & 0xff) * 0.0078125;
      return param_1;
    case 0xaf:
      *(float *)(param_2 + 0xc4) = (float)(param_4 & 0xff) * 0.390625;
      return param_1;
    case 0xb0:
      *(char *)((long)param_2 + 0x197) = cVar3;
      return param_1;
    case 0xb1:
      *(char *)(param_2 + 200) = cVar3;
      return param_1;
    case 0xe0:
      puVar14 = (ushort *)FUN_003c6820(lVar13,param_4,param_2);
      return puVar14;
    case 0xe1:
      *(uint *)(param_2 + 0xb6) = param_4 * 5;
      return param_1;
    case 0xe2:
      if (param_4 << 0x10 == 0) {
        param_2[0xb4] = 0;
        param_2[0xb5] = 0;
        return param_1;
      }
      *(float *)(param_2 + 0xb4) = 100.0 / (float)((int)(param_4 << 0x10) >> 0x10);
      return param_1;
    case 0xe3:
      *(uint *)(param_2 + 0xbe) = param_4 * 5;
      return param_1;
    case 0xe4:
      if (param_4 << 0x10 == 0) {
        param_2[0xbc] = 0;
        param_2[0xbd] = 0;
        return param_1;
      }
      *(float *)(param_2 + 0xbc) = 100.0 / (float)((int)(param_4 << 0x10) >> 0x10);
      return param_1;
    case 0xe5:
      *(uint *)(param_2 + 0xc6) = param_4 * 5;
      return param_1;
    case 0xe6:
      if (param_4 << 0x10 == 0) {
        param_2[0xc4] = 0;
        param_2[0xc5] = 0;
        return param_1;
      }
      *(float *)(param_2 + 0xc4) = 100.0 / (float)((int)(param_4 << 0x10) >> 0x10);
      return param_1;
    }
  }
  return param_1;
}

