
void FUN_01afeef4(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  iVar2 = FUN_01afcfa0();
  if (iVar2 != 0) {
    uVar3 = FUN_01ae3a80(param_1);
    iVar2 = FUN_01afcfa0(param_1);
    if ((iVar2 == 0) || (puVar4 = (ushort *)FUN_01afd600(param_1), puVar4 == (ushort *)0x0)) {
      local_40 = 0;
    }
    else {
      uVar1 = *puVar4 >> 3 & 3;
      local_40 = 0;
      if (uVar1 != 3) {
        local_40 = uVar1;
      }
    }
    if (local_40 - 1 < 2) {
      FUN_01adf970(&local_40,param_1);
      (**(code **)(CONCAT44(uStack_3c,local_40) + 0x18))(&local_40);
      FUN_038d1270(param_2,"%sReFabric0",local_38);
      return;
    }
    if (local_40 == 0) {
      FUN_01adf970(&local_40,param_1);
      (**(code **)(CONCAT44(uStack_3c,local_40) + 0x18))(&local_40);
      FUN_038d1270(param_2,"%sReFabric%d",local_38,uVar3);
      return;
    }
  }
  **(undefined1 **)(param_2 + 8) = 0;
  return;
}

