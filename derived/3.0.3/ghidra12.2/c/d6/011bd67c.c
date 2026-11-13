
undefined8 * FUN_011bd67c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (DAT_050d57c8 != (undefined8 *)0x0) {
    return DAT_050d57c8;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x17b0);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_011bd704;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x17b0,8);
  }
LAB_011bd704:
  FUN_038c69f0(puVar7 + 0x2f2,param_1,3);
  puVar7[0x2f2] = &PTR_FUN_049869c0;
  puVar1 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bbb988;
  DAT_050d57c0 = puVar7 + 0x2f2;
  *puVar7 = &PTR_FUN_049869e0;
  puVar7[1] = 0;
  puVar2 = PTR_DAT_04bb2010;
  puVar7[8] = 0;
  *(undefined4 *)(puVar7 + 9) = 0;
  puVar1 = puVar1 + 0x10;
  puVar7[0x10] = 0;
  puVar2 = puVar2 + 0x10;
  puVar7[2] = puVar3 + 0x10;
  puVar7[3] = puVar1;
  puVar7[4] = puVar2;
  puVar7[5] = 0;
  puVar7[6] = puVar2;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = puVar1;
  puVar7[0xf] = puVar2;
  puVar7[0x11] = puVar2;
  puVar7[0x12] = 0;
  FUN_0118e404(puVar7 + 0x13);
  puVar3 = PTR_DAT_04bb3238;
  puVar7[0x118] = PTR_DAT_04bbb8f8 + 0x10;
  uVar4 = *(undefined4 *)puVar3;
  *(undefined4 *)(puVar7 + 0x119) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8cc) = uVar4;
  *(undefined4 *)(puVar7 + 0x11a) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8d4) = uVar4;
  *(undefined4 *)(puVar7 + 0x11b) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8dc) = uVar4;
  *(undefined4 *)(puVar7 + 0x11c) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8e4) = uVar4;
  *(undefined4 *)(puVar7 + 0x11d) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8ec) = uVar4;
  *(undefined4 *)(puVar7 + 0x11e) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8f4) = uVar4;
  *(undefined4 *)(puVar7 + 0x11f) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x8fc) = uVar4;
  *(undefined4 *)(puVar7 + 0x120) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x904) = uVar4;
  *(undefined4 *)(puVar7 + 0x121) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x90c) = uVar4;
  *(undefined4 *)(puVar7 + 0x122) = uVar4;
  *(undefined4 *)((long)puVar7 + 0x914) = uVar4;
  *(undefined4 *)(puVar7 + 0x123) = uVar4;
  puVar3 = PTR_DAT_04bbbaa0 + 0x10;
  *(undefined1 *)(puVar7 + 0x128) = 0;
  puVar7[0x127] = 0;
  *(undefined1 *)((long)puVar7 + 0x984) = 0;
  puVar7[0x12f] = (undefined1 *)((long)puVar7 + 0x984);
  puVar7[0x126] = 0;
  puVar7[0x129] = puVar1;
  puVar7[299] = 0;
  puVar7[0x12a] = puVar2;
  puVar7[0x12d] = 0;
  puVar7[0x124] = puVar3;
  puVar7[300] = puVar2;
  *(undefined4 *)(puVar7 + 0x130) = 0x40;
  *(undefined1 *)((long)puVar7 + 0x9c3) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)(puVar7 + 0x139) = 0;
  *(undefined4 *)((long)puVar7 + 0x9cc) = 0;
  puVar7[0x12e] = puVar1;
  puVar7[0x125] = PTR_DAT_04bbbaa8 + 0x10;
  memset(puVar7 + 0x13a,0,0xdc0);
  FUN_011b6a40(puVar7 + 0x13a);
  DAT_050d57c8 = puVar7;
  return puVar7;
}

