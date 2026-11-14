
void FUN_016e7c24(float *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
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
  lVar2 = *(long *)PTR_DAT_04bb2720;
  puStack_58 = local_68;
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
  local_3c = *(undefined4 *)(puVar3 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  FUN_01a5190c(&local_48,param_3,&puStack_58,&local_68);
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 8) = (undefined4)local_60;
    *(undefined4 *)(param_2 + 0xc) = local_60._4_4_;
  }
  return;
}

