
undefined8
FUN_021e6540(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  int iStack_a4;
  undefined **local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  puVar3 = PTR_DAT_04bb2720;
  local_60 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar10 + 7);
  local_58 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb2010;
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb3140 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = puVar1;
  FUN_01500c60(&local_78,param_3,param_4);
  local_90 = 0;
  uStack_80 = 0;
  local_a0 = &PTR_FUN_0498d548;
  lVar8 = *(long *)puVar3;
  puStack_98 = puVar1;
  local_88 = puVar1;
  if (lVar8 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  FUN_0153ef40(&local_a0,param_4,*(undefined4 *)(puVar10 + 7));
  pfVar5 = (float *)(**(code **)(*(long *)(DAT_053e0208 + 0x17ac0) + 0xf0))();
  iVar4 = (int)(*pfVar5 / 5.0);
  if (0 < iVar4) {
    iStack_a4 = 0;
    if ((param_5 & 1) == 0) {
      cVar9 = '\0';
      do {
        iStack_a4 = local_70._4_4_ - iStack_a4;
        local_a8 = (undefined4)local_70;
        local_b0 = puVar2 + 0x10;
        FUN_01a5033c(&local_b8,&local_68,param_4,&local_b0,param_2);
        uVar7 = FUN_0277e294(&local_b8);
        if ((uVar7 & 1) != 0) goto LAB_021e67bc;
        cVar9 = cVar9 + '\x01';
        iStack_a4 = (int)cVar9;
      } while (iStack_a4 < iVar4);
    }
    else {
      cVar9 = '\0';
      do {
        iStack_a4 = local_70._4_4_ - iStack_a4;
        local_a8 = (undefined4)local_70;
        local_b0 = puVar2 + 0x10;
        puVar6 = (undefined4 *)FUN_01a5190c(&local_68,param_4,&local_b0,param_2);
        local_b8 = *puVar6;
        local_b4 = puVar6[1];
        uVar7 = FUN_0277e294(&local_b8);
        if ((uVar7 & 1) != 0) {
LAB_021e67bc:
          *param_1 = local_b8;
          param_1[1] = local_b4;
          return 1;
        }
        cVar9 = cVar9 + '\x01';
        iStack_a4 = (int)cVar9;
      } while (iStack_a4 < iVar4);
    }
  }
  return 0;
}

