
int FUN_016f33f0(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  iVar2 = FUN_01317b90(param_2,0);
  if ((iVar2 == 4) || (iVar3 = FUN_01317b90(param_3,0), iVar3 == 4)) {
    iVar4 = 0;
  }
  else {
    if (iVar2 == iVar3) {
      if (DAT_05aed670 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      uVar1 = local_6c;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar6 = 0;
        puVar7 = DAT_055c1b60;
        do {
          if (*(int *)(puVar7 + -1) == *(int *)(puVar8 + 7)) {
            if (uVar6 != 0xffff) goto LAB_016f3534;
            break;
          }
          puVar7 = (undefined8 *)puVar7[1];
          uVar6 = uVar6 + 1;
        } while (puVar7 != &DAT_055c1b58);
      }
      uVar6 = 0;
LAB_016f3534:
      local_6c._0_4_ = (uint)uVar6;
      local_6c._5_3_ = SUB83(uVar1,5);
      local_6c._0_5_ = CONCAT14(1,(uint)local_6c);
      fVar9 = (float)FUN_016e06d0(param_2,0,0,&local_6c,0);
      if (DAT_05aed670 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      uVar1 = local_6c;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar6 = 0;
        puVar7 = DAT_055c1b60;
        do {
          if (*(int *)(puVar7 + -1) == *(int *)(puVar8 + 7)) {
            if (uVar6 != 0xffff) goto LAB_016f3614;
            break;
          }
          puVar7 = (undefined8 *)puVar7[1];
          uVar6 = uVar6 + 1;
        } while (puVar7 != &DAT_055c1b58);
      }
      uVar6 = 0;
LAB_016f3614:
      local_6c._0_4_ = (uint)uVar6;
      local_6c._5_3_ = SUB83(uVar1,5);
      local_6c._0_5_ = CONCAT14(1,(uint)local_6c);
      fVar10 = (float)FUN_016e06d0(param_3,0,0,&local_6c,0);
      fVar9 = fVar9 - fVar10;
      fVar10 = -fVar9;
      if (0.0 <= fVar9) {
        fVar10 = fVar9;
      }
      fVar10 = fVar10 + -15.0;
      fVar9 = -fVar10;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
      if (1.1920929e-07 < fVar9) {
        return 0;
      }
    }
    local_64 = *(undefined4 *)(param_3 + 1);
    local_54 = 0;
    local_5c = 0x173f800000;
    local_6c = *param_3;
    uStack_60 = param_1;
    iVar5 = FUN_016ed290(&local_6c,0,0,0);
    iVar4 = 0;
    if (iVar5 == 0) {
      iVar4 = iVar3 - iVar2;
      if (1 < iVar4) {
        iVar4 = 2;
      }
      if (iVar4 < -1) {
        iVar4 = -2;
      }
    }
  }
  return iVar4;
}

