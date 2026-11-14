
bool FUN_01a1d760(undefined8 param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_40 = 0;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
  local_50 = *(int *)(PTR_DAT_04bb5d40 + 8);
  iStack_4c = *(int *)(PTR_DAT_04bb5d40 + 0xc);
  lVar3 = *(long *)PTR_DAT_04bb2720;
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
  puVar2 = (undefined4 *)FUN_01a5190c(&local_48,0,param_1,&local_58);
  local_18 = *puVar2;
  uStack_14 = puVar2[1];
  iVar1 = FUN_0277d6c4(&local_18);
  if ((param_2 != (float *)0x0) && (iVar1 == 0xea79)) {
    param_2[1] = 0.0;
    *param_2 = ((float)local_50 * 5.0 + (float)(local_50 + 1) * 5.0 + 5.0) * 0.5;
    param_2[2] = ((float)iStack_4c * 5.0 + (float)(iStack_4c + 1) * 5.0 + 5.0) * 0.5;
  }
  return iVar1 == 0xea79;
}

