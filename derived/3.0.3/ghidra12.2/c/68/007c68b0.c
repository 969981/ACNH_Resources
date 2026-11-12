
undefined8 * FUN_007c68b0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_04cac818 != (undefined8 *)0x0) {
    return DAT_04cac818;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0xe0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_007c6938;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xe0,8);
  }
LAB_007c6938:
  FUN_038c69f0(puVar4 + 0x18,param_1,3);
  DAT_04cac810 = puVar4 + 0x18;
  puVar4[0x18] = &PTR_FUN_04914310;
  *puVar4 = &PTR_FUN_04914330;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar1 = PTR_DAT_04bb4a38 + 0x10;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[4] = 0;
  puVar4[5] = puVar1;
  FUN_038e18e4(puVar4 + 0x10);
  DAT_04cac818 = puVar4;
  return puVar4;
}

