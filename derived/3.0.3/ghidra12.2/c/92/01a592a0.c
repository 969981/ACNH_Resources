
undefined8 * FUN_01a592a0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  
  if (DAT_053274a0 != (undefined8 *)0x0) {
    return DAT_053274a0;
  }
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(0xdc358);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_01a59338;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xdc358,8);
  }
LAB_01a59338:
  puVar1 = puVar7 + 0x1b867;
  FUN_038c69f0(puVar1,param_1,3);
  DAT_05300720 = puVar1;
  *puVar1 = &PTR_FUN_049ffdf8;
  *puVar7 = &PTR_LAB_049ffe18;
  memset(puVar7 + 1,0,0x57e50);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  lVar9 = 0;
  do {
    *(undefined **)((long)puVar7 + lVar9 + 0x18) = puVar2;
    *(char **)((long)puVar7 + lVar9 + 0x20) = "invalid_name";
    uVar4 = FUN_006bd550("invalid_name",0);
    lVar5 = lVar9 + 0x18;
    *(undefined4 *)((long)puVar7 + lVar9 + 0x28) = uVar4;
    lVar9 = lVar5;
  } while (lVar5 != 360000);
  memset(puVar7 + 0xafcb,0,0x1878);
  puVar3 = PTR_DAT_04bb2028;
  lVar5 = 0;
  lVar9 = -0x2920;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  while( true ) {
    *(long *)((long)puVar7 + lVar5 + 0x596d8) = (long)puVar7 + lVar5 + 0x596e4;
    *(undefined4 *)((long)puVar7 + lVar9 + 0x5c000) = 0x20;
    *(undefined1 *)((long)puVar7 + lVar5 + 0x59703) = 0;
    *(undefined1 *)((long)puVar7 + lVar5 + 0x596e4) = 0;
    *(undefined **)((long)puVar7 + lVar5 + 0x596d0) = puVar2;
    if (lVar9 == 0) break;
    *(undefined4 *)((long)puVar7 + lVar5 + 0x59718) = 0x20;
    puVar8 = (undefined1 *)((long)puVar7 + lVar5 + 0x5971c);
    *puVar8 = 0;
    *(undefined1 **)((long)puVar7 + lVar5 + 0x59710) = puVar8;
    lVar9 = lVar9 + 0x70;
    *(undefined1 *)((long)puVar7 + lVar5 + 0x5973b) = 0;
    *(undefined **)((long)puVar7 + lVar5 + 0x59708) = puVar3 + 0x10;
    lVar5 = lVar5 + 0x70;
  }
  memset(puVar7 + 0xb805,0,0x80310);
  DAT_053274a0 = puVar7;
  return puVar7;
}

