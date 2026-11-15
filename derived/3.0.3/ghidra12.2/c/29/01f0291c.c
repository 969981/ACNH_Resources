
undefined8 FUN_01f0291c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  byte local_28;
  
  local_30 = 0;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_2c = *(undefined4 *)(puVar5 + 7);
  local_28 = FUN_017baf44();
  local_28 = local_28 & 1;
  local_38 = PTR_DAT_04bb3140 + 0x10;
  uVar2 = FUN_01a5190c(&local_38,1,param_2 + 0x60,0);
  uVar3 = FUN_0277d7b4(uVar2,param_2 + 0x50);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_01a5190c(&local_38,0,param_2 + 0x60,0);
    uVar2 = FUN_0277d7b4(uVar2,param_2 + 0x50);
    return uVar2;
  }
  return 1;
}

