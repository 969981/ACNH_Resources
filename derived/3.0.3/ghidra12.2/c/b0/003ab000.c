
uint FUN_003ab000(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  char *__s;
  long *plVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  size_t __n;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  int local_64;
  
  plVar2 = (long *)(param_1 + 0x58);
  FUN_003a9620(plVar2,*(undefined2 *)(param_2 + 0x6c));
  uVar15 = (ulong)*(ushort *)(param_1 + 100);
  if (uVar15 == 0) {
    uVar13 = 0;
  }
  else if (*(long *)(param_2 + 0x48) == 0) {
    uVar13 = 0x10000;
  }
  else {
    uVar16 = 0;
    uVar13 = 0;
    local_64 = 0;
LAB_003ab054:
    do {
      lVar18 = *(long *)(param_2 + 0x48);
      if (lVar18 != 0) {
        plVar3 = (long *)(*(long *)(param_1 + 0x70) + uVar16 * 0x40);
        __s = (char *)(*plVar3 + 2);
        __n = strlen(__s);
        uVar10 = (ulong)*(ushort *)(lVar18 + 0xc);
        puVar14 = (uint *)((int *)(lVar18 + 8) + uVar10 * 4);
        uVar17 = *puVar14;
        if (*(int *)(lVar18 + 8) < (int)*puVar14) {
          do {
            uVar12 = (long)((ulong)uVar17 << 0x20) >> 0x23;
            if (uVar12 < __n) {
              uVar12 = (ulong)((byte)__s[__n + ~uVar12] >> ((ulong)uVar17 & 7)) & 1;
            }
            else {
              uVar12 = 0;
            }
            uVar10 = (ulong)*(ushort *)(lVar18 + 8 + uVar10 * 0x10 + uVar12 * 2 + 4);
            puVar14 = (uint *)(lVar18 + 8 + uVar10 * 0x10);
            bVar1 = (int)uVar17 < (int)*puVar14;
            uVar17 = *puVar14;
          } while (bVar1);
        }
        if ((__n == **(ushort **)(puVar14 + 2)) &&
           (iVar8 = memcmp(*(ushort **)(puVar14 + 2) + 1,__s,__n), iVar8 == 0)) {
          uVar10 = (long)puVar14 + (-0x18 - lVar18);
          uVar17 = (uint)(uVar10 >> 4);
          if (-1 < (int)uVar17) {
            uVar4 = *(ushort *)((long)plVar3 + 0x2e);
            uVar10 = uVar10 >> 4 & 0xffffffff;
            uVar5 = *(ushort *)(plVar3 + 6);
            uVar9 = FUN_003ab2a0(param_1,plVar3,*(long *)(param_2 + 0x38) + uVar10 * 0xa8,local_64);
            uVar6 = *(ushort *)((long)plVar3 + 0x32);
            uVar7 = *(ushort *)((long)plVar3 + 0x34);
            if ((((uVar9 & 1) != 0) || (*(short *)((long)plVar3 + 0x2e) != -1)) ||
               ((short)plVar3[6] != -1)) {
              lVar18 = uVar16 * 4;
              *(uint *)(*plVar2 + lVar18) = *(uint *)(*plVar2 + lVar18) & 0x3fff8000;
              *(uint *)(*plVar2 + lVar18) = *(uint *)(*plVar2 + lVar18) | uVar17 & 0x7fff;
              lVar18 = uVar10 * 4;
              *(uint *)(*plVar2 + lVar18) = *(uint *)(*plVar2 + lVar18) & 0xc0007fff;
              *(uint *)(*plVar2 + lVar18) =
                   *(uint *)(*plVar2 + lVar18) | ((uint)uVar16 & 0x7fff) << 0xf;
            }
            local_64 = local_64 + (uint)uVar6 + (uint)uVar7;
            uVar13 = uVar13 | (uVar4 & uVar5) != 0xffff | uVar9;
            uVar16 = uVar16 + 1;
            if (uVar16 == uVar15) break;
            goto LAB_003ab054;
          }
        }
      }
      uVar13 = uVar13 | 0x10000;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  *(undefined4 *)(param_1 + 0x40) = DAT_04135420;
  if ((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38))) {
    lVar11 = 0;
    lVar18 = 0;
    do {
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar11) = 0x7f800000;
      lVar11 = lVar11 + 0xc;
    } while (lVar18 < *(int *)(param_1 + 0x3c));
  }
  return uVar13;
}

