
void FUN_03643aec(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 >> 6 == 0x101) {
    if ((char)param_1[0x1b] != '\0') {
      *(byte *)((long)param_1 + (ulong)(param_2 - 0x4040) + 0x7c) = ((byte)param_3 & 0x3f) - 0x20;
      return;
    }
  }
  else {
    switch(param_2) {
    case 0x4080:
      uVar7 = param_3 & 0x3f;
      param_1[2] = uVar7;
      param_1[3] = param_3 >> 6 & 1;
      param_1[4] = param_3 >> 7 & 1;
      if ((param_3 >> 7 & 1) != 0) {
        param_1[5] = uVar7;
      }
      iVar8 = param_1[0x1a] * (uVar7 * 8 + 8);
      *param_1 = iVar8;
      param_1[1] = iVar8;
      return;
    default:
      *(byte *)((long)param_1 + (ulong)(param_2 - 0x4040) + 0x4590) = (byte)param_3;
      break;
    case 0x4082:
      param_3 = param_1[0x10] & 0xf00U | param_3;
      param_1[0x10] = param_3;
      if ((char)param_1[0x17] != '\0') {
        uVar4 = param_1[0xb] * param_1[0x15];
        uVar7 = uVar4 + 0xf;
        if (-1 < (int)uVar4) {
          uVar7 = uVar4;
        }
        iVar8 = (int)uVar7 >> 4;
        iVar10 = iVar8 + 2;
        if ((param_1[0x15] & 0x80000000U) != 0) {
          iVar10 = iVar8 + -1;
        }
        if ((uVar4 & 0xf) != 0) {
          iVar8 = iVar10;
        }
        iVar10 = iVar8 + -0x102;
        if (iVar8 < 0xc2) {
          iVar10 = iVar8;
        }
        iVar8 = iVar10 + 0x100;
        if (-0x41 < iVar10) {
          iVar8 = iVar10;
        }
        iVar8 = iVar8 * param_3;
        iVar10 = iVar8 + 0x3f;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        param_3 = param_3 + (iVar10 >> 6);
      }
      param_1[0xd] = param_3;
      return;
    case 0x4083:
      *(bool *)(param_1 + 0xc) = (param_3 & 0x40) == 0;
      *(bool *)(param_1 + 0x11) = (param_3 & 0x80) == 0;
      uVar7 = (uint)*(byte *)(param_1 + 0x10) | (param_3 & 0xf) << 8;
      param_1[0x10] = uVar7;
      if ((param_3 >> 7 & 1) != 0) {
        param_1[0xe] = 0;
        param_1[0xf] = 0;
      }
      if ((param_3 >> 6 & 1) == 0) {
        cVar2 = (char)param_1[0x17];
      }
      else {
        param_1[1] = *param_1;
        param_1[7] = param_1[6];
        cVar2 = (char)param_1[0x17];
      }
      if (cVar2 != '\0') {
        uVar3 = param_1[0xb] * param_1[0x15];
        uVar4 = uVar3 + 0xf;
        if (-1 < (int)uVar3) {
          uVar4 = uVar3;
        }
        iVar8 = (int)uVar4 >> 4;
        iVar10 = iVar8 + 2;
        if ((param_1[0x15] & 0x80000000U) != 0) {
          iVar10 = iVar8 + -1;
        }
        if ((uVar3 & 0xf) != 0) {
          iVar8 = iVar10;
        }
        iVar10 = iVar8 + -0x102;
        if (iVar8 < 0xc2) {
          iVar10 = iVar8;
        }
        iVar8 = iVar10 + 0x100;
        if (-0x41 < iVar10) {
          iVar8 = iVar10;
        }
        iVar8 = iVar8 * uVar7;
        iVar10 = iVar8 + 0x3f;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        uVar7 = uVar7 + (iVar10 >> 6);
      }
      param_1[0xd] = uVar7;
      return;
    case 0x4084:
      uVar7 = param_3 & 0x3f;
      param_1[8] = uVar7;
      param_1[9] = param_3 >> 6 & 1;
      param_1[10] = param_3 >> 7 & 1;
      if ((param_3 >> 7 & 1) != 0) {
        param_1[0xb] = uVar7;
      }
      iVar8 = param_1[0x1a] * (uVar7 * 8 + 8);
      param_1[6] = iVar8;
      param_1[7] = iVar8;
      iVar8 = param_1[0x10];
      if ((char)param_1[0x17] != '\0') {
        uVar4 = param_1[0xb] * param_1[0x15];
        uVar7 = uVar4 + 0xf;
        if (-1 < (int)uVar4) {
          uVar7 = uVar4;
        }
        iVar10 = (int)uVar7 >> 4;
        iVar9 = iVar10 + 2;
        if ((param_1[0x15] & 0x80000000U) != 0) {
          iVar9 = iVar10 + -1;
        }
        if ((uVar4 & 0xf) != 0) {
          iVar10 = iVar9;
        }
        iVar9 = iVar10 + -0x102;
        if (iVar10 < 0xc2) {
          iVar9 = iVar10;
        }
        iVar10 = iVar9 + 0x100;
        if (-0x41 < iVar9) {
          iVar10 = iVar9;
        }
        iVar10 = iVar10 * iVar8;
        iVar9 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        iVar8 = iVar8 + (iVar9 >> 6);
      }
      param_1[0xd] = iVar8;
      return;
    case 0x4085:
      iVar10 = (int)(param_3 << 0x19) >> 0x19;
      param_1[0x15] = iVar10;
      iVar8 = param_1[0x10];
      if ((char)param_1[0x17] != '\0') {
        uVar4 = param_1[0xb] * iVar10;
        uVar7 = uVar4 + 0xf;
        if (-1 < (int)uVar4) {
          uVar7 = uVar4;
        }
        iVar10 = (int)uVar7 >> 4;
        iVar9 = iVar10 + 2;
        if ((param_3 & 0x40) != 0) {
          iVar9 = iVar10 + -1;
        }
        if ((uVar4 & 0xf) != 0) {
          iVar10 = iVar9;
        }
        iVar9 = iVar10 + -0x102;
        if (iVar10 < 0xc2) {
          iVar9 = iVar10;
        }
        iVar10 = iVar9 + 0x100;
        if (-0x41 < iVar9) {
          iVar10 = iVar9;
        }
        iVar10 = iVar10 * iVar8;
        iVar9 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        iVar8 = iVar8 + (iVar9 >> 6);
      }
      param_1[0xd] = iVar8;
      return;
    case 0x4086:
      param_1[0x12] = param_1[0x12] & 0xf00U | param_3;
      return;
    case 0x4087:
      param_1[0x12] = (uint)*(byte *)(param_1 + 0x12) | (param_3 & 0xf) << 8;
      *(bool *)(param_1 + 0x17) = (param_3 & 0x80) == 0;
      if ((param_3 >> 7 & 1) != 0) {
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0xd] = param_1[0x10];
        return;
      }
      uVar4 = param_1[0xb] * param_1[0x15];
      uVar7 = uVar4 + 0xf;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4;
      }
      iVar8 = (int)uVar7 >> 4;
      iVar10 = iVar8 + 2;
      if ((param_1[0x15] & 0x80000000U) != 0) {
        iVar10 = iVar8 + -1;
      }
      if ((uVar4 & 0xf) != 0) {
        iVar8 = iVar10;
      }
      iVar10 = iVar8 + -0x102;
      if (iVar8 < 0xc2) {
        iVar10 = iVar8;
      }
      iVar8 = iVar10 + 0x100;
      if (-0x41 < iVar10) {
        iVar8 = iVar10;
      }
      iVar8 = iVar8 * param_1[0x10];
      iVar10 = iVar8 + 0x3f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      param_1[0xd] = param_1[0x10] + (iVar10 >> 6);
      return;
    case 0x4088:
      if ((char)param_1[0x17] == '\0') {
        uVar7 = param_1[0x14];
        uVar6 = (undefined1)(0xfffefc0704020100 >> ((param_3 & 7) << 3));
        *(undefined1 *)((long)param_1 + (ulong)uVar7 + 0xbc) = uVar6;
        *(undefined1 *)((long)param_1 + (ulong)(uVar7 + 1 & 0x3f) + 0xbc) = uVar6;
        param_1[0x14] = uVar7 + 2 & 0x3f;
        return;
      }
      break;
    case 0x4089:
      iVar8 = *(int *)(&DAT_041025f0 + (ulong)(param_3 & 3) * 4);
      param_1[0x18] = param_3 & 3;
      param_1[0x19] = iVar8;
      *(byte *)(param_1 + 0x1b) = (byte)(param_3 >> 7) & 1;
      if ((param_3 >> 7 & 1) != 0) {
        if (param_1[0x10] == 0) {
          *(undefined2 *)((long)param_1 + 0x6e) = 0;
          return;
        }
        iVar10 = param_1[5];
        iVar9 = (int)*(char *)((long)param_1 + (ulong)(uint)param_1[0xf] + 0x7c);
        if (0x1f < iVar10) {
          iVar10 = 0x20;
        }
        iVar5 = iVar10 * (*(char *)((long)param_1 + (ulong)(param_1[0xf] + 1U & 0x3f) + 0x7c) -
                         iVar9) * (uint)*(ushort *)(param_1 + 0xe);
        iVar1 = iVar5 + 0xffff;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        *(short *)((long)param_1 + 0x6e) =
             (short)((uint)((iVar10 * iVar9 + (iVar1 >> 0x10)) * iVar8) >> 3);
        return;
      }
      break;
    case 0x408a:
      param_1[0x1a] = param_3;
      *param_1 = (param_1[2] * 8 + 8) * param_3;
      param_1[6] = (param_1[8] * 8 + 8) * param_3;
      return;
    }
  }
  return;
}

