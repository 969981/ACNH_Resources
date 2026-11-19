
undefined8 * FUN_03bdd0c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aec220 != (undefined8 *)0x0) {
    return DAT_05aec220;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x9e0);
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
        goto LAB_03bdd148;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x9e0,8);
  }
LAB_03bdd148:
  FUN_038c69f0(puVar3 + 0x138,param_1,3);
  puVar3[0x138] = &PTR_FUN_04b7b7b0;
  DAT_05aec210 = puVar3 + 0x138;
  FUN_03beb1e4(puVar3);
  *(undefined1 *)((long)puVar3 + 0x989) = 0;
  puVar3[0x132] = 0;
  *puVar3 = &PTR_LAB_04b7b7d0;
  puVar3[0x133] = 0;
  puVar3[0x134] = 0;
  puVar3[0x135] = 0;
  puVar3[0x136] = 0;
  puVar3[0x137] = 0;
  DAT_05aec220 = puVar3;
  return puVar3;
}

