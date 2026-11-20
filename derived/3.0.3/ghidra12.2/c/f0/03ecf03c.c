
undefined8 * FUN_03ecf03c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05b05178 != (undefined8 *)0x0) {
    return DAT_05b05178;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x160);
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
        goto LAB_03ecf0c4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x160,8);
  }
LAB_03ecf0c4:
  FUN_038c69f0(puVar3 + 0x28,param_1,3);
  DAT_05b05170 = puVar3 + 0x28;
  puVar3[0x28] = &PTR_FUN_04ba5710;
  puVar3[2] = puVar3 + 1;
  puVar3[3] = 0xffffffff00000000;
  *puVar3 = &PTR_LAB_04ba57e0;
  puVar3[1] = puVar3 + 1;
  FUN_038e18e4(puVar3 + 4);
  FUN_038e18e4(puVar3 + 0xc);
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  *(undefined4 *)((long)puVar3 + 0x1c) = 8;
  *puVar3 = &PTR_LAB_04ba57a8;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  puVar3[0x20] = 0;
  *(undefined4 *)(puVar3 + 0x21) = 0;
  *(undefined4 *)(puVar3 + 0x22) = 0;
  puVar3[0x23] = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 0x25) = 0;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  *(undefined8 *)((long)puVar3 + 0xd4) = 0;
  *(undefined8 *)((long)puVar3 + 0xdc) = 0;
  *(undefined8 *)((long)puVar3 + 0xe4) = 0;
  *(undefined8 *)((long)puVar3 + 0xec) = 0;
  DAT_05b05178 = puVar3;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 2;
  return puVar3;
}

