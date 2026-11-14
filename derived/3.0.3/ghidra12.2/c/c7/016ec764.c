
undefined8 FUN_016ec764(float *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  fVar6 = *param_1;
  fVar5 = param_1[2];
  FUN_016e026c(0,param_1,0,0);
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  local_60 = 0;
  local_80 = 0;
  local_70 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_6c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar3 = *(long *)PTR_DAT_04bb2720;
  puStack_78 = local_88;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar4 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  FUN_01a5190c(&local_68,0,&puStack_78,&local_88);
  iVar1 = FUN_0277d6c4();
  if ((iVar1 != 0xea79) ||
     (((param_2 & 1) == 0 &&
      (fVar6 = ((float)(int)((int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0) & 0xfffffffe) *
                5.0 + 5.0) - *param_1,
      fVar5 = ((float)(int)((int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0) & 0xfffffffe) * 5.0
              + 5.0) - param_1[2], 5.0 < SQRT(fVar5 * fVar5 + fVar6 * fVar6))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

