
undefined8 * FUN_03bf7560(long *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  Friend aFStack_250 [512];
  
  if (DAT_05aec360 != (undefined8 *)0x0) {
    return DAT_05aec360;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x263d0);
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
        goto LAB_03bf75fc;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x263d0,8);
  }
LAB_03bf75fc:
  FUN_038c69f0(puVar5 + 0x4c76,param_1,3);
  puVar5[2] = 0;
  puVar5[0x4c76] = &PTR_FUN_04b7bfd8;
  lVar6 = 0;
  DAT_05aec358 = puVar5 + 0x4c76;
  *puVar5 = &PTR_LAB_04b7bff8;
  puVar2 = PTR_DAT_04bb2950;
  *(undefined4 *)(puVar5 + 3) = 0;
  uVar1 = *puVar2;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[1] = 0;
  *(undefined1 *)((long)puVar5 + 0x1c) = uVar1;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0x12c00000000;
  do {
    nn::friends::Friend::Friend((Friend *)((long)puVar5 + lVar6 + 0x58));
    lVar6 = lVar6 + 0x200;
  } while (lVar6 != 0x25800);
  FUN_038e18e4(puVar5 + 0x4b0c);
  *(undefined4 *)(puVar5 + 0x4b17) = 0;
  *(undefined1 *)((long)puVar5 + 0x25904) = 0;
  *(undefined4 *)(puVar5 + 0x4b16) = 0;
  lVar3 = 300;
  puVar5[0x4b14] = 0;
  puVar5[0x4b15] = 0;
  lVar6 = 0x58;
  *(undefined4 *)(puVar5 + 0x4b20) = 1;
  *(undefined1 *)(puVar5 + 0x4b21) = 1;
  *(undefined8 *)((long)puVar5 + 0x2591c) = 0;
  *(undefined4 *)(puVar5 + 0x4c05) = 0;
  *(undefined4 *)(puVar5 + 0x4bfc) = 0;
  *(undefined8 *)((long)puVar5 + 0x2590c) = 0;
  *(undefined8 *)((long)puVar5 + 0x25914) = 0;
  *(undefined4 *)((long)puVar5 + 0x2604c) = 100;
  puVar5[0x4c73] = 0;
  *(undefined4 *)(puVar5 + 0x4c74) = 0;
  puVar5[0x4c06] = 0;
  puVar5[0x4c07] = 0;
  puVar5[0x4c08] = 0;
  *(undefined4 *)(puVar5 + 0x4c09) = 0;
  puVar5[0x4bfd] = 0;
  puVar5[0x4bfe] = 0;
  puVar5[0x4bff] = 0;
  puVar5[0x4c00] = 0;
  puVar5[0x4c01] = 0;
  puVar5[0x4c02] = 0;
  puVar5[0x4c03] = 0;
  puVar5[0x4c04] = 0;
  *(undefined8 *)((long)puVar5 + 0x263a4) = 300;
  puVar5[0x4c6f] = 0;
  puVar5[0x4c70] = 0;
  puVar5[0x4c71] = 0;
  puVar5[0x4c72] = 0;
  do {
    nn::friends::Friend::Friend(aFStack_250);
    memcpy((void *)((long)puVar5 + lVar6),aFStack_250,0x200);
    lVar3 = lVar3 + -1;
    lVar6 = lVar6 + 0x200;
  } while (lVar3 != 0);
  *(undefined4 *)(puVar5 + 0x4b0b) = 0;
  memset(puVar5 + 0x4c0a,0,0x324);
  DAT_05aec360 = puVar5;
  return puVar5;
}

