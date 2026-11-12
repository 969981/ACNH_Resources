
undefined8 * FUN_0092ab1c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  if (DAT_04cf1b28 != (undefined8 *)0x0) {
    return DAT_04cf1b28;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xdd8);
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
        goto LAB_0092aba8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xdd8,8);
  }
LAB_0092aba8:
  FUN_038c69f0(puVar3 + 0x1b7,param_1,3);
  local_50 = PTR_DAT_04bb2020;
  DAT_04cf1b20 = puVar3 + 0x1b7;
  puVar3[0x1b7] = &PTR_FUN_049285f8;
  *puVar3 = &PTR_LAB_04928618;
  local_50 = local_50 + 0x10;
  pcStack_38 = "CloudIsland";
  pcStack_48 = "CloudIslandDeckParam";
  local_40 = local_50;
  FUN_00925600(puVar3 + 1,&local_40,&local_50,0);
  DAT_04cf1b28 = puVar3;
  return puVar3;
}

