
undefined8 FUN_03c86c00(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char *pcVar5;
  ushort *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ushort *puVar12;
  
  pcVar5 = *(char **)(param_1 + 0x18);
  if (*pcVar5 == '\0') {
    puVar6 = *(ushort **)(param_1 + 8);
    if (*puVar6 != 0) {
      uVar4 = *puVar6 >> 1;
      lVar8 = 0;
      puVar12 = puVar6 + 2;
      uVar3 = *(int *)(param_1 + 0x20) - 1;
      uVar2 = (uint)uVar4;
      if ((int)uVar3 <= (int)(uint)uVar4) {
        uVar2 = uVar3;
      }
      do {
        if (puVar12[-1] == 0) {
LAB_03c86c8c:
          uVar7 = (uint)lVar8;
          goto joined_r0x03c86c90;
        }
        if (*puVar12 == 0) {
          lVar8 = lVar8 + 1;
          goto LAB_03c86c8c;
        }
        if (puVar12[1] == 0) {
          uVar7 = (int)lVar8 + 2;
          goto joined_r0x03c86c90;
        }
        lVar8 = lVar8 + 3;
        puVar12 = puVar12 + 3;
      } while (lVar8 != 0x80001);
      uVar7 = 0;
joined_r0x03c86c90:
      if (uVar2 != 0xffffffff) {
        if ((int)uVar2 < 0) goto LAB_03c86d44;
        if ((int)uVar2 <= (int)uVar7) {
          uVar7 = uVar2;
        }
      }
      if (*(int *)(param_1 + 0x20) <= (int)uVar7) {
        uVar7 = uVar3;
      }
      if (0 < (int)uVar7) {
        uVar9 = (ulong)uVar7 & 3;
        if (uVar7 < 4) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          puVar12 = puVar6 + 2;
          do {
            pcVar11 = pcVar5 + uVar10 + 1;
            uVar10 = uVar10 + 4;
            pcVar11[-1] = (char)puVar12[-1];
            *pcVar11 = (char)*puVar12;
            pcVar11[1] = (char)puVar12[1];
            puVar1 = puVar12 + 2;
            puVar12 = puVar12 + 4;
            pcVar11[2] = (char)*puVar1;
          } while (((ulong)uVar7 & 0xfffffffc) != uVar10);
        }
        if ((uVar7 & 3) != 0) {
          puVar6 = puVar6 + uVar10;
          pcVar11 = pcVar5 + uVar10;
          do {
            puVar6 = puVar6 + 1;
            uVar9 = uVar9 - 1;
            *pcVar11 = (char)*puVar6;
            pcVar11 = pcVar11 + 1;
          } while (uVar9 != 0);
        }
      }
      pcVar5[(int)uVar7] = '\0';
    }
  }
LAB_03c86d44:
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
  return *(undefined8 *)(param_1 + 0x18);
}

