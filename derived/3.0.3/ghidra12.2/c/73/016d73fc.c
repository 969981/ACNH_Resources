
void FUN_016d73fc(undefined8 param_1,float *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_40 = 0;
  local_28 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_24 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  if (DAT_05aed670 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar2 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(param_1,&local_48,0,&local_30,0);
  return;
}

