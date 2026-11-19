
undefined8 * FUN_03c9ff90(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xd8);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_03ca0014;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd8,8);
  }
LAB_03ca0014:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "DualHeapAdapter";
  FUN_038ca450(puVar3,&local_40,param_1,0,0,1,0);
  *puVar3 = &PTR_FUN_04b88f60;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)((long)puVar3 + 0x5c) = 0xd8;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,puVar3);
  return puVar3;
}

