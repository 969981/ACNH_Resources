
bool FUN_00265440(undefined8 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [16];
  int local_70 [4];
  
  puVar1 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  puVar2 = PTR_DAT_04bcd350;
  uVar4 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
  lVar7 = FUN_002ba790(*(undefined8 *)puVar1);
  lVar7 = *(long *)(lVar7 + 0x98);
  if (lVar6 == 0 || lVar7 == 0) {
    bVar3 = false;
  }
  else {
    lVar8 = FUN_002ba788(*(undefined8 *)puVar1);
    uVar9 = FUN_002b43ec(lVar8 + 8);
    lVar8 = FUN_002ba788(*(undefined8 *)puVar1);
    uVar4 = FUN_002b43f4(lVar8 + 8);
    FUN_002b3cf8(lVar7,param_3);
    FUN_002b3dac(lVar7,uVar9);
    FUN_002b3db4(lVar7,uVar4);
    lVar8 = *(long *)puVar2;
    *(undefined2 *)(lVar7 + 0xb2) = param_2;
    *(char *)(lVar8 + 0x9c) = (char)param_3;
    FUN_0026be80(lVar8,param_3);
    FUN_002ab280(local_70,*(long *)puVar1 + 0x10,param_3,uVar9,uVar4,*(undefined8 *)(lVar6 + 0x40));
    bVar3 = local_70[0] == 0;
    if (local_70[0] == 0) {
      *(undefined4 *)(lVar7 + 0x4c) = 5;
      FUN_002b3cf8(lVar6,param_5);
      FUN_002b3dac(lVar6,*(undefined8 *)(lVar6 + 0x40));
      lVar7 = *(long *)puVar2;
      *(undefined2 *)(lVar6 + 0xb2) = param_4;
      *(char *)(lVar7 + 0x9b) = (char)param_5;
      FUN_00269d30(lVar7,0,param_3);
      FUN_0026bcc0(*(undefined8 *)puVar2,param_5);
      lVar6 = FUN_002ba790(*(undefined8 *)puVar1);
      *(char *)(lVar6 + 0xa0) = (char)param_5;
      lVar6 = FUN_0026c88c(*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        uVar9 = FUN_0026c88c(*(undefined8 *)puVar2);
        FUN_00282b98(auStack_80,uVar9,param_3,param_5,param_5);
      }
    }
  }
  return bVar3;
}

