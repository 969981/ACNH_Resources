
/* WARNING: Removing unreachable block (ram,0x015afca8) */
/* WARNING: Removing unreachable block (ram,0x015afcd0) */

long FUN_015afc6c(long *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
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
    goto LAB_015afcf8;
  }
  uVar5 = *(int *)(*(long *)(lVar4 + 0xb20) + (long)*(int *)(lVar4 + 0xb30) * 0x10) - 1;
LAB_015afcf8:
  if ((int)uVar5 < (int)param_3) {
    return 0;
  }
  puVar2 = (uint *)(*(long *)(lVar4 + 0xb20) + (long)(int)*(uint *)(lVar4 + 0xb30) * 0x10);
  if (*(uint *)(lVar4 + 0xb18) <= *(uint *)(lVar4 + 0xb30)) {
    puVar2 = (uint *)0x0;
  }
  puVar1 = (uint *)(*(long *)(puVar2 + 2) + (long)(int)param_3 * 0x10);
  if (*puVar2 <= param_3) {
    puVar1 = (uint *)0x0;
  }
  lVar4 = *(long *)(puVar1 + 2) + (long)(int)(*param_2 + *puVar1 * param_2[1]) * 0xc;
  if (puVar1[1] <= param_2[1] || *puVar1 <= *param_2) {
    lVar4 = 0;
  }
  return (long)*(short *)(lVar4 + 4);
}

