
undefined8 * FUN_01c9a2ac(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05357d70 != (undefined8 *)0x0) {
    return DAT_05357d70;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xa0);
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
        goto LAB_01c9a334;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xa0,8);
  }
LAB_01c9a334:
  FUN_038c69f0(puVar3 + 0x10,param_1,3);
  DAT_05357bb8 = puVar3 + 0x10;
  *puVar3 = &PTR_LAB_04a44f08;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 6) = 0xffffffff;
  puVar3[7] = &PTR_LAB_04a44f28;
  puVar3[8] = puVar3;
  puVar3[0x10] = &PTR_FUN_04a44ee8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 0xf) = 0;
  *(undefined1 *)((long)puVar3 + 0x14) = 0;
  DAT_05357d70 = puVar3;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = &LAB_01c9a3c8;
  puVar3[10] = 0;
  return puVar3;
}

