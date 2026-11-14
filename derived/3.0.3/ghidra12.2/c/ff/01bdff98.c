
void FUN_01bdff98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  
  FUN_01ba9864();
  puVar14 = PTR_DAT_04bb2020;
  plVar12 = *(long **)PTR_DAT_04bc08a8;
  if (DAT_0533ec08 == (void *)0x0) {
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      pvVar8 = malloc(0x89a0);
    }
    else {
      plVar7 = plVar12;
      if (plVar12 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar13 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          pvVar8 = (void *)0x0;
          goto LAB_01be0044;
        }
      }
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x89a0,8);
    }
LAB_01be0044:
    FUN_038c69f0((long)pvVar8 + 0x8980,plVar12,3);
    *(undefined ***)((long)pvVar8 + 0x8980) = &PTR_FUN_04a3cfb8;
    DAT_0533ec00 = (long)pvVar8 + 0x8980;
    FUN_01bf7564((long)pvVar8 + 8);
    *(undefined8 *)((long)pvVar8 + 0x2688) = 0;
    FUN_038e18e4((long)pvVar8 + 0x2690);
    *(undefined **)((long)pvVar8 + 0x26e0) = PTR_FUN_04bc0598;
    *(undefined **)((long)pvVar8 + 0x2700) = PTR_FUN_04bc05a0;
    puVar1 = PTR_DAT_04bc0b80;
    *(long *)((long)pvVar8 + 0x26d8) = (long)pvVar8 + 0x2688;
    *(undefined **)((long)pvVar8 + 0x26d0) = puVar1 + 0x10;
    puVar1 = PTR_DAT_04bc0b88;
    *(undefined8 *)((long)pvVar8 + 0x26e8) = 0;
    *(long *)((long)pvVar8 + 0x26f8) = (long)pvVar8 + 0x2688;
    *(undefined8 *)((long)pvVar8 + 0x2708) = 0;
    *(undefined8 *)((long)pvVar8 + 10000) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2718) = 0;
    *(undefined **)((long)pvVar8 + 0x26f0) = puVar1 + 0x10;
    uVar5 = FUN_038cefc4();
    *(undefined4 *)((long)pvVar8 + 0x2738) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2888) = 0;
    puVar4 = PTR_DAT_04bdf090;
    *(long *)((long)pvVar8 + 0x2728) = (long)pvVar8 + 0x273c;
    *(long *)((long)pvVar8 + 0x28c8) = (long)pvVar8 + 0x28c0;
    *(long *)((long)pvVar8 + 0x28c0) = (long)pvVar8 + 0x28c0;
    *(long *)((long)pvVar8 + 0x28e0) = (long)pvVar8 + 0x28d8;
    *(long *)((long)pvVar8 + 0x28d8) = (long)pvVar8 + 0x28d8;
    *(undefined4 *)((long)pvVar8 + 0x2720) = uVar5;
    *(undefined8 *)((long)pvVar8 + 0x2890) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2730) = 0x50;
    *(undefined **)((long)pvVar8 + 0x2880) = puVar4 + 0x10;
    *(undefined1 *)((long)pvVar8 + 0x2898) = 0x22;
    *(undefined8 *)((long)pvVar8 + 0x28a0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x28a8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x28b0) = 0;
    *(undefined4 *)((long)pvVar8 + 0x28b8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x28d0) = 0xffffffff00000000;
    *(undefined8 *)((long)pvVar8 + 0x28e8) = 0xffffffff00000000;
    FUN_038e18e4((long)pvVar8 + 0x28f0);
    *(undefined8 *)((long)pvVar8 + 0x2968) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2960) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2958) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2950) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2948) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2940) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2938) = 0;
    *(undefined8 *)((long)pvVar8 + 0x2930) = 0;
    *(undefined **)((long)pvVar8 + 0x2970) = puVar14 + 0x10;
    puVar2 = PTR_DAT_04bb2120;
    *(undefined2 *)((long)pvVar8 + 0x2988) = 0;
    *(undefined1 *)((long)pvVar8 + 0x298b) = 0;
    *(undefined **)((long)pvVar8 + 0x2978) = puVar2;
    *(undefined4 *)((long)pvVar8 + 0x2980) = 0;
    *(undefined4 *)((long)pvVar8 + 0x28d4) = 0x98;
    *(undefined4 *)((long)pvVar8 + 0x28ec) = 0xa8;
    FUN_01bc1250((long)pvVar8 + 0x2990);
    *(undefined1 *)((long)pvVar8 + 0x87f8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87b8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87c0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87e8) = 0;
    *(undefined4 *)((long)pvVar8 + 0x87f0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87c8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87d0) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87d8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x87e0) = 0;
    puVar1 = PTR_DAT_04bb5140 + 0x10;
    *(undefined4 *)((long)pvVar8 + 0x8810) = 0;
    *(undefined **)((long)pvVar8 + 0x8800) = puVar1;
    *(undefined8 *)((long)pvVar8 + 0x8808) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8818) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8820) = 0;
    nn::ngc::ProfanityFilter::ProfanityFilter((ProfanityFilter *)((long)pvVar8 + 0x8828));
    *(undefined8 *)((long)pvVar8 + 0x8868) = 0;
    *(undefined **)((long)pvVar8 + 0x8870) = puVar4 + 0x10;
    *(undefined1 *)((long)pvVar8 + 0x8888) = 0x22;
    *(long *)((long)pvVar8 + 0x88b0) = (long)pvVar8 + 0x88b0;
    *(long *)((long)pvVar8 + 35000) = (long)pvVar8 + 0x88b0;
    *(undefined8 *)((long)pvVar8 + 0x8858) = 0;
    *(undefined4 *)((long)pvVar8 + 0x8860) = 0;
    *(undefined8 *)((long)pvVar8 + 0x88a0) = 0;
    *(undefined4 *)((long)pvVar8 + 0x88a8) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8878) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8880) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8890) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8898) = 0;
    *(long *)((long)pvVar8 + 0x88d0) = (long)pvVar8 + 0x88c8;
    *(undefined8 *)((long)pvVar8 + 0x88d8) = 0xffffffff00000000;
    *(undefined8 *)((long)pvVar8 + 0x88c0) = 0xffffffff00000000;
    *(long *)((long)pvVar8 + 0x88c8) = (long)pvVar8 + 0x88c8;
    FUN_038e18e4((long)pvVar8 + 0x88e0);
    *(undefined8 *)((long)pvVar8 + 0x8950) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8958) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8940) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8948) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8930) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8938) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8920) = 0;
    *(undefined8 *)((long)pvVar8 + 0x8928) = 0;
    *(undefined **)((long)pvVar8 + 0x8960) = puVar14 + 0x10;
    *(undefined **)((long)pvVar8 + 0x8968) = puVar2;
    puVar14 = PTR_DAT_04bb2020;
    *(undefined4 *)((long)pvVar8 + 0x8970) = 0;
    *(undefined2 *)((long)pvVar8 + 0x8978) = 0;
    *(undefined1 *)((long)pvVar8 + 0x897b) = 0;
    *(undefined4 *)((long)pvVar8 + 0x88c4) = 0x98;
    *(undefined4 *)((long)pvVar8 + 0x88dc) = 0xa8;
    DAT_0533ec08 = pvVar8;
  }
  pvVar8 = DAT_0533ec08;
  puVar1 = PTR_DAT_04bb3350;
  puVar3 = (ulong *)((long)DAT_0533ec08 + 0x8858);
  if (plVar12 == (long *)0x0) {
    lVar13 = 1;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)(lVar6 + 0xa8);
    *(long **)(lVar6 + 0xa8) = plVar12;
  }
  local_b0._0_4_ = (uint)local_b0 & 0xff000000;
  puVar14 = puVar14 + 0x10;
  local_78 = 1;
  local_76 = 0;
  local_64 = 0;
  local_b0 = (long *)CONCAT44(8,(uint)local_b0);
  local_80 = *(ulong *)PTR_DAT_04bc08c8;
  local_68 = 0x100;
  local_70 = 0x280;
  local_98 = "MsgARes";
  local_90 = (char *)0x0;
  local_a8 = (undefined *)0x0;
  local_88 = 0;
  local_a0 = puVar14;
  FUN_03f2ab60((long)pvVar8 + 0x8870,&local_b0);
  FUN_01bf83ac((long)pvVar8 + 8,plVar12);
  local_b0 = (long *)CONCAT44(8,(uint)local_b0);
  local_78 = 1;
  local_76 = 0;
  local_80 = *(ulong *)PTR_DAT_04bc08d0;
  local_68 = 0x100;
  local_64 = 0;
  local_70 = 0x280;
  local_b0 = (long *)((ulong)local_b0 & 0xffffffffff000000);
  local_98 = "MsgVoice";
  local_90 = (char *)0x0;
  local_a8 = (undefined *)0x0;
  local_88 = 0;
  local_a0 = puVar14;
  FUN_03f2ab60((long)pvVar8 + 0x2880,&local_b0);
  plVar7 = *(long **)PTR_DAT_04bc08d8;
  uVar9 = (**(code **)(*plVar7 + 0x30))(plVar7,0x20000,8);
  *puVar3 = uVar9;
  nn::ngc::ProfanityFilter::Initialize((void *)((long)pvVar8 + 0x8828),uVar9,false);
  nn::ngc::ProfanityFilter::SetMaskMode((void *)((long)pvVar8 + 0x8828),1);
  local_80 = local_80 & 0xffffffff00000000;
  local_a0 = PTR_DAT_04bb2120;
  local_90 = "NGwordCheck";
  local_88 = 0;
  local_b0 = plVar7;
  local_a8 = puVar14;
  local_98 = puVar14;
  FUN_0082c840((long)pvVar8 + 0x8800,&local_b0);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar11 = malloc(0x270);
  }
  else {
    if (plVar12 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      puVar11 = (undefined8 *)(lVar6 + 8);
      if (lVar10 != 0) {
        puVar11 = (undefined8 *)(lVar10 + 0xa8);
      }
      plVar12 = (long *)*puVar11;
      if (plVar12 == (long *)0x0) goto LAB_01be0590;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x270,8);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar11 + 0x14) = 0;
    puVar14 = PTR_DAT_04bdf0c8;
    *puVar11 = 0xb;
    *(undefined1 *)(puVar11 + 2) = 1;
    puVar14 = puVar14 + 0x10;
    puVar11[1] = puVar14;
    puVar2 = PTR_DAT_04bdf1d8;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = puVar14;
    puVar2 = puVar2 + 0x10;
    *(undefined1 *)(puVar11 + 9) = 1;
    *(undefined4 *)((long)puVar11 + 0x4c) = 0;
    *(undefined1 *)(puVar11 + 0x10) = 1;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    *(undefined4 *)((long)puVar11 + 0x84) = 0;
    *(undefined1 *)(puVar11 + 0x17) = 1;
    *(undefined4 *)((long)puVar11 + 0xbc) = 0;
    *(undefined1 *)(puVar11 + 0x1e) = 1;
    *(undefined4 *)((long)puVar11 + 0xf4) = 0;
    *(undefined1 *)(puVar11 + 0x25) = 1;
    *(undefined4 *)((long)puVar11 + 300) = 0;
    *(undefined1 *)(puVar11 + 0x2c) = 1;
    *(undefined4 *)((long)puVar11 + 0x164) = 0;
    *(undefined1 *)(puVar11 + 0x33) = 1;
    *(undefined4 *)((long)puVar11 + 0x19c) = 0;
    *(undefined1 *)(puVar11 + 0x3a) = 1;
    *(undefined4 *)((long)puVar11 + 0x1d4) = 0;
    *(undefined1 *)(puVar11 + 0x41) = 1;
    *(undefined4 *)((long)puVar11 + 0x20c) = 0;
    puVar11[0x42] = 0;
    puVar11[0x43] = puVar2;
    puVar11[0x46] = 0;
    puVar11[0x45] = 0;
    puVar11[0x44] = 0;
    puVar11[0x47] = puVar14;
    *(undefined1 *)(puVar11 + 0x48) = 1;
    *(undefined4 *)((long)puVar11 + 0x244) = 0;
    puVar11[0x49] = 0;
    puVar11[0x4a] = puVar2;
    puVar11[0x4d] = 0;
    puVar11[0x4c] = 0;
    puVar11[0x4b] = 0;
    puVar11[3] = 0;
    puVar11[4] = puVar2;
    puVar11[10] = 0;
    puVar11[0xb] = puVar2;
    puVar11[0xe] = 0;
    puVar11[0xf] = puVar14;
    puVar11[0x11] = 0;
    puVar11[0x12] = puVar2;
    puVar11[0x13] = 0;
    puVar11[0x14] = 0;
    puVar11[0x15] = 0;
    puVar11[0x16] = puVar14;
    puVar11[0x18] = 0;
    puVar11[0x19] = puVar2;
    puVar11[0x1a] = 0;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    puVar11[0x1d] = puVar14;
    puVar11[0x1f] = 0;
    puVar11[0x20] = puVar2;
    puVar11[0x21] = 0;
    puVar11[0x22] = 0;
    puVar11[0x23] = 0;
    puVar11[0x24] = puVar14;
    puVar11[0x26] = 0;
    puVar11[0x27] = puVar2;
    puVar11[0x28] = 0;
    puVar11[0x29] = 0;
    puVar11[0x2a] = 0;
    puVar11[0x2b] = puVar14;
    puVar11[0x2d] = 0;
    puVar11[0x2e] = puVar2;
    puVar11[0x2f] = 0;
    puVar11[0x30] = 0;
    puVar11[0x31] = 0;
    puVar11[0x32] = puVar14;
    puVar11[0x34] = 0;
    puVar11[0x35] = puVar2;
    puVar11[0x36] = 0;
    puVar11[0x37] = 0;
    puVar11[0x38] = 0;
    puVar11[0x39] = puVar14;
    puVar11[0x3b] = 0;
    puVar11[0x3c] = puVar2;
    puVar11[0x3d] = 0;
    puVar11[0x3e] = 0;
    puVar11[0x3f] = 0;
    puVar11[0x40] = puVar14;
    *(undefined4 *)((long)pvVar8 + 0x8860) = 0xb;
    *(undefined8 **)((long)pvVar8 + 0x8868) = puVar11 + 1;
  }
LAB_01be0590:
  if (lVar13 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar13;
  }
  return;
}

