
long FUN_0065ac20(uint *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar9 = param_1[1] * *param_1 * param_1[2];
  puVar10 = param_1 + 0xb;
  uVar5 = *puVar10 & 0x3fffffff;
  if ((int)uVar5 < (int)uVar9) {
    uVar3 = FUN_004267f0(PTR_DAT_048607b8,uVar9,0x10,*(undefined8 *)(param_1 + 8),param_1[10],
                         puVar10);
    uVar5 = param_1[0xb] & 0x3fffffff;
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  if ((int)uVar5 < (int)uVar9) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,uVar9,0x10,*(undefined8 *)(param_1 + 8),param_1[10],
                         puVar10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar5 = param_1[10];
  }
  else {
    uVar5 = param_1[10];
  }
  if (uVar5 == uVar9) {
    uVar5 = param_1[2];
  }
  else {
    param_1[10] = uVar9;
    uVar5 = param_1[2];
  }
  if (uVar5 == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = param_1[1];
    lVar8 = 0;
    uVar9 = 0;
    uVar6 = uVar4;
    do {
      if (uVar6 != 0) {
        uVar6 = *param_1;
        uVar5 = 0;
        uVar7 = uVar6;
        do {
          if (uVar7 != 0) {
            uVar11 = 0;
            do {
              plVar1 = (long *)(*(long *)(param_1 + 8) +
                               (long)(int)(uVar11 + uVar6 * (uVar5 + uVar9 * uVar4)) * 0x10);
              *plVar1 = lVar8;
              uVar4 = param_1[3] >> (ulong)(uVar11 & 0x1f);
              if (uVar4 < 2) {
                uVar4 = 1;
              }
              uVar6 = param_1[4] >> (ulong)(uVar11 & 0x1f);
              if (uVar6 < 2) {
                uVar6 = 1;
              }
              iVar2 = FUN_0065b220(param_1[6],uVar4,uVar6);
              uVar4 = param_1[5] >> (ulong)(uVar11 & 0x1f);
              uVar11 = uVar11 + 1;
              if (uVar4 < 2) {
                uVar4 = 1;
              }
              plVar1[1] = (ulong)(uVar4 * iVar2);
              lVar8 = lVar8 + (ulong)(uVar4 * iVar2);
              uVar6 = *param_1;
              uVar4 = param_1[1];
              uVar7 = uVar6;
            } while (uVar11 < uVar6);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
        uVar5 = param_1[2];
        uVar6 = uVar4;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  return lVar8;
}

