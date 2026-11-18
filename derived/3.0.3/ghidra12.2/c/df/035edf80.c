
void FUN_035edf80(long param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)(param_1 + 0xc08);
  if ((*(char *)(lVar7 + 0x14b) != '\x01') &&
     (((*(char *)(lVar7 + 0x14b) != '3' || (*(char *)(lVar7 + 0x144) != '0')) ||
      (*(char *)(lVar7 + 0x145) != '1')))) {
LAB_035ee1dc:
    uVar8 = 0x7c;
    goto LAB_035ee20c;
  }
  cVar3 = *(char *)(lVar7 + 0x137);
  bVar1 = *(char *)(lVar7 + 0x135) + *(char *)(lVar7 + 0x134) + *(char *)(lVar7 + 0x136) + cVar3 +
          *(char *)(lVar7 + 0x138) + *(char *)(lVar7 + 0x139) + *(char *)(lVar7 + 0x13a) +
          *(char *)(lVar7 + 0x13b) + *(char *)(lVar7 + 0x13c) + *(char *)(lVar7 + 0x13d) +
          *(char *)(lVar7 + 0x13e) +
          *(char *)(lVar7 + 0x13f) + *(char *)(lVar7 + 0x140) + *(char *)(lVar7 + 0x141) +
          *(char *)(lVar7 + 0x142) + *(char *)(lVar7 + 0x143);
  if (bVar1 < 0xa5) {
    switch(bVar1) {
    case 0xd:
      if (cVar3 == 'E') {
        uVar8 = 0x6c;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'R') {
        uVar8 = 0x87;
        goto LAB_035ee20c;
      }
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      break;
    case 0x18:
      if (cVar3 == 'I') goto LAB_035ee1dc;
joined_r0x035ee1f0:
      if (cVar3 == 'K') {
        uVar8 = 0xac;
        goto LAB_035ee20c;
      }
      break;
    case 0x27:
      if (cVar3 == 'B') {
LAB_035ee3b0:
        uVar8 = 0xa8;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'N') {
LAB_035ee3a8:
        uVar8 = 0xae;
        goto LAB_035ee20c;
      }
      break;
    case 0x28:
      if (cVar3 == 'A') {
LAB_035ee3a0:
        uVar8 = 0x13;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'F') {
        uVar8 = 0x6e;
        goto LAB_035ee20c;
      }
      break;
    default:
      switch(bVar1) {
      case 0x46:
        if (cVar3 == 'E') {
          uVar8 = 0x6a;
          goto LAB_035ee20c;
        }
        if (cVar3 == 'R') {
          uVar8 = 0xb4;
          goto LAB_035ee20c;
        }
        break;
      case 0x61:
        if (cVar3 == 'A') goto LAB_035ee3a8;
        if (cVar3 == 'E') {
          uVar8 = 0x2b;
          goto LAB_035ee20c;
        }
        break;
      case 0x66:
        if (cVar3 == 'E') {
LAB_035ee3b8:
          uVar8 = 100;
          goto LAB_035ee20c;
        }
        if (cVar3 == 'L') goto LAB_035ee1dc;
        break;
      case 0x6a:
        if (cVar3 == 'I') {
          uVar8 = 0x65;
          goto LAB_035ee20c;
        }
        goto joined_r0x035ee1f0;
      }
    }
  }
  else {
    switch(bVar1) {
    case 0xa5:
      if (cVar3 == 'A') goto LAB_035ee3a0;
      if (cVar3 == 'R') {
        uVar8 = 0x72;
        goto LAB_035ee20c;
      }
      break;
    case 0xa6:
    case 0xa7:
    case 0xa8:
    case 0xa9:
    case 0xaa:
    case 0xab:
    case 0xac:
    case 0xad:
    case 0xae:
    case 0xaf:
    case 0xb0:
    case 0xb1:
    case 0xb2:
    case 0xb4:
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xb9:
    case 0xba:
    case 0xbb:
    case 0xbc:
    case 0xbd:
    case 0xbe:
    case 0xc0:
    case 0xc1:
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
      break;
    case 0xb3:
      if (cVar3 == 'B') goto LAB_035ee3b0;
      if (cVar3 == 'R') {
        uVar8 = 0x85;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'U') {
        uVar8 = 0x60;
        goto LAB_035ee20c;
      }
      break;
    case 0xbf:
      if (cVar3 == ' ') {
        uVar8 = 0x6d;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'C') {
        uVar8 = 0xa2;
        goto LAB_035ee20c;
      }
      break;
    case 0xc6:
      if (cVar3 == ' ') goto LAB_035ee1dc;
      if (cVar3 == 'A') {
        uVar8 = 0xa0;
        goto LAB_035ee20c;
      }
      break;
    case 0xd3:
      if (cVar3 == 'I') {
        uVar8 = 0xb5;
        goto LAB_035ee20c;
      }
      if (cVar3 == 'R') {
        uVar8 = 0x2d;
        goto LAB_035ee20c;
      }
      break;
    default:
      if (bVar1 == 0xf4) {
        if (cVar3 == ' ') goto LAB_035ee3b8;
        if (cVar3 == '-') {
          uVar8 = 0xbc;
          goto LAB_035ee20c;
        }
      }
    }
  }
  uVar8 = (ulong)(byte)(&DAT_04192428)[bVar1];
LAB_035ee20c:
  uVar2 = *(uint *)(&USHORT_04190028 + uVar8 * 0x18);
  puVar6 = (ushort *)(param_1 + 0x26);
  *puVar6 = (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 |
            (ushort)(uVar2 >> 3) & 0x1f | 0x8000;
  uVar2 = *(uint *)(&USHORT_0419002c + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x28) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190030 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x2a) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190034 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x2c) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190038 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x6e) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_0419003c + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x70) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190040 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x72) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190044 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x74) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190048 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x76) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_0419004c + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x78) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190050 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x7a) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar2 = *(uint *)(&USHORT_04190054 + uVar8 * 0x18);
  *(ushort *)(param_1 + 0x7c) =
       (ushort)(uVar2 >> 9) & 0x7c00 | (ushort)(uVar2 >> 6) & 0x3e0 | (ushort)(uVar2 >> 3) & 0x1f |
       0x8000;
  uVar4 = puVar6[*(byte *)(param_1 + 0x1a)];
  uVar5 = puVar6[*(byte *)(param_1 + 0x1b)];
  *(ushort *)(param_1 + 0x1e) = puVar6[*(byte *)(param_1 + 0x19)];
  *(ushort *)(param_1 + 0x20) = uVar4;
  *(ushort *)(param_1 + 0x22) = uVar5;
  *(ushort *)(param_1 + 0x24) = puVar6[*(byte *)(param_1 + 0x1c)];
  return;
}

