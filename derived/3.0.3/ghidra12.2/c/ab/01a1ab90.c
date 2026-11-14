
bool FUN_01a1ab90(undefined8 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  local_30 = 0;
  local_38 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
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
  puVar2 = (undefined2 *)FUN_01a5190c(&local_38,0,param_1,0);
  local_40 = *puVar2;
  local_3e = *(undefined1 *)(puVar2 + 1);
  local_3d = *(undefined1 *)((long)puVar2 + 3);
  local_3c = *(undefined4 *)(puVar2 + 2);
  iVar1 = FUN_0277ebd0(&local_40);
  return iVar1 != 0;
}

