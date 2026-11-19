
undefined8 * FUN_03c60020(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x38);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x38,8);
    }
  }
  puVar3 = PTR_DAT_04bb2120;
  puVar2 = PTR_DAT_04bb2020;
  *(undefined1 *)((long)puVar6 + 0x26) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[3] = puVar3;
  puVar6[2] = puVar2 + 0x10;
  uVar1 = 2;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  FUN_03c5a110(puVar6 + 2,param_2,0xffffffff,uVar1);
  *(undefined4 *)(puVar6 + 5) = 0xffffffff;
  puVar6[6] = param_4;
  return puVar6;
}

