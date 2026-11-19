
undefined8 * FUN_03824908(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05ade040 != (undefined8 *)0x0) {
    return DAT_05ade040;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x140);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_03824990;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x140,8);
  }
LAB_03824990:
  FUN_038c69f0(puVar4 + 0x24,param_1,3);
  DAT_05ade028 = puVar4 + 0x24;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined8 *)((long)puVar4 + 0xc) = 0xffffffffffffffff;
  puVar4[0x24] = &PTR_FUN_04b5cd00;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = puVar4 + 5;
  puVar4[6] = puVar4 + 5;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar1 = PTR_DAT_04bc4238 + 0x10;
  *(undefined4 *)(puVar4 + 0xd) = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0xe] = puVar1;
  puVar4[0xf] = 0x7fffffff7fffffff;
  *puVar4 = &PTR_LAB_04b5cd20;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  *(undefined4 *)((long)puVar4 + 0xac) = 0xffffffff;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  *(undefined4 *)(puVar4 + 0x1b) = 0;
  puVar4[0x16] = puVar4 + 0x16;
  puVar4[0x17] = puVar4 + 0x16;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  FUN_038e18e4(puVar4 + 0x1c);
  DAT_05ade040 = puVar4;
  return puVar4;
}

