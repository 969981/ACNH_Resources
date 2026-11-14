
/* WARNING: Removing unreachable block (ram,0x015af574) */
/* WARNING: Removing unreachable block (ram,0x015af59c) */

void FUN_015af534(long *param_1,int *param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  param_2[0] = 0;
  param_2[1] = 0;
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  if ((DAT_05231900 != 0) && (lVar8 = *(long *)(DAT_05231900 + 0x50), lVar8 != 0)) {
    if ((*(long *)(lVar8 + 0x118) != 0) && (*(char *)(*(long *)(lVar8 + 0x118) + 0xe0b) == '\0')) {
      return;
    }
    if ((*(long *)(lVar8 + 0x118) != 0) &&
       (bVar5 = *(byte *)(*(long *)(lVar8 + 0x118) + 0xe0b), uVar7 = (uint)bVar5, bVar5 == 0))
    goto LAB_015af5c4;
  }
  uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af5c4:
  if ((int)param_4 <= (int)uVar7) {
    lVar6 = *(long *)(lVar6 + 0xb40);
    iVar3 = *(int *)(param_3 + 8);
    iVar4 = *(int *)(param_3 + 0xc);
    iVar2 = iVar3;
    if (*(int *)(lVar6 + 0x20) <= iVar3) {
      iVar2 = *(int *)(lVar6 + 0x20);
    }
    iVar1 = 0;
    if (*(int *)(lVar6 + 0x10) <= iVar3) {
      iVar1 = iVar2 - *(int *)(lVar6 + 0x10);
    }
    iVar2 = iVar4;
    if (*(int *)(lVar6 + 0x24) <= iVar4) {
      iVar2 = *(int *)(lVar6 + 0x24);
    }
    iVar3 = 0;
    if (*(int *)(lVar6 + 0x14) <= iVar4) {
      iVar3 = iVar2 - *(int *)(lVar6 + 0x14);
    }
    *param_2 = iVar1 >> (param_4 & 0x1f);
    param_2[1] = iVar3 >> (param_4 & 0x1f);
  }
  return;
}

