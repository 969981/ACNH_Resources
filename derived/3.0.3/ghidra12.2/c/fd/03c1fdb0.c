
void FUN_03c1fdb0(undefined8 *param_1,undefined8 param_2)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *local_60;
  char *pcStack_58;
  
  FUN_03c11314(param_1,param_2,"Lp::Sys::EffectMgr");
  *param_1 = &PTR_LAB_04b7e0d0;
  param_1[0x45] = &PTR_LAB_04b7e1a8;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x73] = 0xc4098000;
  param_1[99] = 0;
  param_1[0x74] = 0x3f4ccccd3f4ccccd;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0x2a0000000b;
  puVar4 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  param_1[0x69] = 0x1f00000000;
  param_1[0x6a] = 0xb0000001f;
  puVar5 = PTR_DAT_04bb3350;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (lVar14 == 0) {
    puVar9 = malloc(0x21f0);
joined_r0x03c1ff00:
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar9 + 0x11b) = 0;
      *puVar9 = 0x1f;
      *(undefined1 *)((long)puVar9 + 0x1c) = 0;
      *(undefined4 *)(puVar9 + 3) = 0x100;
      puVar1 = PTR_DAT_04bb21f8;
      puVar9[2] = (undefined1 *)((long)puVar9 + 0x1c);
      *(undefined1 *)((long)puVar9 + 0x106b) = 0;
      puVar1 = puVar1 + 0x10;
      *(undefined1 *)((long)puVar9 + 0x1183) = 0;
      puVar9[0x24] = puVar1;
      puVar9[0x25] = (long)puVar9 + 0x134;
      puVar9[0x48] = (long)puVar9 + 0x24c;
      *(undefined1 *)((long)puVar9 + 0x1084) = 0;
      puVar9[0x6b] = (long)puVar9 + 0x364;
      *(undefined1 *)((long)puVar9 + 0x129b) = 0;
      puVar9[0x8e] = (long)puVar9 + 0x47c;
      *(undefined1 *)((long)puVar9 + 0x119c) = 0;
      puVar9[0xb1] = (long)puVar9 + 0x594;
      *(undefined1 *)((long)puVar9 + 0x13b3) = 0;
      puVar9[0xd4] = (long)puVar9 + 0x6ac;
      *(undefined1 *)((long)puVar9 + 0x12b4) = 0;
      puVar9[0xf7] = (long)puVar9 + 0x7c4;
      *(undefined1 *)((long)puVar9 + 0x14cb) = 0;
      puVar9[0x11a] = (long)puVar9 + 0x8dc;
      *(undefined1 *)((long)puVar9 + 0x13cc) = 0;
      puVar9[0x13d] = (long)puVar9 + 0x9f4;
      *(undefined1 *)((long)puVar9 + 0x15e3) = 0;
      puVar9[0x160] = (long)puVar9 + 0xb0c;
      *(undefined1 *)((long)puVar9 + 0x14e4) = 0;
      puVar9[0x183] = (long)puVar9 + 0xc24;
      *(undefined1 *)((long)puVar9 + 0x16fb) = 0;
      puVar9[0x1a6] = (long)puVar9 + 0xd3c;
      *(undefined1 *)((long)puVar9 + 0x15fc) = 0;
      puVar9[0x1c9] = (long)puVar9 + 0xe54;
      *(undefined1 *)((long)puVar9 + 0x1813) = 0;
      puVar9[0x1ec] = (long)puVar9 + 0xf6c;
      *(undefined1 *)((long)puVar9 + 0x1714) = 0;
      puVar9[0x20f] = (long)puVar9 + 0x1084;
      *(undefined1 *)((long)puVar9 + 0x192b) = 0;
      puVar9[0x232] = (long)puVar9 + 0x119c;
      *(undefined1 *)((long)puVar9 + 0x182c) = 0;
      puVar9[0x255] = (long)puVar9 + 0x12b4;
      *(undefined1 *)((long)puVar9 + 0x1a43) = 0;
      puVar9[0x278] = (long)puVar9 + 0x13cc;
      *(undefined1 *)((long)puVar9 + 0x1944) = 0;
      puVar9[0x29b] = (long)puVar9 + 0x14e4;
      *(undefined1 *)((long)puVar9 + 0x1b5b) = 0;
      puVar9[0x2be] = (long)puVar9 + 0x15fc;
      *(undefined1 *)((long)puVar9 + 0x1a5c) = 0;
      puVar9[0x2e1] = (long)puVar9 + 0x1714;
      *(undefined1 *)((long)puVar9 + 0x1c73) = 0;
      puVar9[0x304] = (long)puVar9 + 0x182c;
      *(undefined1 *)((long)puVar9 + 0x1b74) = 0;
      puVar9[0x327] = (long)puVar9 + 0x1944;
      *(undefined1 *)((long)puVar9 + 0x1d8b) = 0;
      puVar9[0x34a] = (long)puVar9 + 0x1a5c;
      *(undefined1 *)((long)puVar9 + 0x1c8c) = 0;
      puVar9[0x36d] = (long)puVar9 + 0x1b74;
      *(undefined1 *)((long)puVar9 + 0x1ea3) = 0;
      puVar9[0x390] = (long)puVar9 + 0x1c8c;
      *(undefined1 *)((long)puVar9 + 0x1da4) = 0;
      puVar9[0x3b3] = (long)puVar9 + 0x1da4;
      *(undefined1 *)((long)puVar9 + 0x1fbb) = 0;
      puVar9[1] = puVar1;
      puVar9[0x3d6] = (long)puVar9 + 0x1ebc;
      *(undefined1 *)((long)puVar9 + 0x1ebc) = 0;
      *(undefined1 *)((long)puVar9 + 0x1fd4) = 0;
      *(undefined4 *)(puVar9 + 0x26) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x233) = 0;
      *(undefined1 *)((long)puVar9 + 0x134) = 0;
      *(undefined4 *)(puVar9 + 0x49) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x34b) = 0;
      *(undefined1 *)((long)puVar9 + 0x24c) = 0;
      puVar9[0x47] = puVar1;
      *(undefined4 *)(puVar9 + 0x6c) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x463) = 0;
      *(undefined1 *)((long)puVar9 + 0x364) = 0;
      puVar9[0x6a] = puVar1;
      *(undefined4 *)(puVar9 + 0x8f) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x57b) = 0;
      *(undefined1 *)((long)puVar9 + 0x47c) = 0;
      puVar9[0x8d] = puVar1;
      *(undefined4 *)(puVar9 + 0xb2) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x693) = 0;
      *(undefined1 *)((long)puVar9 + 0x594) = 0;
      puVar9[0xb0] = puVar1;
      *(undefined4 *)(puVar9 + 0xd5) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x7ab) = 0;
      *(undefined1 *)((long)puVar9 + 0x6ac) = 0;
      puVar9[0xd3] = puVar1;
      *(undefined4 *)(puVar9 + 0xf8) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x8c3) = 0;
      *(undefined1 *)((long)puVar9 + 0x7c4) = 0;
      puVar9[0xf6] = puVar1;
      *(undefined4 *)(puVar9 + 0x11b) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x9db) = 0;
      *(undefined1 *)((long)puVar9 + 0x8dc) = 0;
      puVar9[0x119] = puVar1;
      *(undefined4 *)(puVar9 + 0x13e) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xaf3) = 0;
      *(undefined1 *)((long)puVar9 + 0x9f4) = 0;
      puVar9[0x13c] = puVar1;
      *(undefined4 *)(puVar9 + 0x161) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xc0b) = 0;
      *(undefined1 *)((long)puVar9 + 0xb0c) = 0;
      puVar9[0x15f] = puVar1;
      *(undefined4 *)(puVar9 + 0x184) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xd23) = 0;
      *(undefined1 *)((long)puVar9 + 0xc24) = 0;
      puVar9[0x182] = puVar1;
      *(undefined4 *)(puVar9 + 0x1a7) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xe3b) = 0;
      *(undefined1 *)((long)puVar9 + 0xd3c) = 0;
      puVar9[0x1a5] = puVar1;
      *(undefined4 *)(puVar9 + 0x1ca) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xf53) = 0;
      *(undefined1 *)((long)puVar9 + 0xe54) = 0;
      puVar9[0x1c8] = puVar1;
      *(undefined4 *)(puVar9 + 0x1ed) = 0x100;
      *(undefined1 *)((long)puVar9 + 0xf6c) = 0;
      puVar9[0x1eb] = puVar1;
      *(undefined4 *)(puVar9 + 0x210) = 0x100;
      puVar9[0x20e] = puVar1;
      *(undefined4 *)(puVar9 + 0x233) = 0x100;
      puVar9[0x231] = puVar1;
      *(undefined4 *)(puVar9 + 0x256) = 0x100;
      puVar9[0x254] = puVar1;
      *(undefined4 *)(puVar9 + 0x279) = 0x100;
      puVar9[0x277] = puVar1;
      *(undefined4 *)(puVar9 + 0x29c) = 0x100;
      puVar9[0x29a] = puVar1;
      *(undefined4 *)(puVar9 + 0x2bf) = 0x100;
      puVar9[0x2bd] = puVar1;
      *(undefined4 *)(puVar9 + 0x2e2) = 0x100;
      puVar9[0x2e0] = puVar1;
      *(undefined4 *)(puVar9 + 0x305) = 0x100;
      puVar9[0x303] = puVar1;
      *(undefined4 *)(puVar9 + 0x328) = 0x100;
      puVar9[0x326] = puVar1;
      *(undefined4 *)(puVar9 + 0x34b) = 0x100;
      puVar9[0x349] = puVar1;
      *(undefined4 *)(puVar9 + 0x36e) = 0x100;
      puVar9[0x36c] = puVar1;
      *(undefined4 *)(puVar9 + 0x391) = 0x100;
      puVar9[0x38f] = puVar1;
      *(undefined4 *)(puVar9 + 0x3b4) = 0x100;
      puVar9[0x3b2] = puVar1;
      *(undefined4 *)(puVar9 + 0x3d7) = 0x100;
      puVar9[0x3d5] = puVar1;
      puVar9[0x3f9] = (long)puVar9 + 0x1fd4;
      *(undefined4 *)(puVar9 + 0x3fa) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x20d3) = 0;
      puVar9[0x3f8] = puVar1;
      puVar9[0x41c] = (long)puVar9 + 0x20ec;
      *(undefined4 *)(puVar9 + 0x41d) = 0x100;
      *(undefined1 *)((long)puVar9 + 0x21eb) = 0;
      *(undefined1 *)((long)puVar9 + 0x20ec) = 0;
      puVar9[0x41b] = puVar1;
      *(undefined4 *)(param_1 + 0x6d) = 0x1f;
      param_1[0x6e] = puVar9 + 1;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x21f0,8);
      goto joined_r0x03c1ff00;
    }
  }
  uVar2 = *(uint *)((long)param_1 + 0x354);
  if (0 < (int)uVar2) {
    lVar14 = *(long *)puVar4;
    __size = (ulong)uVar2 * 0x118 + 8;
    if (lVar14 == 0) {
      puVar10 = malloc(__size);
    }
    else {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03c2033c;
      puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
    }
    if (puVar10 != (ulong *)0x0) {
      puVar11 = puVar10 + 1;
      *puVar10 = (ulong)uVar2;
      puVar1 = PTR_DAT_04bb21f8;
      uVar13 = (ulong)uVar2 * 0x118 - 0x118;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar13;
      puVar12 = puVar11;
      if ((SUB164(auVar3 * ZEXT816(0xea0ea0ea0ea0ea0f),8) >> 8 & 1) == 0) {
        *(undefined1 *)((long)puVar10 + 0x1c) = 0;
        *(undefined4 *)(puVar10 + 3) = 0x100;
        puVar12 = puVar10 + 0x24;
        puVar10[2] = (ulong)((long)puVar10 + 0x1c);
        *(undefined1 *)((long)puVar10 + 0x11b) = 0;
        puVar10[1] = (ulong)(puVar1 + 0x10);
      }
      if (0x117 < uVar13) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined4 *)(puVar12 + 2) = 0x100;
          *(undefined1 *)((long)puVar12 + 0x113) = 0;
          *(undefined1 *)((long)puVar12 + 0x14) = 0;
          *(undefined4 *)(puVar12 + 0x25) = 0x100;
          *(undefined1 *)((long)puVar12 + 0x22b) = 0;
          *(undefined1 *)((long)puVar12 + 300) = 0;
          *puVar12 = (ulong)puVar1;
          puVar12[1] = (ulong)((long)puVar12 + 0x14);
          puVar12[0x23] = (ulong)puVar1;
          puVar12[0x24] = (long)puVar12 + 300;
          puVar12 = puVar12 + 0x46;
        } while (puVar12 != puVar11 + (ulong)uVar2 * 0x23);
      }
      *(uint *)(param_1 + 0x71) = uVar2;
      param_1[0x72] = puVar11;
    }
  }
LAB_03c2033c:
  lVar7 = *(long *)puVar4;
  param_1[0x66] = *(undefined8 *)(*(long *)PTR_DAT_04bbd8f8 + 0x18);
  plVar8 = DAT_05aecb28;
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
  puVar9 = (undefined8 *)(lVar7 + 8);
  if (lVar14 != 0) {
    puVar9 = (undefined8 *)(lVar14 + 0xa8);
  }
  uVar15 = *puVar9;
  if (plVar8 == (long *)0x0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "EffectStaticResInstance";
    uVar15 = FUN_038c6d48(0x400000,&local_60,uVar15,8,1,0);
    param_1[0x67] = uVar15;
  }
  else {
    iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    lVar14 = (**(code **)(*plVar8 + 0x28))(plVar8);
    if (lVar14 != 0) {
      uVar15 = (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "EffectStaticResInstance";
    uVar15 = FUN_038c6d48((long)iVar6,&local_60,uVar15,8,1,0);
    param_1[0x67] = uVar15;
    (**(code **)(*plVar8 + 0x30))(plVar8,param_1[0x66]);
    (**(code **)(*plVar8 + 0x38))(plVar8,param_1[0x66]);
  }
  return;
}

