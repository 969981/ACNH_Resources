
void FUN_039f75e0(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char *__s;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar7 = 0;
  do {
    lVar9 = *(long *)(lVar8 + 0x18);
    if (lVar9 == 0) {
LAB_039f7724:
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar3 = 1 << (ulong)((uint)lVar7 & 0x1f);
LAB_039f772c:
      uVar5 = uVar5 & (uVar3 ^ 0xffffffff);
    }
    else {
      __s = (&PTR_s_gsys_dynamic_depth_shadow_04b69a80)[lVar7];
      __n = strlen(__s);
      uVar4 = (ulong)*(ushort *)(lVar9 + 0xc);
      puVar10 = (uint *)((int *)(lVar9 + 8) + uVar4 * 4);
      uVar5 = *puVar10;
      if (*(int *)(lVar9 + 8) < (int)*puVar10) {
        do {
          uVar6 = (long)((ulong)uVar5 << 0x20) >> 0x23;
          if (uVar6 < __n) {
            uVar6 = (ulong)((byte)__s[__n + ~uVar6] >> ((ulong)uVar5 & 7)) & 1;
          }
          else {
            uVar6 = 0;
          }
          uVar4 = (ulong)*(ushort *)(lVar9 + 8 + uVar4 * 0x10 + uVar6 * 2 + 4);
          puVar10 = (uint *)(lVar9 + 8 + uVar4 * 0x10);
          bVar1 = (int)uVar5 < (int)*puVar10;
          uVar5 = *puVar10;
        } while (bVar1);
      }
      if ((((__n != **(ushort **)(puVar10 + 2)) ||
           (iVar2 = memcmp(*(ushort **)(puVar10 + 2) + 1,__s,__n), iVar2 != 0)) ||
          (uVar4 = (long)puVar10 + (-0x18 - lVar9),
          ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) == 0)) ||
         (((lVar9 = *(long *)(lVar8 + 0x10), lVar9 == 0 ||
           (lVar9 = lVar9 + (long)(int)(uVar4 >> 4) * 0x18, *(short *)(lVar9 + 0x10) == 0)) ||
          (*(char *)(lVar9 + 0x12) != '\x02')))) goto LAB_039f7724;
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar3 = 1 << (ulong)((uint)lVar7 & 0x1f);
      if (*(char *)(**(long **)(lVar9 + 8) + 2) != '1') goto LAB_039f772c;
      uVar5 = uVar5 | uVar3;
    }
    lVar7 = lVar7 + 1;
    *(uint *)(param_1 + 0x10) = uVar5;
    if (lVar7 == 10) {
      return;
    }
  } while( true );
}

