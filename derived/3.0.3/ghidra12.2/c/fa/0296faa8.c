
undefined8 * FUN_0296faa8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  
  if (DAT_055d92d0 != (undefined8 *)0x0) {
    return DAT_055d92d0;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x2910);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_0296fb3c;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x2910,8);
  }
LAB_0296fb3c:
  FUN_038c69f0(puVar4 + 0x51e,param_1,3);
  puVar4[0x51e] = &PTR_FUN_04a968f8;
  DAT_055d92b8 = puVar4 + 0x51e;
  *puVar4 = &PTR_FUN_04a96918;
  FUN_0296c628(puVar4 + 1);
  FUN_0296c628(puVar4 + 0x115);
  FUN_0296c628(puVar4 + 0x229);
  puVar4[0x33d] = 0;
  puVar4[0x33e] = &PTR_LAB_049ff3a8;
  memset(puVar4 + 0x33f,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)puVar4 + 0x214c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(puVar4 + 0x42a) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)puVar4 + 0x2154) = uVar1;
  *(uint *)(puVar4 + 0x42b) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(puVar4[0x33e] + 0x18))(puVar4 + 0x33e);
  memset(pvVar5,0,0x754);
  puVar4[0x42c] = &PTR_LAB_049ff3a8;
  memset(puVar4 + 0x42d,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)puVar4 + 0x28bc) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(puVar4 + 0x518) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)puVar4 + 0x28c4) = uVar1;
  *(uint *)(puVar4 + 0x519) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(puVar4[0x42c] + 0x18))(puVar4 + 0x42c);
  memset(pvVar5,0,0x754);
  puVar4[0x51a] = 0;
  puVar4[0x51b] = 0;
  puVar4[0x51c] = 0;
  DAT_055d92d0 = puVar4;
  *(undefined1 *)(puVar4 + 0x51d) = 0;
  return puVar4;
}

