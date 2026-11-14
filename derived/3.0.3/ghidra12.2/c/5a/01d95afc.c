
void FUN_01d95afc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "PV_EnterDreamLand";
    local_50 = puVar1;
    FUN_01b5c520(&local_50,1,param_2);
    pcStack_48 = "PE_DreamLand_Watch";
    uVar5 = *(undefined8 *)(param_1 + 0x118);
    uVar6 = *(undefined8 *)PTR_DAT_04bb49a0;
    local_50 = puVar1;
    local_24 = FUN_006bd550("PE_DreamLand_Watch",0);
    uVar6 = FUN_01b5b4b0(uVar6,&local_24);
    FUN_01b66700(&local_50,uVar5,uVar6,param_2,0);
    uVar2 = FUN_01d9db2c(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 8),param_2,
                         *(undefined8 *)(param_1 + 0x118),param_3,1);
    if (param_3 == 0) {
      return;
    }
    if ((uVar2 & 1) != 0) {
      return;
    }
    uVar3 = 0x32;
    uVar4 = 0xffffffff;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar3 = 0;
    uVar4 = 1;
  }
  *(undefined4 *)(param_3 + 8) = uVar4;
  *(undefined4 *)(param_3 + 0xc) = uVar3;
  *(undefined8 *)(param_3 + 0x10) = 0;
  return;
}

