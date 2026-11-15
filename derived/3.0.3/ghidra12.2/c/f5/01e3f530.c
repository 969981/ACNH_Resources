
void FUN_01e3f530(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  long lVar6;
  byte bVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  float fVar11;
  float fVar12;
  
  puVar10 = *(undefined1 **)(param_1 + 0x690);
  if (puVar10 == (undefined1 *)0x0) {
    return;
  }
  if ((puVar10[7] & 0x30) == 0x20) {
    return;
  }
  FUN_01e3d988();
  uVar5 = (ushort)(byte)puVar10[4] | ((byte)puVar10[5] & 3) << 8;
  if (uVar5 != 0x3ff) {
    if (DAT_04c487d4 == 0xffff) {
LAB_01e3f620:
      uVar8 = 0xffff;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar8 = DAT_04c487d4;
      if ((*puVar1 >> 3 & 1) != 0) {
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar8 = 0;
          puVar9 = DAT_055c1b60;
          do {
            if (*(int *)(puVar9 + -1) == 0x6622bd46) goto LAB_01e3f624;
            puVar9 = (undefined8 *)puVar9[1];
            uVar8 = uVar8 + 1;
          } while (puVar9 != &DAT_055c1b58);
        }
        goto LAB_01e3f620;
      }
    }
LAB_01e3f624:
    if (0x1ff < uVar5) {
      uVar5 = uVar5 | 0xfc00;
    }
    if (uVar5 != uVar8) {
      return;
    }
  }
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 == 0) goto LAB_01e3f790;
  fVar12 = *(float *)(lVar6 + 0x280);
  fVar11 = *(float *)(lVar6 + 0x278);
  *puVar10 = (char)(int)fVar11;
  puVar10[2] = (char)((uint)(int)fVar12 >> 4);
  puVar10[1] = (byte)((int)fVar12 << 4) | (byte)((uint)(int)fVar11 >> 8) & 0xf;
  puVar10[7] = puVar10[7] & 0xf3;
  bVar7 = puVar10[0xb];
  bVar3 = (byte)(*(int *)(param_1 + 0x750) << 6);
  puVar10[0xb] = bVar3 | bVar7 & 0x3f;
  puVar10[3] = *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x2b7);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x3b0) + 0x56c);
  puVar10[10] = puVar10[10] & 0xf | (byte)(uVar2 << 4);
  puVar10[0xb] = bVar3 | bVar7 & 0x3c | (byte)(uVar2 >> 4) & 3;
  puVar10[0xb] = bVar3 | (byte)((*(uint *)(*(long *)(param_1 + 0x3b0) + 0x568) & 0xf) << 2) |
                 (byte)(uVar2 >> 4) & 3;
  if (*(int *)(param_1 + 0x500) == 0) goto LAB_01e3f790;
  if (DAT_04c487d4 == 0xffff) {
LAB_01e3f774:
    uVar4 = 0xff;
    bVar7 = 0xff;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar5 = DAT_04c487d4;
    if ((*puVar1 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar5 = 0;
        puVar9 = DAT_055c1b60;
        do {
          if (*(int *)(puVar9 + -1) == 0x6622bd46) goto LAB_01e3f780;
          puVar9 = (undefined8 *)puVar9[1];
          uVar5 = uVar5 + 1;
        } while (puVar9 != &DAT_055c1b58);
      }
      goto LAB_01e3f774;
    }
LAB_01e3f780:
    uVar4 = (undefined1)uVar5;
    bVar7 = (byte)(uVar5 >> 8);
  }
  puVar10[4] = uVar4;
  puVar10[5] = puVar10[5] & 0xfc | bVar7 & 3;
LAB_01e3f790:
  FUN_020ea498(*(undefined8 *)PTR_DAT_04bb4760,*(undefined4 *)(param_1 + 0x698),param_2 & 1,0);
  return;
}

