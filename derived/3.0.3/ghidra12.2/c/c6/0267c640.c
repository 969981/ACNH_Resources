
void FUN_0267c640(byte *param_1)

{
  short *psVar1;
  undefined *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  undefined *local_58;
  char *pcStack_50;
  byte local_44 [4];
  
  local_44[0] = *param_1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar8 = FUN_025830c0(DAT_055021a0,local_44,1);
  puVar4 = PTR_DAT_04bb2020;
  if (lVar8 == 0) {
    return;
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "BuiltMyHome";
  local_58 = puVar2;
  iVar5 = FUN_0274bce0(param_1,&local_58);
  if (iVar5 == 0) {
    return;
  }
  pcStack_50 = "HouseStorageItem";
  local_58 = puVar2;
  uVar6 = FUN_02798760(param_1,&local_58);
  lVar14 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar14 = *(long *)(DAT_05574040 + 0x20);
    plVar10 = *(long **)(lVar14 + 0x178);
  }
  else {
    plVar10 = *(long **)(lVar8 + 0x19628);
  }
  if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (*(code *)**(undefined8 **)*plVar10)();
    uVar7 = uVar7 ^ 1;
  }
  lVar8 = *(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158);
  uVar11 = *(uint *)(lVar8 + 72000);
  if (8999 < uVar11) {
    uVar11 = 9000;
  }
  if (uVar11 == 0) {
    iVar5 = 0;
  }
  else {
    if (uVar11 == 1) {
      uVar12 = 0;
      iVar5 = 0;
    }
    else {
      uVar12 = 0;
      iVar5 = 0;
      psVar13 = (short *)(lVar8 + 8);
      do {
        psVar1 = psVar13 + -4;
        uVar12 = uVar12 + 2;
        sVar3 = *psVar13;
        psVar13 = psVar13 + 8;
        if (*psVar1 == -2) {
          iVar5 = iVar5 + 1;
        }
        if (sVar3 == -2) {
          iVar5 = iVar5 + 1;
        }
      } while (((ulong)uVar11 & 0x3ffe) != uVar12);
    }
    if (((uVar11 & 1) != 0) && (*(short *)(lVar8 + uVar12 * 8) == -2)) {
      iVar5 = iVar5 + 1;
    }
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  if (uVar6 < uVar11 - iVar5) {
    local_58 = puVar4 + 0x10;
    pcStack_50 = "HouseStorageItem";
    FUN_02799370(param_1,&local_58,uVar11 - iVar5);
  }
  return;
}

