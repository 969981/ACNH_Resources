
uint FUN_0098ae9c(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined **local_48;
  float local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = (float)*(int *)(param_1 + 0xc) * 5.0 + 2.5;
  local_48 = (undefined **)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 8) * 5.0 + 2.5);
  uVar3 = FUN_035a2340(&local_48,&DAT_0418f444);
  if ((uVar3 & 1) == 0) {
    local_40 = 0.0;
    local_48 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
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
    FUN_01a5033c(auStack_50,&local_48,0,param_1,0);
    uVar2 = (*param_2)(auStack_50,param_1,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

