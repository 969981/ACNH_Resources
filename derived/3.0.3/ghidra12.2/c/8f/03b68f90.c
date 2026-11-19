
void FUN_03b68f90(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *__dest;
  uint uVar4;
  int iVar5;
  long lVar6;
  size_t __n;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_04bd1e70;
  plVar7 = (long *)(param_2 + 8);
  if (*plVar7 == 0 && *(long *)(param_2 + 0x10) == 0) {
    return;
  }
  uVar10 = 0;
  while( true ) {
    uVar4 = (uint)uVar10;
    if (((ulong)plVar7[uVar10 >> 6] >> (uVar10 & 0x3f) & 1) != 0) break;
    uVar4 = (uint)uVar10 + 1;
    uVar10 = (ulong)uVar4;
    if (uVar4 == 0x60) {
      return;
    }
  }
  do {
    uVar11 = uVar10;
    if (uVar4 == 0x60) {
      return;
    }
    uVar12 = (uint)uVar11;
    if (*(char *)(*(long *)puVar3 + 1) == '\0') {
LAB_03b69090:
      lVar8 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)puVar3 + 0x1a0);
      uVar4 = uVar12 & 0xffff;
      if ((*(int *)(lVar6 + 0x24) <= (int)uVar4) || (*(char *)(lVar6 + 0x10) == '\0'))
      goto LAB_03b69090;
      lVar8 = 0;
      if (((uVar4 != 0xffff) &&
          (*(long *)(lVar6 + 0x18) != 0 && (int)uVar4 < *(int *)(lVar6 + 0x30))) &&
         (lVar8 = *(long *)(lVar6 + 0x18) + (ulong)uVar4 * 0x120,
         *(ushort *)(lVar8 + 0x118) != uVar4)) {
        lVar8 = 0;
      }
    }
    uVar4 = *(uint *)(param_1 + 0xe0);
    if (0 < (int)uVar4) {
      __dest = *(long **)(param_1 + 0xe8);
      uVar10 = 0;
      __n = (long)(int)uVar4 * 8;
      do {
        __n = __n - 8;
        if (*__dest == lVar8) {
          iVar5 = (int)uVar10;
          if ((-1 < iVar5) && (iVar5 < (int)uVar4)) {
            if (iVar5 + 1 < (int)uVar4) {
              memmove(__dest,__dest + 1,__n);
              uVar4 = *(uint *)(param_1 + 0xe0);
            }
            *(uint *)(param_1 + 0xe0) = uVar4 - 1;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        __dest = __dest + 1;
      } while (uVar4 != uVar10);
    }
    FUN_03b68880(param_1,lVar8);
    if ((int)uVar12 < 0x60) {
      uVar12 = 0x5f;
    }
    do {
      uVar9 = (uint)uVar11;
      uVar1 = uVar9 + 1;
      uVar10 = (ulong)uVar1;
      uVar4 = uVar12 + 1;
      if (uVar12 == uVar9) break;
      uVar2 = uVar9 + 0x40;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar11 = (ulong)uVar1;
      uVar4 = uVar1;
    } while (((ulong)plVar7[(int)uVar2 >> 6] >> ((ulong)(uVar9 + 1) & 0x3f) & 1) == 0);
  } while( true );
}

