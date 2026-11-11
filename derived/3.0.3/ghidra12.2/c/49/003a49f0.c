
uint FUN_003a49f0(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  char *__s;
  ushort uVar3;
  int iVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  
  plVar2 = (long *)(param_1 + 0x58);
  FUN_003a9620(plVar2,*(undefined2 *)(param_2 + 0x38));
  uVar3 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar3 == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(long *)(param_2 + 8);
    if (lVar11 != 0) {
      uVar10 = 0;
      uVar9 = 0;
      if (lVar11 != 0) goto LAB_003a4a58;
      do {
        uVar7 = 0x10000;
        while( true ) {
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 | uVar7;
          if (uVar10 == uVar3) goto LAB_003a4b98;
          lVar11 = *(long *)(param_2 + 8);
          if (lVar11 == 0) break;
LAB_003a4a58:
          __s = (char *)(*(long *)(*(long *)(param_1 + 0x70) + uVar10 * 0x38) + 2);
          __n = strlen(__s);
          uVar5 = (ulong)*(ushort *)(lVar11 + 0xc);
          puVar12 = (uint *)((int *)(lVar11 + 8) + uVar5 * 4);
          uVar7 = *puVar12;
          if (*(int *)(lVar11 + 8) < (int)*puVar12) {
            do {
              uVar8 = (long)((ulong)uVar7 << 0x20) >> 0x23;
              if (uVar8 < __n) {
                uVar8 = (ulong)((byte)__s[__n + ~uVar8] >> ((ulong)uVar7 & 7)) & 1;
              }
              else {
                uVar8 = 0;
              }
              uVar5 = (ulong)*(ushort *)(lVar11 + 8 + uVar5 * 0x10 + uVar8 * 2 + 4);
              puVar12 = (uint *)(lVar11 + 8 + uVar5 * 0x10);
              bVar1 = (int)uVar7 < (int)*puVar12;
              uVar7 = *puVar12;
            } while (bVar1);
          }
          if ((__n != **(ushort **)(puVar12 + 2)) ||
             (iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,__s,__n), iVar4 != 0)) break;
          uVar5 = (long)puVar12 + (-0x18 - lVar11);
          uVar7 = (uint)(uVar5 >> 4);
          if ((int)uVar7 < 0) break;
          lVar6 = uVar10 * 4;
          lVar11 = (uVar5 >> 4 & 0xffffffff) * 4;
          *(uint *)(*plVar2 + lVar6) = *(uint *)(*plVar2 + lVar6) & 0x3fff8000;
          *(uint *)(*plVar2 + lVar6) = *(uint *)(*plVar2 + lVar6) | uVar7 & 0x7fff;
          *(uint *)(*plVar2 + lVar11) = *(uint *)(*plVar2 + lVar11) & 0xc0007fff;
          *(uint *)(*plVar2 + lVar11) = *(uint *)(*plVar2 + lVar11) | ((uint)uVar10 & 0x7fff) << 0xf
          ;
          uVar7 = 1;
        }
      } while( true );
    }
    uVar9 = 0x10000;
  }
LAB_003a4b98:
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  *(undefined4 *)(param_1 + 0x40) = DAT_04135420;
  if ((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38))) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar6) = 0x7f800000;
      lVar6 = lVar6 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 0x3c));
  }
  return uVar9;
}

