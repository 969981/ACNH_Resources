
void FUN_02129e20(void)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  byte local_6c [4];
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar13 = 0;
  }
  else {
    lVar9 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))();
    lVar13 = 0;
    if (lVar9 != 0) {
      lVar13 = lVar9 + 0x276cb0;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_02129ed8:
    if (7 < *pbVar11) {
LAB_02129ee4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar9 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar4 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar4 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar4 & 8) != 0) {
            pbVar11 = (byte *)(lVar9 + 0x471);
          }
        }
        local_6c[0] = *pbVar11;
        if (local_6c[0] < 8) goto LAB_02129f64;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02129ed8;
      }
      goto LAB_02129ee4;
    }
  }
  local_6c[0] = *pbVar11;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
LAB_02129f64:
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_6c,1);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "VisitOtherIslandCount";
  uVar6 = FUN_027512f0(*(long *)PTR_DAT_04bb2208 + 0x1740,&local_68);
  if ((int)uVar6 < 0) {
    uVar6 = 0xffffffff;
  }
  if (lVar13 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  if ((uVar6 >> 0xf & 1) != 0) {
    return;
  }
  if ((*(long *)(lVar13 + 0x28) == 0) ||
     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x10), puVar10 == (undefined8 *)0x0)) {
    uVar7 = 1;
    plVar12 = *(long **)(lVar9 + 0x17bb0);
  }
  else {
    uVar7 = (**(code **)*puVar10)();
    uVar7 = uVar7 ^ 1;
    plVar12 = *(long **)(lVar9 + 0x17bb0);
  }
  if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (*(code *)**(undefined8 **)*plVar12)();
    uVar8 = uVar8 ^ 1;
  }
  lVar14 = 0;
  do {
    if ((*(long *)(lVar13 + 0x28) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar12 != (long *)0x0)) {
      local_68 = *(undefined **)(lVar13 + 8);
      pcStack_60 = *(char **)(lVar13 + 0x10);
      local_58 = 0x3fd140;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    }
    lVar1 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
    piVar2 = (int *)(lVar1 + lVar14 + 0x3c52dc);
    piVar3 = (int *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
    if ((*piVar2 == piVar3[7]) &&
       (lVar1 = lVar1 + lVar14,
       (*(long *)(piVar3 + 8) == *(long *)(lVar1 + 0x3c52e0) &&
       *(long *)(piVar3 + 10) == *(long *)(lVar1 + 0x3c52e8)) &&
       piVar3[0xc] == *(int *)(lVar1 + 0x3c52f0))) {
      if ((*(short *)(lVar1 + 0x3c52c4) == 0) || ((short)piVar3[1] == 0)) {
        if (piVar2[-7] == *piVar3) goto LAB_0212a124;
      }
      else if ((piVar2[-7] == *piVar3) &&
              ((*(long *)(piVar3 + 1) == *(long *)(lVar1 + 0x3c52c4) &&
               *(long *)(piVar3 + 3) == *(long *)(lVar1 + 0x3c52cc)) &&
               piVar3[5] == *(int *)(lVar1 + 0x3c52d4))) {
LAB_0212a124:
        FUN_02751130(lVar1 + 0x3c52f8,(int)(short)uVar6,1);
        goto LAB_0212a138;
      }
    }
    lVar14 = lVar14 + 0xd8;
    if (lVar14 == 0x6c0) {
LAB_0212a138:
      if ((((uVar8 & 1) == 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8), puVar10 != (undefined8 *)0x0))
      {
        (**(code **)*puVar10)();
      }
      if ((((uVar7 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
      return;
    }
  } while( true );
}

