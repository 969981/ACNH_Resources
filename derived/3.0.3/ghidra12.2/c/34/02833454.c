
void * FUN_02833454(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  if (DAT_055a0ff0 != (void *)0x0) {
    return DAT_055a0ff0;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x238);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_028334dc;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x238,8);
  }
LAB_028334dc:
  FUN_038c69f0((long)pvVar5 + 0x218,param_1,3);
  *(undefined ***)((long)pvVar5 + 0x218) = &PTR_FUN_04a916d0;
  DAT_055a0fe8 = (long)pvVar5 + 0x218;
  FUN_038e18e4(pvVar5);
  *(undefined8 *)((long)pvVar5 + 0x60) = 0;
  *(undefined8 *)((long)pvVar5 + 0x68) = 0;
  *(undefined8 *)((long)pvVar5 + 0x70) = 0;
  *(undefined8 *)((long)pvVar5 + 0x78) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)((long)pvVar5 + 0x58) = 1;
  puVar2 = PTR_DAT_04bb2120;
  *(undefined4 **)((long)pvVar5 + 0x40) = (undefined4 *)((long)pvVar5 + 0x58);
  *(undefined **)((long)pvVar5 + 0x80) = puVar1;
  *(undefined **)((long)pvVar5 + 0x88) = puVar2;
  *(undefined4 *)((long)pvVar5 + 0x90) = 1;
  *(undefined4 *)((long)pvVar5 + 200) = 1;
  *(undefined4 *)((long)pvVar5 + 0x100) = 1;
  *(undefined4 *)((long)pvVar5 + 0x138) = 1;
  *(undefined4 *)((long)pvVar5 + 0x170) = 1;
  *(undefined4 *)((long)pvVar5 + 0x1a8) = 1;
  *(undefined4 *)((long)pvVar5 + 0x1e0) = 1;
  *(undefined **)((long)pvVar5 + 0x208) = puVar1;
  *(undefined **)((long)pvVar5 + 0x210) = puVar2;
  *(undefined4 *)((long)pvVar5 + 0x4c) = 0;
  *(undefined4 *)((long)pvVar5 + 0x50) = 0;
  *(undefined4 *)((long)pvVar5 + 0x48) = 8;
  DAT_055a0ff0 = pvVar5;
  *(undefined8 *)((long)pvVar5 + 0x98) = 0;
  *(undefined8 *)((long)pvVar5 + 0xa0) = 0;
  *(undefined8 *)((long)pvVar5 + 0xa8) = 0;
  *(undefined8 *)((long)pvVar5 + 0xb0) = 0;
  *(undefined **)((long)pvVar5 + 0xb8) = puVar1;
  *(undefined **)((long)pvVar5 + 0xc0) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0xd0) = 0;
  *(undefined8 *)((long)pvVar5 + 0xd8) = 0;
  *(undefined8 *)((long)pvVar5 + 0xe0) = 0;
  *(undefined8 *)((long)pvVar5 + 0xe8) = 0;
  *(undefined **)((long)pvVar5 + 0xf0) = puVar1;
  *(undefined **)((long)pvVar5 + 0xf8) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0x108) = 0;
  *(undefined8 *)((long)pvVar5 + 0x110) = 0;
  *(undefined8 *)((long)pvVar5 + 0x118) = 0;
  *(undefined8 *)((long)pvVar5 + 0x120) = 0;
  *(undefined **)((long)pvVar5 + 0x128) = puVar1;
  *(undefined **)((long)pvVar5 + 0x130) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0x140) = 0;
  *(undefined8 *)((long)pvVar5 + 0x148) = 0;
  *(undefined8 *)((long)pvVar5 + 0x150) = 0;
  *(undefined8 *)((long)pvVar5 + 0x158) = 0;
  *(undefined **)((long)pvVar5 + 0x160) = puVar1;
  *(undefined **)((long)pvVar5 + 0x168) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0x178) = 0;
  *(undefined8 *)((long)pvVar5 + 0x180) = 0;
  *(undefined8 *)((long)pvVar5 + 0x188) = 0;
  *(undefined8 *)((long)pvVar5 + 400) = 0;
  *(undefined **)((long)pvVar5 + 0x198) = puVar1;
  *(undefined **)((long)pvVar5 + 0x1a0) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0x1c0) = 0;
  *(undefined8 *)((long)pvVar5 + 0x1c8) = 0;
  *(undefined8 *)((long)pvVar5 + 0x1b0) = 0;
  *(undefined8 *)((long)pvVar5 + 0x1b8) = 0;
  *(undefined **)((long)pvVar5 + 0x1d0) = puVar1;
  *(undefined **)((long)pvVar5 + 0x1d8) = puVar2;
  *(undefined8 *)((long)pvVar5 + 0x1f8) = 0;
  *(undefined8 *)((long)pvVar5 + 0x200) = 0;
  *(undefined8 *)((long)pvVar5 + 0x1e8) = 0;
  *(undefined8 *)((long)pvVar5 + 0x1f0) = 0;
  return pvVar5;
}

