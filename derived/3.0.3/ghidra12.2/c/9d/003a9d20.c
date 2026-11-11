
uint FUN_003a9d20(long param_1,long param_2,long param_3)

{
  bool bVar1;
  char *__s;
  uint uVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  
  uVar8 = (ulong)*(ushort *)(param_2 + 0x22);
  if (uVar8 == 0) {
    uVar7 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x28);
    plVar11 = *(long **)(param_2 + 0x18);
    uVar9 = 0;
    uVar7 = 0;
    do {
      while (lVar12 = *(long *)(param_3 + 0x30), lVar12 != 0) {
        __s = (char *)(*plVar11 + 2);
        __n = strlen(__s);
        uVar5 = (ulong)*(ushort *)(lVar12 + 0xc);
        puVar10 = (uint *)((int *)(lVar12 + 8) + uVar5 * 4);
        uVar2 = *puVar10;
        if (*(int *)(lVar12 + 8) < (int)*puVar10) {
          do {
            uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
            if (uVar6 < __n) {
              uVar6 = (ulong)((byte)__s[__n + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
            }
            else {
              uVar6 = 0;
            }
            uVar5 = (ulong)*(ushort *)(lVar12 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
            puVar10 = (uint *)(lVar12 + 8 + uVar5 * 0x10);
            bVar1 = (int)uVar2 < (int)*puVar10;
            uVar2 = *puVar10;
          } while (bVar1);
        }
        if ((__n != **(ushort **)(puVar10 + 2)) ||
           (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,__s,__n), iVar4 != 0)) break;
        uVar5 = (long)puVar10 + (-0x18 - lVar12);
        *(char *)(*(long *)(param_1 + 0x80) + uVar9 + (long)iVar3) = (char)(uVar5 >> 4);
        if ((uVar5 >> 0x23 & 1) != 0) goto LAB_003a9dc8;
        uVar9 = uVar9 + 1;
        uVar7 = uVar7 | 1;
        plVar11 = plVar11 + 2;
        if (uVar9 == uVar8) {
          return uVar7;
        }
      }
      *(undefined1 *)(*(long *)(param_1 + 0x80) + uVar9 + (long)iVar3) = 0xff;
LAB_003a9dc8:
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 | 0x10000;
      plVar11 = plVar11 + 2;
    } while (uVar9 != uVar8);
  }
  return uVar7;
}

