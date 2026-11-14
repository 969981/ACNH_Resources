
undefined8 * FUN_016c5348(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  if (DAT_0523ae60 != (undefined8 *)0x0) {
    return DAT_0523ae60;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x5f0);
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
        goto LAB_016c53d4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x5f0,8);
  }
LAB_016c53d4:
  FUN_038c69f0(puVar3 + 0xba,param_1,3);
  local_50 = PTR_DAT_04bb2020;
  DAT_0523ae58 = puVar3 + 0xba;
  puVar3[0xba] = &PTR_FUN_049bc240;
  *puVar3 = &PTR_LAB_049bc260;
  local_50 = local_50 + 0x10;
  pcStack_38 = "Hotel";
  pcStack_48 = "HotelParam";
  local_40 = local_50;
  FUN_016c546c(puVar3 + 1,&local_40,&local_50,0);
  DAT_0523ae60 = puVar3;
  return puVar3;
}

