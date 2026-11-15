
void FUN_02143860(uint *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
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
    puVar4 = *(undefined8 **)(param_1 + 2);
    uVar6 = param_3 >> 1 & 0x7fffffff;
    do {
      uVar13 = (uint)uVar6 * 2;
      iVar5 = (int)param_3;
      puVar2 = puVar4 + (uVar6 - 1 & 0xffffffff) * 4;
      uVar7 = *puVar2;
      uVar8 = puVar2[2];
      uVar16 = *(uint *)(puVar2 + 3);
      if (iVar5 < (int)uVar13) {
        uVar10 = (uint)uVar6;
      }
      else {
        uVar9 = uVar6 & 0xffffffff;
        do {
          if ((int)uVar13 < iVar5) {
            uVar11 = uVar13 | *(uint *)(puVar4 + (long)(int)uVar13 * 4 + -1) <
                              *(uint *)(puVar4 + (long)(int)uVar13 * 4 + 3);
          }
          else {
            uVar11 = uVar13;
          }
          puVar2 = puVar4 + ((long)(int)uVar11 + -1) * 4;
          uVar10 = (uint)uVar9;
          if (*(uint *)(puVar2 + 3) <= uVar16) break;
          uVar15 = *puVar2;
          uVar14 = puVar2[2];
          *(uint *)(puVar4 + (long)(int)uVar10 * 4 + -1) = *(uint *)(puVar2 + 3);
          uVar13 = uVar11 * 2;
          puVar4[(long)(int)uVar10 * 4 + -4] = uVar15;
          puVar4[(long)(int)uVar10 * 4 + -2] = uVar14;
          uVar9 = (ulong)uVar11;
          uVar10 = uVar11;
        } while ((int)uVar13 <= iVar5);
      }
      puVar4[(long)(int)uVar10 * 4 + -4] = uVar7;
      puVar4[(long)(int)uVar10 * 4 + -2] = uVar8;
      *(uint *)(puVar4 + (long)(int)uVar10 * 4 + -1) = uVar16;
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
    uVar6 = (param_3 & 0xffffffff) - 1;
    puVar2 = puVar4 + (uVar6 & 0xffffffff) * 4;
    uVar7 = *puVar2;
    *puVar2 = *puVar4;
    uVar8 = puVar2[2];
    uVar16 = *(uint *)(puVar2 + 3);
    puVar2[2] = puVar4[2];
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar4 + 3);
    while (2 < iVar5) {
      iVar3 = (int)param_3;
      iVar5 = (int)uVar6;
      param_3 = uVar6 & 0xffffffff;
      uVar13 = 2;
      uVar10 = 1;
      do {
        if ((int)uVar13 < iVar5) {
          uVar11 = uVar13 | *(uint *)(puVar4 + (long)(int)uVar13 * 4 + -1) <
                            *(uint *)(puVar4 + (long)(int)uVar13 * 4 + 3);
        }
        else {
          uVar11 = uVar13;
        }
        lVar12 = (long)(int)uVar11 + -1;
        puVar2 = puVar4 + lVar12 * 4;
        if (*(uint *)(puVar2 + 3) <= uVar16) {
          lVar12 = (long)(int)(uVar10 - 1);
          break;
        }
        uVar14 = *puVar2;
        uVar15 = puVar2[2];
        *(uint *)(puVar4 + (long)(int)uVar10 * 4 + -1) = *(uint *)(puVar2 + 3);
        uVar13 = uVar11 * 2;
        puVar4[(long)(int)uVar10 * 4 + -4] = uVar14;
        puVar4[(long)(int)uVar10 * 4 + -2] = uVar15;
        uVar10 = uVar11;
      } while ((int)uVar13 < iVar3);
      puVar2 = puVar4 + lVar12 * 4;
      uVar6 = uVar6 - 1;
      *puVar2 = uVar7;
      puVar2[2] = uVar8;
      *(uint *)(puVar2 + 3) = uVar16;
      puVar2 = puVar4 + (uVar6 & 0xffffffff) * 4;
      uVar14 = puVar4[2];
      uVar7 = *puVar2;
      uVar8 = puVar2[2];
      *puVar2 = *puVar4;
      uVar16 = *(uint *)(puVar2 + 3);
      puVar2[2] = uVar14;
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar4 + 3);
    }
    *puVar4 = uVar7;
    puVar4[2] = uVar8;
    *(uint *)(puVar4 + 3) = uVar16;
  }
  return;
}

