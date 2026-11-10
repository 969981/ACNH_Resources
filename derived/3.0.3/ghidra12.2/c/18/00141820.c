
int FUN_00141820(long param_1,long param_2,ushort *param_3,ushort param_4)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  ulong uVar7;
  ushort uVar8;
  undefined *puVar9;
  uint uVar10;
  ushort uVar11;
  ushort local_64 [2];
  
  if (param_4 == 0) {
    sVar5 = 0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar2 = 0x37 - ((int)*(short *)(param_2 + 6) >> 1);
    uVar11 = 0;
    sVar5 = 0;
    uVar10 = 0;
    while (sVar3 = FUN_00141680(*param_3 >> 8 | *param_3 << 8,local_64), -1 < sVar3) {
      uVar7 = (ulong)local_64[0];
      if ((short)local_64[0] < 0) {
        if ((uVar7 ^ 0x8000) - 7 < 0xd) break;
        uVar1 = *(ushort *)(&DAT_04059b42 + (uVar7 ^ 0x8000) * 6);
      }
      else {
        if (uVar7 - 0x4f < 2) break;
        uVar1 = *(ushort *)(&DAT_04059950 + uVar7 * 6);
      }
      if (((ulong)uVar1 == 0xffff) || (L"0123456789"[uVar1] == L'\0')) break;
      if ((ushort)L"0123456789"[uVar1] < 0x100) {
        if ((short)local_64[0] < 0) {
          if (0xc < (uVar7 ^ 0x8000) - 7) goto LAB_00141930;
        }
        else {
LAB_00141938:
          if (1 < uVar7 - 0x4f) {
            puVar9 = &DAT_0405994e + uVar7 * 6;
            goto LAB_001419a8;
          }
        }
LAB_00141944:
        uVar10 = uVar10 + 0xffff;
        if ((uVar2 & 0xffff) < (uVar10 & 0xffff)) break;
      }
      else {
        if (-1 < (short)local_64[0]) goto LAB_00141938;
        if ((uVar7 ^ 0x8000) - 7 < 0xd) goto LAB_00141944;
LAB_00141930:
        puVar9 = &UNK_04059b40 + (uVar7 ^ 0x8000) * 6;
LAB_001419a8:
        uVar10 = *(ushort *)(puVar9 + 4) + uVar10;
        if ((uVar2 & 0xffff) < (uVar10 & 0xffff)) break;
      }
      if ((short)local_64[0] < 0) {
        if ((uVar7 ^ 0x8000) - 7 < 0xd) goto LAB_00141994;
        uVar6 = *(ushort *)(&DAT_04059b44 + (uVar7 ^ 0x8000) * 6);
        if (uVar6 != 0) goto LAB_001419d0;
      }
      else {
        if (uVar7 - 0x4f < 2) {
LAB_00141994:
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *(ushort *)(&DAT_04059952 + uVar7 * 6);
          if (uVar6 == 0) goto LAB_001419f4;
        }
LAB_001419d0:
        uVar8 = 0;
        sVar3 = sVar5;
        do {
          sVar5 = sVar3 + 1;
          uVar8 = uVar8 + 1;
          *(ushort *)(param_1 + (long)sVar3 * 2 + 0x74) = uVar1 & 0xff;
          sVar3 = sVar5;
        } while (uVar8 < uVar6);
      }
LAB_001419f4:
      uVar11 = uVar11 + 1;
      param_3 = param_3 + 1;
      if (param_4 <= uVar11) break;
    }
  }
  if (uVar11 == param_4) {
    *(short *)(param_1 + 0x72) = sVar5;
    iVar4 = uVar10 + ((int)*(short *)(param_2 + 6) >> 1);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

