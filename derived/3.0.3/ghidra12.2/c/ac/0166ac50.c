
long FUN_0166ac50(long param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(param_2);
    }
    uVar4 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar7 = (uint *)((int *)(lVar6 + 8) + uVar4 * 4);
    uVar2 = *puVar7;
    if (*(int *)(lVar6 + 8) < (int)*puVar7) {
      do {
        uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar5 < __n) {
          uVar5 = (ulong)((byte)param_2[__n + ~uVar5] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar5 = 0;
        }
        uVar4 = (ulong)*(ushort *)(lVar6 + 8 + uVar4 * 0x10 + uVar5 * 2 + 4);
        puVar7 = (uint *)(lVar6 + 8 + uVar4 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar7;
        uVar2 = *puVar7;
      } while (bVar1);
    }
    if ((((__n == **(ushort **)(puVar7 + 2)) &&
         (iVar3 = memcmp(*(ushort **)(puVar7 + 2) + 1,param_2,__n), iVar3 == 0)) &&
        (uVar4 = (long)puVar7 + (-0x18 - lVar6), ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
       && (*(long *)(param_1 + 0x10) != 0)) {
      return *(long *)(*(long *)(param_1 + 0x10) + (long)(int)(uVar4 >> 4) * 8) + 2;
    }
  }
  return 0;
}

