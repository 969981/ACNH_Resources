
void FUN_034552d0(long param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_80 [3];
  byte local_74 [4];
  int local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  undefined4 local_44;
  byte local_28 [4];
  int local_24;
  
  uVar5 = FUN_0277e294(param_2);
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 2;
    return;
  }
  bVar8 = *param_3;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 0x4c) = bVar8;
  local_70 = FUN_03454db0(uVar5,param_2,param_3,1);
  if (local_70 == 0) {
    local_48 = *PTR_DAT_04bb32e0;
    local_58 = 0;
    uStack_50 = 0;
    local_44 = 0;
    local_68 = PTR_DAT_04bb2010 + 0x10;
    local_60 = 0;
    if (7 < local_48) {
      local_48 = 0xff;
    }
    local_70 = *(int *)PTR_DAT_04bb37e0;
    uStack_6c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    bVar8 = *param_3;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (*param_4 == 1) {
      local_28[0] = bVar8;
      local_80[0] = (float)FUN_022cfaf8(&local_70,param_2,local_28);
    }
    else {
      local_74[0] = bVar8;
      local_80[0] = (float)FUN_022cf8f8(&local_70,param_2,local_74);
    }
    fVar11 = local_80[0];
    if (local_80[0] == 1.26117e-44) {
      lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_3 * 0x740;
      if (7 < *param_3) {
        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
      }
      uVar5 = FUN_022cc1b0(lVar7 + 0x658,&local_70);
      if ((uVar5 & 1) != 0) {
        iVar3 = uStack_50._4_4_;
        local_80[1] = 0.0;
        fVar11 = (float)local_60._4_4_;
        local_24 = uStack_50._4_4_;
        fVar10 = (float)(int)local_60 * 5.0 + 2.5;
        fVar12 = fVar11 * 5.0 + 2.5;
        local_80[0] = fVar10;
        local_80[2] = fVar12;
        if (uStack_50._4_4_ - 2U < 4) {
          lVar7 = *(long *)PTR_DAT_04bb2720;
          if (lVar7 == 0) {
            puVar9 = &DAT_055c04a0;
          }
          else {
            puVar9 = &DAT_055c04a0;
            if (*(long *)(lVar7 + 0x330) != 0) {
              puVar9 = (undefined8 *)
                       (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                 (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
              iVar4 = FUN_006bd550(*puVar9,0);
              puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar4 != 0x758f7eaf) {
                puVar9 = &DAT_055c04a0;
              }
            }
          }
          fVar10 = (float)FUN_0153e6b0(local_80,iVar3,*(undefined4 *)(puVar9 + 7));
        }
        else {
          fVar11 = 40.0;
          if (uStack_50._4_4_ != 7) {
            fVar11 = 0.0;
          }
        }
        *(undefined4 *)(param_1 + 0x48) = 3;
        uVar6 = 1;
        uVar1 = *param_2;
        uVar2 = param_2[1];
        *(float *)(param_1 + 0x58) = fVar10;
        *(float *)(param_1 + 0x5c) = fVar11;
        *(float *)(param_1 + 0x60) = fVar12;
        *(int *)(param_1 + 100) = uStack_50._4_4_;
        *(undefined4 *)(param_1 + 0x50) = uVar1;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        *(int *)(param_1 + 0x6c) = *param_4;
        goto LAB_03455348;
      }
      fVar11 = 0.0;
    }
    FUN_03455560(param_1,fVar11,param_3,param_4);
  }
  else {
    *(int *)(param_1 + 0x84) = local_70;
    *(undefined4 *)(param_1 + 0x48) = 3;
    uVar6 = 8;
LAB_03455348:
    FUN_03ebb160(param_1,uVar6);
  }
  return;
}

