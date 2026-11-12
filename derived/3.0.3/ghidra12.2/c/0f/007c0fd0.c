
/* WARNING: Removing unreachable block (ram,0x007c1044) */

void FUN_007c0fd0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **local_160;
  long *local_158;
  undefined8 *local_150;
  undefined **ppuStack_148;
  char *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined **local_108;
  char *local_100;
  undefined **local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined **ppuStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 ***local_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar5 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x510) = uVar5;
  puVar2 = PTR_DAT_04bb2020;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_158 = (long *)0x4080d4b;
  local_160 = ppuVar1;
  uVar5 = FUN_038c6d48(0x7df24000,&local_160,*(undefined8 *)(*(long *)PTR_DAT_04bb2628 + 0x130),8,1,
                       1);
  puVar3 = PTR_DAT_04bb2668;
  *(undefined8 *)(param_1 + 0x538) = uVar5;
  local_158 = (long *)0x40e902f;
  local_160 = ppuVar1;
  puVar6 = (undefined8 *)FUN_038afe50(*(undefined8 *)puVar3,&local_160,0);
  if ((puVar6 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar6, plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcVar10 = (char *)plVar13[1];
    if (pcVar10 == "ShowFloor") {
      bVar8 = 1;
    }
    else if (*pcVar10 == 'S') {
      uVar12 = 0;
      do {
        uVar11 = uVar12;
        uVar12 = uVar11;
        if (uVar11 == 0x80000) goto LAB_007c1124;
        if (pcVar10[uVar11 + 1] != "ShowFloor"[uVar11 + 1]) {
          uVar12 = 0;
          goto LAB_007c1124;
        }
        uVar12 = uVar11 + 1;
      } while (pcVar10[uVar11 + 1] != '\0');
      uVar12 = 1;
LAB_007c1124:
      bVar8 = uVar11 < 0x80000 & (byte)uVar12;
    }
    else {
      bVar8 = 0;
    }
    *(byte *)(param_1 + 0x54a) = bVar8;
  }
  if (*(char *)(param_1 + 0x54a) == '\0') {
    lVar9 = *(long *)PTR_DAT_04bb4eb8;
    plVar13 = (long *)PTR_PTR_04bb2238;
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x20) != '\0')) {
      plVar13 = (long *)(lVar9 + 8);
    }
    (**(code **)(*plVar13 + 0x18))(plVar13);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcVar10 = (char *)plVar13[1];
    if (pcVar10 != "ShowFloor2019") {
      if (*pcVar10 != 'S') goto LAB_007c11dc;
      lVar9 = 0;
      do {
        if ((lVar9 == 0x80000) ||
           (lVar14 = lVar9 + 1, pcVar10[lVar14] != "ShowFloor2019"[lVar9 + 1])) goto LAB_007c11dc;
        lVar9 = lVar9 + 1;
      } while (pcVar10[lVar14] != '\0');
    }
    *(undefined1 *)(param_1 + 0x54a) = 1;
  }
LAB_007c11dc:
  puVar4 = PTR_DAT_04bb3350;
  ppuVar1 = (undefined **)(puVar2 + 0x10);
  local_158 = (long *)0x4080d59;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  local_160 = ppuVar1;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar6 = (undefined8 *)(lVar14 + 8);
  if (lVar9 != 0) {
    puVar6 = (undefined8 *)(lVar9 + 0xa8);
  }
  plVar13 = (long *)FUN_038c6d48(0,&local_160,*puVar6,8,1,0);
  FUN_007b348c();
  FUN_007b3584();
  FUN_007b64a8(plVar13);
  FUN_007b65c0(*(undefined8 *)PTR_DAT_04bb4508,plVar13);
  local_160 = &PTR_LAB_049127e0;
  local_158 = plVar13;
  FUN_03f2a310(&DAT_04caac28,&local_160);
  FUN_03f2f674(plVar13);
  local_160 = (undefined **)0x6400001388;
  local_a8 = &local_a0;
  local_118 = 0x100000;
  pcStack_f0 = "Local/IgnorePackContent.txt";
  local_e8 = 0x300000;
  local_b0 = &local_a8;
  local_a0 = &local_98;
  local_c0 = &local_b0;
  local_98 = 0;
  local_130 = 0;
  local_d0 = 0;
  local_c8 = (undefined1 *)0x0;
  if (auStack_90 != (undefined1 *)0x0) {
    local_d0 = 0x400000000;
    local_c8 = auStack_90;
  }
  uStack_138 = *(undefined8 *)(param_1 + 0x540);
  local_150 = &DAT_04caac28;
  local_70 = 0;
  uStack_68 = 0;
  local_128 = 0;
  local_d8 = &DAT_0407ebb1;
  local_140 = "System/Resource/ResourceSizeTable.rsizetable";
  local_100 = "ParkPlus/NX64";
  local_110 = 1;
  local_120 = 0x1010001;
  local_158 = plVar13;
  ppuStack_148 = ppuVar1;
  local_108 = ppuVar1;
  local_f8 = ppuVar1;
  ppuStack_e0 = ppuVar1;
  pppuStack_b8 = local_c0;
  FUN_03f30610(*(undefined8 *)PTR_DAT_04bb49b8,&local_160);
  local_158 = (long *)0x406c272;
  local_160 = ppuVar1;
  FUN_038b0130(*(undefined8 *)puVar3,&local_160,0);
  FUN_007ca91c(*(undefined8 *)(param_1 + 0x538));
  lVar9 = *(long *)PTR_DAT_04bb2210;
  local_158 = (long *)0x40ceaa0;
  local_160 = ppuVar1;
  uVar5 = FUN_038c6d48(0xf00000,&local_160,*(undefined8 *)(param_1 + 0x538),8,1,0);
  *(undefined8 *)(lVar9 + 0xaa8) = uVar5;
  FUN_007c1520(0,&DAT_0407ebb1);
  FUN_007c1c20(0,&DAT_0407ebb1);
  FUN_007c23b0(0,&DAT_0407ebb1);
  uVar5 = FUN_0338409c(plVar13);
  FUN_03384690(uVar5,*(undefined8 *)(param_1 + 0x538));
  lVar9 = FUN_0384a9f0(*(undefined8 *)(param_1 + 0x538));
  FUN_03830e0c(lVar9 + 0xe8,*(undefined8 *)(param_1 + 0x538));
  lVar9 = FUN_02a24088(*(undefined8 *)(param_1 + 0x538));
  uVar5 = *(undefined8 *)(param_1 + 0x538);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  puVar2 = PTR_DAT_04bc42e0;
  uVar15 = *(undefined8 *)(lVar14 + 0xa8);
  *(undefined8 *)(lVar14 + 0xa8) = 0;
  *(uint *)(lVar9 + 0xb3890) = *(uint *)(lVar9 + 0xb3890) & 0xfffffffe;
  *(uint *)(lVar9 + 0xb3894) = *(uint *)(lVar9 + 0xb3894) & 0xfffffffe;
  *(undefined8 *)puVar2 = 0;
  local_160 = (undefined **)((ulong)local_160 & 0xffffffff00000000);
  nn::os::GenerateRandomBytes(&local_160,4);
  local_158 = (long *)0x4097d4e;
  DAT_055f531c = (uint)local_160 +
                 ((uint)local_160 / 0x7fffffff | (uint)local_160 / 0x7fffffff << 0x1f);
  if (DAT_055f531c < 2) {
    DAT_055f531c = 1;
  }
  local_160 = ppuVar1;
  plVar7 = (long *)FUN_038c6d48(0x2b00000,&local_160,uVar5,8,1,0);
  *(long **)(lVar9 + 0xb38a8) = plVar7;
  (**(code **)(*plVar7 + 0x78))();
  local_160 = *(undefined ***)(lVar9 + 0xb38a8);
  FUN_02a0f04c(lVar9 + 0x8b928,&local_160);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  *(undefined8 *)(lVar9 + 0xa8) = uVar15;
  (**(code **)(*plVar13 + 0x28))(plVar13);
  return;
}

