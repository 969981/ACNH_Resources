
undefined8 FUN_018b4d60(undefined8 param_1,int *param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined8 *local_60;
  undefined8 local_58;
  float local_4c;
  undefined4 uStack_48;
  float local_44;
  
  puVar1 = PTR_DAT_04bb47e0;
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    return 0;
  }
  if (*param_2 == 0x283) {
    uVar2 = 0;
  }
  else {
    if (*param_2 != 0x24c) goto LAB_018b4de4;
    uVar2 = 1;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_04bb47e0 + 0x168);
  if ((uVar2 < *(uint *)(*(long *)PTR_DAT_04bb47e0 + 0x160) && lVar5 != 0) &&
     (*(char *)(lVar5 + (ulong)uVar2) != '\0')) {
    return 0;
  }
LAB_018b4de4:
  uVar2 = FUN_00a86724(DAT_04da7238);
  if (((uVar2 & 0xfffffffe) != 4) &&
     (uVar4 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2), (uVar4 & 1) != 0)) {
    uVar4 = FUN_01a1c7b0(&local_4c,*param_2,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uStack_48 = FUN_015cb8d4(&local_4c,1);
    local_60 = &DAT_048f9750;
    local_58 = 0;
    local_70 = 0;
    local_78 = PTR_DAT_04bbfe68 + 0x10;
    if (DAT_05aed670 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar6 + 7);
    local_68 = FUN_017baf44();
    local_68 = local_68 & 1;
    local_88 = &DAT_048f9750;
    local_80 = (int)((float)(int)local_4c / 5.0) - (uint)(local_4c < 0.0);
    iStack_7c = (int)((float)(int)local_44 / 5.0) - (uint)(local_44 < 0.0);
    FUN_01a5190c(&local_78,0,&local_88,&local_60);
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    local_4c = ((float)(int)local_58 * 5.0 + (float)((int)local_58 + 1) * 5.0 + 5.0) * 0.5;
    local_44 = ((float)local_58._4_4_ * 5.0 + (float)(local_58._4_4_ + 1) * 5.0 + 5.0) * 0.5;
    uVar4 = FUN_018b3710(&local_78,&local_4c,*(char *)(*(long *)puVar1 + 0x638) == '\0');
    if ((uVar4 & 1) != 0) {
      *(ulong *)(param_3 + 8) = CONCAT44(uStack_48,local_4c);
      *(float *)(param_3 + 0x10) = local_44;
      *(undefined4 *)(param_3 + 0x18) = local_78._0_4_;
      return 1;
    }
  }
  return 0;
}

