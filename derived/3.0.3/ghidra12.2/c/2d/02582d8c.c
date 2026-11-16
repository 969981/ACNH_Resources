
ulong FUN_02582d8c(byte *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  
  lVar6 = DAT_055021a0;
  puVar5 = PTR_DAT_04bb27d0;
  uVar12 = (ulong)*param_1;
  uVar7 = 0xffffffff;
  if (uVar12 < 8) {
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar10 + 0x476) < 2) {
      *(undefined4 *)(DAT_055021a0 + uVar12 * 4) = 0xffffffff;
      bVar3 = *param_1;
      if (bVar3 < 8) {
        uVar9 = (uint)bVar3;
        if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)bVar3 * 0x13f0 + 0x13d4) == '\0' ||
            *(long *)PTR_DAT_04bb4fb8 == 0) {
          uVar9 = 0xffffffff;
        }
        uVar7 = (ulong)uVar9;
      }
    }
    else {
      if (param_2 == 2) {
        bVar3 = *(byte *)(lVar10 + 0x473);
        pcVar8 = PTR_DAT_04bc1220;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pcVar8 = (char *)(lVar10 + 0x472);
          }
        }
        cVar2 = *pcVar8;
        pcVar8 = (char *)FUN_02582a24(param_1);
        if (cVar2 != *pcVar8) {
          return 0xffffffff;
        }
        lVar10 = **(long **)puVar5;
      }
      bVar3 = *(byte *)(lVar10 + 0x473);
      pbVar11 = PTR_DAT_04bc1220;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar11 = (byte *)(lVar10 + 0x473);
        }
      }
      bVar4 = *pbVar11;
      uVar7 = 0xffffffff;
      bVar3 = *param_1;
      uVar9 = 0xff;
      if (bVar3 < 8) {
        uVar9 = (uint)bVar3;
      }
      if (((long)(char)bVar4 != 0xffffffffffffffff) && (bVar3 < 8)) {
        pbVar11 = (byte *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
        if (7 < bVar4) {
          pbVar11 = (byte *)(lVar10 + 0x48);
        }
        if ((((*pbVar11 & 1) != 0) &&
            ((*(uint *)(pbVar11 + 0x7c) >> (ulong)(uVar9 & 0x1f) & 1) != 0)) &&
           (uVar9 = *(uint *)(lVar6 + uVar12 * 4), uVar7 = (ulong)uVar9, (int)uVar9 < 0)) {
          if ((*(byte *)(lVar10 + 0x476) < 2) ||
             (*(char *)(lVar10 + 0x44c + (ulong)bVar3 * 4 + 2) == -1)) {
            lVar10 = 0xffffffff;
          }
          else {
            lVar10 = (long)*(short *)(lVar10 + 0x44c + (ulong)bVar3 * 4);
          }
          uVar7 = FUN_0250b360(*(undefined8 *)PTR_DAT_04bb4fb8,lVar10);
          *(int *)(lVar6 + uVar12 * 4) = (int)uVar7;
        }
      }
    }
  }
  return uVar7;
}

