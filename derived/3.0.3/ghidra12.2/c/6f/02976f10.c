
undefined8 * FUN_02976f10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2e0);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2e0,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined2 *)((long)puVar3 + 0x274) = 0;
  *(undefined4 *)((long)puVar3 + 0x276) = 0x101;
  *puVar3 = &PTR_LAB_04a96d08;
  *(undefined4 *)((long)puVar3 + 0x27e) = 0x101;
  *(undefined1 *)((long)puVar3 + 0x27a) = 0;
  *(undefined2 *)((long)puVar3 + 0x27c) = 0;
  *(undefined1 *)((long)puVar3 + 0x282) = 0;
  *(undefined2 *)(puVar3 + 0x53) = 0x101;
  *(undefined1 *)((long)puVar3 + 0x29a) = 0;
  puVar3[0x54] = 0;
  *(undefined8 *)((long)puVar3 + 0x284) = 0;
  *(undefined8 *)((long)puVar3 + 0x28c) = 0;
  *(undefined4 *)((long)puVar3 + 0x294) = 0x10101;
  *(undefined4 *)((long)puVar3 + 0x29c) = 0x3c;
  *(undefined1 *)(puVar3 + 0x55) = 0;
  puVar3[0x58] = 0;
  puVar3[0x56] = &PTR_FUN_0498d548;
  puVar3[0x5a] = 0;
  *(undefined1 *)(puVar3 + 0x5b) = 0;
  puVar3[0x57] = &DAT_048f9750;
  puVar3[0x59] = &DAT_048f9750;
  return puVar3;
}

