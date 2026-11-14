
uint FUN_01af0bc4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined *local_38;
  char *pcStack_30;
  uint local_24;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if ((puVar6 != (uint *)0x0) && (uVar8 = *puVar6, uVar8 != 0 && puVar6 != (uint *)(ulong)uVar8)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
    if ((*puVar7 != 0) && ((uVar8 = puVar7[1], uVar8 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar8 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar8);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 0x59)) {
          return 0;
        }
      }
    }
  }
  iVar4 = FUN_01aed730(param_1);
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "RegulationType4";
  uVar5 = FUN_0273f0a0(&local_38);
  if ((uVar5 & 1) != 0) {
    iVar4 = (iVar4 * 0xc) / 10;
  }
  uVar2 = (iVar4 << 3) / 10;
  uVar8 = uVar2 >> 2;
  if (iVar4 < 2) {
    uVar8 = uVar2;
  }
  local_38 = (undefined *)CONCAT44(local_38._4_4_,0x49);
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 != (uint *)0x0) {
    uVar2 = *puVar6;
    local_24 = 0;
    if ((uVar2 == 0) || (puVar6 == (uint *)(ulong)uVar2)) goto LAB_01af0d74;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
    local_24 = 0;
    if (*puVar7 == 0) goto LAB_01af0d74;
    uVar2 = puVar7[1];
    if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar3 = 0;
        if ((ulong)uVar2 != 0) {
          uVar3 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar2);
        }
        if (*puVar7 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_05326d48) &&
           (local_24 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), local_24 < 0x52))
        goto LAB_01af0d74;
      }
    }
  }
  local_24 = 0;
LAB_01af0d74:
  if (local_24 == 0x49) {
    iVar4 = FUN_01aeb510(param_1);
    uVar8 = uVar8 + iVar4 * 1000;
  }
  return uVar8;
}

