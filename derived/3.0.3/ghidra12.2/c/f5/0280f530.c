
uint * FUN_0280f530(uint *param_1,ushort *param_2,undefined1 *param_3)

{
  ushort *puVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_68;
  undefined8 local_48;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  uVar5 = *param_2;
  bVar3 = (byte)param_2[1];
  bVar4 = *(byte *)((long)param_2 + 3);
  nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
  uVar6 = nn::time::IsValidDate
                    ((uint)(ushort)*param_1,(uint)*(byte *)((long)param_1 + 2),
                     (uint)*(byte *)((long)param_1 + 3));
  if ((uVar6 & 1) == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*param_1,(uint)*(byte *)((long)param_1 + 2),
                       (uint)*(byte *)((long)param_1 + 3));
    if ((uVar6 & 1) == 0) {
      uVar13 = 0xffffffff;
      uVar12 = 1;
    }
    else {
      uVar13 = 0xffffffff;
      uVar12 = 1;
      if ((((ushort)*param_1 == uVar5) && (*(byte *)((long)param_1 + 2) == bVar3)) &&
         (*(byte *)((long)param_1 + 3) == bVar4)) {
        return param_1;
      }
    }
  }
  puVar10 = param_1 + 0x1016;
  uVar6 = nn::time::IsValidDate
                    ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x405a),
                     (uint)*(byte *)((long)param_1 + 0x405b));
  if ((((uVar6 & 1) == 0) ||
      (uVar6 = nn::time::IsValidDate
                         ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x405a),
                          (uint)*(byte *)((long)param_1 + 0x405b)), uVar12 = uVar13,
      (uVar6 & 1) == 0)) ||
     (((ushort)*puVar10 != uVar5 ||
      ((*(byte *)((long)param_1 + 0x405a) != bVar3 || (*(byte *)((long)param_1 + 0x405b) != bVar4)))
      ))) {
    puVar10 = param_1 + 0x202c;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x80b2),
                       (uint)*(byte *)((long)param_1 + 0x80b3));
    if ((uVar6 & 1) == 0) {
      uVar13 = 2;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x80b2),
                         (uint)*(byte *)((long)param_1 + 0x80b3));
      if (((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
          (*(byte *)((long)param_1 + 0x80b2) == bVar3)) &&
         (*(byte *)((long)param_1 + 0x80b3) == bVar4)) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x3042;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0xc10a),
                       (uint)*(byte *)((long)param_1 + 0xc10b));
    if ((uVar6 & 1) == 0) {
      uVar13 = 3;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0xc10a),
                         (uint)*(byte *)((long)param_1 + 0xc10b));
      if ((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
         ((*(byte *)((long)param_1 + 0xc10a) == bVar3 &&
          (*(byte *)((long)param_1 + 0xc10b) == bVar4)))) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x4058;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x10162),
                       (uint)*(byte *)((long)param_1 + 0x10163));
    if ((uVar6 & 1) == 0) {
      uVar13 = 4;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x10162),
                         (uint)*(byte *)((long)param_1 + 0x10163));
      if ((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
         ((*(byte *)((long)param_1 + 0x10162) == bVar3 &&
          (*(byte *)((long)param_1 + 0x10163) == bVar4)))) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x506e;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x141ba),
                       (uint)*(byte *)((long)param_1 + 0x141bb));
    if ((uVar6 & 1) == 0) {
      uVar13 = 5;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x141ba),
                         (uint)*(byte *)((long)param_1 + 0x141bb));
      if (((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
          (*(byte *)((long)param_1 + 0x141ba) == bVar3)) &&
         (*(byte *)((long)param_1 + 0x141bb) == bVar4)) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x6084;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x18212),
                       (uint)*(byte *)((long)param_1 + 0x18213));
    if ((uVar6 & 1) == 0) {
      uVar13 = 6;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x18212),
                         (uint)*(byte *)((long)param_1 + 0x18213));
      if ((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
         ((*(byte *)((long)param_1 + 0x18212) == bVar3 &&
          (*(byte *)((long)param_1 + 0x18213) == bVar4)))) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x709a;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x1c26a),
                       (uint)*(byte *)((long)param_1 + 0x1c26b));
    if ((uVar6 & 1) == 0) {
      uVar13 = 7;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x1c26a),
                         (uint)*(byte *)((long)param_1 + 0x1c26b));
      if ((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
         ((*(byte *)((long)param_1 + 0x1c26a) == bVar3 &&
          (*(byte *)((long)param_1 + 0x1c26b) == bVar4)))) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x80b0;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x202c2),
                       (uint)*(byte *)((long)param_1 + 0x202c3));
    if ((uVar6 & 1) == 0) {
      uVar13 = 8;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x202c2),
                         (uint)*(byte *)((long)param_1 + 0x202c3));
      if (((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
          (*(byte *)((long)param_1 + 0x202c2) == bVar3)) &&
         (*(byte *)((long)param_1 + 0x202c3) == bVar4)) {
        return puVar10;
      }
    }
    puVar10 = param_1 + 0x90c6;
    uVar6 = nn::time::IsValidDate
                      ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x2431a),
                       (uint)*(byte *)((long)param_1 + 0x2431b));
    if ((uVar6 & 1) == 0) {
      uVar13 = 9;
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar12;
      }
      uVar12 = uVar13;
    }
    else {
      uVar6 = nn::time::IsValidDate
                        ((uint)(ushort)*puVar10,(uint)*(byte *)((long)param_1 + 0x2431a),
                         (uint)*(byte *)((long)param_1 + 0x2431b));
      if ((((uVar6 & 1) != 0) && ((ushort)*puVar10 == uVar5)) &&
         ((*(byte *)((long)param_1 + 0x2431a) == bVar3 &&
          (*(byte *)((long)param_1 + 0x2431b) == bVar4)))) {
        return puVar10;
      }
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    if (uVar12 == 0xffffffff) {
      uVar11 = 0;
      uVar6 = 0xffffffff;
      do {
        if (uVar6 == 0xffffffff) {
LAB_0280fba4:
          uVar6 = uVar11;
        }
        else {
          puVar10 = param_1 + uVar6 * 0x1016;
          if (9 < uVar6) {
            puVar10 = param_1;
          }
          nn::time::IsValidDate
                    ((uint)(ushort)*puVar10,(uint)*(byte *)((long)puVar10 + 2),
                     (uint)*(byte *)((long)puVar10 + 3));
          local_48 = FUN_0272eca4(puVar10,0);
          puVar10 = param_1 + (long)(int)uVar11 * 0x1016;
          nn::time::IsValidDate
                    ((uint)(ushort)*puVar10,(uint)*(byte *)((long)puVar10 + 2),
                     (uint)*(byte *)((long)puVar10 + 3));
          local_68 = FUN_0272eca4(puVar10,0);
          lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          if (lVar7 < lVar9) goto LAB_0280fba4;
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        }
        uVar2 = uVar11 + 1;
        uVar11 = uVar2 & 0xffffffff;
      } while ((int)uVar2 != 10);
      lVar9 = 0x200;
      puVar10 = param_1 + uVar6 * 0x1016;
      if (9 < uVar6) {
        puVar10 = param_1;
      }
      puVar10[0x114] = 0xffffffff;
      puVar10[0x112] = 0xffffffff;
      puVar10[0x113] = 0xffffffff;
      puVar10[0x110] = 0xffffffff;
      puVar10[0x111] = 0xffffffff;
      puVar8 = puVar10 + 0x11d;
      puVar10[0x16] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      puVar10[0x14] = 0;
      puVar10[0x15] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x2c] = 0;
      puVar10[0x2d] = 0;
      *(ushort *)(puVar10 + 0x2e) = 0;
      puVar10[0x34] = 0;
      puVar10[0x35] = 0;
      puVar10[0x36] = 0;
      *(ushort *)(puVar10 + 0x4e) = 0;
      puVar10[0x38] = 0;
      puVar10[0x39] = 0;
      puVar10[0x56] = 0;
      puVar10[0x50] = 0;
      puVar10[0x51] = 0;
      *(ushort *)(puVar10 + 0x6e) = 0;
      puVar10[0x58] = 0;
      puVar10[0x59] = 0;
      puVar10[0x76] = 0;
      puVar10[0x70] = 0;
      puVar10[0x71] = 0;
      puVar10[0x80] = 0;
      puVar10[0x81] = 0;
      puVar10[0x82] = 0;
      puVar10[0x83] = 0;
      puVar10[0x84] = 0;
      puVar10[0x85] = 0;
      puVar10[0x86] = 0;
      puVar10[0x87] = 0;
      puVar10[0x88] = 0;
      puVar10[0x89] = 0;
      puVar10[0x8a] = 0;
      puVar10[0x8b] = 0;
      puVar10[0x8c] = 0;
      puVar10[0x8d] = 0;
      *(ushort *)(puVar10 + 0x8e) = 0;
      puVar10[0x90] = 0;
      puVar10[0x91] = 0;
      puVar10[0x92] = 0;
      puVar10[0x93] = 0;
      puVar10[0x94] = 0;
      puVar10[0x95] = 0;
      puVar10[0x96] = 0;
      *(ushort *)(puVar10 + 0xae) = 0;
      puVar10[0xac] = 0;
      puVar10[0xad] = 0;
      puVar10[0xaa] = 0;
      puVar10[0xab] = 0;
      puVar10[0xa8] = 0;
      puVar10[0xa9] = 0;
      puVar10[0xa6] = 0;
      puVar10[0xa7] = 0;
      puVar10[0xa4] = 0;
      puVar10[0xa5] = 0;
      puVar10[0xa2] = 0;
      puVar10[0xa3] = 0;
      puVar10[0xa0] = 0;
      puVar10[0xa1] = 0;
      puVar10[0x9e] = 0;
      puVar10[0x9f] = 0;
      puVar10[0x9c] = 0;
      puVar10[0x9d] = 0;
      puVar10[0x9a] = 0;
      puVar10[0x9b] = 0;
      puVar10[0x98] = 0;
      puVar10[0x99] = 0;
      puVar10[0xb6] = 0;
      puVar10[0xb4] = 0;
      puVar10[0xb5] = 0;
      puVar10[0xb2] = 0;
      puVar10[0xb3] = 0;
      puVar10[0xb0] = 0;
      puVar10[0xb1] = 0;
      *(ushort *)(puVar10 + 0xce) = 0;
      puVar10[0xcc] = 0;
      puVar10[0xcd] = 0;
      puVar10[0xca] = 0;
      puVar10[0xcb] = 0;
      puVar10[200] = 0;
      puVar10[0xc9] = 0;
      puVar10[0xc6] = 0;
      puVar10[199] = 0;
      puVar10[0xc4] = 0;
      puVar10[0xc5] = 0;
      puVar10[0xc2] = 0;
      puVar10[0xc3] = 0;
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      puVar10[0xbe] = 0;
      puVar10[0xbf] = 0;
      puVar10[0xbc] = 0;
      puVar10[0xbd] = 0;
      puVar10[0xba] = 0;
      puVar10[0xbb] = 0;
      puVar10[0xb8] = 0;
      puVar10[0xb9] = 0;
      puVar10[0xd6] = 0;
      puVar10[0xd4] = 0;
      puVar10[0xd5] = 0;
      puVar10[0xd2] = 0;
      puVar10[0xd3] = 0;
      puVar10[0xd0] = 0;
      puVar10[0xd1] = 0;
      *(ushort *)(puVar10 + 0xee) = 0;
      puVar10[0xec] = 0;
      puVar10[0xed] = 0;
      puVar10[0xea] = 0;
      puVar10[0xeb] = 0;
      puVar10[0xe8] = 0;
      puVar10[0xe9] = 0;
      puVar10[0xe6] = 0;
      puVar10[0xe7] = 0;
      puVar10[0xe4] = 0;
      puVar10[0xe5] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe3] = 0;
      puVar10[0xe0] = 0;
      puVar10[0xe1] = 0;
      puVar10[0xde] = 0;
      puVar10[0xdf] = 0;
      puVar10[0xdc] = 0;
      puVar10[0xdd] = 0;
      puVar10[0xda] = 0;
      puVar10[0xdb] = 0;
      puVar10[0xd8] = 0;
      puVar10[0xd9] = 0;
      puVar10[0xf6] = 0;
      puVar10[0xf4] = 0;
      puVar10[0xf5] = 0;
      puVar10[0xf2] = 0;
      puVar10[0xf3] = 0;
      puVar10[0xf0] = 0;
      puVar10[0xf1] = 0;
      *(ushort *)(puVar10 + 0x10e) = 0;
      puVar10[0x10c] = 0;
      puVar10[0x10d] = 0;
      puVar10[0x10a] = 0;
      puVar10[0x10b] = 0;
      puVar10[0x108] = 0;
      puVar10[0x109] = 0;
      puVar10[0x106] = 0;
      puVar10[0x107] = 0;
      puVar10[0x104] = 0;
      puVar10[0x105] = 0;
      puVar10[0x102] = 0;
      puVar10[0x103] = 0;
      puVar10[0x100] = 0;
      puVar10[0x101] = 0;
      puVar10[0xfe] = 0;
      puVar10[0xff] = 0;
      puVar10[0xfc] = 0;
      puVar10[0xfd] = 0;
      puVar10[0xfa] = 0;
      puVar10[0xfb] = 0;
      puVar10[0xf8] = 0;
      puVar10[0xf9] = 0;
      puVar10[0xe] = 0;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x20] = 0;
      puVar10[0x21] = 0;
      puVar10[0x22] = 0;
      puVar10[0x23] = 0;
      puVar10[0x24] = 0;
      puVar10[0x25] = 0;
      puVar10[0x26] = 0;
      puVar10[0x27] = 0;
      puVar10[0x28] = 0;
      puVar10[0x29] = 0;
      puVar10[0x2a] = 0;
      puVar10[0x2b] = 0;
      puVar10[0x30] = 0;
      puVar10[0x31] = 0;
      puVar10[0x32] = 0;
      puVar10[0x33] = 0;
      puVar10[0x4a] = 0;
      puVar10[0x4b] = 0;
      puVar10[0x4c] = 0;
      puVar10[0x4d] = 0;
      puVar10[0x46] = 0;
      puVar10[0x47] = 0;
      puVar10[0x48] = 0;
      puVar10[0x49] = 0;
      puVar10[0x42] = 0;
      puVar10[0x43] = 0;
      puVar10[0x44] = 0;
      puVar10[0x45] = 0;
      puVar10[0x3e] = 0;
      puVar10[0x3f] = 0;
      puVar10[0x40] = 0;
      puVar10[0x41] = 0;
      puVar10[0x3a] = 0;
      puVar10[0x3b] = 0;
      puVar10[0x3c] = 0;
      puVar10[0x3d] = 0;
      puVar10[0x52] = 0;
      puVar10[0x53] = 0;
      puVar10[0x54] = 0;
      puVar10[0x55] = 0;
      puVar10[0x6a] = 0;
      puVar10[0x6b] = 0;
      puVar10[0x6c] = 0;
      puVar10[0x6d] = 0;
      puVar10[0x66] = 0;
      puVar10[0x67] = 0;
      puVar10[0x68] = 0;
      puVar10[0x69] = 0;
      puVar10[0x62] = 0;
      puVar10[99] = 0;
      puVar10[100] = 0;
      puVar10[0x65] = 0;
      puVar10[0x5e] = 0;
      puVar10[0x5f] = 0;
      puVar10[0x60] = 0;
      puVar10[0x61] = 0;
      puVar10[0x5a] = 0;
      puVar10[0x5b] = 0;
      puVar10[0x5c] = 0;
      puVar10[0x5d] = 0;
      puVar10[0x72] = 0;
      puVar10[0x73] = 0;
      puVar10[0x74] = 0;
      puVar10[0x75] = 0;
      puVar10[0x78] = 0;
      puVar10[0x79] = 0;
      puVar10[0x7a] = 0;
      puVar10[0x7b] = 0;
      puVar10[0x7c] = 0;
      puVar10[0x7d] = 0;
      puVar10[0x7e] = 0;
      puVar10[0x7f] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      do {
        *(ushort *)(puVar8 + -8) = 0xffff;
        lVar9 = lVar9 + -2;
        puVar1 = (ushort *)((long)puVar8 + -0x1e);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (ushort *)((long)puVar8 + -0x16);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (ushort *)((long)puVar8 + -0xe);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        ((ushort *)((long)puVar8 + -6))[0] = 0;
        ((ushort *)((long)puVar8 + -6))[1] = 0;
        *(ushort *)((long)puVar8 + -2) = 0xffff;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[0] = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = puVar8 + 0xf;
      } while (lVar9 != 0);
    }
    else {
      puVar10 = param_1 + (ulong)uVar12 * 0x1016;
      lVar9 = 0x200;
      puVar10[0x114] = 0xffffffff;
      puVar10[0x112] = 0xffffffff;
      puVar10[0x113] = 0xffffffff;
      puVar10[0x110] = 0xffffffff;
      puVar10[0x111] = 0xffffffff;
      puVar8 = puVar10 + 0x11d;
      puVar10[0x16] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0x2c] = 0;
      puVar10[0x2d] = 0;
      *(ushort *)(puVar10 + 0x2e) = 0;
      puVar10[0x34] = 0;
      puVar10[0x35] = 0;
      puVar10[0x36] = 0;
      *(ushort *)(puVar10 + 0x4e) = 0;
      puVar10[0x38] = 0;
      puVar10[0x39] = 0;
      puVar10[0x56] = 0;
      puVar10[0x50] = 0;
      puVar10[0x51] = 0;
      *(ushort *)(puVar10 + 0x6e) = 0;
      puVar10[0x58] = 0;
      puVar10[0x59] = 0;
      puVar10[0x76] = 0;
      puVar10[0x70] = 0;
      puVar10[0x71] = 0;
      puVar10[0x80] = 0;
      puVar10[0x81] = 0;
      puVar10[0x82] = 0;
      puVar10[0x83] = 0;
      puVar10[0x84] = 0;
      puVar10[0x85] = 0;
      puVar10[0x86] = 0;
      puVar10[0x87] = 0;
      puVar10[0x88] = 0;
      puVar10[0x89] = 0;
      puVar10[0x8a] = 0;
      puVar10[0x8b] = 0;
      puVar10[0x8c] = 0;
      puVar10[0x8d] = 0;
      *(ushort *)(puVar10 + 0x8e) = 0;
      puVar10[0x90] = 0;
      puVar10[0x91] = 0;
      puVar10[0x92] = 0;
      puVar10[0x93] = 0;
      puVar10[0x94] = 0;
      puVar10[0x95] = 0;
      puVar10[0x96] = 0;
      *(ushort *)(puVar10 + 0xae) = 0;
      puVar10[0xac] = 0;
      puVar10[0xad] = 0;
      puVar10[0xaa] = 0;
      puVar10[0xab] = 0;
      puVar10[0xa8] = 0;
      puVar10[0xa9] = 0;
      puVar10[0xa6] = 0;
      puVar10[0xa7] = 0;
      puVar10[0xa4] = 0;
      puVar10[0xa5] = 0;
      puVar10[0xa2] = 0;
      puVar10[0xa3] = 0;
      puVar10[0xa0] = 0;
      puVar10[0xa1] = 0;
      puVar10[0x9e] = 0;
      puVar10[0x9f] = 0;
      puVar10[0x9c] = 0;
      puVar10[0x9d] = 0;
      puVar10[0x9a] = 0;
      puVar10[0x9b] = 0;
      puVar10[0x98] = 0;
      puVar10[0x99] = 0;
      puVar10[0xb6] = 0;
      puVar10[0xb4] = 0;
      puVar10[0xb5] = 0;
      puVar10[0xb2] = 0;
      puVar10[0xb3] = 0;
      puVar10[0xb0] = 0;
      puVar10[0xb1] = 0;
      *(ushort *)(puVar10 + 0xce) = 0;
      puVar10[0xcc] = 0;
      puVar10[0xcd] = 0;
      puVar10[0xca] = 0;
      puVar10[0xcb] = 0;
      puVar10[200] = 0;
      puVar10[0xc9] = 0;
      puVar10[0xc6] = 0;
      puVar10[199] = 0;
      puVar10[0xc4] = 0;
      puVar10[0xc5] = 0;
      puVar10[0xc2] = 0;
      puVar10[0xc3] = 0;
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      puVar10[0xbe] = 0;
      puVar10[0xbf] = 0;
      puVar10[0xbc] = 0;
      puVar10[0xbd] = 0;
      puVar10[0xba] = 0;
      puVar10[0xbb] = 0;
      puVar10[0xb8] = 0;
      puVar10[0xb9] = 0;
      puVar10[0xd6] = 0;
      puVar10[0xd4] = 0;
      puVar10[0xd5] = 0;
      puVar10[0xd2] = 0;
      puVar10[0xd3] = 0;
      puVar10[0xd0] = 0;
      puVar10[0xd1] = 0;
      *(ushort *)(puVar10 + 0xee) = 0;
      puVar10[0xec] = 0;
      puVar10[0xed] = 0;
      puVar10[0xea] = 0;
      puVar10[0xeb] = 0;
      puVar10[0xe8] = 0;
      puVar10[0xe9] = 0;
      puVar10[0xe6] = 0;
      puVar10[0xe7] = 0;
      puVar10[0xe4] = 0;
      puVar10[0xe5] = 0;
      puVar10[0xe2] = 0;
      puVar10[0xe3] = 0;
      puVar10[0xe0] = 0;
      puVar10[0xe1] = 0;
      puVar10[0xde] = 0;
      puVar10[0xdf] = 0;
      puVar10[0xdc] = 0;
      puVar10[0xdd] = 0;
      puVar10[0xda] = 0;
      puVar10[0xdb] = 0;
      puVar10[0xd8] = 0;
      puVar10[0xd9] = 0;
      puVar10[0xf6] = 0;
      puVar10[0xf4] = 0;
      puVar10[0xf5] = 0;
      puVar10[0xf2] = 0;
      puVar10[0xf3] = 0;
      puVar10[0xf0] = 0;
      puVar10[0xf1] = 0;
      *(ushort *)(puVar10 + 0x10e) = 0;
      puVar10[0x10c] = 0;
      puVar10[0x10d] = 0;
      puVar10[0x10a] = 0;
      puVar10[0x10b] = 0;
      puVar10[0x108] = 0;
      puVar10[0x109] = 0;
      puVar10[0x106] = 0;
      puVar10[0x107] = 0;
      puVar10[0x104] = 0;
      puVar10[0x105] = 0;
      puVar10[0x102] = 0;
      puVar10[0x103] = 0;
      puVar10[0x100] = 0;
      puVar10[0x101] = 0;
      puVar10[0xfe] = 0;
      puVar10[0xff] = 0;
      puVar10[0xfc] = 0;
      puVar10[0xfd] = 0;
      puVar10[0xfa] = 0;
      puVar10[0xfb] = 0;
      puVar10[0xf8] = 0;
      puVar10[0xf9] = 0;
      puVar10[0xe] = 0;
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      puVar10[0x14] = 0;
      puVar10[0x15] = 0;
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1e] = 0;
      puVar10[0x1f] = 0;
      puVar10[0x20] = 0;
      puVar10[0x21] = 0;
      puVar10[0x22] = 0;
      puVar10[0x23] = 0;
      puVar10[0x24] = 0;
      puVar10[0x25] = 0;
      puVar10[0x26] = 0;
      puVar10[0x27] = 0;
      puVar10[0x28] = 0;
      puVar10[0x29] = 0;
      puVar10[0x2a] = 0;
      puVar10[0x2b] = 0;
      puVar10[0x30] = 0;
      puVar10[0x31] = 0;
      puVar10[0x32] = 0;
      puVar10[0x33] = 0;
      puVar10[0x4a] = 0;
      puVar10[0x4b] = 0;
      puVar10[0x4c] = 0;
      puVar10[0x4d] = 0;
      puVar10[0x46] = 0;
      puVar10[0x47] = 0;
      puVar10[0x48] = 0;
      puVar10[0x49] = 0;
      puVar10[0x42] = 0;
      puVar10[0x43] = 0;
      puVar10[0x44] = 0;
      puVar10[0x45] = 0;
      puVar10[0x3e] = 0;
      puVar10[0x3f] = 0;
      puVar10[0x40] = 0;
      puVar10[0x41] = 0;
      puVar10[0x3a] = 0;
      puVar10[0x3b] = 0;
      puVar10[0x3c] = 0;
      puVar10[0x3d] = 0;
      puVar10[0x52] = 0;
      puVar10[0x53] = 0;
      puVar10[0x54] = 0;
      puVar10[0x55] = 0;
      puVar10[0x6a] = 0;
      puVar10[0x6b] = 0;
      puVar10[0x6c] = 0;
      puVar10[0x6d] = 0;
      puVar10[0x66] = 0;
      puVar10[0x67] = 0;
      puVar10[0x68] = 0;
      puVar10[0x69] = 0;
      puVar10[0x62] = 0;
      puVar10[99] = 0;
      puVar10[100] = 0;
      puVar10[0x65] = 0;
      puVar10[0x5e] = 0;
      puVar10[0x5f] = 0;
      puVar10[0x60] = 0;
      puVar10[0x61] = 0;
      puVar10[0x5a] = 0;
      puVar10[0x5b] = 0;
      puVar10[0x5c] = 0;
      puVar10[0x5d] = 0;
      puVar10[0x72] = 0;
      puVar10[0x73] = 0;
      puVar10[0x74] = 0;
      puVar10[0x75] = 0;
      puVar10[0x78] = 0;
      puVar10[0x79] = 0;
      puVar10[0x7a] = 0;
      puVar10[0x7b] = 0;
      puVar10[0x7c] = 0;
      puVar10[0x7d] = 0;
      puVar10[0x7e] = 0;
      puVar10[0x7f] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      do {
        *(ushort *)(puVar8 + -8) = 0xffff;
        lVar9 = lVar9 + -2;
        puVar1 = (ushort *)((long)puVar8 + -0x1e);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (ushort *)((long)puVar8 + -0x16);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = (ushort *)((long)puVar8 + -0xe);
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        ((ushort *)((long)puVar8 + -6))[0] = 0;
        ((ushort *)((long)puVar8 + -6))[1] = 0;
        *(ushort *)((long)puVar8 + -2) = 0xffff;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[0] = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = puVar8 + 0xf;
      } while (lVar9 != 0);
    }
    *puVar10 = (uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5;
  }
  return puVar10;
}

