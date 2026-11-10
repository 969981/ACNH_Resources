
bool FUN_0029bfac(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  undefined4 local_48;
  int local_40 [4];
  
  puVar3 = PTR_DAT_04bcd350;
  uVar4 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_00260d98(local_40,uVar4,param_2,param_3);
  if (local_40[0] == 0) {
    cVar2 = *(char *)(param_1 + 0x15d);
    FUN_00291950(&local_50,*(undefined8 *)(param_1 + 0xb8),param_2,param_4,0,cVar2 == '\0');
    FUN_00229780(local_40,&local_50);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x1c0) != 0) {
        lVar5 = FUN_002237a8(param_1 + 0x1b0);
        lVar1 = 0;
        if (lVar5 != 0) {
          lVar1 = lVar5 - *(int *)(param_1 + 0x1c4);
        }
        *(undefined8 *)(lVar1 + 0x10) = 0;
        FUN_002236bc(param_1 + 0x198,param_1 + 0x198,lVar1);
        *(undefined8 *)(lVar1 + 0x10) = param_2;
      }
      FUN_0029b390(param_1);
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(0,param_2,*(undefined8 *)(param_1 + 0xa8));
      }
      uVar4 = FUN_0026c89c(*(undefined8 *)puVar3);
      FUN_00260e40(uVar4,param_2,1);
    }
  }
  else {
    uVar4 = FUN_0026c89c(*(undefined8 *)puVar3);
    local_48 = 0;
    local_50 = 0x2000000000000;
    FUN_00261158(uVar4,&local_50);
  }
  return local_40[0] == 0;
}

