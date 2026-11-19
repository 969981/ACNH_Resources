
undefined8 FUN_039b3d60(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = *(long *)(param_3 + 0x38);
  if (lVar11 != 0) {
    pcVar9 = (char *)param_2[1];
    if (pcVar9 == (char *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen(pcVar9);
    }
    uVar6 = (ulong)*(ushort *)(lVar11 + 0xc);
    puVar12 = (uint *)((int *)(lVar11 + 8) + uVar6 * 4);
    uVar3 = *puVar12;
    if (*(int *)(lVar11 + 8) < (int)*puVar12) {
      do {
        uVar7 = (long)((ulong)uVar3 << 0x20) >> 0x23;
        if (uVar7 < sVar5) {
          uVar7 = (ulong)((byte)pcVar9[sVar5 + ~uVar7] >> ((ulong)uVar3 & 7)) & 1;
        }
        else {
          uVar7 = 0;
        }
        uVar6 = (ulong)*(ushort *)(lVar11 + 8 + uVar6 * 0x10 + uVar7 * 2 + 4);
        puVar12 = (uint *)(lVar11 + 8 + uVar6 * 0x10);
        bVar1 = (int)uVar3 < (int)*puVar12;
        uVar3 = *puVar12;
      } while (bVar1);
    }
    if ((((sVar5 == **(ushort **)(puVar12 + 2)) &&
         (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,pcVar9,sVar5), iVar4 == 0)) &&
        (uVar6 = (long)puVar12 + (-0x18 - lVar11), ((uVar6 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
        )) && (*(int *)(param_1 + 0x18) != 0)) {
      plVar10 = *(long **)(param_1 + 0x20);
      plVar2 = plVar10 + *(int *)(param_1 + 0x18);
      do {
        lVar11 = *(long *)(*plVar10 + 8);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          pcVar9 = (char *)param_2[1];
          if (pcVar9 == (char *)0x0) {
            sVar5 = 0;
          }
          else {
            sVar5 = strlen(pcVar9);
          }
          uVar7 = (ulong)*(ushort *)(lVar11 + 0xc);
          puVar12 = (uint *)((int *)(lVar11 + 8) + uVar7 * 4);
          uVar3 = *puVar12;
          if (*(int *)(lVar11 + 8) < (int)*puVar12) {
            do {
              uVar8 = (long)((ulong)uVar3 << 0x20) >> 0x23;
              if (uVar8 < sVar5) {
                uVar8 = (ulong)((byte)pcVar9[sVar5 + ~uVar8] >> ((ulong)uVar3 & 7)) & 1;
              }
              else {
                uVar8 = 0;
              }
              uVar7 = (ulong)*(ushort *)(lVar11 + 8 + uVar7 * 0x10 + uVar8 * 2 + 4);
              puVar12 = (uint *)(lVar11 + 8 + uVar7 * 0x10);
              bVar1 = (int)uVar3 < (int)*puVar12;
              uVar3 = *puVar12;
            } while (bVar1);
          }
          if (((sVar5 == **(ushort **)(puVar12 + 2)) &&
              (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,pcVar9,sVar5), iVar4 == 0)) &&
             (((((long)puVar12 + (-0x18 - lVar11) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0 &&
              (*(char *)(*(long *)(*(long *)(param_3 + 0x30) +
                                  ((long)(uVar6 * 0x10000000) >> 0x20) * 8) + 2) != '0')))) {
            return 1;
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
    }
  }
  return 0;
}

