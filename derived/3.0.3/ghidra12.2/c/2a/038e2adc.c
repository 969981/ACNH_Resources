
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_038e2adc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05ae7790 != (long *)0x0) {
    return DAT_05ae7790;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x90);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(_DAT_00000068);
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_038e2b5c;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x90,8);
  }
LAB_038e2b5c:
  FUN_038c69f0(plVar3 + 0xe,param_1,3);
  plVar3[0xe] = (long)&PTR_FUN_04b65298;
  puVar1 = PTR_DAT_04bd0e68;
  DAT_05ae7788 = plVar3 + 0xe;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[1] = (long)(plVar3 + 1);
  plVar3[2] = (long)(plVar3 + 1);
  *plVar3 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar3 + 4);
  plVar3[0xc] = 0;
  nn::os::AllocateTlsSlot((TlsSlot *)(plVar3 + 0xd),(_func_void_ulong *)0x0);
  DAT_05ae7790 = plVar3;
  return plVar3;
}

