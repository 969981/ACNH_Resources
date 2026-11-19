
undefined2 * FUN_03b4998c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined2 *puVar4;
  long lVar5;
  
  if (DAT_05aebb78 != (undefined2 *)0x0) {
    return DAT_05aebb78;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x1b0);
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
        puVar4 = (undefined2 *)0x0;
        goto LAB_03b49a14;
      }
    }
    puVar4 = (undefined2 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1b0,8);
  }
LAB_03b49a14:
  FUN_038c69f0(puVar4 + 200,param_1,3);
  DAT_05aebb68 = puVar4 + 200;
  *(undefined ***)(puVar4 + 200) = &PTR_FUN_04b76418;
  *puVar4 = 1;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 0x5c) = 0;
  puVar4[0x60] = 1;
  *(undefined1 *)(puVar4 + 0x61) = 0;
  *(undefined8 *)(puVar4 + 0x62) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x1c) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x24) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x2c) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x34) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x3c) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x44) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x4c) = 0;
  *(undefined8 *)(puVar4 + 0x50) = 0;
  *(undefined8 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)(puVar4 + 0x58) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  DAT_05aebb78 = puVar4;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined8 *)(puVar4 + 0x6c) = 0;
  *(undefined **)(puVar4 + 0x70) = puVar1;
  *(undefined8 **)(puVar4 + 0x74) = &DAT_0407ebb1;
  *(undefined8 *)(puVar4 + 0x78) = 0;
  *(undefined8 *)(puVar4 + 0x7c) = 0;
  *(undefined8 *)(puVar4 + 0x80) = 0;
  *(undefined8 *)(puVar4 + 0x84) = 0;
  *(undefined8 *)(puVar4 + 0x88) = 0;
  *(undefined8 *)(puVar4 + 0x8c) = 0;
  *(undefined8 *)(puVar4 + 0x90) = 0;
  *(undefined8 *)(puVar4 + 0x94) = 0;
  *(undefined8 *)(puVar4 + 0x98) = 0;
  *(undefined8 *)(puVar4 + 0x9c) = 0;
  *(undefined8 *)(puVar4 + 0xa0) = 0;
  *(undefined8 *)(puVar4 + 0xa4) = 0;
  *(undefined8 *)(puVar4 + 0xa8) = 0;
  *(undefined8 *)(puVar4 + 0xac) = 0;
  *(undefined8 *)(puVar4 + 0xb0) = 0;
  *(undefined8 *)(puVar4 + 0xb4) = 0;
  *(undefined8 *)(puVar4 + 0xb8) = 0;
  *(undefined8 *)(puVar4 + 0xbc) = 0;
  *(undefined8 *)(puVar4 + 0xc0) = 0;
  *(undefined8 *)(puVar4 + 0xc4) = 0;
  return puVar4;
}

