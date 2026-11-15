
uint FUN_022b1ec4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  lVar5 = FUN_0251b3b0(param_4 + 0x10,0);
  lVar6 = FUN_0251bdc4(param_4 + 0x10,0);
  puVar1 = PTR_DAT_04bb43c0;
  uVar3 = 0;
  if ((lVar5 != 0) && (lVar6 != 0)) {
    local_58 = *param_5;
    uStack_54 = param_5[1];
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_5);
    lVar9 = *(long *)puVar1;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_60 = 0;
        local_68 = *param_5;
        local_64 = param_5[1];
        local_70 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar1 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_5);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar9 != 0) {
                local_60 = lVar9;
              }
            }
          }
        }
        uVar7 = FUN_01ae59b0(&local_70);
        if ((uVar7 & 1) != 0) {
          FUN_01afc110(&local_70,1);
        }
        FUN_01afa2dc(&local_70,0);
        local_58 = local_68;
        uStack_54 = local_64;
      }
    }
    uVar7 = FUN_022ac8a0(param_4,&local_58,lVar5,lVar6 + 4);
    if ((uVar7 & 1) == 0) {
      uVar3 = FUN_022ac180(param_4,&local_58,lVar5,lVar6 + 4);
      if ((param_6 != (undefined4 *)0x0) && ((uVar3 & 1) != 0)) {
        local_68 = 0;
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
        local_64 = *(undefined4 *)(puVar8 + 7);
        uVar2 = FUN_017baf44();
        local_60 = CONCAT71(local_60._1_7_,uVar2) & 0xffffffffffffff01;
        local_70 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
        uVar11 = FUN_01a50ed0(&local_70,&local_58,param_4 + 0x40,0);
        uVar3 = 1;
        *param_6 = uVar11;
        param_6[1] = param_2;
        param_6[2] = param_3;
        param_6[3] = 0;
      }
    }
    else if (param_6 == (undefined4 *)0x0) {
      uVar3 = 1;
    }
    else {
      local_68 = 0;
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
      local_64 = *(undefined4 *)(puVar8 + 7);
      uVar2 = FUN_017baf44();
      local_60 = CONCAT71(local_60._1_7_,uVar2) & 0xffffffffffffff01;
      uVar3 = 1;
      local_70 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
      uVar11 = FUN_01a50ed0(&local_70,&local_58,param_4 + 0x40,1);
      *param_6 = uVar11;
      param_6[1] = param_2;
      param_6[2] = param_3;
      param_6[3] = 1;
    }
  }
  return uVar3 & 1;
}

