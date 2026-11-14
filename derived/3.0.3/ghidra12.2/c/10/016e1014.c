
undefined8 FUN_016e1014(float *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined *local_68;
  undefined8 local_60;
  undefined *puStack_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
  local_40 = 0;
  local_60 = 0;
  local_50 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_4c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar3 = *(long *)PTR_DAT_04bb2720;
  puStack_58 = local_68;
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
  local_3c = *(undefined4 *)(puVar4 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  uVar2 = FUN_01a5190c(&local_48,param_3,&puStack_58,&local_68);
  if (param_2 != (float *)0x0) {
    param_2[2] = (float)local_60._4_4_ * 5.0 + 2.5;
    *param_2 = (float)(int)local_60 * 5.0 + 2.5;
    fVar5 = (float)FUN_016e026c(0,param_2,0,0);
    param_2[1] = fVar5;
  }
  return uVar2;
}

