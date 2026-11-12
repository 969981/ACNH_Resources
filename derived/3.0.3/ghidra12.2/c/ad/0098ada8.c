
uint FUN_0098ada8(undefined8 param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
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
  local_3c = *(undefined4 *)(puVar3 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  FUN_01a5033c(auStack_50,&local_48,0,param_1,0);
  uVar2 = (*param_2)(auStack_50,param_1,param_3);
  return uVar2 & 1;
}

