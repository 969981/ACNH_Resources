
long * FUN_01c7c808(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05351408 != (long *)0x0) {
    return DAT_05351408;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x7f0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_01c7c890;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x7f0,8);
  }
LAB_01c7c890:
  FUN_038c69f0(plVar3 + 0xfa,param_1,3);
  DAT_05351400 = plVar3 + 0xfa;
  plVar3[0xfa] = (long)&PTR_FUN_04a43498;
  plVar3[2] = (long)(plVar3 + 1);
  plVar3[3] = -0x100000000;
  *plVar3 = (long)(plVar3 + 0x17);
  plVar3[1] = (long)(plVar3 + 1);
  FUN_038e18e4(plVar3 + 4);
  plVar3[0xc] = (long)(plVar3 + 0xc);
  plVar3[0xd] = (long)(plVar3 + 0xc);
  plVar3[0xe] = -0x100000000;
  FUN_038e18e4(plVar3 + 0xf);
  *(undefined1 *)(plVar3 + 0x21) = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  plVar3[0x18] = 0;
  *(undefined4 *)(plVar3 + 0x22) = 0;
  *(undefined1 *)((long)plVar3 + 0x114) = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  memset(plVar3 + 0x23,0,0x131);
  *(undefined4 *)(plVar3 + 0x4a) = 0;
  *(undefined1 *)((long)plVar3 + 0x254) = 0;
  *(undefined4 *)(plVar3 + 0x4b) = 0;
  *(undefined1 *)((long)plVar3 + 0x25c) = 0;
  memset(plVar3 + 0x4c,0,0x559);
  puVar1 = PTR_DAT_04bc1018;
  plVar3[0xf8] = 0;
  *(undefined1 *)(plVar3 + 0xf9) = 0;
  *(undefined4 *)((long)plVar3 + 0x1c) = 0x1a0;
  DAT_05351408 = plVar3;
  plVar3[0x17] = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar3 + 0x74) = 0x1b8;
  return plVar3;
}

