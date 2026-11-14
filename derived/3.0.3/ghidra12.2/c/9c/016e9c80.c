
undefined8 FUN_016e9c80(float param_1,float *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  float *pfVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  float fStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  
  if ((param_4 & 1) == 0) {
    fVar12 = (float)FUN_016e026c(0,param_2,0,0);
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if (lVar10 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar10 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
        iVar4 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    uVar3 = local_ac;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar8 = 0;
      puVar11 = DAT_055c1b60;
      do {
        if (*(int *)(puVar11 + -1) == *(int *)(puVar7 + 7)) {
          if (uVar8 != 0xffff) goto LAB_016e9dd4;
          break;
        }
        puVar11 = (undefined8 *)puVar11[1];
        uVar8 = uVar8 + 1;
      } while (puVar11 != &DAT_055c1b58);
    }
    uVar8 = 0;
LAB_016e9dd4:
    local_ac._0_4_ = (uint)uVar8;
    local_ac._5_3_ = SUB83(uVar3,5);
    local_ac._0_5_ = CONCAT14(1,(uint)local_ac);
    fVar13 = (float)FUN_016e06d0(param_2,0,0,&local_ac,0);
    fVar13 = fVar12 - fVar13;
    fVar14 = -fVar13;
    if (0.0 <= fVar13) {
      fVar14 = fVar13;
    }
    if (1.0 < fVar14) {
      return 0;
    }
  }
  else {
    uVar6 = FUN_016ea0c8(param_1,param_2);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    fVar12 = (float)FUN_016e026c(0,param_2,0,0);
  }
  fVar14 = -param_1;
  if (0.0 <= param_1) {
    fVar14 = param_1;
  }
  if (1.1920929e-07 < fVar14) {
    if ((param_3 & 1) == 0) {
      local_a4 = param_2[2];
      local_94 = 0;
      local_9c = 0x3f800000;
      uStack_98 = 0x10;
      local_ac = *(ulong *)param_2;
      fStack_a0 = param_1;
      iVar4 = FUN_016ed290(&local_ac,0,0,0);
      if (iVar4 != 0) {
        return 0;
      }
    }
    puVar2 = PTR_DAT_04bb2d00;
    iVar4 = 0;
    do {
      pfVar1 = (float *)(puVar2 + (ulong)((uint)(DAT_05240230 * iVar4) >> 0x18) * 0x10);
      fVar14 = (float)(DAT_05240230 * iVar4 & 0xffffff) * 5.9604645e-08;
      local_b8 = (*pfVar1 + fVar14 * pfVar1[1]) * param_1 + *param_2;
      fStack_b4 = param_1 * 0.0 + param_2[1];
      local_b0 = (pfVar1[2] + fVar14 * pfVar1[3]) * param_1 + param_2[2];
      if ((param_5 & 1) == 0) {
LAB_016e9f88:
        if ((param_4 & 1) == 0) {
          if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
            puVar7 = &DAT_055c04a0;
          }
          else {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar5 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar9 = 0;
            puVar11 = DAT_055c1b60;
            do {
              if (*(int *)(puVar11 + -1) == *(int *)(puVar7 + 7)) {
                if (((uVar9 ^ 0xffffffff) & 0xffff) != 0) goto LAB_016ea068;
                break;
              }
              puVar11 = (undefined8 *)puVar11[1];
              uVar9 = uVar9 + 1;
            } while (puVar11 != &DAT_055c1b58);
          }
          uVar9 = 0;
LAB_016ea068:
          local_ac = CONCAT44(local_ac._4_4_,uVar9) & 0xffffffff0000ffff;
          local_ac._0_5_ = CONCAT14(1,(uint)local_ac);
          fVar14 = (float)FUN_016e06d0(&local_b8,0,0,&local_ac,0);
        }
        else {
          fVar14 = (float)FUN_016e026c(0,&local_b8,0,0);
        }
        if ((param_3 & 1) == 0) {
          local_ac = CONCAT44(fStack_b4,local_b8);
          fStack_a0 = 0.0;
          local_9c = 0x3f800000;
          uStack_98 = 0x10;
          local_94 = 0;
          local_a4 = local_b0;
          iVar5 = FUN_016ed290(&local_ac,0,0,0);
          if (iVar5 != 0) {
            return 0;
          }
        }
        fVar14 = fVar12 - fVar14;
        fVar13 = -fVar14;
        if (0.0 <= fVar14) {
          fVar13 = fVar14;
        }
        if (1.0 < fVar13) {
          return 0;
        }
      }
      else {
        local_ac = CONCAT44(fStack_b4,local_b8);
        fStack_a0 = 0.0;
        local_9c = 0x3f800000;
        uStack_98 = 1;
        local_94 = 0;
        local_a4 = local_b0;
        iVar5 = FUN_016ed290(&local_ac,0,0,0);
        if (iVar5 == 0) goto LAB_016e9f88;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
  }
  return 1;
}

