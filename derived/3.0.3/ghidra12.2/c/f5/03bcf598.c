
undefined8 * FUN_03bcf598(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aec1e0 != (undefined8 *)0x0) {
    return DAT_05aec1e0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x70);
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
        goto LAB_03bcf620;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x70,8);
  }
LAB_03bcf620:
  FUN_038c69f0(puVar3 + 10,param_1,3);
  puVar3[8] = 0;
  DAT_05aec1d8 = puVar3 + 10;
  puVar3[10] = &PTR_FUN_04b7b280;
  *puVar3 = &PTR_FUN_04b7b2a0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  DAT_05aec1e0 = puVar3;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[6] = puVar3 + 5;
  puVar3[7] = 0x800000000;
  puVar3[4] = 0;
  puVar3[5] = puVar3 + 5;
  return puVar3;
}

