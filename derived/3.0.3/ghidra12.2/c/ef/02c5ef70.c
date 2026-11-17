
void FUN_02c5ef70(uint *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = *param_1;
  if (1 < (int)uVar9) {
    puVar8 = *(undefined8 **)(param_1 + 2);
    uVar4 = (ulong)(uVar9 >> 1);
    do {
      uVar12 = (uint)uVar4 * 2;
      uVar7 = puVar8[uVar4 - 1 & 0xffffffff];
      if ((int)uVar9 < (int)uVar12) {
        uVar2 = (uint)uVar4;
      }
      else {
        uVar10 = uVar4 & 0xffffffff;
        do {
          if ((int)uVar12 < (int)uVar9) {
            uVar2 = (**(code **)*param_2)(param_2,(puVar8 + (int)uVar12)[-1],puVar8[(int)uVar12]);
            uVar11 = uVar12 | uVar2 >> 0x1f;
          }
          else {
            uVar11 = uVar12;
          }
          iVar3 = (**(code **)*param_2)(param_2,uVar7,puVar8[(int)(uVar11 - 1)]);
          uVar2 = (uint)uVar10;
          if (-1 < iVar3) break;
          uVar12 = uVar11 * 2;
          uVar10 = (ulong)uVar11;
          puVar8[(int)(uVar2 - 1)] = puVar8[(int)(uVar11 - 1)];
          uVar2 = uVar11;
        } while ((int)uVar12 <= (int)uVar9);
      }
      puVar8[(int)(uVar2 - 1)] = uVar7;
      bVar1 = 1 < (long)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
    uVar4 = (ulong)uVar9 - 1;
    uVar10 = uVar4 & 0xffffffff;
    uVar7 = puVar8[uVar10];
    puVar8[uVar10] = *puVar8;
    uVar10 = (ulong)uVar9;
    if (2 < uVar9) {
      do {
        uVar5 = uVar4;
        uVar9 = 2;
        uVar12 = 1;
        do {
          uVar2 = uVar9;
          if ((int)uVar9 < (int)uVar5) {
            uVar2 = (**(code **)*param_2)(param_2,(puVar8 + (int)uVar9)[-1],puVar8[(int)uVar9]);
            uVar2 = uVar9 | uVar2 >> 0x1f;
          }
          iVar3 = (**(code **)*param_2)(param_2,uVar7,puVar8[(int)(uVar2 - 1)]);
          if (-1 < iVar3) {
            lVar6 = (long)(int)(uVar12 - 1);
            break;
          }
          lVar6 = (long)(int)(uVar2 - 1);
          uVar9 = uVar2 << 1;
          puVar8[(int)(uVar12 - 1)] = puVar8[lVar6];
          uVar12 = uVar2;
        } while ((long)(int)uVar9 < (long)uVar10);
        puVar8[lVar6] = uVar7;
        uVar4 = uVar5 - 1 & 0xffffffff;
        uVar7 = puVar8[uVar4];
        puVar8[uVar4] = *puVar8;
        uVar4 = uVar5 - 1;
        uVar10 = uVar5;
      } while (2 < uVar5);
    }
    *puVar8 = uVar7;
  }
  return;
}

