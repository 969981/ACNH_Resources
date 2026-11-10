
undefined8 FUN_00333020(long param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *__s;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  if (param_3 == -1) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0xa0);
  __s = (long *)0x0;
  if ((lVar8 != 0) && (plVar6 = *(long **)(param_1 + 0xa8), plVar6 != (long *)0x0)) {
    do {
      if (*plVar6 == param_3) {
        lVar9 = *(long *)(lVar8 + 0x38);
        __s = plVar6 + 2;
        __n = strlen((char *)__s);
        uVar4 = (ulong)*(ushort *)(lVar9 + 0xc);
        puVar10 = (uint *)((int *)(lVar9 + 8) + uVar4 * 4);
        uVar2 = *puVar10;
        if (*(int *)(lVar9 + 8) < (int)*puVar10) {
          do {
            uVar7 = (long)((ulong)uVar2 << 0x20) >> 0x23;
            if (uVar7 < __n) {
              uVar7 = (ulong)(*(byte *)((long)__s + __n + ~uVar7) >> ((ulong)uVar2 & 7)) & 1;
            }
            else {
              uVar7 = 0;
            }
            uVar4 = (ulong)*(ushort *)(lVar9 + 8 + uVar4 * 0x10 + uVar7 * 2 + 4);
            puVar10 = (uint *)(lVar9 + 8 + uVar4 * 0x10);
            bVar1 = (int)uVar2 < (int)*puVar10;
            uVar2 = *puVar10;
          } while (bVar1);
        }
        if (((__n == **(ushort **)(puVar10 + 2)) &&
            (iVar3 = memcmp(*(ushort **)(puVar10 + 2) + 1,__s,__n), iVar3 == 0)) &&
           (uVar4 = (long)puVar10 + (-0x18 - lVar9),
           ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
          *param_2 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + (long)(int)(uVar4 >> 4) * 8);
          return 1;
        }
        goto LAB_003330ec;
      }
      puVar10 = (uint *)(plVar6 + 1);
      plVar6 = (long *)((long)plVar6 + (ulong)*puVar10);
    } while (*puVar10 != 0);
    __s = (long *)0x0;
  }
LAB_003330ec:
  uVar5 = 0;
  if (*(long *)(param_1 + 0x490) != 0) {
    uVar4 = FUN_00333020(*(long *)(param_1 + 0x490),param_2,param_3);
    if ((uVar4 & 1) == 0) {
      FUN_0032c5d0("Appointed texture was not found in the Resident Resource.\n");
      if (__s != (long *)0x0) {
        FUN_0032c5d0("The texture which was not found is %s.\n",__s);
      }
      return 0;
    }
    uVar5 = 1;
  }
  return uVar5;
}

