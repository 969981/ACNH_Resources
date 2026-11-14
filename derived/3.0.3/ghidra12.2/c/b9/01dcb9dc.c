
long * FUN_01dcb9dc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_053807b0 != (long *)0x0) {
    return DAT_053807b0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x1e0);
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
        goto LAB_01dcba64;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1e0,8);
  }
LAB_01dcba64:
  FUN_038c69f0(plVar3 + 0x38,param_1,3);
  *(undefined2 *)(plVar3 + 4) = 0;
  puVar1 = PTR_DAT_04bd4738;
  DAT_053807a8 = plVar3 + 0x38;
  plVar3[0x38] = (long)&PTR_FUN_04a5b620;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  plVar3[9] = 0xffffffff;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  puVar1 = PTR_DAT_04bb3950 + 0x10;
  plVar3[0x20] = 0xffffffff;
  *(undefined1 *)(plVar3 + 0x23) = 1;
  *(undefined4 *)(plVar3 + 0x21) = 0;
  plVar3[0x22] = 0;
  plVar3[0x26] = 0;
  *(undefined4 *)(plVar3 + 0x27) = 0;
  *(undefined8 *)((long)plVar3 + 0x11c) = 0;
  *(undefined8 *)((long)plVar3 + 0x124) = 0;
  plVar3[0x2a] = -0x8000000000000000;
  *(undefined4 *)(plVar3 + 0x2b) = 0x7fffffff;
  plVar3[0xd] = 0;
  plVar3[0xe] = (long)puVar1;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x18] = 0;
  plVar3[0x19] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0;
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  *(undefined1 *)((long)plVar3 + 0x15c) = 0;
  *(undefined1 *)(plVar3 + 0x2c) = 0;
  *(undefined1 *)((long)plVar3 + 0x164) = 0;
  *(undefined1 *)(plVar3 + 0x2f) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = (long)puVar1;
  *(undefined2 *)((long)plVar3 + 0x161) = 0;
  plVar3[0x2d] = 0;
  plVar3[0x2e] = 0;
  FUN_038e18e4(plVar3 + 0x30);
  DAT_053807b0 = plVar3;
  return plVar3;
}

