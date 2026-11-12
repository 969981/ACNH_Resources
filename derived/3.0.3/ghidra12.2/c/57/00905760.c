
undefined8 * FUN_00905760(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x2d0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2d0,8);
    }
  }
  FUN_006f94c0(puVar7,param_1,param_2);
  *puVar7 = &PTR_LAB_04926d60;
  puVar4 = PTR_DAT_04bb3eb8;
  puVar3 = PTR_DAT_04bb3ea8;
  puVar7[0x50] = 0;
  *(undefined4 *)(puVar7 + 0x51) = 0;
  puVar7[0x56] = 0;
  uVar1 = *(undefined8 *)puVar4;
  uVar2 = *(undefined8 *)(puVar4 + 8);
  *(undefined4 *)(puVar7 + 0x57) = 0;
  puVar7[0x4f] = puVar3 + 0x10;
  *(undefined8 *)((long)puVar7 + 0x294) = uVar2;
  *(undefined8 *)((long)puVar7 + 0x28c) = uVar1;
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  uVar2 = *(undefined8 *)(puVar4 + 0x18);
  *(undefined4 *)((long)puVar7 + 0x2ac) = *(undefined4 *)(puVar4 + 0x20);
  *(undefined8 *)((long)puVar7 + 0x29c) = uVar1;
  *(undefined8 *)((long)puVar7 + 0x2a4) = uVar2;
  puVar7[0x58] = 0xffffffff00000000;
  puVar7[0x59] = 6;
  return puVar7;
}

