
undefined4 FUN_0068b0e0(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  char *pcVar13;
  int iVar14;
  ulong uVar15;
  
  lVar8 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0xc);
  uVar2 = *(uint *)(param_2 + 1);
  iVar7 = *(int *)(lVar8 + 8);
  puVar6 = (uint *)((int *)(lVar8 + 8) + uVar10 * 4);
  uVar3 = *puVar6;
  puVar12 = puVar6;
  if (iVar7 < (int)uVar3) {
    uVar15 = uVar10;
    uVar4 = uVar3;
    do {
      if ((uint)((int)uVar4 >> 3) < uVar2) {
        uVar11 = (ulong)(*(byte *)(*param_2 + (long)(int)(uVar2 + ~((int)uVar4 >> 3))) >>
                        ((ulong)uVar4 & 7)) & 1;
      }
      else {
        uVar11 = 0;
      }
      uVar15 = (ulong)*(ushort *)(lVar8 + 8 + uVar15 * 0x10 + uVar11 * 2 + 4);
      puVar12 = (uint *)(lVar8 + 8 + uVar15 * 0x10);
      bVar1 = (int)uVar4 < (int)*puVar12;
      uVar4 = *puVar12;
    } while (bVar1);
  }
  puVar9 = *(ushort **)(puVar12 + 2) + 1;
  if (uVar2 == **(ushort **)(puVar12 + 2)) {
    if (0 < (int)uVar2) {
      pcVar13 = (char *)*param_2;
      iVar14 = uVar2 + 1;
      do {
        cVar5 = *pcVar13;
        if (cVar5 == '\0' || cVar5 != (char)*puVar9) {
          if (cVar5 != (char)*puVar9) {
            return 0xd;
          }
          break;
        }
        iVar14 = iVar14 + -1;
        pcVar13 = pcVar13 + 1;
        puVar9 = (ushort *)((long)puVar9 + 1);
      } while (1 < iVar14);
    }
    if ((((long)puVar12 - (lVar8 + 0x18) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0) {
      if (iVar7 < (int)uVar3) {
        do {
          if ((uint)((int)uVar3 >> 3) < uVar2) {
            uVar15 = (ulong)(*(byte *)(*param_2 + (long)(int)(uVar2 + ~((int)uVar3 >> 3))) >>
                            ((ulong)uVar3 & 7)) & 1;
          }
          else {
            uVar15 = 0;
          }
          uVar10 = (ulong)*(ushort *)(lVar8 + 8 + uVar10 * 0x10 + uVar15 * 2 + 4);
          puVar6 = (uint *)(lVar8 + 8 + uVar10 * 0x10);
          bVar1 = (int)uVar3 < (int)*puVar6;
          uVar3 = *puVar6;
        } while (bVar1);
      }
      puVar9 = *(ushort **)(puVar6 + 2) + 1;
      if (uVar2 != **(ushort **)(puVar6 + 2)) {
LAB_0068b2ac:
        return *(undefined4 *)(param_1[1] + -8);
      }
      if (0 < (int)uVar2) {
        pcVar13 = (char *)*param_2;
        iVar7 = uVar2 + 1;
        do {
          cVar5 = *pcVar13;
          if (cVar5 == '\0' || cVar5 != (char)*puVar9) {
            if (cVar5 != (char)*puVar9) goto LAB_0068b2ac;
            break;
          }
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar13 + 1;
          puVar9 = (ushort *)((long)puVar9 + 1);
        } while (1 < iVar7);
      }
      return *(undefined4 *)
              (param_1[1] + (((long)puVar6 - (lVar8 + 0x18)) * 0x10000000 >> 0x20) * 0x10 + 8);
    }
  }
  return 0xd;
}

