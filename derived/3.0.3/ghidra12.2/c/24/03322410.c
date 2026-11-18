
void FUN_03322410(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_04bc1118;
  lVar12 = *(long *)(param_1 + 0x350);
  lVar14 = *(long *)PTR_DAT_04bc1118;
  if (lVar12 != 0) {
    bVar6 = (*(uint *)(*(long *)(lVar14 + 0x20) + 0x106c) & 0x82) == 0;
    bVar7 = *(int *)(*(long *)(lVar14 + 0x20) + 0x1050) != 1;
    bVar8 = bVar6 && bVar7;
    FUN_0328a0b0(lVar12,6,1,bVar8);
    if ((bVar6 && bVar7) ||
       (((*(ushort *)(lVar12 + 0x578) >> 5 & 1) != 0 &&
        ((*(ushort *)(lVar12 + 0x578) >> 4 & 1) != 0)))) {
      uVar4 = *(ushort *)(lVar12 + 0x250) & 0xfdff;
    }
    else {
      uVar4 = *(ushort *)(lVar12 + 0x250) | 0x200;
    }
    *(ushort *)(lVar12 + 0x250) = uVar4;
    FUN_0328a2b0(lVar12,bVar8);
  }
  lVar12 = *(long *)(param_1 + 0x348);
  if (lVar12 != 0) {
    if (*(int *)(*(long *)(lVar14 + 0x20) + 0x1050) == 1 ||
        *(char *)(*(long *)(lVar14 + 0x20) + 0x140c) == '\0') {
      FUN_0328a0b0(lVar12,6,1,0);
LAB_033225e4:
      if (((*(ushort *)(lVar12 + 0x578) >> 5 & 1) != 0) &&
         ((*(ushort *)(lVar12 + 0x578) >> 4 & 1) != 0)) {
        uVar9 = 0;
        goto LAB_03322684;
      }
      uVar9 = 0;
      uVar4 = *(ushort *)(lVar12 + 0x250) | 0x200;
    }
    else {
      lVar10 = *(long *)(lVar14 + 0xbf8);
      if (lVar10 == 0) {
        if (*(long *)(lVar14 + 0x30) == 0) {
          FUN_0328a0b0(lVar12,6,1,1);
        }
        else {
          uVar1 = *(uint *)(*(long *)(lVar14 + 0x30) + 0x1368);
          FUN_0328a0b0(lVar12,6,1,(uVar1 & 0xfffffffd) != 0);
          if ((uVar1 & 0xfffffffd) == 0) goto LAB_033225e4;
        }
      }
      else {
        uVar1 = *(uint *)(lVar10 + 0x20f4);
        if (uVar1 == 1) {
          iVar13 = 6;
          piVar11 = (int *)(lVar10 + 0x2530);
        }
        else {
          piVar11 = (int *)(lVar10 + 0x2060);
          if (2 < uVar1) {
            uVar1 = 0;
          }
          iVar13 = (&DAT_0418db90)[(int)uVar1] + -1;
        }
        iVar2 = *piVar11;
        FUN_0328a0b0(lVar12,6,1,iVar2 != iVar13);
        if (iVar2 == iVar13) goto LAB_033225e4;
      }
      uVar9 = 1;
LAB_03322684:
      uVar4 = *(ushort *)(lVar12 + 0x250) & 0xfdff;
    }
    *(ushort *)(lVar12 + 0x250) = uVar4;
    FUN_0328a2b0(lVar12,uVar9);
  }
  lVar12 = *(long *)(param_1 + 0x340);
  if (lVar12 == 0) {
    return;
  }
  lVar14 = *(long *)puVar5;
  if ((*(char *)(lVar14 + 0xf80) == '\0') || (*(int *)(lVar14 + 0x3c) == 0x1b)) {
    bVar8 = true;
  }
  else {
    bVar8 = *(int *)(lVar14 + 0xf7c) != 0;
  }
  if ((*(int *)(lVar14 + 0x474) == 0 || *(int *)(*(long *)(lVar14 + 0x20) + 0x6e8) == 0) || (!bVar8)
     ) {
    FUN_0328a0b0(lVar12,6,1,0);
LAB_0332275c:
    if (((*(ushort *)(lVar12 + 0x578) >> 5 & 1) == 0) ||
       ((*(ushort *)(lVar12 + 0x578) >> 4 & 1) == 0)) {
      uVar9 = 0;
      uVar4 = *(ushort *)(lVar12 + 0x250) | 0x200;
      goto LAB_033227d4;
    }
    uVar9 = 0;
  }
  else {
    cVar3 = *(char *)(*(long *)(lVar14 + 0x20) + 0x16968);
    uVar9 = 1;
    FUN_0328a0b0(lVar12,6,1,cVar3);
    if (cVar3 == '\0') goto LAB_0332275c;
  }
  uVar4 = *(ushort *)(lVar12 + 0x250) & 0xfdff;
LAB_033227d4:
  *(ushort *)(lVar12 + 0x250) = uVar4;
  FUN_0328a2b0(lVar12,uVar9);
  return;
}

