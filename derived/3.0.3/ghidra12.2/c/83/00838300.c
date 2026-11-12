
undefined8 * FUN_00838300(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(800);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,800,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined4 *)(puVar3 + 0x54) = 0;
  *puVar3 = &PTR_LAB_04918d20;
  puVar3[0x55] = 0;
  *(undefined4 *)(puVar3 + 0x56) = 0;
  puVar3[0x57] = 0;
  *(undefined4 *)(puVar3 + 0x58) = 0;
  puVar3[0x59] = 0;
  *(undefined4 *)(puVar3 + 0x5a) = 0;
  puVar3[0x5b] = 0;
  *(undefined4 *)(puVar3 + 0x5c) = 0;
  puVar3[0x5d] = 0;
  *(undefined4 *)(puVar3 + 0x5e) = 0;
  puVar3[0x5f] = 0;
  *(undefined4 *)(puVar3 + 0x60) = 0;
  puVar3[0x61] = 0;
  *(undefined4 *)(puVar3 + 0x62) = 0;
  puVar3[99] = 0;
  *(undefined8 *)((long)puVar3 + 0x294) = 0;
  *(undefined8 *)((long)puVar3 + 0x274) = 0;
  *(undefined8 *)((long)puVar3 + 0x27c) = 0;
  *(undefined8 *)((long)puVar3 + 0x284) = 0;
  *(undefined8 *)((long)puVar3 + 0x28c) = 0;
  return puVar3;
}

