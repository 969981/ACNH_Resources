
undefined4 FUN_00348ee0(long param_1,ulong param_2,uint param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(param_1 + *(long *)(&DAT_041303f0 + (param_2 & 0xffffffff) * 8));
  if (lVar8 != 0) {
    if ((int)param_3 < 6) {
      lVar9 = *(long *)(lVar8 + *(long *)(&DAT_04130420 + (ulong)param_3 * 8));
    }
    else {
      if (*(long *)(lVar8 + 0x58) == 0) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(*(long *)(lVar8 + 0x58) +
                       *(long *)(&DAT_04102150 + (ulong)(param_3 - 6) * 8));
    }
    if (lVar9 == 0) {
      return 0xffffffff;
    }
    if (param_4 == (char *)0x0) {
      __n = 0;
    }
    else {
      __n = strlen(param_4);
    }
    uVar4 = (ulong)*(ushort *)(lVar9 + 0xc);
    puVar10 = (uint *)((int *)(lVar9 + 8) + uVar4 * 4);
    uVar2 = *puVar10;
    if (*(int *)(lVar9 + 8) < (int)*puVar10) {
      do {
        uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar6 < __n) {
          uVar6 = (ulong)((byte)param_4[__n + ~uVar6] >> ((ulong)uVar2 & 7)) & 1;
        }
        else {
          uVar6 = 0;
        }
        uVar4 = (ulong)*(ushort *)(lVar9 + 8 + uVar4 * 0x10 + uVar6 * 2 + 4);
        puVar10 = (uint *)(lVar9 + 8 + uVar4 * 0x10);
        bVar1 = (int)uVar2 < (int)*puVar10;
        uVar2 = *puVar10;
      } while (bVar1);
    }
    if (__n != **(ushort **)(puVar10 + 2)) {
      return 0xffffffff;
    }
    iVar3 = memcmp(*(ushort **)(puVar10 + 2) + 1,param_4,__n);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    iVar3 = (int)((ulong)((long)puVar10 + (-0x18 - lVar9)) >> 4);
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    if ((int)param_3 < 6) {
      if (param_3 == 0) {
        iVar5 = 0;
        goto LAB_00349084;
      }
      plVar7 = (long *)(&DAT_04130450 + (ulong)param_3 * 8);
      lVar9 = lVar8;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x58);
      if (lVar9 == 0) {
        return 0xffffffff;
      }
      plVar7 = (long *)(&DAT_041029a0 + (ulong)(param_3 - 6) * 8);
    }
    iVar5 = *(int *)(lVar9 + *plVar7);
    if (-1 < iVar5) {
LAB_00349084:
      return *(undefined4 *)(*(long *)(lVar8 + 0x38) + (ulong)(uint)(iVar5 + iVar3) * 4);
    }
  }
  return 0xffffffff;
}

