
/* WARNING: Removing unreachable block (ram,0x01a5060c) */
/* WARNING: Removing unreachable block (ram,0x01a5061c) */
/* WARNING: Removing unreachable block (ram,0x01a50628) */

undefined8 FUN_01a50590(long param_1,uint param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  short local_48 [4];
  
  puVar4 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  uVar1 = *(uint *)(param_1 + 8);
  lVar9 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar9 + 0x1f8) == 0) {
      return 0;
    }
LAB_01a50650:
    plVar10 = (long *)(lVar9 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      lVar11 = *(long *)(lVar9 + 0x1f8);
    }
    else {
      plVar10 = (long *)(lVar9 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar10 = (long *)(lVar9 + 0x30);
      }
      lVar11 = *plVar10;
    }
    if (lVar11 == 0) {
      return 0;
    }
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar1);
    if (uVar1 == 0) {
      lVar9 = 0;
      goto LAB_01a50688;
    }
    if (uVar1 == 0) goto LAB_01a50650;
    plVar10 = (long *)(lVar9 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar10 = (long *)(lVar9 + 0x30);
    }
  }
  lVar9 = *plVar10;
LAB_01a50688:
  plVar10 = (long *)(lVar9 + 0x60) + param_2;
  if (7 < param_2) {
    plVar10 = (long *)(lVar9 + 0x60);
  }
  if (*plVar10 != 0) {
    local_50 = 0;
    local_70 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_68 = PTR_DAT_04bb2010 + 0x10;
    local_60 = 0;
    puStack_58 = puStack_68;
    FUN_0277f02c(param_4,&local_70);
    local_60._0_4_ = (int)local_60 + *(int *)(param_3 + 8);
    local_60._4_4_ = local_60._4_4_ + *(int *)(param_3 + 0xc);
    local_50._0_4_ = (int)local_50 + *(int *)(param_3 + 8);
    local_50._4_4_ = local_50._4_4_ + *(int *)(param_3 + 0xc);
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar6 = FUN_0180b7a0();
      puVar3 = PTR_DAT_04bb2720;
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)PTR_DAT_04bb2720;
        iVar8 = 0;
        if (lVar9 != 0) {
          if (*(long *)(lVar9 + 0x330) == 0) {
            iVar8 = 0;
          }
          else {
            puVar7 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
            iVar5 = FUN_006bd550(*puVar7,0);
            iVar8 = 0;
            if (iVar5 == 0x758f7eaf) {
              iVar8 = 0;
              if (*(long *)puVar3 != 0) {
                lVar9 = *(long *)(*(long *)puVar3 + 0x330);
                iVar8 = 0;
                if (lVar9 != 0) {
                  iVar8 = *(int *)(lVar9 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) != iVar8) {
          local_98 = (undefined **)CONCAT44(local_98._4_4_,param_2);
          if (param_2 < 2) {
            local_98 = (undefined **)(puVar4 + 0x10);
            local_90 = (undefined **)(puVar2 + 0x10);
            local_78 = 0;
            local_88 = (undefined *)0x0;
            local_80 = (undefined *)local_90;
            uVar6 = FUN_017ba710(*(undefined4 *)(param_1 + 0xc),&local_98);
            if ((uVar6 & 1) != 0) {
              if ((int)local_60 < (int)local_88) {
                return 0;
              }
              if ((int)local_78 < (int)local_50) {
                return 0;
              }
              if (local_60._4_4_ < local_88._4_4_) {
                return 0;
              }
              if (local_78._4_4_ < local_50._4_4_) {
                return 0;
              }
            }
          }
        }
      }
    }
    uVar6 = FUN_01a4fafc(param_1,param_2,&local_70);
    iVar8 = (int)local_60;
    if ((uVar6 & 1) != 0) {
      local_98 = &puStack_68;
      local_90 = &puStack_58;
      local_88 = puVar2 + 0x10;
      iVar5 = local_50._4_4_ + 1;
      local_80._0_4_ = (int)local_60;
      local_80._4_4_ = local_60._4_4_;
      if (iVar5 != local_60._4_4_) {
        do {
          uVar6 = FUN_01a4f798(param_1,param_2,&local_88);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          FUN_01a50240(local_48,param_1,param_2,&local_88);
          if (local_48[0] != -2) {
            return 0;
          }
          if ((int)local_80 < *(int *)(local_90 + 1)) {
            local_80._0_4_ = (int)local_80 + 1;
          }
          else {
            local_80._4_4_ = local_80._4_4_ + 1;
            local_80._0_4_ = *(int *)(local_98 + 1);
          }
        } while ((iVar8 != (int)local_80) || (iVar5 != local_80._4_4_));
      }
      return 1;
    }
  }
  return 0;
}

