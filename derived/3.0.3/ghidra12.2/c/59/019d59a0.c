
undefined8 * FUN_019d59a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x968);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x968,8);
    }
  }
  FUN_006f94c0(puVar6,param_1,param_2);
  puVar1 = PTR_DAT_04bb2020;
  puVar6[0x4f] = 0;
  *puVar6 = &PTR_FUN_049f14c0;
  puVar1 = puVar1 + 0x10;
  pcStack_60 = "InsectMuseumGroupLayout";
  puStack_70 = &DAT_0408197b;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_0193e5e8(puVar6 + 0x50,&local_68,&local_78);
  pcStack_60 = "InsectMuseumLocator";
  puVar2 = PTR_DAT_04bbf830 + 0xf8;
  puVar3 = PTR_DAT_04bbf830 + 600;
  puVar6[0x50] = PTR_DAT_04bbf830 + 0x10;
  puVar6[0x54] = puVar2;
  puVar6[0x60] = puVar3;
  puStack_70 = &DAT_0409c089;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_0193edb0(puVar6 + 0x74,&local_68,&local_78);
  pcStack_60 = "InsectMuseumRestPoint";
  puVar2 = PTR_DAT_04bbfa30 + 0xf8;
  puVar3 = PTR_DAT_04bbfa30 + 600;
  puVar6[0x74] = PTR_DAT_04bbfa30 + 0x10;
  puVar6[0x78] = puVar2;
  puVar6[0x84] = puVar3;
  puStack_70 = &DAT_04062648;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_0193f194(puVar6 + 0x98,&local_68,&local_78);
  pcStack_60 = "InsectParamsMuseumLargeTree";
  puVar2 = PTR_DAT_04bbfb40 + 0xf8;
  puVar3 = PTR_DAT_04bbfb40 + 600;
  puVar6[0x98] = PTR_DAT_04bbfb40 + 0x10;
  puVar6[0x9c] = puVar2;
  puVar6[0xa8] = puVar3;
  puStack_70 = &DAT_040cf8b5;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_0192e330(puVar6 + 0xbc,&local_68,&local_78);
  puVar6[0xff] = 0;
  puVar6[0xfb] = "InsectParamsMuseumTigerBeetlePass";
  puVar6[0xfc] = 0;
  puVar6[0xfd] = 0;
  *(undefined4 *)(puVar6 + 0xfe) = 0;
  puVar6[0x101] = (undefined *)((long)puVar6 + 0x814);
  *(undefined4 *)(puVar6 + 0x102) = 0x80;
  *(undefined1 *)((long)puVar6 + 0x893) = 0;
  if ((undefined *)((long)puVar6 + 0x814) != &DAT_040cd53f) {
    *(undefined1 *)(puVar6 + 0x103) = 0;
    *(undefined4 *)((long)puVar6 + 0x814) = 0x656e6f4e;
  }
  puVar2 = PTR_DAT_04bbfae8;
  pcStack_60 = "mBasePoint";
  puStack_50 = &DAT_040bff0f;
  local_38 = 0x10;
  puVar6[0x100] = PTR_DAT_04bb2d88 + 0x10;
  puVar6[0xfa] = puVar2 + 0x10;
  pcStack_40 = "Min=0.f, Max=500.f";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_006fdfc0(puVar6 + 0x113,&local_68,PTR_DAT_04bb2150,puVar6 + 0xfa);
  local_38 = 0x10;
  pcStack_60 = "mPassParamsPointBuffer";
  puStack_50 = &DAT_0406cfaf;
  pcStack_40 = "";
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_019341f8(puVar6 + 0x11a,&local_68,puVar6 + 0xfa);
  *(undefined4 *)(puVar6 + 299) = 0;
  puVar6[300] = 0;
  return puVar6;
}

