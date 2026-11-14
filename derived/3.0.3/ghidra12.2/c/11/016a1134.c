
void FUN_016a1134(long param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *(undefined4 *)(param_2 + 8);
  uStack_14 = *(undefined4 *)(param_2 + 0xc);
  lVar9 = (**(code **)(*(long *)(*(long *)(param_1 + 0xb20) + 8) + 0x20))();
  uVar8 = FUN_0277d6c4(&local_18);
  if (((uVar8 >> 3 & 0x1fff) < 0x753) &&
     ((*(uint *)(lVar9 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
    return;
  }
  puVar11 = *(uint **)(param_2 + 0x10);
  if (puVar11 != (uint *)0x0) {
    uVar8 = *puVar11;
    uVar10 = 0;
    if ((uVar8 == 0) || (puVar11 == (uint *)(ulong)uVar8)) goto LAB_016a1228;
    puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
    uVar10 = 0;
    if (*puVar12 == 0) goto LAB_016a1228;
    uVar8 = puVar12[1];
    if ((uVar8 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
      lVar9 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar9 != 0) {
        uVar10 = 0;
        if ((ulong)uVar8 != 0) {
          uVar10 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar8);
        }
        if (*puVar12 <= uVar10) {
          uVar10 = 0xffffffff;
        }
        if ((uVar10 < DAT_05327410) &&
           (uVar10 = (uint)*(ushort *)(DAT_05327418 + (long)(int)uVar10 * 2), uVar10 < 0x39))
        goto LAB_016a1228;
      }
    }
  }
  uVar10 = 0;
LAB_016a1228:
  if (uVar10 != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xb20) + 0xfa4);
    piVar3 = piVar1 + uVar10;
    if (0x38 < uVar10) {
      piVar3 = piVar1;
    }
    *piVar3 = *piVar3 + 1;
    uVar7 = DAT_05582b78;
    uVar8 = DAT_05582b74;
    psVar2 = (short *)(*(long *)(param_1 + 0xb20) + 0x11c0);
    psVar4 = psVar2 + (ulong)uVar10 * 4;
    if (0x38 < uVar10) {
      psVar4 = psVar2;
    }
    uVar5 = DAT_05582b7c;
    if (*psVar4 != -2) {
      uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      if (0x1d < (uint)((ulong)uVar5 * 100 >> 0x20)) {
        DAT_05582b70 = uVar8;
        DAT_05582b74 = uVar7;
        DAT_05582b7c = uVar5;
        return;
      }
    }
    DAT_05582b7c = uVar5;
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    psVar4 = psVar2 + (ulong)uVar10 * 4;
    if (0x38 < uVar10) {
      psVar4 = psVar2;
    }
    *(undefined4 *)psVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(psVar4 + 2) = uVar6;
  }
  return;
}

