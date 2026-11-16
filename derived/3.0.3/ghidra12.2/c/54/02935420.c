
undefined8 * FUN_02935420(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_055cf3d0 != (undefined8 *)0x0) {
    return DAT_055cf3d0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x80);
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
        goto LAB_029354a8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x80,8);
  }
LAB_029354a8:
  FUN_038c69f0(puVar3 + 0xc,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = &PTR_FUN_04a92e60;
  DAT_055cf250 = puVar3 + 0xc;
  *puVar3 = &PTR_LAB_04a92e80;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  puVar3[6] = &PTR_LAB_04a92f08;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  DAT_055cf3d0 = puVar3;
  puVar3[8] = &PTR_LAB_04a92f28;
  puVar3[9] = puVar3;
  puVar3[10] = &LAB_02935540;
  return puVar3;
}

