
long * FUN_01c70ab0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05351250 != (long *)0x0) {
    return DAT_05351250;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x2c0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_01c70b38;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x2c0,8);
  }
LAB_01c70b38:
  FUN_038c69f0(plVar3 + 0x54,param_1,3);
  *(undefined2 *)(plVar3 + 4) = 0;
  puVar1 = PTR_DAT_04bd4738;
  DAT_05351248 = plVar3 + 0x54;
  plVar3[0x54] = (long)&PTR_FUN_04a43060;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  *(undefined2 *)(plVar3 + 9) = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 0x16) = 0;
  plVar3[0x21] = 0;
  *(undefined1 *)(plVar3 + 0x22) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  plVar3[0x23] = (long)(PTR_DAT_04bb2d80 + 0x10);
  plVar3[0x27] = 0;
  *(undefined1 *)(plVar3 + 0x28) = 0;
  *(undefined1 *)(plVar3 + 0x33) = 0;
  *(undefined2 *)(plVar3 + 0x35) = 0;
  *(undefined1 *)((long)plVar3 + 0x1aa) = 0;
  plVar3[0x40] = 0;
  plVar3[0x41] = 0;
  plVar3[0x42] = 0;
  plVar3[0x43] = 0;
  plVar3[0x44] = 0;
  plVar3[0x45] = 0;
  plVar3[0x46] = 0;
  plVar3[0x47] = 0;
  plVar3[0x48] = 0;
  plVar3[0x49] = 0;
  plVar3[0x4a] = 0;
  plVar3[0x4b] = 0;
  plVar3[0x4c] = 0;
  plVar3[0x4d] = 0;
  plVar3[0x4e] = 0;
  plVar3[0x4f] = 0;
  plVar3[0x50] = 0;
  plVar3[0x51] = 0;
  *(undefined1 *)(plVar3 + 0x52) = 0;
  *(undefined4 *)(plVar3 + 0x53) = 0;
  DAT_05351250 = plVar3;
  plVar3[0x29] = 0;
  plVar3[0x2a] = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x2d] = 0;
  plVar3[0x2e] = 0;
  plVar3[0x2f] = 0;
  plVar3[0x30] = 0;
  plVar3[0x31] = 0;
  plVar3[0x32] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  plVar3[0x39] = 0;
  plVar3[0x3a] = 0;
  plVar3[0x3b] = 0;
  plVar3[0x3c] = 0;
  plVar3[0x3d] = 0;
  plVar3[0x3e] = 0;
  plVar3[0x3f] = 0;
  return plVar3;
}

