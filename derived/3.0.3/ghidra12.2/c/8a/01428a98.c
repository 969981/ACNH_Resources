
undefined8 * FUN_01428a98(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  
  if (DAT_051ba470 != (undefined8 *)0x0) {
    return DAT_051ba470;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x3a70);
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
        goto LAB_01428b2c;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x3a70,8);
  }
LAB_01428b2c:
  FUN_038c69f0(puVar4 + 0x74a,param_1,3);
  puVar4[0x74a] = &PTR_FUN_0499aca0;
  DAT_051ba458 = puVar4 + 0x74a;
  *puVar4 = &PTR_FUN_0499acc0;
  FUN_01420d48(puVar4 + 1);
  FUN_01420d48(puVar4 + 0x115);
  FUN_01420d48(puVar4 + 0x229);
  FUN_01420d48(puVar4 + 0x33d);
  FUN_01420d48(puVar4 + 0x451);
  puVar4[0x565] = 0;
  puVar4[0x566] = &PTR_LAB_049ff3a8;
  memset(puVar4 + 0x567,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)puVar4 + 0x328c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(puVar4 + 0x652) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)puVar4 + 0x3294) = uVar1;
  *(uint *)(puVar4 + 0x653) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(puVar4[0x566] + 0x18))(puVar4 + 0x566);
  memset(pvVar5,0,0x754);
  puVar4[0x654] = &PTR_LAB_049ff3a8;
  memset(puVar4 + 0x655,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)puVar4 + 0x39fc) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(puVar4 + 0x740) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)puVar4 + 0x3a04) = uVar1;
  *(uint *)(puVar4 + 0x741) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)(**(code **)(puVar4[0x654] + 0x18))(puVar4 + 0x654);
  memset(pvVar5,0,0x754);
  puVar4[0x742] = 0;
  puVar4[0x743] = 0;
  puVar4[0x744] = 0;
  puVar4[0x745] = 0;
  puVar4[0x746] = 0;
  puVar4[0x747] = 0;
  puVar4[0x748] = 0;
  *(undefined1 *)(puVar4 + 0x749) = 0;
  DAT_051ba470 = puVar4;
  return puVar4;
}

