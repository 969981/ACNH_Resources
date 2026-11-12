
undefined8 * FUN_0080f774(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04ccaf00 != (undefined8 *)0x0) {
    return DAT_04ccaf00;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x78);
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
        goto LAB_0080f800;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x78,8);
  }
LAB_0080f800:
  FUN_038c69f0(puVar3 + 0xb,param_1,3);
  DAT_04ccaef8 = puVar3 + 0xb;
  *puVar3 = &PTR_FUN_049174e0;
  puVar3[10] = 0;
  puVar3[0xb] = &PTR_FUN_049174c0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 1) = 3;
  puVar3[2] = &DAT_04ccaec8;
  DAT_04ccaf00 = puVar3;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[3] = &PTR_LAB_04917e48;
  puVar3[4] = 0;
  return puVar3;
}

