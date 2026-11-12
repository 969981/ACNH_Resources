
undefined8 * FUN_00770f20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x290);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x290,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined8 *)((long)puVar3 + 0x274) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)puVar3 + 0x27c) = 0xff7fffff7f7fffff;
  *puVar3 = &PTR_LAB_04909ce0;
  *(undefined8 *)((long)puVar3 + 0x284) = 0xff7fffffff7fffff;
  return puVar3;
}

