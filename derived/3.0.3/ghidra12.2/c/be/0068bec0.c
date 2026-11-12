
bool FUN_0068bec0(long *param_1,undefined4 *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ushort *puVar11;
  char *pcVar12;
  
  iVar5 = FUN_0068b0e0(param_1,param_3);
  if (iVar5 == 2) {
    lVar6 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar9 = (uint *)((int *)(lVar6 + 8) + uVar10 * 4);
    uVar2 = *(uint *)(param_3 + 1);
    if (*(int *)(lVar6 + 8) < (int)*puVar9) {
      uVar3 = *puVar9;
      do {
        if ((uint)((int)uVar3 >> 3) < uVar2) {
          uVar8 = (ulong)(*(byte *)(*param_3 + (long)(int)(uVar2 + ~((int)uVar3 >> 3))) >>
                         ((ulong)uVar3 & 7)) & 1;
        }
        else {
          uVar8 = 0;
        }
        uVar10 = (ulong)*(ushort *)(lVar6 + 8 + uVar10 * 0x10 + uVar8 * 2 + 4);
        puVar9 = (uint *)(lVar6 + 8 + uVar10 * 0x10);
        bVar1 = (int)uVar3 < (int)*puVar9;
        uVar3 = *puVar9;
      } while (bVar1);
    }
    puVar11 = *(ushort **)(puVar9 + 2) + 1;
    if (uVar2 == **(ushort **)(puVar9 + 2)) {
      if (0 < (int)uVar2) {
        pcVar12 = (char *)*param_3;
        iVar7 = uVar2 + 1;
        do {
          cVar4 = *pcVar12;
          if (cVar4 == '\0' || cVar4 != (char)*puVar11) {
            if (cVar4 != (char)*puVar11) goto LAB_0068bfd4;
            break;
          }
          iVar7 = iVar7 + -1;
          pcVar12 = pcVar12 + 1;
          puVar11 = (ushort *)((long)puVar11 + 1);
        } while (1 < iVar7);
      }
      lVar6 = ((long)puVar9 + (-0x18 - lVar6)) * 0x10000000 >> 0x20;
    }
    else {
LAB_0068bfd4:
      lVar6 = -1;
    }
    *param_2 = *(undefined4 *)(param_1[1] + lVar6 * 0x10);
  }
  return iVar5 == 2;
}

