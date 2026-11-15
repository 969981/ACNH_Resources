
undefined8 * FUN_01e223e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_0538c468 != (undefined8 *)0x0) {
    return DAT_0538c468;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xb8);
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
        goto LAB_01e22468;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xb8,8);
  }
LAB_01e22468:
  FUN_038c69f0(puVar3 + 0x13,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[0x13] = &PTR_FUN_04a5d008;
  DAT_0538c460 = puVar3 + 0x13;
  *puVar3 = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined1 *)((long)puVar3 + 0x1c) = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[0x10] = 0;
  *(undefined8 *)((long)puVar3 + 0x8c) = 0xffffffffffffffff;
  DAT_0538c468 = puVar3;
  return puVar3;
}

