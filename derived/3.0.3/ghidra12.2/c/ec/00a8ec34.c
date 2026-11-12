
float FUN_00a8ec34(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 0x17 & 1) != 0) {
      return 0.0;
    }
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 0x1e & 1) != 0) {
      uVar5 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320;
      if (DAT_0534e300 <= uVar5) {
        return 0.0;
      }
      puVar7 = *(uint **)(DAT_0534e308 + (long)(int)uVar5 * 8);
      if (puVar7 == (uint *)0x0) {
        return 0.0;
      }
      uVar5 = *puVar7;
      if (uVar5 == 0 || puVar7 == (uint *)(ulong)uVar5) {
        return 0.0;
      }
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
      if (*puVar9 == 0) {
        return 0.0;
      }
      uVar5 = puVar9[1];
      if (uVar5 == 0) {
        return 0.0;
      }
      if ((ulong)(ushort)puVar9[2] == 0) {
        return 0.0;
      }
      lVar1 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar1 == 0) {
        return 0.0;
      }
      uVar2 = 0;
      if ((ulong)uVar5 != 0) {
        uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar5);
      }
      if (*puVar9 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc0e58 <= uVar2) {
        return 0.0;
      }
      if (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar2 * 2) == 6) {
        return *(float *)(param_1 + 0x65408);
      }
      return 0.0;
    }
  }
  bVar3 = *(byte *)(param_1 + 0x651e4);
  uVar8 = (long)(char)bVar3 & 0xffffffff;
  if (0x17 < bVar3) {
    uVar8 = 0;
  }
  uVar5 = *(uint *)((byte *)(param_1 + 0x651e4) + uVar8 * 4 + 0x28);
  if (0x14 < uVar5) {
    uVar5 = 0;
  }
  if (0x13 < uVar5 - 1) {
    return 0.0;
  }
  uVar2 = (uint)(char)*(byte *)(param_1 + 0x651e5);
  iVar6 = (int)*(char *)(param_1 + 0x651e6);
  switch(uVar5) {
  default:
    if (0xe < (int)uVar2) {
      return 1.0;
    }
    break;
  case 2:
  case 6:
  case 10:
  case 0xe:
  case 0x12:
    return 1.0;
  case 3:
  case 7:
  case 0xb:
  case 0xf:
  case 0x13:
    if ((int)uVar2 < 0x2d) {
      return 1.0;
    }
    iVar6 = (uint)*(byte *)(param_1 + 0x651e5) * -0x3c - iVar6;
LAB_00a8ee54:
    iVar6 = iVar6 + 0xe10;
    goto LAB_00a8ee58;
  case 4:
  case 8:
  case 0xc:
  case 0x10:
  case 0x14:
    if (0xe < (int)uVar2) {
      if (uVar2 < 0x2d) {
        return 1.0;
      }
      iVar6 = uVar2 * -0x3c - iVar6;
      goto LAB_00a8ee54;
    }
  }
  iVar6 = iVar6 + uVar2 * 0x3c;
LAB_00a8ee58:
  return (float)iVar6 / 900.0;
}

