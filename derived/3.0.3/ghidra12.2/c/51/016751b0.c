
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_016751b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined *local_a8;
  uint local_a0;
  uint local_9c;
  undefined *local_98;
  uint local_90;
  uint uStack_8c;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  undefined4 local_64;
  
  uVar9 = *(int *)(param_1 + 0x24) + 1;
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar13 = uVar8;
  if (uVar9 != uVar7) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    uVar10 = uVar8;
    do {
      local_98 = puVar1;
      local_90 = uVar10;
      uStack_8c = uVar7;
      uVar4 = FUN_01675460(&local_98,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      uVar13 = *(uint *)(param_1 + 0x10);
      if ((int)uVar10 < *(int *)(param_1 + 0x20)) {
        uVar10 = uVar10 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar10 = uVar13;
      }
    } while (uVar8 != uVar10 || uVar9 != uVar7);
    uVar9 = *(int *)(param_1 + 0x24) + 1;
    uVar7 = *(uint *)(param_1 + 0x14);
  }
  puVar1 = PTR_DAT_04bb27c8;
  uVar11 = 1;
  if (uVar9 == uVar7) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar8 = uVar13;
    do {
      if ((uVar8 - 0x40 < 0xa0) && ((int)uVar7 < 0x40)) {
LAB_01675430:
        uVar11 = 0;
        goto LAB_01675434;
      }
      lVar6 = *(long *)puVar1;
      local_a8 = puVar2;
      local_a0 = uVar8;
      local_9c = uVar7;
      if (lVar6 == 0) {
LAB_01675384:
        local_90 = 0;
        local_98 = (undefined *)0x0;
        local_64 = 0x1d;
        local_98 = (undefined *)0x20000000;
        local_64 = 0x1d;
        local_90 = 0;
        lVar6 = *(long *)puVar1;
        if ((lVar6 != 0) &&
           ((*(long *)(lVar6 + 0x90) != 0 &&
            (uVar4 = FUN_0094b728(lVar6 + 0x28,&local_a8,&local_98), (uVar4 & 1) != 0))))
        goto LAB_016753e8;
        uVar4 = FUN_0097cff0(&local_a8);
        if ((uVar4 & 1) == 0) goto LAB_01675430;
      }
      else {
        if ((((-1 < (int)uVar8) && (lVar5 = *(long *)(lVar6 + 0x90), lVar5 != 0)) &&
            (-1 < (int)uVar7)) &&
           (uVar8 < *(uint *)(lVar5 + 0x38) && uVar7 < *(uint *)(lVar5 + 0x3c))) {
          FUN_00962530(lVar5,&local_a8,&local_98);
          if (((local_68 - 0x29 < 3) || (local_67 - 0x29 < 3)) ||
             ((local_66 - 0x29 < 3 || (local_65 - 0x29 < 3)))) goto LAB_01675430;
          lVar6 = *(long *)puVar1;
          if (lVar6 == 0) goto LAB_01675384;
        }
        lVar6 = *(long *)(lVar6 + 0x90);
        if (((lVar6 == 0) || ((int)local_a0 < 0)) ||
           ((((int)local_9c < 0 ||
             (((*(uint *)(lVar6 + 0x38) <= local_a0 || *(uint *)(lVar6 + 0x3c) <= local_9c ||
               (FUN_00962530(lVar6,&local_a8,&local_98), local_68 != 0x1d)) || (local_67 != 0x1d))))
            || ((local_66 != 0x1d || (local_65 != 0x1d)))))) goto LAB_01675384;
LAB_016753e8:
        iVar12 = iVar12 + 1;
      }
      if ((int)uVar8 < *(int *)(param_1 + 0x20)) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar8 = *(uint *)(param_1 + 0x10);
      }
    } while ((uVar13 != uVar8) || (uVar9 != uVar7));
    uVar11 = 1;
  }
LAB_01675434:
  uVar3 = 0;
  if (1 < iVar12) {
    uVar3 = uVar11;
  }
  return uVar3;
}

