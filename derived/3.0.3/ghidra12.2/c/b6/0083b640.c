
undefined8 * FUN_0083b640(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x308);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x308,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  *(undefined1 *)(puVar4 + 0x4f) = 1;
  *puVar4 = &PTR_LAB_04918e28;
  *(undefined4 *)((long)puVar4 + 0x274) = 0;
  puVar4[0x52] = 0;
  puVar4[0x50] = &PTR_FUN_0498d548;
  puVar4[0x54] = 0;
  puVar4[0x55] = 0;
  puVar4[0x56] = 0;
  puVar4[0x51] = &DAT_048f9750;
  puVar4[0x53] = &DAT_048f9750;
  uVar1 = DAT_04c9a0c8;
  *(undefined4 *)(puVar4 + 0x57) = DAT_04c9a0c8;
  *(undefined4 *)((long)puVar4 + 700) = uVar1;
  *(undefined4 *)(puVar4 + 0x58) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x2c4) = uVar1;
  *(undefined4 *)(puVar4 + 0x59) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x2cc) = uVar1;
  *(undefined4 *)(puVar4 + 0x5a) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x2d4) = uVar1;
  *(undefined4 *)(puVar4 + 0x5b) = uVar1;
  *(undefined4 *)((long)puVar4 + 0x2dc) = uVar1;
  puVar4[0x5c] = 0x100000000;
  puVar4[0x5d] = 0x300000002;
  puVar4[0x5e] = 0x500000004;
  puVar4[0x5f] = 0x700000006;
  puVar4[0x60] = 0x900000008;
  return puVar4;
}

