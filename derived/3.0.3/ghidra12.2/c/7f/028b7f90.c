
bool FUN_028b7f90(undefined1 *param_1,short param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStack_230 [128];
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 == 2)) {
    memcpy(auStack_230,param_3,0x200);
    iVar11 = (auStack_230[(ulong)auStack_230[3] & 0x7f] & 0xf) + 1;
    uVar9 = (auStack_230[(ulong)auStack_230[2] & 0x7f] ^
            auStack_230[(ulong)auStack_230[2] & 0x7f] >> 0x1e) * 0x6c078965 + 1;
    uVar10 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar7 = uVar1;
      uVar8 = uVar2;
      uVar9 = uVar9 ^ uVar9 << 0xb;
      iVar11 = iVar11 + -1;
      uVar10 = uVar10 ^ uVar10 << 0xb;
      uVar2 = uVar7 >> 0x13 ^ uVar9 >> 8 ^ uVar7 ^ uVar9;
      uVar1 = uVar10 >> 8 ^ uVar2 >> 0x13 ^ uVar10 ^ uVar2;
      uVar9 = uVar8;
      uVar10 = uVar7;
    } while (iVar11 != 0);
    uVar8 = uVar8 ^ uVar8 << 0xb;
    uVar9 = uVar8 ^ uVar1;
    uVar7 = uVar7 ^ uVar7 << 0xb;
    uVar2 = uVar2 ^ uVar2 << 0xb;
    uVar10 = uVar8 >> 8 ^ uVar1 >> 0x13 ^ uVar9;
    uVar1 = uVar1 ^ uVar1 << 0xb;
    *param_1 = (char)(uVar9 >> 0x18);
    uVar9 = uVar7 ^ uVar10;
    uVar8 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar7 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[1] = (char)(uVar9 >> 0x18);
    uVar9 = uVar2 ^ uVar10;
    uVar7 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar2 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[2] = (char)(uVar9 >> 0x18);
    uVar9 = uVar1 ^ uVar10;
    uVar2 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[3] = (char)(uVar9 >> 0x18);
    uVar9 = uVar8 ^ uVar10;
    uVar1 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar8 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[4] = (char)(uVar9 >> 0x18);
    uVar9 = uVar7 ^ uVar10;
    uVar8 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar7 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[5] = (char)(uVar9 >> 0x18);
    uVar9 = uVar2 ^ uVar10;
    uVar7 = uVar10 ^ uVar10 << 0xb;
    uVar10 = uVar2 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    param_1[6] = (char)(uVar9 >> 0x18);
    uVar9 = uVar1 ^ uVar10;
    uVar2 = uVar10 ^ uVar10 << 0xb;
    uVar1 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar9;
    uVar10 = uVar8 ^ uVar8 >> 8 ^ uVar1;
    uVar1 = uVar1 ^ uVar1 << 0xb;
    param_1[7] = (char)(uVar9 >> 0x18);
    uVar9 = uVar7 ^ uVar7 >> 8 ^ uVar10;
    bVar5 = (byte)(uVar10 >> 0x18);
    param_1[8] = bVar5;
    uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar9;
    bVar4 = (byte)(uVar9 >> 0x18);
    param_1[9] = bVar4;
    bVar3 = (byte)(uVar2 >> 0x18);
    param_1[10] = bVar3;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2;
    bVar6 = (byte)(uVar1 >> 0x18);
    bVar5 = bVar5 ^ (byte)((uVar10 << 0xb) >> 0x18) ^ bVar6;
    param_1[0xb] = bVar6;
    bVar4 = bVar4 ^ (byte)((uVar9 << 0xb) >> 0x18) ^ bVar5;
    bVar3 = bVar3 ^ (byte)((uVar2 << 0xb) >> 0x18) ^ bVar4;
    param_1[0xc] = bVar5;
    param_1[0xd] = bVar4;
    param_1[0xe] = bVar3;
    param_1[0xf] = bVar6 ^ (byte)((uVar1 << 0xb) >> 0x18) ^ bVar3;
  }
  return param_2 == 2;
}

