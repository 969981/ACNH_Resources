
undefined8 * FUN_01d7616c(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_05370ba0 != (undefined8 *)0x0) {
    return DAT_05370ba0;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0xa8);
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
        goto LAB_01d761f4;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xa8,8);
  }
LAB_01d761f4:
  FUN_038c69f0(puVar4 + 0x11,param_1,3);
  DAT_05370b98 = puVar4 + 0x11;
  puVar4[0x11] = &PTR_FUN_04a5a3b8;
  *puVar4 = &PTR_LAB_04a5a3d8;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  uVar1 = *PTR_DAT_04bb2958;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  *(undefined1 *)((long)puVar4 + 0x84) = uVar1;
  puVar5 = (undefined8 *)FUN_00185a6c(8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    FUN_0040d0a8(puVar5);
    *puVar5 = &DAT_04a5a3f8;
  }
  puVar4[2] = puVar5;
  DAT_05370ba0 = puVar4;
  return puVar4;
}

