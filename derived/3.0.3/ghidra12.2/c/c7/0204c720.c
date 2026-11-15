
void FUN_0204c720(uint *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  
  if ((param_2 == 0) || (uVar16 = (uint)param_3, (int)uVar16 < 1)) {
    uVar16 = *param_1;
    param_3 = (ulong)uVar16;
  }
  else {
    *param_1 = uVar16;
    *(long *)(param_1 + 2) = param_2;
  }
  if (1 < (int)uVar16) {
    FUN_006bd550("invalid_name",0);
    puVar6 = *(undefined4 **)(param_1 + 2);
    uVar8 = param_3 >> 1 & 0x7fffffff;
    do {
      uVar14 = (uint)uVar8 * 2;
      iVar7 = (int)param_3;
      puVar2 = puVar6 + (uVar8 - 1 & 0xffffffff) * 8;
      uVar3 = *puVar2;
      uVar9 = *(undefined8 *)(puVar2 + 4);
      uVar16 = puVar2[6];
      if (iVar7 < (int)uVar14) {
        uVar11 = (uint)uVar8;
      }
      else {
        uVar10 = uVar8 & 0xffffffff;
        do {
          if ((int)uVar14 < iVar7) {
            uVar12 = uVar14 | (uint)puVar6[(long)(int)uVar14 * 8 + -2] <
                              (uint)puVar6[(long)(int)uVar14 * 8 + 6];
          }
          else {
            uVar12 = uVar14;
          }
          puVar2 = puVar6 + ((long)(int)uVar12 + -1) * 8;
          uVar11 = (uint)uVar10;
          if ((uint)puVar2[6] <= uVar16) break;
          uVar4 = *puVar2;
          uVar15 = *(undefined8 *)(puVar2 + 4);
          puVar6[(long)(int)uVar11 * 8 + -2] = puVar2[6];
          uVar14 = uVar12 * 2;
          puVar6[(long)(int)uVar11 * 8 + -8] = uVar4;
          *(undefined8 *)(puVar6 + (long)(int)uVar11 * 8 + -4) = uVar15;
          uVar10 = (ulong)uVar12;
          uVar11 = uVar12;
        } while ((int)uVar14 <= iVar7);
      }
      puVar6[(long)(int)uVar11 * 8 + -8] = uVar3;
      *(undefined8 *)(puVar6 + (long)(int)uVar11 * 8 + -4) = uVar9;
      puVar6[(long)(int)uVar11 * 8 + -2] = uVar16;
      bVar1 = 1 < (long)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar1);
    uVar8 = (param_3 & 0xffffffff) - 1;
    puVar2 = puVar6 + (uVar8 & 0xffffffff) * 8;
    uVar3 = *puVar2;
    *puVar2 = *puVar6;
    uVar9 = *(undefined8 *)(puVar2 + 4);
    uVar16 = puVar2[6];
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar6 + 4);
    puVar2[6] = puVar6[6];
    while (2 < iVar7) {
      iVar5 = (int)param_3;
      iVar7 = (int)uVar8;
      param_3 = uVar8 & 0xffffffff;
      uVar14 = 2;
      uVar11 = 1;
      do {
        if ((int)uVar14 < iVar7) {
          uVar12 = uVar14 | (uint)puVar6[(long)(int)uVar14 * 8 + -2] <
                            (uint)puVar6[(long)(int)uVar14 * 8 + 6];
        }
        else {
          uVar12 = uVar14;
        }
        lVar13 = (long)(int)uVar12 + -1;
        puVar2 = puVar6 + lVar13 * 8;
        if ((uint)puVar2[6] <= uVar16) {
          lVar13 = (long)(int)(uVar11 - 1);
          break;
        }
        uVar4 = *puVar2;
        uVar15 = *(undefined8 *)(puVar2 + 4);
        puVar6[(long)(int)uVar11 * 8 + -2] = puVar2[6];
        uVar14 = uVar12 * 2;
        puVar6[(long)(int)uVar11 * 8 + -8] = uVar4;
        *(undefined8 *)(puVar6 + (long)(int)uVar11 * 8 + -4) = uVar15;
        uVar11 = uVar12;
      } while ((int)uVar14 < iVar5);
      puVar2 = puVar6 + lVar13 * 8;
      uVar8 = uVar8 - 1;
      *puVar2 = uVar3;
      *(undefined8 *)(puVar2 + 4) = uVar9;
      puVar2[6] = uVar16;
      puVar2 = puVar6 + (uVar8 & 0xffffffff) * 8;
      uVar15 = *(undefined8 *)(puVar6 + 4);
      uVar3 = *puVar2;
      uVar9 = *(undefined8 *)(puVar2 + 4);
      *puVar2 = *puVar6;
      uVar16 = puVar2[6];
      *(undefined8 *)(puVar2 + 4) = uVar15;
      puVar2[6] = puVar6[6];
    }
    *puVar6 = uVar3;
    *(undefined8 *)(puVar6 + 4) = uVar9;
    puVar6[6] = uVar16;
  }
  return;
}

