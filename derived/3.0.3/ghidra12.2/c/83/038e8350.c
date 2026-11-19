
undefined8 FUN_038e8350(long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5)

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
  uint uVar12;
  
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
      if (0x19 < uVar6) {
        uVar7 = (uint)bVar2;
        if (bVar2 - 0x61 < 0x1a) {
          uVar6 = uVar7 - 0x47;
        }
        else {
          uVar8 = (uint)bVar2;
          if (uVar8 - 0x30 < 10) {
            uVar6 = uVar8 + 4;
          }
          else if (uVar8 < 0x2f) {
            uVar6 = 0x3e;
            if ((uVar7 != 0x2b) && (uVar8 != 0x2d)) goto LAB_038e843c;
          }
          else if ((uVar8 == 0x5f) || (uVar7 == 0x2f)) {
            uVar6 = 0x3f;
          }
          else {
LAB_038e843c:
            uVar6 = 0;
          }
        }
      }
      bVar2 = pbVar9[1];
      uVar7 = bVar2 - 0x41;
      if (0x19 < uVar7) {
        uVar8 = (uint)bVar2;
        if (bVar2 - 0x61 < 0x1a) {
          uVar7 = uVar8 - 0x47;
        }
        else {
          uVar10 = (uint)bVar2;
          if (uVar10 - 0x30 < 10) {
            uVar7 = uVar10 + 4;
          }
          else if (uVar10 < 0x2f) {
            uVar7 = 0x3e;
            if ((uVar8 != 0x2b) && (uVar10 != 0x2d)) goto LAB_038e84b0;
          }
          else if ((uVar10 == 0x5f) || (uVar8 == 0x2f)) {
            uVar7 = 0x3f;
          }
          else {
LAB_038e84b0:
            uVar7 = 0;
          }
        }
      }
      bVar2 = pbVar9[2];
      uVar8 = bVar2 - 0x41;
      if (0x19 < uVar8) {
        uVar10 = (uint)bVar2;
        if (bVar2 - 0x61 < 0x1a) {
          uVar8 = uVar10 - 0x47;
        }
        else {
          uVar11 = (uint)bVar2;
          if (uVar11 - 0x30 < 10) {
            uVar8 = uVar11 + 4;
          }
          else if (uVar11 < 0x2f) {
            uVar8 = 0x3e;
            if ((uVar10 != 0x2b) && (uVar11 != 0x2d)) goto LAB_038e852c;
          }
          else if ((uVar11 == 0x5f) || (uVar10 == 0x2f)) {
            uVar8 = 0x3f;
          }
          else {
LAB_038e852c:
            uVar8 = 0x40;
          }
        }
      }
      bVar2 = pbVar9[3];
      uVar10 = bVar2 - 0x41;
      if (0x19 < uVar10) {
        uVar11 = (uint)bVar2;
        if (bVar2 - 0x61 < 0x1a) {
          uVar10 = uVar11 - 0x47;
        }
        else {
          uVar12 = (uint)bVar2;
          if (uVar12 - 0x30 < 10) {
            uVar10 = uVar12 + 4;
          }
          else if (uVar12 < 0x2f) {
            uVar10 = 0x3e;
            if ((uVar11 != 0x2b) && (uVar12 != 0x2d)) goto LAB_038e8614;
          }
          else if ((uVar12 == 0x5f) || (uVar11 == 0x2f)) {
            uVar10 = 0x3f;
          }
          else {
LAB_038e8614:
            uVar10 = 0x40;
          }
        }
      }
      if (param_2 <= uVar5) {
        return 0;
      }
      uVar4 = uVar5 + 1;
      *(byte *)(param_1 + uVar5) = (byte)(uVar6 << 2) | (byte)(uVar7 >> 4) & 3;
      if (uVar8 < 0x40) {
        if (param_2 <= uVar4) {
          return 0;
        }
        uVar1 = uVar5 + 2;
        *(byte *)(param_1 + uVar4) = (byte)(uVar8 >> 2) | (byte)(uVar7 << 4);
        if (uVar10 < 0x40) {
          if (param_2 <= uVar1) {
            return 0;
          }
          *(byte *)(param_1 + uVar1) = (byte)uVar10 | (byte)(uVar8 << 6);
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

