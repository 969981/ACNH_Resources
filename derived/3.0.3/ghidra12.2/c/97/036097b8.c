
void FUN_036097b8(char *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  
  cVar2 = *param_1;
  uVar8 = param_2 >> 6 & 1;
  bVar6 = param_1[0x10];
  cVar3 = param_1[0x22];
  bVar9 = param_1[0x1c];
  param_1[0x1c] = (char)uVar8;
  if (bVar9 < uVar8 && (bVar6 & 1) != 0) {
    FUN_036094bc(param_1);
  }
  if ((param_2 & 0xff) >> 7 == 0) {
    *(uint *)(param_1 + 0x18) = (uint)(byte)param_1[0x18] | (param_2 & 7) << 8;
  }
  else {
    param_1[0x22] = '\0';
    cVar4 = param_1[1];
    *param_1 = cVar4;
    bVar9 = 0;
    if (*(int *)(param_1 + 0x14) != 0 && cVar4 != '\0') {
      bVar9 = 4;
    }
    param_1[-0x74] = bVar9 | param_1[-0x74] & 0xfbU;
    if (cVar4 == '\0') {
      param_1[0x78] = '\0';
      param_1[0x79] = '\0';
      param_1[0x35] = '\0';
      sVar7 = *(short *)(param_1 + 0x1e);
    }
    else {
      if ((*param_1 == '\0') || (param_1[0x22] != '\0')) {
        sVar7 = 0x186;
        param_1[0x35] = '\0';
      }
      else {
        uVar8 = 4;
        if (param_1[0x37] == '\0') {
          uVar8 = ((uint)(byte)param_1[0x24] << 2 ^ 0xffffffff) & 4;
        }
        uVar8 = (byte)param_1[0x23] >> (ulong)uVar8 & 0xf;
        param_1[0x35] = (char)uVar8;
        if (param_1[0x36] == 0) {
          sVar7 = 0x186;
        }
        else {
          sVar7 = (short)(uVar8 >> (ulong)(0x2104U >> (ulong)(((byte)param_1[0x36] & 7) << 2) & 7))
                  * -0x34 + 0x186;
        }
      }
      *(short *)(param_1 + 0x78) = sVar7;
      sVar7 = *(short *)(param_1 + 0x1e);
    }
    if ((sVar7 == 0) &&
       (*(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_1 + 0x20), (bVar6 & 1) != 0)) {
      FUN_036094bc(param_1);
    }
    uVar8 = (uint)(byte)param_1[0x18] | (param_2 & 7) << 8;
    *(uint *)(param_1 + 0x18) = uVar8;
    if ((*param_1 != '\0') && (param_1[0x22] == '\0')) {
      if ((param_1[0x38] != '\0' && (cVar2 != '\0' && cVar3 == '\0')) &&
         (*(uint *)(param_1 + 0x14) < 4)) {
        uVar5 = (byte)param_1[0x24] + 1 >> 1 & 0xf;
        uVar10 = (ulong)uVar5;
        if (uVar5 < 4) {
          param_1[0x25] = param_1[uVar10 + 0x25];
        }
        else {
          pcVar1 = param_1 + (uVar10 & 0xc) + 0x25;
          cVar2 = pcVar1[1];
          cVar3 = pcVar1[2];
          param_1[0x25] = *pcVar1;
          param_1[0x26] = cVar2;
          cVar2 = param_1[(uVar10 | 3) + 0x25];
          param_1[0x27] = cVar3;
          param_1[0x28] = cVar2;
        }
      }
      param_1[0x24] = '\0';
      param_1[0x37] = '\x01';
      *(uint *)(param_1 + 0x14) = uVar8 * -2 + 0x1006;
      if (param_1[1] == '\0') {
        param_1[0x78] = '\0';
        param_1[0x79] = '\0';
        param_1[0x35] = '\0';
      }
      else {
        param_1[0x35] = (byte)param_1[0x23] >> 4;
        if (param_1[0x36] == 0) {
          sVar7 = 0x186;
        }
        else {
          sVar7 = (ushort)(byte)(((byte)param_1[0x23] >> 4) >>
                                (ulong)(0x2104U >> (ulong)(((byte)param_1[0x36] & 7) << 2) & 7)) *
                  -0x34 + 0x186;
        }
        *(short *)(param_1 + 0x78) = sVar7;
      }
      bVar6 = 0;
      if ((*(int *)(param_1 + 0x14) != 0 && *param_1 != '\0') && param_1[1] != '\0') {
        bVar6 = 4;
      }
      param_1[-0x74] = bVar6 | param_1[-0x74] & 0xfbU;
    }
  }
  return;
}

