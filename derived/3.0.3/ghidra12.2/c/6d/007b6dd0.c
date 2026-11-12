
undefined8 * FUN_007b6dd0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04ca9ea0 != (undefined8 *)0x0) {
    return DAT_04ca9ea0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x40);
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
        goto LAB_007b6e58;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x40,8);
  }
LAB_007b6e58:
  FUN_038c69f0(puVar3 + 4,param_1,3);
  *(undefined2 *)((long)puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  DAT_04ca9e98 = puVar3 + 4;
  puVar3[4] = &PTR_FUN_049126d0;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *puVar3 = 0;
  puVar3[1] = 0x3f80000000000000;
  *(undefined4 *)(puVar3 + 2) = 0x3f800000;
  DAT_04ca9ea0 = puVar3;
  return puVar3;
}

