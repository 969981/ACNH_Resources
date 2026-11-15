
void * FUN_020ea160(long *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  
  if (DAT_053e5c10 != (void *)0x0) {
    return DAT_053e5c10;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x1aa0);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_020ea1ec;
      }
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1aa0,8);
  }
LAB_020ea1ec:
  FUN_038c69f0((long)pvVar7 + 0x1a80,param_1,3);
  *(undefined ***)((long)pvVar7 + 0x1a80) = &PTR_FUN_04a740f8;
  lVar8 = 0;
  bVar2 = DAT_0537bdb8 << 2 | 3;
  bVar3 = DAT_0537bdb8 >> 6 | DAT_0537bdb8 << 2;
  bVar4 = DAT_0537bdb8 >> 6 | 4;
  DAT_053e5c08 = (long)pvVar7 + 0x1a80;
  do {
    puVar1 = (undefined8 *)((long)pvVar7 + lVar8);
    lVar8 = lVar8 + 0x15;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(byte *)((long)puVar1 + 6) = bVar3;
    *(byte *)((long)puVar1 + 7) = bVar4;
    *(undefined1 *)((long)puVar1 + 4) = 0xff;
    *(byte *)((long)puVar1 + 5) = bVar2;
    *(undefined1 *)((long)puVar1 + 0xc) = 0;
  } while (lVar8 != 0x8f1);
  lVar8 = 0x6d;
  lVar5 = 0;
  do {
    lVar8 = lVar8 + -1;
    *(undefined8 *)((long)pvVar7 + lVar5 + 0x900) = 0;
    *(undefined ***)((long)pvVar7 + lVar5 + 0x8f8) = &PTR_LAB_04a74118;
    *(undefined8 *)((long)pvVar7 + lVar5 + 0x905) = 0;
    *(undefined1 *)((long)pvVar7 + lVar5 + 0x915) = 0;
    *(byte *)((long)pvVar7 + lVar5 + 0x906) = bVar3;
    *(byte *)((long)pvVar7 + lVar5 + 0x907) = bVar4;
    *(undefined1 *)((long)pvVar7 + lVar5 + 0x904) = 0xff;
    *(byte *)((long)pvVar7 + lVar5 + 0x905) = bVar2;
    *(undefined8 *)((long)pvVar7 + lVar5 + 0x918) = 0;
    *(byte *)((long)pvVar7 + lVar5 + 0x90c) = *(byte *)((long)pvVar7 + lVar5 + 0x90c) & 0xfc;
    lVar5 = lVar5 + 0x28;
  } while (lVar8 != 0);
  *(undefined8 *)((long)pvVar7 + 0x1a60) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a58) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a50) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a48) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a40) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a38) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a30) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a28) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a20) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a18) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a10) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a08) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a00) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a65) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a70) = 0;
  *(undefined8 *)((long)pvVar7 + 0x1a78) = 0;
  DAT_053e5c10 = pvVar7;
  return pvVar7;
}

