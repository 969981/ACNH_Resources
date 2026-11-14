
long * FUN_01dc18f8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_0537f040 != (long *)0x0) {
    return DAT_0537f040;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x118);
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
        goto LAB_01dc1980;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x118,8);
  }
LAB_01dc1980:
  FUN_038c69f0(plVar3 + 0x1f,param_1,3);
  *(undefined2 *)(plVar3 + 4) = 0;
  puVar1 = PTR_DAT_04bd4738;
  DAT_0537e130 = plVar3 + 0x1f;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  plVar3[0xc] = -1;
  plVar3[0xd] = 0;
  puVar1 = PTR_DAT_04bc3880 + 0x10;
  *(undefined4 *)(plVar3 + 0xe) = 0;
  *(undefined2 *)(plVar3 + 0x19) = 0;
  *(undefined1 *)((long)plVar3 + 0xe4) = 0;
  plVar3[0xf] = (long)puVar1;
  plVar3[0x13] = (long)puVar1;
  plVar3[0x17] = 0xffffffff;
  plVar3[0x18] = -0x100000000;
  *(undefined4 *)(plVar3 + 0x1c) = 0x7fffffff;
  puVar1 = PTR_DAT_04bcb470 + 0x10;
  *(undefined1 *)(plVar3 + 0x1d) = 0;
  DAT_0537f040 = plVar3;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = (long)&PTR_FUN_04a5b290;
  plVar3[0x1a] = (long)puVar1;
  plVar3[0x1b] = -0x8000000000000000;
  return plVar3;
}

