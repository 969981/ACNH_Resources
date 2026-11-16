
void FUN_02874b90(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar11 = *(long *)puVar5;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      uVar7 = FUN_0277d7b4(param_1,param_3);
      if ((uVar7 & 1) != 0) {
        lVar10 = 0;
        goto LAB_02874c70;
      }
      lVar11 = *(long *)puVar5;
    }
  }
  uVar6 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar11 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  uVar7 = FUN_0277d7b4(param_1 + 8,param_3);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar10 = 1;
LAB_02874c70:
  if (*(char *)(param_1 + 0x10 + lVar10) == '\0') {
    *(undefined1 *)(param_1 + 0x10 + lVar10) = 1;
    param_1 = param_1 + lVar10 * 0x38;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *(undefined8 *)(param_1 + 0x24) = param_2[2];
    *(undefined8 *)(param_1 + 0x1c) = uVar3;
    *(undefined8 *)(param_1 + 0x14) = uVar2;
    uVar2 = param_2[5];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    *(undefined8 *)(param_1 + 0x44) = param_2[6];
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    local_58 = PTR_DAT_04bc0510;
    *(undefined8 *)(param_1 + 0x34) = uVar4;
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    local_48 = 0;
    local_50 = *param_3;
    uStack_4c = param_3[1];
    lVar10 = *(long *)puVar5;
    local_58 = local_58 + 0x10;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar5 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_3);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
             puVar8 != (uint *)0x0 && (uVar6 = *puVar8, uVar6 != 0)) &&
            (puVar8 != (uint *)(ulong)uVar6)))) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
          if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar6 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0068) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar1 * 2) == 0x68)) {
                local_68 = PTR_DAT_04bb2020 + 0x10;
                pcStack_60 = "FoxCommuneRealRate";
                FUN_0273fd90(&local_68,5);
              }
            }
          }
        }
      }
    }
  }
  return;
}

