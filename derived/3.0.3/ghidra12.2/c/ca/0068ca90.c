
void FUN_0068ca90(long *param_1,long *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ushort *puVar10;
  char *pcVar11;
  
  lVar5 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0xc);
  puVar8 = (uint *)((int *)(lVar5 + 8) + uVar9 * 4);
  uVar2 = *(uint *)(param_2 + 1);
  if (*(int *)(lVar5 + 8) < (int)*puVar8) {
    uVar3 = *puVar8;
    do {
      if ((uint)((int)uVar3 >> 3) < uVar2) {
        uVar7 = (ulong)(*(byte *)(*param_2 + (long)(int)(uVar2 + ~((int)uVar3 >> 3))) >>
                       ((ulong)uVar3 & 7)) & 1;
      }
      else {
        uVar7 = 0;
      }
      uVar9 = (ulong)*(ushort *)(lVar5 + 8 + uVar9 * 0x10 + uVar7 * 2 + 4);
      puVar8 = (uint *)(lVar5 + 8 + uVar9 * 0x10);
      bVar1 = (int)uVar3 < (int)*puVar8;
      uVar3 = *puVar8;
    } while (bVar1);
  }
  puVar10 = *(ushort **)(puVar8 + 2) + 1;
  if (uVar2 != **(ushort **)(puVar8 + 2)) {
LAB_0068cb80:
    *(undefined4 *)(param_1[1] + -0x10) = param_3;
    return;
  }
  if (0 < (int)uVar2) {
    pcVar11 = (char *)*param_2;
    iVar6 = uVar2 + 1;
    do {
      cVar4 = *pcVar11;
      if (cVar4 == '\0' || cVar4 != (char)*puVar10) {
        if (cVar4 != (char)*puVar10) goto LAB_0068cb80;
        break;
      }
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar11 + 1;
      puVar10 = (ushort *)((long)puVar10 + 1);
    } while (1 < iVar6);
  }
  *(undefined4 *)(param_1[1] + (((long)puVar8 + (-0x18 - lVar5)) * 0x10000000 >> 0x20) * 0x10) =
       param_3;
  return;
}

