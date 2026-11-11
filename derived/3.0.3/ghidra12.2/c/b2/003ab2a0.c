
uint FUN_003ab2a0(long param_1,long param_2,long param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  
  uVar13 = (ulong)*(ushort *)(param_2 + 0x32);
  if (uVar13 == 0) {
    uVar7 = 0;
    uVar10 = 0;
    uVar4 = *(ushort *)(param_2 + 0x34);
  }
  else {
    plVar15 = *(long **)(param_2 + 8);
    uVar14 = 0;
    uVar10 = 0;
    do {
      while (lVar12 = *(long *)(param_3 + 0x58), lVar12 == 0) {
LAB_003ab33c:
        *(undefined2 *)(*(long *)(param_1 + 0x88) + (uVar14 + (long)param_4) * 2) = 0xffff;
LAB_003ab34c:
        uVar14 = uVar14 + 1;
        uVar10 = uVar10 | 0x10000;
        plVar15 = plVar15 + 3;
        if (uVar14 == uVar13) goto LAB_003ab3f8;
      }
      pcVar2 = (char *)(*plVar15 + 2);
      sVar6 = strlen(pcVar2);
      uVar8 = (ulong)*(ushort *)(lVar12 + 0xc);
      puVar11 = (uint *)((int *)(lVar12 + 8) + uVar8 * 4);
      uVar7 = *puVar11;
      if (*(int *)(lVar12 + 8) < (int)*puVar11) {
        do {
          uVar9 = (long)((ulong)uVar7 << 0x20) >> 0x23;
          if (uVar9 < sVar6) {
            uVar9 = (ulong)((byte)pcVar2[sVar6 + ~uVar9] >> ((ulong)uVar7 & 7)) & 1;
          }
          else {
            uVar9 = 0;
          }
          uVar8 = (ulong)*(ushort *)(lVar12 + 8 + uVar8 * 0x10 + uVar9 * 2 + 4);
          puVar11 = (uint *)(lVar12 + 8 + uVar8 * 0x10);
          bVar1 = (int)uVar7 < (int)*puVar11;
          uVar7 = *puVar11;
        } while (bVar1);
      }
      if ((sVar6 != **(ushort **)(puVar11 + 2)) ||
         (iVar5 = memcmp(*(ushort **)(puVar11 + 2) + 1,pcVar2,sVar6), iVar5 != 0))
      goto LAB_003ab33c;
      uVar8 = (long)puVar11 + (-0x18 - lVar12);
      *(short *)(*(long *)(param_1 + 0x88) + (uVar14 + (long)param_4) * 2) = (short)(uVar8 >> 4);
      if ((uVar8 >> 0x23 & 1) != 0) goto LAB_003ab34c;
      uVar14 = uVar14 + 1;
      uVar10 = uVar10 | 1;
      plVar15 = plVar15 + 3;
    } while (uVar14 != uVar13);
LAB_003ab3f8:
    uVar7 = (uint)*(ushort *)(param_2 + 0x32);
    uVar4 = *(ushort *)(param_2 + 0x34);
  }
  uVar13 = (ulong)uVar4;
  if (uVar13 == 0) {
    return uVar10;
  }
  plVar15 = *(long **)(param_2 + 0x10);
  uVar14 = 0;
  do {
    while (lVar12 = *(long *)(param_3 + 0x48), lVar12 != 0) {
      pcVar2 = (char *)(*plVar15 + 2);
      sVar6 = strlen(pcVar2);
      uVar8 = (ulong)*(ushort *)(lVar12 + 0xc);
      puVar11 = (uint *)((int *)(lVar12 + 8) + uVar8 * 4);
      uVar3 = *puVar11;
      if (*(int *)(lVar12 + 8) < (int)*puVar11) {
        do {
          uVar9 = (long)((ulong)uVar3 << 0x20) >> 0x23;
          if (uVar9 < sVar6) {
            uVar9 = (ulong)((byte)pcVar2[sVar6 + ~uVar9] >> ((ulong)uVar3 & 7)) & 1;
          }
          else {
            uVar9 = 0;
          }
          uVar8 = (ulong)*(ushort *)(lVar12 + 8 + uVar8 * 0x10 + uVar9 * 2 + 4);
          puVar11 = (uint *)(lVar12 + 8 + uVar8 * 0x10);
          bVar1 = (int)uVar3 < (int)*puVar11;
          uVar3 = *puVar11;
        } while (bVar1);
      }
      if ((sVar6 != **(ushort **)(puVar11 + 2)) ||
         (iVar5 = memcmp(*(ushort **)(puVar11 + 2) + 1,pcVar2,sVar6), iVar5 != 0)) break;
      uVar8 = (long)puVar11 + (-0x18 - lVar12);
      *(short *)(*(long *)(param_1 + 0x88) + (uVar14 + (long)(int)(uVar7 + param_4)) * 2) =
           (short)(uVar8 >> 4);
      if ((uVar8 >> 0x23 & 1) != 0) goto LAB_003ab498;
      uVar14 = uVar14 + 1;
      uVar10 = uVar10 | 1;
      plVar15 = plVar15 + 2;
      if (uVar14 == uVar13) {
        return uVar10;
      }
    }
    *(undefined2 *)(*(long *)(param_1 + 0x88) + (uVar14 + (long)(int)(uVar7 + param_4)) * 2) =
         0xffff;
LAB_003ab498:
    uVar14 = uVar14 + 1;
    uVar10 = uVar10 | 0x10000;
    plVar15 = plVar15 + 2;
    if (uVar14 == uVar13) {
      return uVar10;
    }
  } while( true );
}

