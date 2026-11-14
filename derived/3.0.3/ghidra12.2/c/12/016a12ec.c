
void FUN_016a12ec(long param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  long lVar3;
  int *piVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  
  puVar12 = *(uint **)(param_2 + 0x10);
  if (puVar12 == (uint *)0x0) {
    return;
  }
  uVar10 = *puVar12;
  if (uVar10 == 0 || puVar12 == (uint *)(ulong)uVar10) {
    return;
  }
  puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar10);
  if (*puVar13 == 0) {
    return;
  }
  uVar10 = puVar13[1];
  if (uVar10 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar13[2] == 0) {
    return;
  }
  lVar3 = 0xc;
  if (*(char *)((long)puVar13 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar13 + lVar3 + (ulong)(ushort)puVar13[2] * 8;
  if (lVar3 == 0) {
    return;
  }
  uVar6 = 0;
  if ((ulong)uVar10 != 0) {
    uVar6 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar10);
  }
  if (*puVar13 <= uVar6) {
    uVar6 = 0xffffffff;
  }
  if (DAT_05327430 <= uVar6) {
    return;
  }
  uVar9 = *(ushort *)(DAT_05327438 + (long)(int)uVar6 * 2);
  uVar10 = (uint)uVar9;
  if (0x2e < uVar9) {
    return;
  }
  if (uVar10 == 0) {
    return;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0xb20) + 0x1104);
  piVar4 = piVar1 + uVar10;
  if (0x2e < uVar10) {
    piVar4 = piVar1;
  }
  *piVar4 = *piVar4 + 1;
  psVar2 = (short *)(*(long *)(param_1 + 0xb20) + 0x1480);
  psVar5 = psVar2 + (ulong)uVar10 * 4;
  if (0x2e < uVar10) {
    psVar5 = psVar2;
  }
  if (*psVar5 == -2) {
LAB_016a1418:
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    psVar5 = psVar2 + (ulong)uVar10 * 4;
    if (0x2e < uVar10) {
      psVar5 = psVar2;
    }
    *(undefined4 *)psVar5 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(psVar5 + 2) = uVar8;
  }
  else {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar6;
    if ((uint)((ulong)uVar6 * 100 >> 0x20) < 0x1e) goto LAB_016a1418;
  }
  puVar12 = *(uint **)(param_2 + 0x10);
  if (puVar12 != (uint *)0x0) {
    uVar6 = *puVar12;
    uVar11 = 0;
    if ((uVar6 == 0) || (puVar12 == (uint *)(ulong)uVar6)) goto LAB_016a14c4;
    puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
    uVar11 = 0;
    if (*puVar13 == 0) goto LAB_016a14c4;
    uVar6 = puVar13[1];
    if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
      lVar3 = 0xc;
      if (*(char *)((long)puVar13 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar13 + lVar3 + (ulong)(ushort)puVar13[2] * 8;
      if (lVar3 != 0) {
        uVar11 = 0;
        if ((ulong)uVar6 != 0) {
          uVar11 = (uint)((ulong)((long)puVar12 - lVar3) / (ulong)uVar6);
        }
        if (*puVar13 <= uVar11) {
          uVar11 = 0xffffffff;
        }
        if ((uVar11 < DAT_05327440) &&
           (uVar11 = (uint)*(ushort *)(DAT_05327448 + (long)(int)uVar11 * 2), uVar11 < 0x2f))
        goto LAB_016a14c4;
      }
    }
  }
  uVar11 = 0;
LAB_016a14c4:
  if ((uVar11 != 0) && (uVar11 != uVar10)) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb20) + 0x1104);
    piVar4 = piVar1 + uVar11;
    if (0x2e < uVar11) {
      piVar4 = piVar1;
    }
    *piVar4 = *piVar4 + 1;
    uVar6 = DAT_05582b78;
    uVar10 = DAT_05582b74;
    psVar2 = (short *)(*(long *)(param_1 + 0xb20) + 0x1480);
    psVar5 = psVar2 + (ulong)uVar11 * 4;
    if (0x2e < uVar11) {
      psVar5 = psVar2;
    }
    uVar7 = DAT_05582b7c;
    if (*psVar5 != -2) {
      uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      if (0x1d < (uint)((ulong)uVar7 * 100 >> 0x20)) {
        DAT_05582b70 = uVar10;
        DAT_05582b74 = uVar6;
        DAT_05582b7c = uVar7;
        return;
      }
    }
    DAT_05582b7c = uVar7;
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    psVar5 = psVar2 + (ulong)uVar11 * 4;
    if (0x2e < uVar11) {
      psVar5 = psVar2;
    }
    *(undefined4 *)psVar5 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(psVar5 + 2) = uVar8;
  }
  return;
}

