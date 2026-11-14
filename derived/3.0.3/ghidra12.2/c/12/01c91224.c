
undefined8 * FUN_01c91224(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_053565a0 != (undefined8 *)0x0) {
    return DAT_053565a0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x118);
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
        goto LAB_01c912ac;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x118,8);
  }
LAB_01c912ac:
  FUN_038c69f0(puVar3 + 0x1f,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  DAT_05356598 = puVar3 + 0x1f;
  puVar3[0x1f] = &PTR_FUN_04a44820;
  *puVar3 = &PTR_LAB_04a44840;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 3) = 0xffffffff;
  puVar3[0x15] = 0;
  *(undefined1 *)((long)puVar3 + 0xb2) = 0xff;
  *(undefined2 *)(puVar3 + 0x16) = 0;
  puVar3[0x19] = 0;
  puVar3[0x1b] = 0;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)((long)puVar3 + 0xe4) = 0;
  *(undefined8 *)((long)puVar3 + 0xec) = 0x38400000384;
  *(undefined2 *)((long)puVar3 + 0xf4) = 0;
  DAT_053565a0 = puVar3;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  return puVar3;
}

