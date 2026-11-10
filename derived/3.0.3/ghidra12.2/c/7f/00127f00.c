
undefined8 FUN_00127f00(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  byte *local_38;
  
  bVar3 = *(byte *)(param_1 + 0x67) >> 4;
  if (6 < bVar3) {
    return 0x9ba2;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  lVar13 = *(long *)(lVar8 + 8);
  iVar1 = *(int *)(lVar8 + 0x70);
  switch(bVar3) {
  default:
    if ((*(byte *)(param_1 + 0x70) & 0x7f) == 0) {
      return 0x9ba2;
    }
    uVar10 = *(uint *)(param_1 + 0x40);
    goto LAB_00128014;
  case 2:
    lVar11 = *(long *)(lVar8 + 0x50);
    break;
  case 3:
  case 4:
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 != 0) goto LAB_00127fb8;
    uVar10 = *(uint *)(lVar13 + 0x38);
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    iVar7 = FUN_0010dbc0(lVar8,3,(uVar10 >> 0x10 | uVar10 << 0x10) + *(int *)(param_1 + 0x40) * 4 +
                                 -4,4,&local_38);
    if (-1 < iVar7) {
      bVar3 = local_38[1];
      bVar4 = local_38[2];
      bVar5 = local_38[3];
      lVar8 = *(long *)(param_1 + 0x10);
      goto LAB_0012800c;
    }
    goto LAB_001280a4;
  case 5:
  case 6:
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return 0;
    }
LAB_00127fb8:
    lVar11 = lVar11 + ((ulong)*(byte *)(lVar11 + 0x10) << 0x18 |
                       (ulong)*(byte *)(lVar11 + 0x11) << 0x10 |
                       (ulong)*(byte *)(lVar11 + 0x12) << 8 | (ulong)*(byte *)(lVar11 + 0x13));
  }
  lVar11 = lVar11 + (ulong)(*(int *)(param_1 + 0x40) * 4 - 4);
  bVar3 = *(byte *)(lVar11 + 1);
  bVar4 = *(byte *)(lVar11 + 2);
  bVar5 = *(byte *)(lVar11 + 3);
LAB_0012800c:
  uVar10 = (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
LAB_00128014:
  uVar2 = *(uint *)(lVar13 + 0x20);
  iVar7 = 10;
  if (iVar1 == 0x40050001) {
    iVar7 = 6;
  }
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar6 = (*(uint *)(lVar8 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar8 + 8) & 0xff00ff) << 8;
  uVar12 = 6;
  if ((uVar6 >> 0x10 | uVar6 << 0x10) != 0x40050001) {
    uVar12 = 10;
  }
  iVar7 = FUN_0010dbc0(lVar8,5,(uVar2 >> 0x10 | uVar2 << 0x10) + (uVar10 - 1) * iVar7,uVar12,
                       &local_38);
  if (iVar7 < 0) {
LAB_001280a4:
    uVar9 = 0xbda2;
  }
  else {
    uVar9 = FUN_001280d0(*(undefined8 *)(param_1 + 0x10),local_38,param_2,
                         (*local_38 & 0x7f) >> (iVar1 != 0x40050001) & 0xff,param_3);
    if ((param_3 & 0xffff) < ((int)uVar9 * 2 + 2U & 0xfffe)) {
      uVar9 = 0x94a2;
    }
    else {
      *(undefined2 *)(param_2 + (long)(short)uVar9 * 2) = 0;
    }
  }
  return uVar9;
}

