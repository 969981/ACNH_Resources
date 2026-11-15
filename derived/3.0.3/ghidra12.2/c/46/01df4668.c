
long * FUN_01df4668(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05388c48 != (long *)0x0) {
    return DAT_05388c48;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x98);
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
        goto LAB_01df46f0;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x98,8);
  }
LAB_01df46f0:
  FUN_038c69f0(plVar3 + 0xf,param_1,3);
  *(undefined2 *)(plVar3 + 4) = 0;
  puVar1 = PTR_DAT_04bd4738;
  DAT_05388c40 = plVar3 + 0xf;
  plVar3[0xf] = (long)&PTR_FUN_04a5c2e8;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  puVar1 = PTR_DAT_04bb3950 + 0x10;
  plVar3[0xd] = 0;
  *(undefined8 *)((long)plVar3 + 0x6e) = 0;
  DAT_05388c48 = plVar3;
  plVar3[8] = 0;
  plVar3[9] = (long)puVar1;
  return plVar3;
}

