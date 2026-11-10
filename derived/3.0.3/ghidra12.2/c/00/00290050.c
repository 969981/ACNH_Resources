
undefined8 FUN_00290050(long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    do {
      pbVar9 = param_3;
      uVar4 = uVar3;
      if (*param_3 < 0x20) {
        uVar4 = uVar3 + 1;
        if (param_4 <= uVar4) break;
        pbVar9 = param_3 + 1;
        if (*pbVar9 < 0x20) {
          uVar4 = uVar3 + 2;
          if (param_4 <= uVar4) break;
          pbVar9 = param_3 + 2;
        }
      }
      uVar3 = uVar4 + 4;
      if (param_4 < uVar3) {
        return 0;
      }
      bVar2 = *pbVar9;
      uVar6 = bVar2 - 0x41;
      if (uVar6 < 0x1a) goto LAB_002900d4;
      uVar8 = (uint)bVar2;
      if (bVar2 - 0x61 < 0x1a) {
        uVar6 = uVar8 - 0x47;
        bVar2 = pbVar9[1];
      }
      else {
        uVar7 = (uint)bVar2;
        if (uVar7 - 0x30 < 10) {
          uVar6 = uVar7 + 4;
          bVar2 = pbVar9[1];
        }
        else {
          if (uVar7 < 0x2f) {
            uVar6 = 0x3e;
            if ((uVar8 != 0x2b) && (uVar7 != 0x2d)) goto LAB_002901dc;
          }
          else {
            if ((uVar7 != 0x5f) && (uVar8 != 0x2f)) {
LAB_002901dc:
              uVar6 = 0;
              bVar2 = pbVar9[1];
              goto joined_r0x0029015c;
            }
            uVar6 = 0x3f;
          }
LAB_002900d4:
          bVar2 = pbVar9[1];
        }
      }
joined_r0x0029015c:
      uVar7 = (uint)bVar2;
      uVar8 = uVar7 - 0x41;
      if (0x19 < uVar8) {
        if (uVar7 - 0x61 < 0x1a) {
          uVar8 = uVar7 - 0x47;
        }
        else if (uVar7 - 0x30 < 10) {
          uVar8 = uVar7 + 4;
        }
        else if (uVar7 < 0x2f) {
          uVar8 = 0x3e;
          if ((uVar7 != 0x2b) && (uVar7 != 0x2d)) goto LAB_002901d4;
        }
        else if ((uVar7 == 0x5f) || (uVar7 == 0x2f)) {
          uVar8 = 0x3f;
        }
        else {
LAB_002901d4:
          uVar8 = 0;
        }
      }
      bVar2 = pbVar9[2];
      uVar7 = bVar2 - 0x41;
      if (uVar7 < 0x1a) goto LAB_00290200;
      uVar11 = (uint)bVar2;
      if (bVar2 - 0x61 < 0x1a) {
        uVar7 = uVar11 - 0x47;
        bVar2 = pbVar9[3];
      }
      else {
        uVar10 = (uint)bVar2;
        if (uVar10 - 0x30 < 10) {
          uVar7 = uVar10 + 4;
          bVar2 = pbVar9[3];
        }
        else {
          if (uVar10 < 0x2f) {
            uVar7 = 0x3e;
            if ((uVar11 != 0x2b) && (uVar10 != 0x2d)) goto LAB_00290300;
          }
          else {
            if ((uVar10 != 0x5f) && (uVar11 != 0x2f)) {
LAB_00290300:
              uVar7 = 0x40;
              bVar2 = pbVar9[3];
              goto joined_r0x00290280;
            }
            uVar7 = 0x3f;
          }
LAB_00290200:
          bVar2 = pbVar9[3];
        }
      }
joined_r0x00290280:
      uVar10 = (uint)bVar2;
      uVar11 = uVar10 - 0x41;
      if (0x19 < uVar11) {
        if (uVar10 - 0x61 < 0x1a) {
          uVar11 = uVar10 - 0x47;
        }
        else if (uVar10 - 0x30 < 10) {
          uVar11 = uVar10 + 4;
        }
        else if (uVar10 < 0x2f) {
          uVar11 = 0x3e;
          if ((uVar10 != 0x2b) && (uVar10 != 0x2d)) goto LAB_002902f8;
        }
        else if ((uVar10 == 0x5f) || (uVar10 == 0x2f)) {
          uVar11 = 0x3f;
        }
        else {
LAB_002902f8:
          uVar11 = 0x40;
        }
      }
      if (param_2 <= uVar5) {
        return 0;
      }
      uVar4 = uVar5 + 1;
      *(byte *)(param_1 + uVar5) = (byte)(uVar6 << 2) | (byte)(uVar8 >> 4) & 3;
      if (uVar7 < 0x40) {
        if (param_2 <= uVar4) {
          return 0;
        }
        uVar1 = uVar5 + 2;
        *(byte *)(param_1 + uVar4) = (byte)(uVar7 >> 2) | (byte)(uVar8 << 4);
        if (uVar11 < 0x40) {
          if (param_2 <= uVar1) {
            return 0;
          }
          *(byte *)(param_1 + uVar1) = (byte)uVar11 | (byte)(uVar7 << 6);
          uVar4 = uVar5 + 3;
        }
        else {
          uVar4 = uVar1;
        }
      }
      uVar5 = uVar4;
      param_3 = pbVar9 + 4;
    } while (uVar3 < param_4);
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = uVar5;
  }
  return 1;
}

