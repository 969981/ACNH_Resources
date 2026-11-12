
undefined8 FUN_00992370(long param_1,long param_2,uint param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  ushort uVar12;
  byte *pbVar13;
  ushort uVar14;
  
  lVar2 = param_1 + 9;
  uVar14 = 0;
  iVar6 = 0;
  if ((param_3 & 1) == 0) {
    do {
      lVar10 = (long)iVar6;
      lVar1 = (long)iVar6;
      iVar6 = iVar6 + 1;
      uVar14 = uVar14 + *(byte *)(lVar2 + lVar10 + lVar1 * 2 + 1);
    } while (iVar6 != 0x120);
  }
  else {
    do {
      pbVar13 = (byte *)(lVar2 + (long)iVar6 + (long)iVar6 * 2);
      pbVar11 = pbVar13 + 1;
      bVar3 = *param_4 & *pbVar13;
      if ((bVar3 >> 1 & 1) + (bVar3 & 1) + (bVar3 >> 2 & 1) + (bVar3 >> 3 & 1) ==
          (int)((uint)bVar3 << 0x1b) >> 0x1f) {
        uVar12 = 0;
        *pbVar11 = 0;
      }
      else {
        uVar12 = (ushort)*pbVar11;
      }
      iVar6 = iVar6 + 1;
      uVar14 = uVar14 + uVar12;
    } while (iVar6 != 0x120);
  }
  if (uVar14 < 9) {
    iVar6 = 0;
    do {
      lVar10 = (long)iVar6;
      lVar1 = (long)iVar6;
      iVar6 = iVar6 + 1;
      *(undefined1 *)(lVar2 + lVar10 + lVar1 * 2 + 1) = 0x14;
    } while (iVar6 != 0x120);
LAB_009923f0:
    uVar4 = 0;
  }
  else {
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar7 = *puVar5 ^ *puVar5 << 0xb;
    uVar9 = puVar5[3];
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
    puVar5[2] = uVar9;
    puVar5[3] = uVar7;
    pbVar13 = (byte *)(param_1 + 10);
    uVar9 = (uint)*pbVar13;
    uVar7 = (uint)((ulong)uVar14 * (ulong)uVar7 >> 0x20);
    if (uVar7 < *pbVar13) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar7 = uVar7 + 1;
      do {
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x120) goto LAB_009923f0;
        uVar7 = uVar7 - uVar9 & 0xffff;
        pbVar13 = (byte *)(lVar2 + (long)(int)uVar8 + (long)(int)uVar8 * 2 + 1);
        uVar9 = (uint)*pbVar13;
      } while (uVar9 < uVar7);
    }
    *(uint *)(param_2 + 0x10) = (uVar8 % 0x12) * 0x10;
    *(uint *)(param_2 + 0x14) = uVar8 / 0x12 << 4;
    *(uint *)(param_2 + 0x20) = (uVar8 % 0x12) * 0x10 | 0xf;
    *(uint *)(param_2 + 0x24) = uVar8 / 0x12 << 4 | 0xf;
    if (*pbVar13 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      *pbVar13 = *pbVar13 - 1;
    }
  }
  return uVar4;
}

