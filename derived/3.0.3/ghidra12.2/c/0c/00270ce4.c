
void FUN_00270ce4(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  bool bVar18;
  undefined8 local_6c;
  undefined4 local_64;
  
  *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)PTR_DAT_04bc1510;
  plVar9 = (long *)FUN_002ba790();
  puVar3 = PTR_DAT_04bcd350;
  uVar10 = FUN_002212e4(*(undefined8 *)(*(long *)PTR_DAT_04bcd350 + 0x10));
  if ((uVar10 & 1) != 0) {
    return;
  }
  if ((*(char *)(*(long *)(*(long *)puVar3 + 0x30) + 100) != '\0' ||
      *(char *)(param_1 + 0xb9) != '\0') || *(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 < 8) {
    return;
  }
  lVar16 = *param_2;
  lVar11 = (**(code **)(*plVar9 + 0x38))(plVar9,param_2[2]);
  lVar12 = *(long *)puVar3;
  cVar2 = *(char *)(*(long *)(lVar12 + 0x38) + 0x84);
  if (lVar11 == 0) {
    uVar5 = 6;
    if (cVar2 != '\0') {
      uVar5 = 9;
    }
LAB_00270e4c:
    FUN_0026c4c8(lVar12,uVar5);
    return;
  }
  if (cVar2 != '\0') {
    return;
  }
  uVar5 = FUN_0026be6c();
  lVar11 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar5);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x40) != param_2[2])) {
    lVar12 = *(long *)puVar3;
    uVar5 = 6;
    goto LAB_00270e4c;
  }
  bVar15 = *(byte *)(lVar16 + 1);
  uVar6 = FUN_00228490(lVar16 + 4);
  lVar11 = *(long *)puVar3;
  if ((*(char *)(lVar11 + 0x120) == '\0') && (uVar6 <= *(uint *)(lVar11 + 0x11c))) {
    return;
  }
  if ((*(long *)(lVar11 + 0xc0) != 0) && (*(long *)(lVar11 + 0xc0) != param_2[2])) {
    bVar15 = 0;
    bVar14 = 1;
    goto LAB_00270f70;
  }
  if (uVar6 < *(uint *)(lVar11 + 0xbc)) {
    return;
  }
  if (uVar6 != *(uint *)(lVar11 + 0xbc)) {
    bVar14 = 0;
    bVar15 = 0;
    goto LAB_00270f70;
  }
  plVar17 = (long *)plVar9[4];
  if (plVar17 == plVar9 + 3) {
    uVar4 = FUN_002b53fc(plVar9);
    if (bVar15 == uVar4) {
      return;
    }
LAB_00270f30:
    if (*(char *)(*(long *)(*(long *)puVar3 + 0x20) + 0x104) == '\0') {
      uVar5 = FUN_0026be6c();
      uVar7 = FUN_0026c418(*(undefined8 *)puVar3);
      FUN_00271c6c(param_1,uVar5,uVar7,uVar6);
    }
    bVar14 = 0;
  }
  else {
    bVar18 = false;
    do {
      plVar13 = (long *)plVar17[2];
      if (*(int *)((long)plVar13 + 0x4c) == 6) {
        *(undefined4 *)((long)plVar13 + 0x4c) = 7;
        cVar2 = (char)plVar13[7];
      }
      else {
        cVar2 = (char)plVar13[7];
      }
      if (cVar2 == -3) {
        local_64 = 0;
        local_6c = 0x800000000000;
        (**(code **)(*plVar13 + 0x28))(plVar13,&local_6c);
        bVar18 = true;
      }
      plVar17 = (long *)plVar17[1];
    } while (plVar17 != plVar9 + 3);
    uVar4 = FUN_002b53fc(plVar9);
    if (bVar15 != uVar4) goto LAB_00270f30;
    if (!bVar18) {
      return;
    }
    bVar14 = 1;
  }
  lVar11 = *(long *)puVar3;
  bVar15 = bVar14 ^ 1;
LAB_00270f70:
  lVar12 = *(long *)(lVar11 + 0x20);
  *(undefined4 *)(lVar11 + 0x11c) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 1;
  if (*(char *)(lVar12 + 0x104) == '\0') {
    iVar8 = FUN_0027bca0(lVar12,lVar16,uVar1,bVar15);
    if (iVar8 != 4) {
      return;
    }
    FUN_002211bc(lVar12,0);
  }
  else {
    if ((uVar6 <= *(uint *)(lVar12 + 0x100) & (bVar14 ^ 0xff)) != 0) {
      return;
    }
    iVar8 = FUN_0027f26c(lVar12,lVar16,uVar1);
    if (iVar8 != 4) {
      return;
    }
  }
  lVar11 = *(long *)puVar3;
  *(uint *)(lVar11 + 0xbc) = uVar6;
  *(long *)(lVar11 + 0xc0) = param_2[2];
  return;
}

