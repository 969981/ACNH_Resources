
undefined8 * FUN_02234580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2d8);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2d8,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  puVar3[0x51] = 0;
  *puVar3 = &PTR_LAB_04a78378;
  puVar3[0x4f] = PTR_DAT_04bbc1a0 + 0x10;
  *(undefined4 *)(puVar3 + 0x57) = 0;
  puVar3[0x58] = 0;
  *(undefined4 *)(puVar3 + 0x59) = 0;
  puVar3[0x5a] = 0;
  puVar3[0x53] = 0;
  puVar3[0x54] = 0;
  puVar3[0x55] = 0;
  *(undefined4 *)(puVar3 + 0x56) = 0;
  puVar3[0x50] = &DAT_048f9750;
  puVar3[0x52] = &DAT_048f9750;
  return puVar3;
}

