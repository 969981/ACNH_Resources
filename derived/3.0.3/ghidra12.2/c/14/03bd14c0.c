
undefined8 * FUN_03bd14c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aec208 != (undefined8 *)0x0) {
    return DAT_05aec208;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x64e60);
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
        goto LAB_03bd155c;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x64e60,0x10);
  }
LAB_03bd155c:
  FUN_038c69f0(puVar3 + 0xc9c8,param_1,3);
  puVar3[0xc9c8] = &PTR_FUN_04b7b420;
  DAT_05aec1f8 = puVar3 + 0xc9c8;
  FUN_03beb1e4(puVar3);
  lVar4 = 0x40;
  puVar3[0x132] = 0;
  puVar3[0x133] = 0;
  *puVar3 = &PTR_LAB_04b7b440;
  puVar3[0x134] = 0;
  puVar3[0x135] = 0;
  puVar3[0x136] = 0;
  puVar3[0x137] = 0;
  puVar3[0x138] = 0;
  puVar3[0x139] = 0;
  puVar3[0x13a] = 0;
  puVar3[0x13b] = 0;
  puVar3[0x13c] = 0;
  puVar3[0x13d] = 0;
  puVar3[0x13e] = 0;
  puVar3[0x13f] = 0;
  puVar3[0x140] = 0;
  puVar3[0x141] = 0;
  puVar3[0x142] = 0;
  lVar1 = 0;
  do {
    *(undefined1 *)((long)puVar3 + lVar1 + 0xa28) = 0xff;
    *(undefined8 *)((long)puVar3 + lVar1 + 0xa20) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar3 + lVar1 + 0xa38) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0xa2c) = 0xffffffff00000000;
    *(undefined4 *)((long)puVar3 + lVar1 + 0xa40) = 0xffffffff;
    FUN_038e18e4((long)puVar3 + lVar1 + 0xa88);
    lVar4 = lVar4 + -1;
    *(undefined8 *)((long)puVar3 + lVar1 + 9000) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x2320) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x2318) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x2310) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x2308) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x2300) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22f8) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22f0) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22e8) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22e0) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22d8) = 0;
    *(undefined8 *)((long)puVar3 + lVar1 + 0x22d0) = 0;
    *(undefined1 *)((long)puVar3 + lVar1 + 0xa48) = 0;
    lVar1 = lVar1 + 0x1910;
  } while (lVar4 != 0);
  *(undefined4 *)(puVar3 + 0xc9c4) = 0;
  *(undefined2 *)(puVar3 + 0xc9c6) = 1;
  DAT_05aec208 = puVar3;
  return puVar3;
}

