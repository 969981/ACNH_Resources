
uint FUN_003aa600(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  char *__s;
  int iVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  
  plVar2 = (long *)(param_1 + 0x58);
  lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  FUN_003a9620(plVar2,*(undefined2 *)(*(long *)(param_2 + 0x18) + 0x38));
  uVar11 = (ulong)*(ushort *)(param_1 + 100);
  if (uVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x68) + 0x38);
    do {
      while( true ) {
        __s = (char *)(*(long *)(lVar13 + uVar12 * 8) + 2);
        __n = strlen(__s);
        uVar4 = (ulong)*(ushort *)(lVar10 + 0xc);
        puVar14 = (uint *)((int *)(lVar10 + 8) + uVar4 * 4);
        uVar6 = *puVar14;
        if (*(int *)(lVar10 + 8) < (int)*puVar14) {
          do {
            uVar7 = (long)((ulong)uVar6 << 0x20) >> 0x23;
            if (uVar7 < __n) {
              uVar7 = (ulong)((byte)__s[__n + ~uVar7] >> ((ulong)uVar6 & 7)) & 1;
            }
            else {
              uVar7 = 0;
            }
            uVar4 = (ulong)*(ushort *)(lVar10 + 8 + uVar4 * 0x10 + uVar7 * 2 + 4);
            puVar14 = (uint *)(lVar10 + 8 + uVar4 * 0x10);
            bVar1 = (int)uVar6 < (int)*puVar14;
            uVar6 = *puVar14;
          } while (bVar1);
        }
        if ((__n == **(ushort **)(puVar14 + 2)) &&
           (iVar3 = memcmp(*(ushort **)(puVar14 + 2) + 1,__s,__n), iVar3 == 0)) break;
LAB_003aa660:
        uVar12 = uVar12 + 1;
        uVar9 = uVar9 | 0x10000;
        if (uVar12 == uVar11) goto LAB_003aa798;
      }
      uVar4 = (long)puVar14 - (lVar10 + 0x18);
      uVar6 = (uint)(uVar4 >> 4);
      if ((int)uVar6 < 0) goto LAB_003aa660;
      lVar8 = uVar12 * 4;
      lVar5 = (uVar4 >> 4 & 0xffffffff) * 4;
      *(uint *)(*plVar2 + lVar8) = *(uint *)(*plVar2 + lVar8) & 0x3fff8000;
      *(uint *)(*plVar2 + lVar8) = *(uint *)(*plVar2 + lVar8) | uVar6 & 0x7fff;
      *(uint *)(*plVar2 + lVar5) = *(uint *)(*plVar2 + lVar5) & 0xc0007fff;
      *(uint *)(*plVar2 + lVar5) = *(uint *)(*plVar2 + lVar5) | ((uint)uVar12 & 0x7fff) << 0xf;
      uVar12 = uVar12 + 1;
      uVar9 = uVar9 | 1;
    } while (uVar12 != uVar11);
  }
LAB_003aa798:
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  *(undefined4 *)(param_1 + 0x40) = DAT_04135420;
  if ((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38))) {
    lVar13 = 0;
    lVar10 = 0;
    do {
      lVar10 = lVar10 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar13) = 0x7f800000;
      lVar13 = lVar13 + 0xc;
    } while (lVar10 < *(int *)(param_1 + 0x3c));
  }
  memcpy(*(void **)(param_1 + 0x48),*(void **)(*(long *)(param_1 + 0x68) + 0x30),
         (ulong)(*(ushort *)(param_1 + 100) + 0x1f >> 3) & 0x3ffc);
  return uVar9;
}

