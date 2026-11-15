
undefined8
FUN_01f789c0(undefined8 param_1,float *param_2,undefined4 *param_3,float *param_4,
            undefined1 *param_5)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  undefined *puStack_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  float local_48;
  float local_44;
  float local_18;
  float fStack_14;
  
  fVar5 = *param_2;
  local_44 = param_2[1];
  fVar6 = fVar5 + 17.0;
  local_48 = param_2[2] + -15.0;
  fVar7 = fVar5 + -17.0;
  iVar1 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  local_60 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
  iStack_74 = iStack_84 + 1;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_78 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  local_50 = local_60 + 2;
  local_88 = local_78 + -2;
  local_80 = puStack_90;
  local_70 = local_98;
  puStack_68 = puStack_90;
  iStack_5c = iStack_84;
  local_58 = puStack_90;
  iStack_4c = iStack_74;
  local_18 = local_48;
  fStack_14 = local_44;
  if (*(int *)(*(long *)PTR_DAT_04bc22f8 + 0x20) - iVar1 <
      iVar1 - *(int *)(*(long *)PTR_DAT_04bc22f8 + 0x10)) {
    uVar2 = FUN_01f78ba0(param_1,&local_70);
    if ((uVar2 & 1) != 0) {
LAB_01f78b54:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      if (param_4 == (float *)0x0) {
        return 1;
      }
      pfVar3 = &fStack_14;
      pfVar4 = &local_18;
      goto LAB_01f78b6c;
    }
    uVar2 = FUN_01f78ba0(uVar2,&local_98);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
  }
  else {
    uVar2 = FUN_01f78ba0(param_1,&local_98);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_01f78ba0(uVar2,&local_70);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      goto LAB_01f78b54;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 2;
  }
  if (param_4 == (float *)0x0) {
    return 1;
  }
  pfVar3 = &local_44;
  pfVar4 = &local_48;
  fVar6 = fVar7;
LAB_01f78b6c:
  fVar5 = *pfVar3;
  *param_4 = fVar6;
  param_4[1] = fVar5;
  param_4[2] = *pfVar4;
  return 1;
}

