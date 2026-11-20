
void FUN_03fe6754(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  
  bVar1 = *(byte *)(param_1 + 0x3170dc);
  uVar11 = (uint)bVar1;
  uVar12 = (uint)*(byte *)(param_1 + 0x3170dd);
  bVar2 = *(byte *)(param_1 + 0x3170de);
  *(undefined1 *)(param_1 + 0x3170e6) = 0;
  bVar3 = *(byte *)(param_1 + 0x3170df);
  uVar6 = (uint)bVar2;
  uVar7 = (uint)bVar3;
  if (*(byte *)(param_1 + 0x3170dd) < bVar1) {
    *(byte *)(param_1 + 0x3170e0) = bVar2;
    *(undefined1 *)(param_1 + 0x3170e6) = 2;
    *(byte *)(param_1 + 0x3170e1) = bVar3 + 1;
    if (uVar7 <= uVar6 && bVar2 != bVar3) {
      *(undefined2 *)(param_1 + 0x3170e4) = 0x2f4;
      FUN_03fe5eb0();
      return;
    }
    sVar5 = 0x2df;
    if (bVar3 != 0xff) {
      sVar5 = 0x2b5;
    }
    *(short *)(param_1 + 0x3170e4) = sVar5;
    if (bVar2 != 0) {
      *(short *)(param_1 + 0x3170e4) = sVar5 + -0x15;
      FUN_03fe5eb0();
      return;
    }
  }
  else if (uVar7 < uVar6) {
    *(byte *)(param_1 + 0x3170e0) = bVar1;
    *(char *)(param_1 + 0x3170e1) = (char)(uVar12 + 1);
    sVar5 = 0x2df;
    if (uVar12 + 1 >> 8 == 0) {
      sVar5 = 0x2b5;
    }
    *(short *)(param_1 + 0x3170e4) = sVar5;
    if (uVar11 != 0) {
      *(short *)(param_1 + 0x3170e4) = sVar5 + -0x15;
      FUN_03fe5eb0();
      return;
    }
  }
  else {
    if ((uVar6 < uVar11) || ((uVar8 = uVar12, uVar9 = uVar6, uVar11 == uVar6 && (uVar7 < uVar12))))
    {
      *(undefined1 *)(param_1 + 0x3170e6) = 2;
      uVar8 = uVar7;
      uVar9 = uVar11;
      uVar11 = uVar6;
      uVar7 = uVar12;
    }
    *(char *)(param_1 + 0x3170e0) = (char)uVar11;
    cVar4 = (char)uVar7;
    if (uVar8 < uVar9) {
      *(char *)(param_1 + 0x3170e2) = (char)uVar9;
      *(char *)(param_1 + 0x3170e3) = cVar4 + '\x01';
      sVar5 = 0x1ce;
      if (uVar7 != 0xff) {
        sVar5 = 0x17a;
      }
      *(char *)(param_1 + 0x3170e1) = (char)(uVar8 + 1);
      if (uVar11 != 0) {
        sVar5 = sVar5 + -0x2a;
      }
      *(short *)(param_1 + 0x3170e4) = sVar5;
      if (uVar9 == (uVar8 + 1 & 0xff)) {
        *(short *)(param_1 + 0x3170e4) = sVar5 + 0x15;
        FUN_03fe5eb0();
        return;
      }
    }
    else {
      *(char *)(param_1 + 0x3170e1) = (char)uVar9;
      if (uVar7 < uVar8) {
        *(char *)(param_1 + 0x3170e2) = cVar4 + '\x01';
        *(undefined2 *)(param_1 + 0x3170e4) = 0x276;
        *(char *)(param_1 + 0x3170e3) = (char)uVar8 + '\x01';
        if (((uVar11 == uVar9) || (uVar8 != 0xff)) || (uVar11 != 0)) {
          sVar10 = 0x222;
          if (uVar8 == 0xff) {
            sVar10 = 0x276;
          }
          sVar5 = sVar10 + -0x2a;
          if (uVar11 == 0) {
            sVar5 = sVar10;
          }
LAB_03fe6944:
          sVar10 = sVar5 + 0x15;
          if (uVar11 != uVar9) {
            sVar10 = sVar5;
          }
          *(short *)(param_1 + 0x3170e4) = sVar10;
          FUN_03fe5eb0();
          return;
        }
      }
      else {
        *(char *)(param_1 + 0x3170e2) = (char)uVar8 + '\x01';
        *(undefined2 *)(param_1 + 0x3170e4) = 0xfc;
        *(char *)(param_1 + 0x3170e3) = cVar4 + '\x01';
        if ((((uVar11 == uVar9) || (uVar8 == uVar7)) || (uVar7 != 0xff)) || (uVar11 != 0)) {
          sVar5 = 0x54;
          if (uVar7 == 0xff) {
            sVar5 = 0xfc;
          }
          sVar10 = sVar5 + -0x54;
          if (uVar11 == 0) {
            sVar10 = sVar5;
          }
          sVar5 = sVar10 + 0x2a;
          if (uVar8 != uVar7) {
            sVar5 = sVar10;
          }
          goto LAB_03fe6944;
        }
      }
    }
  }
  FUN_03fe5eb0();
  return;
}

