
undefined8 FUN_01500c60(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  int local_44;
  
  local_60 = (undefined *)CONCAT44(local_60._4_4_,param_3);
  if (3 < param_3 - 2U) {
    return 0;
  }
  local_58 = 0;
  lVar2 = *(long *)PTR_DAT_04bb2720;
  local_44 = param_3;
  if (lVar2 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(lVar2 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar2 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_54 = *(undefined4 *)(puVar3 + 7);
  local_50 = FUN_017baf44();
  local_50 = local_50 & 1;
  iVar1 = *(int *)(param_2 + 8);
  iVar9 = *(int *)(param_2 + 0xc);
  local_60 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a4fa00(&local_60);
  FUN_01a4fa00(&local_60);
  if (DAT_05292338 == 0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 85.0;
    fVar7 = 85.0;
  }
  else {
    fVar5 = (float)*(int *)(DAT_05292338 + 0xd88) * 5.0;
    fVar4 = (float)*(int *)(DAT_05292338 + 0xd8c) * 5.0;
    fVar7 = (float)*(int *)(DAT_05292338 + 0xd9c) * 5.0 + 5.0;
    fVar6 = (float)*(int *)(DAT_05292338 + 0xd98) * 5.0 + 5.0;
  }
  if (3 < local_44 - 2U) {
    return 0;
  }
  fVar8 = (float)iVar9 * 5.0 + 2.5;
  switch(local_44) {
  case 2:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    goto LAB_01500e34;
  case 3:
    fVar8 = fVar7 - fVar8;
    break;
  case 4:
    fVar4 = fVar5 + (fVar6 - ((float)iVar1 * 5.0 + 2.5));
    goto LAB_01500e14;
  case 5:
    fVar8 = fVar8 - fVar4;
  }
  fVar4 = fVar4 + fVar8;
LAB_01500e14:
  *(uint *)(param_1 + 8) = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_01500e34:
  lVar2 = FUN_01a4fa00(&local_60);
  *(int *)(param_1 + 0xc) = *(int *)(lVar2 + 0x14) + 7;
  return 1;
}

