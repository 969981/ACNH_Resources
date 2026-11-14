
void FUN_01776664(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x638) != 2) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x60);
  lVar16 = *(long *)(lVar12 + 0x1150);
  if (lVar16 == 0) {
    return;
  }
  local_50 = &DAT_3f8000003f800000;
  local_48 = &DAT_3f8000003f800000;
  cVar5 = *(char *)(param_1 + 0x99a);
  if (*(char *)(param_1 + 0x72d) == '\0' && cVar5 == '\0') {
    if (*(char *)(param_1 + 0x929) == '\0') {
      bVar10 = false;
      uVar18 = 0;
    }
    else {
      bVar9 = *(char *)(param_1 + 0x928) == '\0';
      if (*(char *)(param_1 + 0x92a) != '\0') {
        bVar9 = !bVar9;
      }
      if (*(char *)(param_1 + 0x72c) != '\0') {
        bVar9 = true;
      }
      bVar10 = (bool)(bVar9 ^ 1);
      uVar18 = 0;
      if (!bVar9) {
        uVar18 = 0x3fc90fdb;
      }
    }
  }
  else {
    bVar10 = *(char *)(param_1 + 0x92c) != '\0';
    uVar18 = 0x3fc90fdb;
    if (!bVar10) {
      uVar18 = 0;
    }
  }
  local_60 = 0;
  local_58 = 0;
  iVar2 = *(int *)(DAT_05292338 + 0xe48);
  if (((iVar2 == 1) || (iVar2 < 2)) || (5 < iVar2)) {
    iVar2 = *(int *)(param_1 + 0xaf8);
    if (*(char *)(param_1 + 0xaf7) != '\0') {
      fVar17 = 8.0 / (float)*(int *)(param_1 + 0xafc);
      if (iVar2 != 6) {
        fVar17 = 0.8;
      }
      cVar6 = *(char *)(param_1 + 0x92e);
      fVar8 = 8.0 / (float)*(int *)(param_1 + 0xb00);
      if (iVar2 != 6) {
        fVar8 = 1.3333334;
      }
      local_50 = (undefined1 *)CONCAT44(fVar8,fVar17);
      local_60 = CONCAT44((1.0 - 1.0 / fVar8) * 0.5,(1.0 - 1.0 / fVar17) * 0.5);
      goto joined_r0x0177685c;
    }
    if (iVar2 != 6) {
      bVar9 = false;
      goto joined_r0x0177696c;
    }
    uVar3 = *(uint *)(param_1 + 0xafc);
    uVar4 = *(uint *)(param_1 + 0xb00);
    local_50 = (undefined1 *)CONCAT44(8.0 / (float)uVar4,8.0 / (float)uVar3);
    local_60 = CONCAT44((1.0 - 1.0 / (8.0 / (float)uVar4)) * 0.5,
                        (1.0 - 1.0 / (8.0 / (float)uVar3)) * 0.5);
    if (((*(char *)(param_1 + 0x92d) != '\0') && ((uVar3 | 2) == 6)) && ((uVar4 | 2) == 6)) {
      bVar10 = true;
      local_48 = (undefined1 *)0x3faaaaab3faaaaab;
      local_58 = 0x3e0000003e000000;
    }
    if (*(char *)(param_1 + 0x92e) == '\0') goto LAB_0177695c;
    if (((uVar3 != 10) || (uVar4 != 6)) && ((bVar9 = true, uVar3 != 6 || (uVar4 != 10))))
    goto joined_r0x0177696c;
  }
  else {
    local_60 = 0x3e0000003e000000;
    cVar6 = *(char *)(param_1 + 0x92d);
    local_50 = (undefined1 *)0x3faaaaab3faaaaab;
joined_r0x0177685c:
    if (cVar6 == '\0') {
LAB_0177695c:
      bVar9 = true;
      goto joined_r0x0177696c;
    }
  }
  local_48 = (undefined1 *)0x3faaaaab3faaaaab;
  bVar9 = true;
  bVar10 = true;
  local_58 = 0x3e0000003e000000;
joined_r0x0177696c:
  if (*(char *)(param_1 + 0x72d) != '\0' || cVar5 != '\0') {
    if (cVar5 == '\0') {
      fVar17 = 8.0;
    }
    else {
      fVar17 = (1.0 / *(float *)(DAT_05292338 + 0xd34)) * 8.0;
    }
    bVar10 = true;
    local_48 = (undefined1 *)CONCAT44(fVar17,fVar17);
  }
  puVar13 = *(ulong **)(lVar12 + 0x1180);
  lVar14 = *(long *)(lVar12 + 0x1160);
  if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
    uVar15 = puVar13[1 < *(uint *)(lVar12 + 0x1178)];
  }
  else {
    uVar15 = 0xffffffffffff;
  }
  bVar7 = false;
  if (((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) {
    bVar7 = bVar9;
  }
  if ((((~(uint)uVar15 & 0xffff) != 0) && ((uVar15 & 0xffff0000) != 0xffff0000)) && (bVar7)) {
    if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
      uVar15 = puVar13[1 < *(uint *)(lVar12 + 0x1178)];
    }
    else {
      uVar15 = 0xffffffffffff;
    }
    plVar11 = (long *)**(undefined8 **)
                        (*(long *)(lVar16 + 0x38) +
                        (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
    (**(code **)(*plVar11 + 0x178))
              (0,plVar11,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_50,&local_60);
    lVar12 = *(long *)(param_1 + 0x60);
    puVar13 = *(ulong **)(lVar12 + 0x1180);
    lVar14 = *(long *)(lVar12 + 0x1160);
  }
  if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
    uVar15 = *puVar13;
  }
  else {
    uVar15 = 0xffffffffffff;
  }
  bVar7 = false;
  if (((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) {
    bVar7 = bVar10;
  }
  if ((((~(uint)uVar15 & 0xffff) != 0) && ((uVar15 & 0xffff0000) != 0xffff0000)) && (bVar7)) {
    if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
      uVar15 = *puVar13;
    }
    else {
      uVar15 = 0xffffffffffff;
    }
    plVar11 = (long *)**(undefined8 **)
                        (*(long *)(lVar16 + 0x38) +
                        (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
    (**(code **)(*plVar11 + 0x178))
              (uVar18,plVar11,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_48,&local_58)
    ;
    lVar12 = *(long *)(param_1 + 0x60);
    puVar13 = *(ulong **)(lVar12 + 0x1180);
    lVar14 = *(long *)(lVar12 + 0x1160);
  }
  if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
    lVar1 = 0x48;
    if (*(uint *)(lVar12 + 0x1178) < 10) {
      lVar1 = 0;
    }
    uVar15 = *(ulong *)((long)puVar13 + lVar1);
  }
  else {
    uVar15 = 0xffffffffffff;
  }
  bVar7 = false;
  if (((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) {
    bVar7 = bVar9;
  }
  if ((((~(uint)uVar15 & 0xffff) != 0) && ((uVar15 & 0xffff0000) != 0xffff0000)) && (bVar7)) {
    if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
      lVar14 = 0x48;
      if (*(uint *)(lVar12 + 0x1178) < 10) {
        lVar14 = 0;
      }
      uVar15 = *(ulong *)((long)puVar13 + lVar14);
    }
    else {
      uVar15 = 0xffffffffffff;
    }
    plVar11 = (long *)**(undefined8 **)
                        (*(long *)(lVar16 + 0x38) +
                        (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
    (**(code **)(*plVar11 + 0x178))
              (0,plVar11,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_50,&local_60);
    lVar12 = *(long *)(param_1 + 0x60);
    puVar13 = *(ulong **)(lVar12 + 0x1180);
    lVar14 = *(long *)(lVar12 + 0x1160);
  }
  if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
    uVar15 = puVar13[(ulong)(8 < *(uint *)(lVar12 + 0x1178)) * 8];
  }
  else {
    uVar15 = 0xffffffffffff;
  }
  bVar9 = false;
  if (((uVar15 ^ 0xffffffffffffffff) & 0xffff00000000) != 0) {
    bVar9 = bVar10;
  }
  if ((((~(uint)uVar15 & 0xffff) != 0) && ((uVar15 & 0xffff0000) != 0xffff0000)) && (bVar9)) {
    if (puVar13 != (ulong *)0x0 && lVar14 != 0) {
      uVar15 = puVar13[(ulong)(8 < *(uint *)(lVar12 + 0x1178)) * 8];
    }
    else {
      uVar15 = 0xffffffffffff;
    }
    plVar11 = (long *)**(undefined8 **)
                        (*(long *)(lVar16 + 0x38) +
                        (-(uVar15 >> 0xf & 1) & 0xfffffffffff80000 | (uVar15 & 0xffff) << 3));
    (**(code **)(*plVar11 + 0x178))
              (uVar18,plVar11,(int)uVar15 >> 0x10,(int)(uVar15 >> 0x10) >> 0x10,&local_48,&local_58)
    ;
  }
  return;
}

