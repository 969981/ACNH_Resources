
/* WARNING: Removing unreachable block (ram,0x01fa9b64) */
/* WARNING: Removing unreachable block (ram,0x01fa9b74) */

uint FUN_01fa99cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined **local_100;
  undefined **ppuStack_f8;
  undefined **local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb5ce0;
  puVar1 = PTR_DAT_04bb2720;
  local_58 = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_60 = PTR_DAT_04bb2010 + 0x10;
  local_48 = 0;
  local_50 = puStack_60;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar8 = *(long *)PTR_DAT_04bb2720, lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x330) == 0)) {
LAB_01fa9aac:
    lVar8 = *(long *)PTR_DAT_04bb59d8;
    if (lVar8 == 0) {
      iVar11 = 0;
      iVar3 = 0;
      goto LAB_01fa9adc;
    }
    iVar3 = *(int *)(lVar8 + 0x28);
    iVar11 = *(int *)(lVar8 + 0x2c);
    local_58 = *(undefined8 *)(lVar8 + 0x28);
    iVar9 = *(int *)(lVar8 + 0x38);
    iVar7 = *(int *)(lVar8 + 0x3c);
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
    iVar3 = FUN_006bd550(*puVar5,0);
    if (((iVar3 != 0x758f7eaf) || (*(long *)puVar1 == 0)) ||
       ((lVar8 = *(long *)(*(long *)puVar1 + 0x330), lVar8 == 0 || (*(int *)(lVar8 + 0x244) == 0))))
    goto LAB_01fa9aac;
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      iVar9 = 0;
      iVar7 = 0;
      iVar10 = 0x10;
      iVar11 = 0x10;
    }
    else {
      iVar9 = *(int *)(lVar8 + 0xd88);
      iVar7 = *(int *)(lVar8 + 0xd8c);
      iVar11 = *(int *)(lVar8 + 0xd98);
      iVar10 = *(int *)(lVar8 + 0xd9c);
    }
    iVar3 = iVar9;
    if (iVar11 <= iVar9) {
      iVar3 = iVar11;
    }
    if (iVar9 <= iVar11) {
      iVar9 = iVar11;
    }
    iVar11 = iVar7;
    if (iVar10 <= iVar7) {
      iVar11 = iVar10;
    }
    if (iVar7 <= iVar10) {
      iVar7 = iVar10;
    }
    local_58 = CONCAT44(iVar11,iVar3);
  }
  local_48 = CONCAT44(iVar7,iVar9);
LAB_01fa9adc:
  local_c0 = &local_ac;
  local_ac = 0;
  local_b4 = 0x1500000019;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_d0 = PTR_DAT_04bb96d8 + 0x10;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_100 = (undefined **)
              CONCAT44(local_100._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
  local_b8 = 0;
  uStack_c8 = 0x110000020d;
  uVar6 = FUN_02145060(&local_d0,&local_100,iVar3,iVar11);
  local_e0 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  ppuStack_f8 = &local_68;
  local_100 = &PTR_LAB_04a69bb0;
  lStack_d8 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_f0 = &local_d0;
  puStack_e8 = &local_e0;
  uVar4 = FUN_01fabcd0(uVar6,param_2,param_3,&local_100);
  return uVar4 & 1;
}

