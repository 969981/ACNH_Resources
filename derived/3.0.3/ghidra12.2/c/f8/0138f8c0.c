
ulong FUN_0138f8c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  undefined **local_60;
  undefined8 *puStack_58;
  undefined4 *local_50;
  undefined4 local_34;
  
  uVar3 = *(uint *)(param_2 + 0x18);
  local_68 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_0138ef70(param_1,param_2);
    return uVar4;
  }
  if (*(short *)PTR_DAT_04bb6298 != *(short *)(param_2 + 0x24)) goto LAB_0138fbb4;
  if ((uVar3 >> 2 & 1) == 0) {
    local_78 = (float)*(int *)(param_2 + 0x38) * 5.0;
    fStack_74 = (float)*(int *)(param_2 + 0x3c) * 5.0;
    fVar8 = (float)*(int *)(param_2 + 0x4c) * 5.0 + 5.0;
    fVar7 = (float)*(int *)(param_2 + 0x48) * 5.0 + 5.0;
    local_70 = fVar7;
    if (fVar7 <= local_78) {
      local_70 = local_78;
      local_78 = fVar7;
    }
    fStack_6c = fVar8;
    if (fVar8 <= fStack_74) {
      fStack_6c = fStack_74;
      fStack_74 = fVar8;
    }
    uVar4 = FUN_0251eac0(&local_78,param_3,uVar3 >> 4 & 1);
    if ((uVar4 & 1) == 0) {
      local_34 = 0;
      puStack_58 = &local_68;
      local_60 = &PTR_FUN_04a770b8;
      local_50 = &local_34;
      iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar1 != 0) {
        lVar6 = (long)iVar1 << 3;
        puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_60)(&local_60,*puVar5);
          lVar6 = lVar6 + -8;
          puVar5 = puVar5 + 1;
        } while (lVar6 != 0);
      }
      puVar2 = PTR_DAT_04bb3238;
      uVar4 = FUN_01735000(&local_78,*(undefined4 *)PTR_DAT_04bb3238,local_34,
                           *(uint *)(param_2 + 0x18) >> 4 & 1);
      if (((uVar4 & 1) == 0) &&
         (uVar4 = FUN_01735e9c(0x40a00000,&local_78,*(undefined4 *)puVar2), (uVar4 & 1) == 0)) {
        if ((*(byte *)(param_2 + 0x18) >> 3 & 1) == 0) {
          uVar4 = FUN_01736cb8(&local_78,*(undefined4 *)puVar2);
joined_r0x0138fba8:
          if ((uVar4 & 1) != 0) goto LAB_0138fbac;
        }
LAB_0138fbb4:
        uVar3 = FUN_0138ef70(param_1,param_2);
        goto LAB_0138fbc0;
      }
    }
  }
  else {
    uVar9 = *(undefined4 *)(param_2 + 0x54);
    local_70 = ((float)*(int *)(param_2 + 0x3c) * 5.0 + (float)*(int *)(param_2 + 0x4c) * 5.0 + 5.0)
               * 0.5;
    local_78 = ((float)*(int *)(param_2 + 0x38) * 5.0 + (float)*(int *)(param_2 + 0x48) * 5.0 + 5.0)
               * 0.5;
    uVar4 = FUN_0251f670(uVar9,&local_78,param_3,uVar3 >> 4 & 1);
    if ((uVar4 & 1) == 0) {
      local_34 = 0;
      puStack_58 = &local_68;
      local_60 = &PTR_FUN_04a770b8;
      local_50 = &local_34;
      iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar1 != 0) {
        lVar6 = (long)iVar1 << 3;
        puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_60)(&local_60,*puVar5);
          lVar6 = lVar6 + -8;
          puVar5 = puVar5 + 1;
        } while (lVar6 != 0);
      }
      puVar2 = PTR_DAT_04bb3238;
      uVar4 = FUN_01735670(uVar9,0xbf800000,&local_78,*(undefined4 *)PTR_DAT_04bb3238,local_34,1,1,0
                           ,1,*(uint *)(param_2 + 0x18) >> 4 & 1,0,1);
      if (((uVar4 & 1) == 0) &&
         (uVar4 = FUN_01735b38(uVar9,0xbf800000,0x40a00000,&local_78,*(undefined4 *)puVar2,1,1,0),
         (uVar4 & 1) == 0)) {
        if ((*(byte *)(param_2 + 0x18) >> 3 & 1) == 0) {
          uVar4 = FUN_01736b18(uVar9,0xbf800000,&local_78,*(undefined4 *)puVar2,0);
          goto joined_r0x0138fba8;
        }
        goto LAB_0138fbb4;
      }
    }
  }
LAB_0138fbac:
  uVar3 = 0;
LAB_0138fbc0:
  return (ulong)(uVar3 & 1);
}

