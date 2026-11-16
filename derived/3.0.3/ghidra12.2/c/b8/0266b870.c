
int FUN_0266b870(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar11 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_1), lVar11 == 0)) {
    iVar13 = 0;
  }
  else {
    if ((*(long **)(lVar11 + 0x3eb8) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x3eb8), puVar12 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar12)();
      uVar2 = uVar2 ^ 1;
    }
    lVar1 = *(long *)(lVar11 + 0x3ea0) + *(long *)(lVar11 + 0x3e98);
    uVar3 = FUN_026e9ac0(lVar1);
    uVar4 = FUN_026e9ac0(lVar1 + 0x11f8);
    uVar5 = FUN_026e9ac0(lVar1 + 0x23f0);
    uVar6 = FUN_026e9ac0(lVar1 + 0x35e8);
    uVar7 = FUN_026e9ac0(lVar1 + 0x47e0);
    uVar8 = FUN_026e9ac0(lVar1 + 23000);
    uVar9 = FUN_026e9ac0(lVar1 + 0x6bd0);
    uVar10 = FUN_026e9ac0(lVar1 + 0x7dc8);
    iVar13 = (uVar4 & 1) + (uVar3 & 1) + (uVar5 & 1) + (uVar6 & 1) +
             (uVar7 & 1) + (uVar8 & 1) + (uVar9 & 1) + (uVar10 & 1);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar11 + 0x3eb8) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x3eb8) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  return iVar13;
}

