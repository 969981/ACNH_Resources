
void FUN_00294d70(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  undefined1 *puVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_ec;
  undefined4 local_e4;
  long local_e0 [16];
  
  puVar3 = PTR_DAT_04bcd350;
  puVar2 = PTR_DAT_04bcb8b8;
  lVar12 = *(long *)PTR_DAT_04bcb8b8;
  lVar4 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
  if (*(int *)(param_1 + 0x90) - 0xbU < 0xfffffffe || *(char *)(param_1 + 0xf4) == '\0') {
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar6 == lVar4) {
LAB_00294ebc:
      cVar14 = '\0';
      goto LAB_00294ec0;
    }
    lVar9 = *(long *)(param_1 + 0xb0);
    if (lVar9 != param_1 + 0xa8) {
      cVar14 = '\0';
      uVar15 = 0;
      do {
        lVar11 = lVar9;
        do {
          if (*(long *)(lVar6 + 0x10) == *(long *)(lVar11 + 0x10)) {
            cVar14 = cVar14 + '\x01';
            goto LAB_00294df8;
          }
          lVar11 = *(long *)(lVar11 + 8);
        } while (lVar11 != param_1 + 0xa8);
        if (uVar15 < 0x10) {
          local_e0[uVar15] = *(long *)(lVar6 + 0x10);
          uVar15 = uVar15 + 1;
        }
LAB_00294df8:
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar4);
      goto LAB_00294eb4;
    }
    uVar15 = 0;
    do {
      if (uVar15 < 0x10) {
        local_e0[uVar15] = *(long *)(lVar6 + 0x10);
        uVar15 = uVar15 + 1;
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != lVar4);
    cVar14 = '\0';
  }
  else {
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar6 == lVar4) goto LAB_00294ebc;
    uVar13 = *(undefined8 *)(lVar12 + 0xb8);
    cVar14 = '\0';
    uVar15 = 0;
    do {
      uVar16 = FUN_00292560(uVar13,*(undefined8 *)(lVar6 + 0x10),&local_ec);
      if (((uVar16 & 1) == 0) ||
         ((int)local_ec != *(int *)(lVar12 + (ulong)*(byte *)(lVar12 + 0x162) * 4 + 0x180))) {
        if (uVar15 < 0x10) {
          local_e0[uVar15] = *(long *)(lVar6 + 0x10);
          uVar15 = uVar15 + 1;
        }
      }
      else {
        cVar14 = cVar14 + '\x01';
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != lVar4);
LAB_00294eb4:
    if (uVar15 == 0) goto LAB_00294ec0;
  }
  uVar16 = (ulong)uVar15;
  plVar17 = local_e0;
  do {
    lVar6 = *plVar17;
    uVar5 = FUN_00292080(*(undefined8 *)(lVar12 + 0xb8),lVar6);
    if ((uVar5 & 1) != 0) {
      FUN_0029c5b4(lVar12,1,lVar6);
      FUN_00292030(*(undefined8 *)(lVar12 + 0xb8),lVar6,0);
      FUN_00291cd0(*(undefined8 *)(lVar12 + 0xb8),lVar6,0);
      FUN_00291b50(*(undefined8 *)(lVar12 + 0xb8),lVar6,0);
      FUN_0029c190(lVar12,lVar6);
    }
    uVar16 = uVar16 - 1;
    plVar17 = plVar17 + 1;
  } while (uVar16 != 0);
LAB_00294ec0:
  lVar6 = *(long *)(lVar4 + 8);
  if (lVar6 != lVar4) {
    uVar13 = *(undefined8 *)(*(long *)puVar2 + 0xb8);
    do {
      FUN_002925a0(uVar13,*(undefined8 *)(lVar6 + 0x10),*(undefined1 *)(lVar6 + 0x18));
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != lVar4);
  }
  uVar15 = *(int *)(param_1 + 0x90) - 6;
  iVar1 = uVar15 * 2 + 0xb;
  if (4 < uVar15) {
    iVar1 = 1;
  }
  FUN_0029c5b4(lVar12,iVar1,0);
  uVar13 = FUN_0026c89c(*(undefined8 *)puVar3);
  local_e4 = 0;
  local_ec = 0x8000000000000;
  FUN_00261158(uVar13,&local_ec);
  local_ec = 0x8000000000000;
  local_e4 = 0;
  FUN_0029283c(*(undefined8 *)(lVar12 + 0xb8),&local_ec);
  *(undefined4 *)(lVar12 + 0xd4) = 3;
  FUN_0029ce48(lVar12,0);
  puVar2 = PTR_DAT_04bccf10;
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 - 6U < 3) {
    cVar7 = PTR_DAT_04bccf10[0x2f6];
    if (cVar7 != -2) {
      if (cVar7 == -1) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = cVar7 + '\x01';
      }
      PTR_DAT_04bccf10[0x2f6] = cVar7;
    }
    puVar8 = puVar2 + 0x2fc;
    pcVar10 = puVar2 + 0x2fe;
  }
  else {
    cVar7 = PTR_DAT_04bccf10[0x2f7];
    if (cVar7 != -2) {
      if (cVar7 == -1) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = cVar7 + '\x01';
      }
      PTR_DAT_04bccf10[0x2f7] = cVar7;
    }
    puVar8 = puVar2 + 0x304;
    pcVar10 = puVar2 + 0x306;
  }
  *pcVar10 = cVar14;
  *puVar8 = (char)iVar1;
  return;
}

