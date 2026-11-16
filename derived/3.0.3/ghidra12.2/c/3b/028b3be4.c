
void FUN_028b3be4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  long lVar7;
  float fVar8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  int local_90;
  int iStack_8c;
  undefined4 local_88;
  uint uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined8 *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = (undefined8 *)PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x41c3528e ||
      *(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x75e80b7c) {
    fVar8 = (float)FUN_028b3370();
    puVar2 = PTR_DAT_04bb43c0;
    local_48 = 0;
    local_58 = PTR_DAT_04bc0510 + 0x10;
    local_50 = *param_5;
    uStack_4c = param_5[1];
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_5);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
          local_48 = lVar7;
        }
      }
    }
    local_78 = 0;
    local_80 = PTR_DAT_04bbfe68 + 0x10;
    local_68 = &DAT_048f9750;
    local_60 = ~(uint)(fVar8 < 0.0) + (int)((float)(int)fVar8 / 5.0);
    iStack_5c = ~(uint)(param_3 < 0.0) + (int)((float)(int)param_3 / 5.0);
    if (DAT_05aed670 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar4 = FUN_006bd550(*puVar5,0);
        if (iVar4 != 0x758f7eaf) {
          puVar1 = &DAT_055c04a0;
        }
        puVar5 = puVar1;
      }
    }
    local_74 = *(undefined4 *)(puVar5 + 7);
    local_70 = FUN_017baf44();
    local_70 = local_70 & 1;
    FUN_01a5033c(&local_a0,&local_80,1,&local_68,0);
    uVar3 = FUN_0277d7b4(&local_a0,param_5);
    iVar4 = FUN_01aee3b4(&local_58);
    if ((iVar4 == 6) || (iVar4 = FUN_01aee3b4(&local_58), iVar4 == 7)) {
      ppuVar6 = &local_a0;
      local_a0 = &DAT_048f9750;
      local_98 = (undefined8 *)CONCAT44(iStack_5c + 1,local_60);
    }
    else {
      ppuVar6 = &local_68;
    }
    FUN_01513b9c(ppuVar6,uVar3 & 1,0);
    local_98 = &DAT_048f9750;
    local_a8 = (undefined8 *)0x1cf2;
    FUN_0277d4ac(&local_a8);
    local_88 = 0;
    local_a0 = local_a8;
    local_90 = local_60;
    iStack_8c = iStack_5c;
    uStack_84 = uVar3 & 1;
    FUN_0152015c(&local_a0);
  }
  return;
}

