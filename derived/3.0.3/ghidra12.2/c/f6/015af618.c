
/* WARNING: Removing unreachable block (ram,0x015af9b0) */
/* WARNING: Removing unreachable block (ram,0x015af8dc) */
/* WARNING: Removing unreachable block (ram,0x015af808) */
/* WARNING: Removing unreachable block (ram,0x015af740) */
/* WARNING: Removing unreachable block (ram,0x015af654) */
/* WARNING: Removing unreachable block (ram,0x015af67c) */
/* WARNING: Removing unreachable block (ram,0x015af768) */
/* WARNING: Removing unreachable block (ram,0x015af830) */
/* WARNING: Removing unreachable block (ram,0x015af904) */
/* WARNING: Removing unreachable block (ram,0x015af9d8) */

int FUN_015af618(long *param_1,uint *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return 0;
  }
  if ((DAT_05231900 == 0) || (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 == 0)) {
LAB_015af690:
    uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af6a4:
    if ((int)uVar7 < (int)param_3) {
      iVar8 = 0;
    }
    else {
      puVar3 = (uint *)(*(long *)(lVar6 + 0xb20) + (long)(int)*(uint *)(lVar6 + 0xb30) * 0x10);
      if (*(uint *)(lVar6 + 0xb18) <= *(uint *)(lVar6 + 0xb30)) {
        puVar3 = (uint *)0x0;
      }
      puVar2 = (uint *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 0x10);
      if (*puVar3 <= param_3) {
        puVar2 = (uint *)0x0;
      }
      lVar9 = *(long *)(puVar2 + 2) + (long)(int)(*param_2 + *puVar2 * param_2[1]) * 0xc;
      if (puVar2[1] <= param_2[1] || *puVar2 <= *param_2) {
        lVar9 = 0;
      }
      iVar8 = (int)*(short *)(lVar9 + 2);
    }
    if ((DAT_05231900 != 0) && (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 != 0))
    goto LAB_015af728;
LAB_015af77c:
    uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af790:
    if ((int)param_3 <= (int)uVar7) {
      puVar3 = (uint *)(*(long *)(lVar6 + 0xb20) + (long)(int)*(uint *)(lVar6 + 0xb30) * 0x10);
      if (*(uint *)(lVar6 + 0xb18) <= *(uint *)(lVar6 + 0xb30)) {
        puVar3 = (uint *)0x0;
      }
      piVar1 = (int *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 0x10);
      if (*puVar3 <= param_3) {
        piVar1 = (int *)0x0;
      }
      iVar8 = iVar8 + *(short *)(*(long *)(piVar1 + 2) +
                                (long)(int)(*param_2 + *piVar1 * param_2[1]) * 0xc);
    }
    if ((DAT_05231900 != 0) && (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 != 0))
    goto LAB_015af7f0;
LAB_015af844:
    uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af858:
    if ((int)param_3 <= (int)uVar7) {
      puVar3 = (uint *)(*(long *)(lVar6 + 0xb20) + (long)(int)*(uint *)(lVar6 + 0xb30) * 0x10);
      if (*(uint *)(lVar6 + 0xb18) <= *(uint *)(lVar6 + 0xb30)) {
        puVar3 = (uint *)0x0;
      }
      puVar2 = (uint *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 0x10);
      if (*puVar3 <= param_3) {
        puVar2 = (uint *)0x0;
      }
      lVar9 = *(long *)(puVar2 + 2) + (long)(int)(*param_2 + *puVar2 * param_2[1]) * 0xc;
      if (puVar2[1] <= param_2[1] || *puVar2 <= *param_2) {
        lVar9 = 0;
      }
      iVar8 = iVar8 + *(short *)(lVar9 + 4);
    }
    if ((DAT_05231900 != 0) && (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 != 0))
    goto LAB_015af8c4;
LAB_015af918:
    uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af92c:
    if ((int)param_3 <= (int)uVar7) {
      puVar3 = (uint *)(*(long *)(lVar6 + 0xb20) + (long)(int)*(uint *)(lVar6 + 0xb30) * 0x10);
      if (*(uint *)(lVar6 + 0xb18) <= *(uint *)(lVar6 + 0xb30)) {
        puVar3 = (uint *)0x0;
      }
      puVar2 = (uint *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 0x10);
      if (*puVar3 <= param_3) {
        puVar2 = (uint *)0x0;
      }
      lVar9 = *(long *)(puVar2 + 2) + (long)(int)(*param_2 + *puVar2 * param_2[1]) * 0xc;
      if (puVar2[1] <= param_2[1] || *puVar2 <= *param_2) {
        lVar9 = 0;
      }
      iVar8 = iVar8 + *(short *)(lVar9 + 6);
    }
    if ((DAT_05231900 != 0) && (lVar9 = *(long *)(DAT_05231900 + 0x50), lVar9 != 0))
    goto LAB_015af998;
LAB_015af9ec:
    uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015afa00:
    if ((int)param_3 <= (int)uVar7) {
      puVar3 = (uint *)(*(long *)(lVar6 + 0xb20) + (long)(int)*(uint *)(lVar6 + 0xb30) * 0x10);
      if (*(uint *)(lVar6 + 0xb18) <= *(uint *)(lVar6 + 0xb30)) {
        puVar3 = (uint *)0x0;
      }
      puVar2 = (uint *)(*(long *)(puVar3 + 2) + (long)(int)param_3 * 0x10);
      if (*puVar3 <= param_3) {
        puVar2 = (uint *)0x0;
      }
      lVar6 = *(long *)(puVar2 + 2) + (long)(int)(*param_2 + *puVar2 * param_2[1]) * 0xc;
      if (puVar2[1] <= param_2[1] || *puVar2 <= *param_2) {
        lVar6 = 0;
      }
      iVar5 = (int)*(short *)(lVar6 + 8);
      goto LAB_015afa64;
    }
  }
  else {
    if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0')) {
      if ((*(long *)(lVar9 + 0x118) == 0) ||
         (bVar4 = *(byte *)(*(long *)(lVar9 + 0x118) + 0xe0b), uVar7 = (uint)bVar4, bVar4 != 0))
      goto LAB_015af690;
      goto LAB_015af6a4;
    }
    iVar8 = 0;
LAB_015af728:
    if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0')) {
      if ((*(long *)(lVar9 + 0x118) == 0) ||
         (bVar4 = *(byte *)(*(long *)(lVar9 + 0x118) + 0xe0b), uVar7 = (uint)bVar4, bVar4 != 0))
      goto LAB_015af77c;
      goto LAB_015af790;
    }
LAB_015af7f0:
    if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0')) {
      if ((*(long *)(lVar9 + 0x118) == 0) ||
         (bVar4 = *(byte *)(*(long *)(lVar9 + 0x118) + 0xe0b), uVar7 = (uint)bVar4, bVar4 != 0))
      goto LAB_015af844;
      goto LAB_015af858;
    }
LAB_015af8c4:
    if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0')) {
      if ((*(long *)(lVar9 + 0x118) == 0) ||
         (bVar4 = *(byte *)(*(long *)(lVar9 + 0x118) + 0xe0b), uVar7 = (uint)bVar4, bVar4 != 0))
      goto LAB_015af918;
      goto LAB_015af92c;
    }
LAB_015af998:
    if ((*(long *)(lVar9 + 0x118) == 0) || (*(char *)(*(long *)(lVar9 + 0x118) + 0xe0b) != '\0')) {
      if ((*(long *)(lVar9 + 0x118) == 0) ||
         (bVar4 = *(byte *)(*(long *)(lVar9 + 0x118) + 0xe0b), uVar7 = (uint)bVar4, bVar4 != 0))
      goto LAB_015af9ec;
      goto LAB_015afa00;
    }
  }
  iVar5 = 0;
LAB_015afa64:
  return iVar5 + iVar8;
}

