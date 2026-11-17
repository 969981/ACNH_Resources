
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03127ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (((DAT_056f5ad0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f5ad0), iVar3 != 0)) {
    DAT_056f59d0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f59d8 = "OnOff";
    DAT_056f59e8 = &DAT_0407ebb1;
    DAT_056f5a08 = &DAT_0407ebb1;
    DAT_056f59f8 = &DAT_04098531;
    DAT_056f5a18 = &DAT_040c9cc7;
    DAT_056f5a38 = &DAT_0408364d;
    DAT_056f5a58 = "Plant";
    DAT_056f5a78 = "Symbol";
    DAT_056f5a98 = "Create";
    DAT_056f5a28 = &DAT_0407ebb1;
    DAT_056f5a48 = &DAT_0407ebb1;
    DAT_056f5a68 = &DAT_0407ebb1;
    DAT_056f5a88 = &DAT_0407ebb1;
    DAT_056f5aa8 = &DAT_0407ebb1;
    DAT_056f5ab8 = "Shrub";
    DAT_056f5ac8 = &DAT_0407ebb1;
    DAT_056f59e0 = DAT_056f59d0;
    DAT_056f59f0 = DAT_056f59d0;
    DAT_056f5a00 = DAT_056f59d0;
    DAT_056f5a10 = DAT_056f59d0;
    DAT_056f5a20 = DAT_056f59d0;
    DAT_056f5a30 = DAT_056f59d0;
    DAT_056f5a40 = DAT_056f59d0;
    DAT_056f5a50 = DAT_056f59d0;
    DAT_056f5a60 = DAT_056f59d0;
    DAT_056f5a70 = DAT_056f59d0;
    DAT_056f5a80 = DAT_056f59d0;
    DAT_056f5a90 = DAT_056f59d0;
    DAT_056f5aa0 = DAT_056f59d0;
    DAT_056f5ab0 = DAT_056f59d0;
    DAT_056f5ac0 = DAT_056f59d0;
    __cxa_guard_release(&DAT_056f5ad0);
  }
  if (((DAT_056f5ae8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f5ae8), iVar3 != 0)) {
    _DAT_056f5ad8 = 0x800000002;
    DAT_056f5ae0 = &DAT_056f59d0;
    __cxa_guard_release(&DAT_056f5ae8);
  }
  uVar7 = (ulong)DAT_056f5adc;
  if (0 < (int)DAT_056f5adc) {
    uVar8 = 0;
    puVar9 = (undefined8 *)(param_1 + 0x260);
    do {
      iVar3 = DAT_056f5ad8 * (int)uVar8;
      bVar2 = _DAT_056f5ad8 >> 0x20 <= uVar8;
      lVar6 = (long)iVar3;
      if (DAT_056f5ad8 == 0 || bVar2) {
        lVar6 = 0;
      }
      lVar5 = (long)(iVar3 + 1);
      if (DAT_056f5ad8 < 2 || bVar2) {
        lVar5 = 0;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f5ae0 + lVar6 * 2,DAT_056f5ae0 + lVar5 * 2);
      bVar2 = 7 < uVar8;
      uVar8 = uVar8 + 1;
      puVar1 = puVar9;
      if (bVar2) {
        puVar1 = (undefined8 *)(param_1 + 0x260);
      }
      puVar9 = puVar9 + 1;
      *puVar1 = uVar4;
    } while (uVar7 != uVar8);
  }
  if (((DAT_056f5b00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f5b00), iVar3 != 0)) {
    DAT_056f5af0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f5af8 = "@T_Date_00";
    __cxa_guard_release(&DAT_056f5b00);
  }
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f5af0);
  *(undefined8 *)(param_1 + 0x2a0) = uVar4;
  if (((DAT_056f5b38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f5b38), iVar3 != 0)) {
    DAT_056f5b08 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f5b10 = "P_Stamp_00";
    DAT_056f5b30 = "T_Date_01";
    DAT_056f5b20 = "T_Date_00";
    DAT_056f5b18 = DAT_056f5b08;
    DAT_056f5b28 = DAT_056f5b08;
    __cxa_guard_release(&DAT_056f5b38);
  }
  (**(code **)(DAT_056f5b08 + 0x18))(&DAT_056f5b08);
  if (*DAT_056f5b10 == '\0') {
LAB_03127c40:
    FUN_0386fd70(&DAT_056f5b08);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f5b08);
  }
  else {
    if (*DAT_056f5b10 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar5 = lVar6 + 1, DAT_056f5b10[lVar5] == '\0'))
        goto LAB_03127c40;
        lVar6 = lVar6 + 1;
      } while (DAT_056f5b10[lVar5] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f5b08);
  }
  *(undefined8 *)(param_1 + 0x2b0) = uVar4;
  (**(code **)(DAT_056f5b18 + 0x18))(&DAT_056f5b18);
  if (*DAT_056f5b20 == '\0') {
LAB_03127cc4:
    FUN_0386fd70(&DAT_056f5b18);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f5b18);
  }
  else {
    if (*DAT_056f5b20 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar5 = lVar6 + 1, DAT_056f5b20[lVar5] == '\0'))
        goto LAB_03127cc4;
        lVar6 = lVar6 + 1;
      } while (DAT_056f5b20[lVar5] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f5b18);
  }
  *(undefined8 *)(param_1 + 0x2b8) = uVar4;
  (**(code **)(DAT_056f5b28 + 0x18))(&DAT_056f5b28);
  if (*DAT_056f5b30 == '\0') {
LAB_03127d50:
    FUN_0386fd70(&DAT_056f5b28);
    uVar4 = FUN_03c688b0(param_2,&DAT_056f5b28);
  }
  else {
    if (*DAT_056f5b30 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar5 = lVar6 + 1, DAT_056f5b30[lVar5] == '\0'))
        goto LAB_03127d50;
        lVar6 = lVar6 + 1;
      } while (DAT_056f5b30[lVar5] != '@');
    }
    uVar4 = FUN_03c68b00(param_2,&DAT_056f5b28);
  }
  *(undefined8 *)(param_1 + 0x2c0) = uVar4;
  FUN_0312fd30(param_1,param_2,param_3);
  return;
}

