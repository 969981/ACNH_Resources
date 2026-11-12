
void FUN_0080dc70(uint *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = *param_1;
  if (1 < (int)uVar6) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    uVar3 = (ulong)(uVar6 >> 1);
    do {
      uVar10 = (uint)uVar3 * 2;
      pcVar4 = (char *)puVar2[uVar3 - 1 & 0xffffffff];
      if ((int)uVar6 < (int)uVar10) {
        uVar8 = (uint)uVar3;
      }
      else {
        uVar7 = uVar3 & 0xffffffff;
        do {
          if ((int)uVar10 < (int)uVar6) {
            uVar9 = uVar10 | *(char *)(puVar2 + (int)uVar10)[-1] < *(char *)puVar2[(int)uVar10];
          }
          else {
            uVar9 = uVar10;
          }
          uVar8 = (uint)uVar7;
          if (*(char *)puVar2[(int)(uVar9 - 1)] <= *pcVar4) break;
          puVar2[(int)((uint)uVar7 - 1)] = (char *)puVar2[(int)(uVar9 - 1)];
          uVar10 = uVar9 * 2;
          uVar7 = (ulong)uVar9;
          uVar8 = uVar9;
        } while ((int)uVar10 <= (int)uVar6);
      }
      puVar2[(int)(uVar8 - 1)] = pcVar4;
      bVar1 = 1 < (long)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    uVar7 = (ulong)uVar6 - 1;
    uVar3 = uVar7 & 0xffffffff;
    pcVar4 = (char *)puVar2[uVar3];
    puVar2[uVar3] = *puVar2;
    uVar3 = (ulong)uVar6;
    if (2 < uVar6) {
      do {
        uVar6 = 2;
        uVar10 = 1;
        do {
          if ((int)uVar6 < (int)uVar7) {
            uVar8 = uVar6 | *(char *)(puVar2 + (int)uVar6)[-1] < *(char *)puVar2[(int)uVar6];
          }
          else {
            uVar8 = uVar6;
          }
          lVar5 = (long)(int)(uVar10 - 1);
          if (*(char *)puVar2[(int)(uVar8 - 1)] <= *pcVar4) goto LAB_0080dd60;
          puVar2[lVar5] = (char *)puVar2[(int)(uVar8 - 1)];
          uVar6 = uVar8 << 1;
          uVar10 = uVar8;
        } while ((long)(int)uVar6 < (long)uVar3);
        lVar5 = (long)(int)(uVar8 - 1);
LAB_0080dd60:
        puVar2[lVar5] = pcVar4;
        uVar3 = uVar7 - 1 & 0xffffffff;
        pcVar4 = (char *)puVar2[uVar3];
        puVar2[uVar3] = *puVar2;
        bVar1 = 2 < uVar7;
        uVar3 = uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
    *puVar2 = pcVar4;
  }
  return;
}

