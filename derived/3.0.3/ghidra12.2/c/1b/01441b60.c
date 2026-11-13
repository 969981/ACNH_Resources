
undefined8 * FUN_01441b60(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  
  if (DAT_051c26c8 != (undefined8 *)0x0) {
    return DAT_051c26c8;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar4 = malloc(0xb0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar7 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_01441be8;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xb0,8);
  }
LAB_01441be8:
  FUN_038c69f0(puVar4 + 0x12,param_1,3);
  puVar1 = PTR_DAT_04bb3380;
  DAT_051c26c0 = puVar4 + 0x12;
  puVar4[0x12] = &PTR_FUN_0499e530;
  puVar4[0xb] = 0;
  *puVar4 = &PTR_LAB_0499e550;
  puVar4[1] = "Actor";
  puVar4[7] = "mFreshSecond";
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 600;
  plVar3 = puVar4 + 6;
  *plVar3 = (long)(puVar1 + 0x10);
  puVar4[9] = puVar4;
  puVar4[10] = 0x25800000000;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[5] = plVar3;
  puVar4[0xc] = puVar1 + 0x10;
  puVar4[0xf] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  puVar4[0x11] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[0xd] = "mNormalSecond";
  puVar4[0xe] = 0;
  do {
    plVar6 = plVar3;
    plVar3 = (long *)plVar6[2];
  } while (plVar3 != (long *)0x0);
  plVar6[2] = (long)(puVar4 + 0xc);
  puVar4[0xf] = puVar4;
  puVar5 = (undefined4 *)(**(code **)(puVar4[0xc] + 0xf0))();
  *puVar5 = 0x4b0;
  if ((*(uint *)(puVar4 + 0x10) >> 7 & 1) == 0) {
    puVar4[0x11] = 0;
    *(undefined4 *)(puVar4 + 0x11) = 0x4b0;
  }
  DAT_051c26c8 = puVar4;
  *(uint *)(puVar4 + 0x10) = *(uint *)(puVar4 + 0x10) & 0xfeffffff;
  return puVar4;
}

