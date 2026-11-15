
void FUN_0219d4d4(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  undefined4 local_78;
  uint local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_6c;
  
  if (*(long *)(param_1 + 0xaa0) == 0) {
LAB_0219d554:
    bVar7 = false;
  }
  else {
    iVar15 = *(int *)(*(long *)(param_1 + 0xaa0) + 4);
    if (iVar15 == 7) {
      FUN_0214eb90(param_1 + 0x8b0,(long)*(char *)(param_1 + 0xaf8),1);
      if (*(long *)(param_1 + 0xaa0) == 0) goto LAB_0219d554;
      iVar15 = *(int *)(*(long *)(param_1 + 0xaa0) + 4);
    }
    local_6c = iVar15;
    if ((local_6c == 0) || (local_6c == 0x22)) {
      bVar7 = false;
    }
    else {
      bVar7 = local_6c != 1;
    }
    if (local_6c == 7) {
      return;
    }
  }
  cVar4 = *(char *)(param_1 + 0xaf8);
  lVar10 = FUN_0265c2a0((int)cVar4);
  if (lVar10 == 0) {
    return;
  }
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar11)();
    uVar8 = uVar8 ^ 1;
  }
  if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
    if ((((*(long *)(DAT_053e0208 + 0x16608) == 0) ||
         (puVar14 = *(uint **)(*(long *)(DAT_053e0208 + 0x16608) + 8), puVar14 == (uint *)0x0)) ||
        ((7 < *(uint *)(DAT_053e0208 + 0x16620) &&
         (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 7) == '\0')))) ||
       (((*puVar14 < 8 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0)))) goto LAB_0219d780;
    iVar15 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar15 = 0x1c;
    }
    lVar13 = (ulong)(puVar14[1] * 7 + (uint)(ushort)puVar14[2] * 8 + iVar15) + (long)puVar14;
  }
  else {
    if (*(uint *)(DAT_053e0208 + 0x16718) < 8) goto LAB_0219d780;
    lVar13 = 0x38;
    if (*(uint *)(DAT_053e0208 + 0x16708) < 8) {
      lVar13 = 0;
    }
    lVar13 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar13);
  }
  if (lVar13 != 0) {
    lVar13 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
    cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    cVar6 = *(char *)(lVar13 + 0x13151);
    uVar2 = *(undefined1 *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
    cVar1 = cVar5 + '\x18';
    if ('\x04' < cVar5) {
      cVar1 = cVar5;
    }
    uVar3 = *(undefined1 *)(lVar13 + 0x13152);
    cVar5 = cVar6 + '\x18';
    if ('\x04' < cVar6) {
      cVar5 = cVar6;
    }
    FUN_0214ca00(&local_6c);
    local_6c = CONCAT13(uVar3,CONCAT12(cVar5,CONCAT11(uVar2,cVar1)));
    FUN_0214d3b0(param_1 + 0x8b0,&local_6c,bVar7);
    FUN_0219d7e0(&DAT_053fe348,(long)*(char *)(param_1 + 0xaf8),1,0);
    uVar12 = FUN_0219dee4(&DAT_053fe348,(int)cVar4);
    if ((uVar12 & 1) != 0) {
      uVar9 = FUN_0219e4b0(&DAT_053fe348);
      local_70 = (undefined2)uVar9;
      local_6e = (undefined1)((uint)uVar9 >> 0x10);
      local_74 = FUN_021d7d60(&local_70);
      if ((local_74 < 10) &&
         (uVar12 = (ulong)local_74, (&DAT_053fee41)[(ulong)local_74 * 0xba0] != '\0')) {
        if (((&DAT_053fede8)[uVar12 * 0x174] != 0) &&
           (*(int *)((&DAT_053fede8)[uVar12 * 0x174] + 4) == 6)) {
          FUN_0214eb90(&DAT_053febf8 + uVar12 * 0xba0,uVar12,1);
          local_78 = 1;
          FUN_021dafb0(&local_74,&local_78,0,0,0,1);
        }
      }
    }
  }
LAB_0219d780:
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

