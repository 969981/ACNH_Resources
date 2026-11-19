
undefined8 * FUN_03b6cc54(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aebc10 != (undefined8 *)0x0) {
    return DAT_05aebc10;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x88);
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
        goto LAB_03b6ccdc;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x88,8);
  }
LAB_03b6ccdc:
  FUN_038c69f0(puVar3 + 0xd,param_1,3);
  DAT_05aebc08 = puVar3 + 0xd;
  puVar3[0xd] = &PTR_FUN_04b77d40;
  puVar3[2] = 0x46fa0000000000a0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 3) = 1;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((long)puVar3 + 0x5c) = 0x43fa000042200000;
  puVar3[8] = 0;
  DAT_05aebc10 = puVar3;
  puVar3[4] = &PTR_LAB_04b78128;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = &PTR_LAB_04b78128;
  return puVar3;
}

