
undefined8 * FUN_01d73fa0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05370a08 != (undefined8 *)0x0) {
    return DAT_05370a08;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x68);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_01d74028;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x68,8);
  }
LAB_01d74028:
  FUN_038c69f0(puVar3 + 9,param_1,3);
  DAT_05370a00 = puVar3 + 9;
  *puVar3 = &PTR_LAB_04a5a110;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  puVar3[8] = 0;
  puVar3[9] = &PTR_FUN_04a5a0f0;
  DAT_05370a08 = puVar3;
  puVar3[5] = &DAT_04a5a190;
  puVar3[6] = puVar3;
  puVar3[7] = &LAB_01d740a8;
  puVar3[2] = 0;
  puVar3[3] = &PTR_LAB_04a5a170;
  return puVar3;
}

