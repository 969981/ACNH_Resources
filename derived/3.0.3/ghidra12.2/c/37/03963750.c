
undefined8 * FUN_03963750(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05ae9120 != (undefined8 *)0x0) {
    return DAT_05ae9120;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x430);
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
        goto LAB_039637d8;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x430,8);
  }
LAB_039637d8:
  FUN_038c69f0(puVar4 + 0x82,param_1,3);
  puVar4[0x82] = &PTR_FUN_04b68230;
  DAT_05ae9118 = puVar4 + 0x82;
  *puVar4 = &PTR_FUN_04b68250;
  FUN_0390e944(puVar4 + 1);
  FUN_0390e944(puVar4 + 0x25);
  FUN_0390e944(puVar4 + 0x49);
  puVar4[0x73] = 0;
  *(undefined2 *)((long)puVar4 + 0x392) = 0;
  puVar4[0x6e] = 0;
  puVar4[0x6f] = 0;
  puVar4[0x70] = 0;
  puVar4[0x71] = 0;
  *(undefined1 *)(puVar4 + 0x72) = 0;
  puVar1 = PTR_DAT_04bbdcf8 + 0x10;
  puVar4[0x7a] = 0;
  *(undefined2 *)((long)puVar4 + 0x3ca) = 0;
  puVar4[0x75] = 0;
  puVar4[0x76] = 0;
  puVar4[0x77] = 0;
  puVar4[0x78] = 0;
  *(undefined1 *)(puVar4 + 0x79) = 0;
  puVar4[0x81] = 0;
  puVar4[0x6d] = puVar1;
  puVar4[0x74] = puVar1;
  *(undefined2 *)((long)puVar4 + 0x402) = 0;
  puVar4[0x7c] = 0;
  puVar4[0x7d] = 0;
  puVar4[0x7e] = 0;
  puVar4[0x7f] = 0;
  *(undefined1 *)(puVar4 + 0x80) = 0;
  puVar4[0x7b] = puVar1;
  DAT_05ae9120 = puVar4;
  return puVar4;
}

