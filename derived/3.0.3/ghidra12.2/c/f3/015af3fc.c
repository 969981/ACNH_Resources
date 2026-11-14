
/* WARNING: Removing unreachable block (ram,0x015af484) */
/* WARNING: Removing unreachable block (ram,0x015af4ac) */

void FUN_015af3fc(long *param_1,int *param_2,long param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  
  iVar9 = *(int *)(param_3 + 8);
  iVar11 = *(int *)(param_3 + 0xc);
  param_2[0] = 0;
  param_2[1] = 0;
  lVar6 = *param_1;
  fVar12 = (float)iVar11 * 0.5;
  fVar10 = (float)iVar9 * 0.5;
  uVar4 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar4 = (uint)(fVar10 < 0.0);
  }
  uVar5 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar5 = (uint)(fVar12 < 0.0);
  }
  if (lVar6 == 0) {
    return;
  }
  if ((DAT_05231900 != 0) && (lVar8 = *(long *)(DAT_05231900 + 0x50), lVar8 != 0)) {
    if ((*(long *)(lVar8 + 0x118) != 0) && (*(char *)(*(long *)(lVar8 + 0x118) + 0xe0b) == '\0')) {
      return;
    }
    if ((*(long *)(lVar8 + 0x118) != 0) &&
       (bVar2 = *(byte *)(*(long *)(lVar8 + 0x118) + 0xe0b), uVar7 = (uint)bVar2, bVar2 == 0))
    goto LAB_015af4d4;
  }
  uVar7 = *(int *)(*(long *)(lVar6 + 0xb20) + (long)*(int *)(lVar6 + 0xb30) * 0x10) - 1;
LAB_015af4d4:
  if ((int)param_4 <= (int)uVar7) {
    iVar11 = (int)fVar10 - uVar4;
    lVar6 = *(long *)(lVar6 + 0xb40);
    iVar3 = (int)fVar12 - uVar5;
    iVar9 = iVar11;
    if (*(int *)(lVar6 + 0x20) <= iVar11) {
      iVar9 = *(int *)(lVar6 + 0x20);
    }
    iVar1 = 0;
    if (*(int *)(lVar6 + 0x10) <= iVar11) {
      iVar1 = iVar9 - *(int *)(lVar6 + 0x10);
    }
    iVar9 = iVar3;
    if (*(int *)(lVar6 + 0x24) <= iVar3) {
      iVar9 = *(int *)(lVar6 + 0x24);
    }
    iVar11 = 0;
    if (*(int *)(lVar6 + 0x14) <= iVar3) {
      iVar11 = iVar9 - *(int *)(lVar6 + 0x14);
    }
    *param_2 = iVar1 >> (param_4 & 0x1f);
    param_2[1] = iVar11 >> (param_4 & 0x1f);
  }
  return;
}

