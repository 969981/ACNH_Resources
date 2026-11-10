
undefined8 FUN_00333a70(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  
  if (param_2 == -1) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  if ((lVar7 != 0) && (plVar4 = *(long **)(param_1 + 0xa8), plVar4 != (long *)0x0)) {
    do {
      if (*plVar4 == param_2) {
        lVar8 = *(long *)(lVar7 + 0x38);
        plVar4 = plVar4 + 2;
        __n = strlen((char *)plVar4);
        uVar5 = (ulong)*(ushort *)(lVar8 + 0xc);
        puVar9 = (uint *)((int *)(lVar8 + 8) + uVar5 * 4);
        uVar2 = *puVar9;
        if (*(int *)(lVar8 + 8) < (int)*puVar9) {
          do {
            uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
            if (uVar6 < __n) {
              uVar6 = (ulong)(*(byte *)((long)plVar4 + __n + ~uVar6) >> ((ulong)uVar2 & 7)) & 1;
            }
            else {
              uVar6 = 0;
            }
            uVar5 = (ulong)*(ushort *)(lVar8 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
            puVar9 = (uint *)(lVar8 + 8 + uVar5 * 0x10);
            bVar1 = (int)uVar2 < (int)*puVar9;
            uVar2 = *puVar9;
          } while (bVar1);
        }
        if (((__n == **(ushort **)(puVar9 + 2)) &&
            (iVar3 = memcmp(*(ushort **)(puVar9 + 2) + 1,plVar4,__n), iVar3 == 0)) &&
           (uVar5 = (long)puVar9 + (-0x18 - lVar8),
           ((uVar5 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
          return *(undefined8 *)(*(long *)(lVar7 + 0x28) + (long)(int)(uVar5 >> 4) * 8);
        }
        return 0;
      }
      puVar9 = (uint *)(plVar4 + 1);
      plVar4 = (long *)((long)plVar4 + (ulong)*puVar9);
    } while (*puVar9 != 0);
  }
  return 0;
}

