
bool FUN_00273520(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [16];
  int local_78 [4];
  undefined *local_68;
  undefined1 auStack_60 [32];
  undefined1 local_34;
  undefined1 local_33;
  
  puVar1 = PTR_DAT_04bc1510;
  local_34 = 1;
  lVar4 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  local_33 = *(undefined1 *)(*(long *)(lVar4 + 0x98) + 0x38);
  FUN_00227258(&local_68);
  uVar5 = FUN_002ba790(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_04bcd350;
  uVar3 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_002b5350(local_78,uVar5,&local_68,uVar3);
  if (local_78[0] == 0) {
    uVar5 = FUN_0026c894(*(undefined8 *)puVar1);
    uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00283cf0(auStack_88,uVar5,param_3,&local_34,2,&local_68,uVar3,param_2);
    FUN_00229780(local_78,auStack_88);
    bVar2 = local_78[0] == 0;
  }
  else {
    bVar2 = false;
  }
  local_68 = PTR_DAT_04bcba18 + 0x10;
  FUN_0021f584(auStack_60);
  return bVar2;
}

