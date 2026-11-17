
void FUN_02fddab0(uint *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_70;
  byte local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (0 < (int)*param_1) {
    lVar4 = 0;
    puVar9 = *(undefined8 **)(param_1 + 4);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar7 = puVar9;
      *(undefined8 **)(param_1 + 4) = puVar7;
      puVar9 = puVar7;
    } while (lVar4 < (int)*param_1);
  }
  *param_1 = 0;
  local_58 = 0;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0;
  local_70 = FUN_03401dc0();
  local_6c = *param_2;
  if (7 < local_6c) {
    local_6c = 0xff;
  }
  FUN_03401f10(param_1,&local_70);
  uVar10 = *param_1;
  if (1 < (int)uVar10) {
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar5 = (ulong)(uVar10 >> 1);
    do {
      uVar13 = (uint)uVar5 * 2;
      uVar8 = puVar9[uVar5 - 1 & 0xffffffff];
      if ((int)uVar10 < (int)uVar13) {
        uVar2 = (uint)uVar5;
      }
      else {
        uVar11 = uVar5 & 0xffffffff;
        do {
          if ((int)uVar13 < (int)uVar10) {
            uVar2 = FUN_01a4e630((puVar9 + (int)uVar13)[-1],puVar9[(int)uVar13]);
            uVar12 = uVar13 | uVar2 >> 0x1f;
          }
          else {
            uVar12 = uVar13;
          }
          iVar3 = FUN_01a4e630(uVar8,puVar9[(int)(uVar12 - 1)]);
          uVar2 = (uint)uVar11;
          if (-1 < iVar3) break;
          uVar13 = uVar12 * 2;
          uVar11 = (ulong)uVar12;
          puVar9[(int)(uVar2 - 1)] = puVar9[(int)(uVar12 - 1)];
          uVar2 = uVar12;
        } while ((int)uVar13 <= (int)uVar10);
      }
      puVar9[(int)(uVar2 - 1)] = uVar8;
      bVar1 = 1 < (long)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
    uVar5 = (ulong)uVar10 - 1;
    uVar11 = uVar5 & 0xffffffff;
    uVar8 = puVar9[uVar11];
    puVar9[uVar11] = *puVar9;
    uVar11 = (ulong)uVar10;
    if (2 < uVar10) {
      do {
        uVar6 = uVar5;
        uVar10 = 2;
        uVar13 = 1;
        do {
          if ((int)uVar10 < (int)uVar6) {
            uVar2 = FUN_01a4e630((puVar9 + (int)uVar10)[-1],puVar9[(int)uVar10]);
            uVar2 = uVar10 | uVar2 >> 0x1f;
          }
          else {
            uVar2 = uVar10;
          }
          iVar3 = FUN_01a4e630(uVar8,puVar9[(int)(uVar2 - 1)]);
          if (-1 < iVar3) {
            lVar4 = (long)(int)(uVar13 - 1);
            break;
          }
          lVar4 = (long)(int)(uVar2 - 1);
          uVar10 = uVar2 << 1;
          puVar9[(int)(uVar13 - 1)] = puVar9[lVar4];
          uVar13 = uVar2;
        } while ((long)(int)uVar10 < (long)uVar11);
        puVar9[lVar4] = uVar8;
        uVar5 = uVar6 - 1 & 0xffffffff;
        uVar8 = puVar9[uVar5];
        puVar9[uVar5] = *puVar9;
        uVar5 = uVar6 - 1;
        uVar11 = uVar6;
      } while (2 < uVar6);
    }
    *puVar9 = uVar8;
  }
  return;
}

