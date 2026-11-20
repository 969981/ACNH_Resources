
bool FUN_03eaa5e0(short *param_1)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  sVar6 = *param_1;
  if (sVar6 == 0x5942 || sVar6 == 0x4259) {
    uVar7 = param_1[1];
    uVar2 = uVar7 >> 8 | uVar7 << 8;
    if (sVar6 != 0x5942) {
      uVar2 = uVar7;
    }
    if ((ushort)(uVar2 - 1) < 4) {
      uVar11 = *(uint *)(param_1 + 2);
      uVar8 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      if (sVar6 != 0x5942) {
        uVar8 = uVar11;
      }
      if (uVar8 == 0) {
        uVar11 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + (ulong)uVar8);
        uVar9 = FUN_03eaa770(puVar1,sVar6 == 0x5942);
        if ((uVar9 & 1) == 0) {
          return false;
        }
        uVar11 = *puVar1 >> 8;
        if (sVar6 == 0x5942) {
          uVar11 = uVar11 & 0xff00 | *puVar1 >> 0x18 | (uVar11 & 0xff) << 0x10;
        }
        uVar3 = puVar1[(ulong)uVar11 + 1];
        uVar11 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        if (sVar6 != 0x5942) {
          uVar11 = uVar3;
        }
      }
      uVar10 = *(uint *)(param_1 + 4);
      uVar3 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (sVar6 != 0x5942) {
        uVar3 = uVar10;
      }
      if (uVar3 == 0) {
        uVar10 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_1 + (ulong)uVar3);
        uVar9 = FUN_03eaa770(puVar1,sVar6 == 0x5942);
        if ((uVar9 & 1) == 0) {
          return false;
        }
        uVar10 = *puVar1 >> 8;
        if (sVar6 == 0x5942) {
          uVar10 = uVar10 & 0xff00 | *puVar1 >> 0x18 | (uVar10 & 0xff) << 0x10;
        }
        uVar4 = puVar1[(ulong)uVar10 + 1];
        uVar10 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
        if (sVar6 != 0x5942) {
          uVar10 = uVar4;
        }
      }
      uVar5 = *(uint *)(param_1 + 6);
      uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (sVar6 != 0x5942) {
        uVar4 = uVar5;
      }
      if (uVar4 == 0) {
        return uVar3 == 0 && uVar8 == 0;
      }
      if (uVar8 != 0) {
        if (uVar3 < uVar11 && uVar3 != 0) {
          return false;
        }
        if (uVar4 < uVar11) {
          return false;
        }
      }
      return uVar3 == 0 || uVar10 <= uVar4;
    }
  }
  return false;
}

