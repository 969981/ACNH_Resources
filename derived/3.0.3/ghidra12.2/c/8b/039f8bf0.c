
void FUN_039f8bf0(long *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  char *__s;
  long lVar6;
  uint *puVar7;
  
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 != 0) {
    __s = (&PTR_s_gsys_render_state_mode_04b69ad0)[param_3 & 0xffffffff];
    __n = strlen(__s);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar7 = (uint *)((int *)(lVar6 + 8) + uVar4 * 4);
    uVar2 = *puVar7;
    if (*(int *)(lVar6 + 8) < (int)*puVar7) {
      do {
        uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar5 < __n) {
          uVar5 = (ulong)((byte)__s[__n + ~uVar5] >> ((ulong)uVar2 & 7)) & 1;
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
         (iVar3 = memcmp(*(ushort **)(puVar7 + 2) + 1,__s,__n), iVar3 == 0)) &&
        (uVar4 = (long)puVar7 + (-0x18 - lVar6), ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) != 0))
       && (((*(long *)(param_2 + 0x10) != 0 &&
            (lVar6 = *(long *)(param_2 + 0x10) + (long)(int)(uVar4 >> 4) * 0x18,
            *(short *)(lVar6 + 0x10) != 0)) && (*(char *)(lVar6 + 0x12) == '\x02')))) {
      lVar6 = **(long **)(lVar6 + 8);
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      param_1[1] = lVar6 + 2;
      return;
    }
  }
  lVar6 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar6;
  return;
}

