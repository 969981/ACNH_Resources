
undefined8 * FUN_03af3dec(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aea900 != (undefined8 *)0x0) {
    return DAT_05aea900;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xc0);
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
        goto LAB_03af3e74;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xc0,8);
  }
LAB_03af3e74:
  FUN_038c69f0(puVar3 + 0x14,param_1,3);
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  DAT_05aea8f8 = puVar3 + 0x14;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  puVar3[0x13] = puVar3;
  puVar3[0x14] = &PTR_FUN_04b72758;
  *puVar3 = &PTR_LAB_04b72778;
  *(undefined4 *)(puVar3 + 0xd) = 0;
  *(undefined4 *)((long)puVar3 + 0x6c) = 0;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0x12) = 0;
  DAT_05aea900 = puVar3;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0x3f80000000000000;
  *(undefined2 *)((long)puVar3 + 0x94) = 1;
  return puVar3;
}

