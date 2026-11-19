
long FUN_039b4320(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  char *__s;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = *(long *)(lVar6 + 0x38);
  if (lVar7 != 0) {
    __s = (char *)param_2[1];
    if (__s == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(__s);
    }
    uVar4 = (ulong)*(ushort *)(lVar7 + 0xc);
    puVar8 = (uint *)((int *)(lVar7 + 8) + uVar4 * 4);
    uVar2 = *puVar8;
    if (*(int *)(lVar7 + 8) < (int)*puVar8) {
      do {
        uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar5 < __n) {
          uVar5 = (ulong)((byte)__s[__n + ~uVar5] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar5 = 0;
        }
        uVar4 = (ulong)*(ushort *)(lVar7 + 8 + uVar4 * 0x10 + uVar5 * 2 + 4);
        puVar8 = (uint *)(lVar7 + 8 + uVar4 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar8;
        uVar2 = *puVar8;
      } while (bVar1);
    }
    if (((__n == **(ushort **)(puVar8 + 2)) &&
        (iVar3 = memcmp(*(ushort **)(puVar8 + 2) + 1,__s,__n), iVar3 == 0)) &&
       (uVar4 = (long)puVar8 + (-0x18 - lVar7), ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
    {
      return *(long *)(*(long *)(lVar6 + 0x30) + (long)(int)(uVar4 >> 4) * 8) + 2;
    }
  }
  return 0;
}

