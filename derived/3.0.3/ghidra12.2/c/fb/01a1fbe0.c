
float FUN_01a1fbe0(float *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  fVar4 = (float)FUN_015cb8d4(param_1,1);
  local_48 = PTR_DAT_04bb2010 + 0x10;
  local_30 = 0;
  local_38 = PTR_DAT_04bbfe68 + 0x10;
  local_40 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_3c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar2 = *(long *)PTR_DAT_04bb2720;
  if (lVar2 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(lVar2 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar2 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_2c = *(undefined4 *)(puVar3 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  fVar5 = (float)FUN_01a1c290(&local_38,&local_48);
  return fVar4 + fVar5;
}

