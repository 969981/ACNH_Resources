
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01820f40(long param_1,long param_2,char *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 *local_58;
  ulong local_50;
  undefined **local_48;
  uint local_40;
  int local_3c;
  byte local_38;
  undefined8 local_18;
  
  if ((*param_3 != '\0') && (DAT_04c487d4 != -1)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) && (DAT_05abff60 != 0)) {
      if (*(int *)(param_1 + 8) < *(int *)(DAT_05abff60 + 0x28)) {
        return 0;
      }
      if (*(int *)(DAT_05abff60 + 0x38) < *(int *)(param_1 + 8)) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(DAT_05abff60 + 0x2c)) {
        return 0;
      }
      if (*(int *)(DAT_05abff60 + 0x3c) < *(int *)(param_1 + 0xc)) {
        return 0;
      }
    }
  }
  local_40 = 0;
  local_48 = (undefined **)0x0;
  local_58._0_4_ = 8;
  local_48 = (undefined **)0x100;
  local_40 = 0;
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (uVar5 = FUN_00949798(DAT_04cfae30 + 0x28,param_1,&local_48), (uVar5 & 1) == 0)) {
    local_48 = &PTR_FUN_048f9730;
    fVar8 = (float)*(int *)(param_1 + 8) * 0.5;
    local_40 = 0;
    if (fVar8 != (float)(int)fVar8) {
      local_40 = (uint)(fVar8 < 0.0);
    }
    local_40 = (int)fVar8 - local_40;
    fVar8 = (float)*(int *)(param_1 + 0xc) * 0.5;
    uVar6 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar6 = (uint)(fVar8 < 0.0);
    }
    local_3c = (int)fVar8 - uVar6;
    uVar5 = FUN_02b672b0(&local_48);
    if ((uVar5 & 1) == 0) {
      local_40 = 0;
      local_48 = (undefined **)0x0;
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x1c);
      local_48 = (undefined **)0x40010000000;
      local_40 = 0;
      if ((((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
          (uVar5 = FUN_00949798(DAT_04cfae30 + 0x28,param_1,&local_48), (uVar5 & 1) == 0)) &&
         (uVar5 = FUN_01a1da00(param_1), (uVar5 & 1) == 0)) {
        local_18 = 0xfffe;
        FUN_0277d4ac(&local_18);
        local_58 = &DAT_048f9750;
        local_50 = 0;
        local_40 = 0;
        local_48 = &PTR_LAB_049ffa38;
        if (DAT_05aed670 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        local_3c = *(int *)(puVar7 + 7);
        local_38 = FUN_017baf44();
        local_38 = local_38 & 1;
        puVar7 = (undefined8 *)FUN_01a5190c(&local_48,0,param_1,&local_58);
        local_18 = *puVar7;
        iVar4 = FUN_0277ebd0(&local_18);
        if ((((iVar4 == 3) && (uVar5 = FUN_0277e294(&local_18), (uVar5 & 1) != 0)) &&
            (uVar5 = FUN_0097b580(&local_18,&local_58,param_1,1), (uVar5 & 1) == 0)) ||
           (iVar4 = FUN_0277ebd0(&local_18), iVar4 == 0)) {
          puVar3 = PTR_DAT_04bb5ba0;
          local_40 = local_40 & 0xffffff00;
          local_48 = (undefined **)(PTR_DAT_04bb5ba0 + 0x10);
          FUN_00977020(param_1,&local_48);
          if ((local_40 & 0x60) != 0) {
            return 0;
          }
          if ((*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) ||
             (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) {
            local_58 = (undefined8 *)(puVar3 + 0x10);
            local_50 = local_50 & 0xffffffffffffff00;
            FUN_00977020(param_2,&local_58);
            if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
              if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
                if (((byte)local_50 >> 1 & 1) == 0) {
                  return 0;
                }
                bVar2 = (byte)local_40 >> 3;
              }
              else {
                if (((byte)local_50 >> 3 & 1) == 0) {
                  return 0;
                }
                bVar2 = (byte)local_40 >> 1;
              }
              if ((bVar2 & 1) == 0) {
                return 0;
              }
            }
            if (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 0xc)) {
              if (*(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0xc)) {
                if (((byte)local_50 >> 2 & 1) == 0) {
                  return 0;
                }
                if ((local_40 & 1) == 0) {
                  return 0;
                }
                return 1;
              }
              if ((local_50 & 1) == 0) {
                return 0;
              }
              if (((byte)local_40 >> 2 & 1) == 0) {
                return 0;
              }
              return 1;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

