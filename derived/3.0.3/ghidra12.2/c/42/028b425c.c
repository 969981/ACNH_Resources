
bool FUN_028b425c(undefined8 param_1,long param_2,int *param_3)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  char cVar13;
  char cVar14;
  undefined *local_50;
  char *pcStack_48;
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar9 + 0x70;
      }
      goto LAB_028b42d8;
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar11 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
      goto LAB_028b42d8;
    }
  }
  lVar11 = 0;
LAB_028b42d8:
  if ((*(long **)(lVar11 + 0x1a0b70) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x1a0b70), puVar12 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar12)();
    uVar8 = uVar8 ^ 1;
  }
  uVar3 = *(uint *)(*(long *)(lVar11 + 0x1a0b58) + *(long *)(lVar11 + 0x1a0b50));
  if (3 < uVar3) {
    uVar3 = 0;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar3);
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar11 + 0x1a0b70) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x1a0b70) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (uVar3 < 4) {
    pcVar2 = &DAT_0417fb5a + (ulong)*(uint *)(&DAT_04102650 + (long)(int)uVar3 * 4) * 3;
    if (0xf < *(uint *)(&DAT_04102650 + (long)(int)uVar3 * 4)) {
      pcVar2 = "";
    }
    if (*pcVar2 != '\0') {
      return true;
    }
    cVar13 = pcVar2[1];
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    cVar14 = pcVar2[2];
    pcStack_48 = "RegulationType2";
    local_50 = puVar1;
    uVar10 = FUN_0273f0a0(&local_50);
    if ((uVar10 & 1) == 0) {
      pcStack_48 = "RegulationType3";
      local_50 = puVar1;
      bVar7 = FUN_0273f0a0(&local_50);
      cVar14 = cVar14 + (bVar7 & cVar14 < '\x19');
    }
    else {
      cVar13 = cVar13 - ('\0' < cVar13);
    }
    if (*param_3 == *(int *)(*(long *)PTR_DAT_04bb32e8 + 0x4060)) {
      cVar4 = *(char *)(param_2 + 4);
      bVar5 = false;
      bVar6 = false;
      if (cVar13 <= cVar4) {
        bVar6 = SBORROW4((int)cVar4,(int)cVar14);
        bVar5 = (int)cVar4 - (int)cVar14 < 0;
      }
      return bVar5 != bVar6;
    }
  }
  return false;
}

