
/* WARNING: Removing unreachable block (ram,0x015afbb0) */
/* WARNING: Removing unreachable block (ram,0x015afbd8) */

long FUN_015afb74(long *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return 0;
  }
  if ((DAT_05231900 != 0) && (lVar6 = *(long *)(DAT_05231900 + 0x50), lVar6 != 0)) {
    if ((*(long *)(lVar6 + 0x118) != 0) && (*(char *)(*(long *)(lVar6 + 0x118) + 0xe0b) == '\0')) {
      return 0;
    }
    if ((*(long *)(lVar6 + 0x118) != 0) &&
       (bVar3 = *(byte *)(*(long *)(lVar6 + 0x118) + 0xe0b), uVar5 = (uint)bVar3, bVar3 == 0))
    goto LAB_015afc00;
  }
  uVar5 = *(int *)(*(long *)(lVar4 + 0xb20) + (long)*(int *)(lVar4 + 0xb30) * 0x10) - 1;
LAB_015afc00:
  if ((int)uVar5 < (int)param_3) {
    return 0;
  }
  puVar2 = (uint *)(*(long *)(lVar4 + 0xb20) + (long)(int)*(uint *)(lVar4 + 0xb30) * 0x10);
  if (*(uint *)(lVar4 + 0xb18) <= *(uint *)(lVar4 + 0xb30)) {
    puVar2 = (uint *)0x0;
  }
  piVar1 = (int *)(*(long *)(puVar2 + 2) + (long)(int)param_3 * 0x10);
  if (*puVar2 <= param_3) {
    piVar1 = (int *)0x0;
  }
  return (long)*(short *)(*(long *)(piVar1 + 2) + (long)(*param_2 + *piVar1 * param_2[1]) * 0xc);
}

