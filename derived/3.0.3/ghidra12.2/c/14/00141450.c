
undefined8
FUN_00141450(short param_1,short param_2,ushort *param_3,ushort param_4,undefined8 *param_5,
            char param_6,long param_7)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  ushort local_64 [2];
  
  if (param_4 == 0) {
    uVar9 = 0;
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar8 = 0;
    uVar11 = 0;
    uVar9 = 0;
    puVar7 = param_3;
    uVar10 = 0;
    while (sVar3 = FUN_00141680(*puVar7 >> 8 | *puVar7 << 8,local_64), -1 < sVar3) {
      uVar5 = (ulong)local_64[0];
      if ((short)local_64[0] < 0) {
        if ((uVar5 ^ 0x8000) - 7 < 0xd) break;
        uVar2 = *(ushort *)(&DAT_04059b42 + (uVar5 ^ 0x8000) * 6);
      }
      else {
        if (uVar5 - 0x4f < 2) break;
        uVar2 = *(ushort *)(&DAT_04059950 + uVar5 * 6);
      }
      if (((ulong)uVar2 == 0xffff) || (*(short *)(param_7 + (ulong)uVar2 * 2) == 0)) break;
      if ((short)local_64[0] < 0) {
        if (0xc < (uVar5 ^ 0x8000) - 7) {
          puVar6 = &UNK_04059b40 + (uVar5 ^ 0x8000) * 6;
          goto LAB_00141560;
        }
LAB_00141554:
        uVar4 = 0xffff;
      }
      else {
        if (uVar5 - 0x4f < 2) goto LAB_00141554;
        puVar6 = &DAT_0405994e + uVar5 * 6;
LAB_00141560:
        uVar4 = (uint)*(ushort *)(puVar6 + 4);
      }
      if (uVar8 != 0) {
        uVar2 = uVar10;
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar4 + uVar9;
      uVar11 = uVar11 + uVar4 & 0xffff;
      puVar7 = puVar7 + 1;
      uVar10 = uVar2;
      if (param_4 <= uVar8) break;
    }
    if (uVar8 != param_4) {
      return 0;
    }
  }
  if ((param_6 == '\r') && (3 < uVar11)) {
    if ((uVar10 & 0xff) == 0) {
      return 0;
    }
    uVar9 = uVar9 + (int)(uVar11 - 1) / 3;
  }
  if (0x37 < (uVar9 & 0xffff)) {
    return 0;
  }
  *(undefined2 *)(param_5 + 0x10) = 1;
  *param_5 = param_3;
  *(char *)((long)param_5 + 0x74) = param_6;
  *(ushort *)(param_5 + 0xe) = param_4 & 0x7f | param_1 << 7;
  *(ushort *)((long)param_5 + 0x72) = (ushort)uVar9 & 0x7f | param_2 << 7;
  uVar1 = 0x8ad0;
  if (-0x8001 < (short)param_4 * -1000) {
    uVar1 = (short)((uint)((short)param_4 * -0x3e80000) >> 0x10);
  }
  *(undefined2 *)(param_5 + 1) = uVar1;
  return 1;
}

