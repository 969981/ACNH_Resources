
undefined8 * FUN_017b17c8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_05290150 != (undefined8 *)0x0) {
    return DAT_05290150;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x98);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_017b1858;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x98,8);
  }
LAB_017b1858:
  FUN_038c69f0(puVar5 + 0xf,param_1,3);
  puVar5[0xf] = &PTR_FUN_049c3ca0;
  DAT_05290138 = puVar5 + 0xf;
  *puVar5 = &PTR_LAB_049c3cc0;
  FUN_038e1da0(puVar5 + 1);
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[10] = puVar5 + 9;
  puVar5[0xb] = 0xffffffff00000000;
  puVar5[9] = puVar5 + 9;
  *(undefined4 *)((long)puVar5 + 100) = 1;
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(puVar5 + 0xd) = uVar2;
  *(uint *)((long)puVar5 + 0x6c) = uVar1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(puVar5 + 0xe) = uVar2;
  *(uint *)((long)puVar5 + 0x74) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)((long)puVar5 + 0x5c) = 8;
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  DAT_05290150 = puVar5;
  *(uint *)(puVar5 + 0xd) = uVar2;
  *(uint *)((long)puVar5 + 0x6c) = uVar1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(puVar5 + 0xe) = uVar2;
  *(uint *)((long)puVar5 + 0x74) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return puVar5;
}

