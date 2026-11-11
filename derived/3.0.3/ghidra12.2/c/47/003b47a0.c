
void FUN_003b47a0(long param_1,long param_2)

{
  bool bVar1;
  char *__s;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  size_t __n;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  
  if ((long)*(char *)(param_2 + 0xf0) == -1) {
    *(undefined2 *)(param_1 + 0xa4) = 0;
  }
  else {
    plVar2 = (long *)(*(long *)(param_2 + 0x58) + (long)*(char *)(param_2 + 0xf0) * 0x20);
    uVar5 = *(ushort *)(param_1 + 0x9e);
    *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)((long)plVar2 + 0x1a);
    if ((ulong)uVar5 != 0) {
      uVar10 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0x50) + uVar10 * 0x20;
        lVar11 = plVar2[1];
        if (lVar11 == 0) {
LAB_003b47f4:
          iVar7 = -1;
        }
        else {
          __s = (char *)(*(long *)(lVar3 + 8) + 2);
          __n = strlen(__s);
          uVar8 = (ulong)*(ushort *)(lVar11 + 0xc);
          puVar12 = (uint *)((int *)(lVar11 + 8) + uVar8 * 4);
          uVar4 = *puVar12;
          if (*(int *)(lVar11 + 8) < (int)*puVar12) {
            do {
              uVar9 = (long)((ulong)uVar4 << 0x20) >> 0x23;
              if (uVar9 < __n) {
                uVar9 = (ulong)((byte)__s[__n + ~uVar9] >> ((ulong)uVar4 & 7)) & 1;
              }
              else {
                uVar9 = 0;
              }
              uVar8 = (ulong)*(ushort *)(lVar11 + 8 + uVar8 * 0x10 + uVar9 * 2 + 4);
              puVar12 = (uint *)(lVar11 + 8 + uVar8 * 0x10);
              bVar1 = (int)uVar4 < (int)*puVar12;
              uVar4 = *puVar12;
            } while (bVar1);
          }
          iVar7 = -1;
          if (__n == **(ushort **)(puVar12 + 2)) {
            iVar6 = memcmp(*(ushort **)(puVar12 + 2) + 1,__s,__n);
            iVar7 = -1;
            if (iVar6 == 0) {
              uVar8 = (long)puVar12 + (-0x18 - lVar11);
              iVar7 = -1;
              if (((uVar8 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) {
                if (*plVar2 == 0) goto LAB_003b47f4;
                iVar7 = *(ushort *)(*plVar2 + (long)(int)(uVar8 >> 4) * 0x10 + 0xc) - 1;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        *(int *)(lVar3 + 0x14) = iVar7;
      } while (uVar10 != uVar5);
    }
  }
  return;
}

