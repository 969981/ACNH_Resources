
undefined8 * FUN_0174c5b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x3b8);
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
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x3b8,8);
    }
  }
  FUN_0173aba0(puVar3,param_1,param_2);
  *puVar3 = &PTR_LAB_049c1950;
  *(undefined8 *)((long)puVar3 + 0x3a4) = 0;
  *(undefined8 *)((long)puVar3 + 0x3ac) = 0x3f80000000000000;
  return puVar3;
}

