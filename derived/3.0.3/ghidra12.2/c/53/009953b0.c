
undefined8 * FUN_009953b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar8 = malloc(0x348);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x348,8);
    }
  }
  FUN_006f94c0(puVar8,param_1,param_2);
  *(undefined4 *)((long)puVar8 + 700) = 0;
  *(undefined8 *)((long)puVar8 + 0x2a4) = 0;
  *(undefined8 *)((long)puVar8 + 0x2a9) = 0;
  *(undefined8 *)((long)puVar8 + 0x2b4) = 0;
  *puVar8 = &PTR_LAB_0492b5d8;
  *(undefined8 *)((long)puVar8 + 0x294) = 0;
  *(undefined8 *)((long)puVar8 + 0x274) = 0;
  *(undefined8 *)((long)puVar8 + 0x27c) = 0;
  *(undefined8 *)((long)puVar8 + 0x284) = 0;
  *(undefined8 *)((long)puVar8 + 0x28c) = 0;
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar8[0x5f] = 0;
  puVar8[0x5e] = 0;
  puVar8[0x5d] = 0;
  puVar8[0x5c] = 0;
  puVar8[0x5b] = 0;
  *(undefined2 *)(puVar8 + 0x58) = uVar5;
  *(undefined1 *)((long)puVar8 + 0x2c2) = uVar3;
  *(undefined1 *)((long)puVar8 + 0x2c3) = uVar4;
  *(undefined4 *)((long)puVar8 + 0x2c4) = uVar1;
  puVar8[0x5a] = 0;
  uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)((long)puVar8 + 0x31c) = uVar1;
  puVar8[0x59] = 0;
  *(undefined4 *)((long)puVar8 + 0x314) = 0;
  *(undefined2 *)(puVar8 + 99) = uVar5;
  *(undefined1 *)((long)puVar8 + 0x31a) = uVar3;
  *(undefined1 *)((long)puVar8 + 0x31b) = uVar4;
  puVar8[100] = 0;
  puVar8[0x65] = 0;
  puVar8[0x66] = 0;
  puVar8[0x67] = 0x3f800000;
  *(undefined2 *)(puVar8 + 0x68) = 0;
  *(undefined4 *)(puVar8 + 0x60) = uVar2;
  *(undefined8 *)((long)puVar8 + 0x304) = 0;
  *(undefined8 *)((long)puVar8 + 0x30c) = 0;
  return puVar8;
}

