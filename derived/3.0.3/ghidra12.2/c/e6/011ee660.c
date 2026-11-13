
undefined8 * FUN_011ee660(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (DAT_05148528 != (undefined8 *)0x0) {
    return DAT_05148528;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar8 = malloc(0xb68);
  }
  else {
    plVar7 = param_1;
    if (param_1 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_011ee6e8;
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xb68,8);
  }
LAB_011ee6e8:
  FUN_038c69f0(puVar8 + 0x169,param_1,3);
  puVar8[0x169] = &PTR_FUN_04987008;
  puVar1 = PTR_DAT_04bb37e0;
  DAT_05148520 = puVar8 + 0x169;
  *puVar8 = &PTR_LAB_04987028;
  uVar5 = *(undefined2 *)puVar1;
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  uVar2 = *(undefined4 *)(puVar1 + 4);
  puVar1 = PTR_DAT_04bbe2e0 + 0x10;
  lVar9 = 0;
  do {
    lVar6 = lVar9 + 0x40;
    *(undefined4 *)((long)puVar8 + lVar9 + 8) = 0;
    *(undefined2 *)((long)puVar8 + lVar9 + 0xc) = uVar5;
    *(undefined1 *)((long)puVar8 + lVar9 + 0xe) = uVar3;
    *(undefined1 *)((long)puVar8 + lVar9 + 0xf) = uVar4;
    *(undefined4 *)((long)puVar8 + lVar9 + 0x10) = uVar2;
    *(undefined4 *)((long)puVar8 + lVar9 + 0x30) = 0;
    *(undefined8 *)((long)puVar8 + lVar9 + 0x14) = 0;
    *(undefined8 *)((long)puVar8 + lVar9 + 0x1c) = 0;
    *(undefined8 *)((long)puVar8 + lVar9 + 0x34) = 0x7fffffff80000000;
    *(undefined2 *)((long)puVar8 + lVar9 + 0x3c) = 0;
    *(undefined **)((long)puVar8 + lVar9 + 0x28) = puVar1;
    *(undefined4 *)((long)puVar8 + lVar9 + 0x40) = 0;
    lVar9 = lVar6;
  } while (lVar6 != 0xb40);
  DAT_05148528 = puVar8;
  return puVar8;
}

