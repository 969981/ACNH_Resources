
void FUN_0344d5a0(ushort *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  puVar6 = PTR_DAT_04bb27d0;
  lVar12 = *(long *)PTR_DAT_04bb4c80;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    uVar8 = FUN_007ef180(param_1);
    if ((uVar8 & 1) == 0) goto LAB_0344d688;
LAB_0344d64c:
    if (*(byte *)(**(long **)puVar6 + 0x476) < 2) {
      FUN_01525dc8(lVar12,param_1);
    }
    uVar3 = *param_1;
    uVar11 = uVar3 & 0x7f;
    if (uVar11 < 100) {
      lVar10 = lVar12 + 0x21;
      goto LAB_0344d6bc;
    }
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar11 = *(uint *)(puVar1 + 4);
    uVar8 = FUN_007ef180(param_1);
    if ((uVar11 & 1) != 0) {
      uVar9 = (uint)*param_1;
      uVar11 = *param_1 & 0x7f;
      if ((uVar8 & 1) == 0) {
        if (99 < uVar11) {
          return;
        }
        lVar12 = lVar12 + 0x48;
      }
      else {
        if (99 < uVar11) {
          return;
        }
        lVar12 = lVar12 + 0x55;
      }
      goto LAB_0344d798;
    }
    if ((uVar8 & 1) != 0) goto LAB_0344d64c;
LAB_0344d688:
    if (*(byte *)(**(long **)puVar6 + 0x476) < 2) {
      FUN_01525dc8(lVar12,param_1);
    }
    uVar3 = *param_1;
    uVar11 = uVar3 & 0x7f;
    if (uVar11 < 100) {
      lVar10 = lVar12 + 0x14;
LAB_0344d6bc:
      *(byte *)(lVar10 + (ulong)(uVar11 >> 3)) =
           *(byte *)(lVar10 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar3 & 7));
    }
  }
  lVar10 = **(long **)puVar6;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    return;
  }
  bVar4 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar2 = (byte *)(lVar10 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar10 + 0x472) != bVar4)) {
      return;
    }
  }
  uVar8 = FUN_007ef180(param_1);
  bVar7 = 1 < *(byte *)(**(long **)puVar6 + 0x476);
  if ((uVar8 & 1) == 0) {
    if (bVar7) {
      FUN_01525dc8(lVar12,param_1);
    }
    uVar9 = (uint)*param_1;
    uVar11 = *param_1 & 0x7f;
    if (99 < uVar11) {
      return;
    }
    lVar12 = lVar12 + 0x2e;
  }
  else {
    if (bVar7) {
      FUN_01525dc8(lVar12,param_1);
    }
    uVar9 = (uint)*param_1;
    uVar11 = *param_1 & 0x7f;
    if (99 < uVar11) {
      return;
    }
    lVar12 = lVar12 + 0x3b;
  }
LAB_0344d798:
  *(byte *)(lVar12 + (ulong)(uVar11 >> 3)) =
       *(byte *)(lVar12 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar9 & 7));
  return;
}

