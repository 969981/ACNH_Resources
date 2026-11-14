
void FUN_01be05e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined *local_1e8;
  char *pcStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined4 local_1d3;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined *local_190;
  undefined *puStack_188;
  undefined1 auStack_180 [288];
  
  lVar11 = *(long *)PTR_DAT_04bc08c0;
  uVar15 = 0;
  uVar16 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bdf0b0 + 0x10;
  puVar3 = PTR_DAT_04bb2830 + 0x10;
  do {
    lVar14 = *(long *)(param_1 + 0x8868);
    uVar13 = *(undefined8 *)
              ((long)&PTR_s_Dialog_04a3cfc8 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)
              );
    uVar4 = uVar15;
    if (*(uint *)(param_1 + 0x8860) <= uVar15) {
      uVar4 = 0;
    }
    uVar7 = FUN_038cefc4();
    puVar10 = &DAT_0407ebb1;
    if (uVar7 < 0x10) {
      puVar10 = *(undefined8 **)(PTR_DAT_04bb43e0 + (ulong)uVar7 * 8 + 0x60);
    }
    lVar14 = lVar14 + (ulong)uVar4 * 0x38;
    FUN_006e9528(auStack_180,"Message/%s_%s.sarc.zs",uVar13,puVar10);
    local_1d4 = 0;
    local_1f0 = 1;
    local_194 = 0;
    local_1a4 = 0;
    uStack_19c = 0;
    local_1bc = 0;
    local_1d8 = 0x1010100;
    local_1d3 = 0x1010001;
    local_1b4 = 0;
    uStack_1a8 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    pcStack_1e0 = "MsgAResArc";
    puStack_188 = PTR_DAT_04bb2120;
    local_1f8 = puVar2;
    local_1e8 = puVar1;
    local_190 = puVar1;
    uStack_1b0 = param_1 + 0x8870;
    FUN_0081a630(lVar14,auStack_180,&local_1f8,1);
    puVar10 = (undefined8 *)FUN_03f2d7f0(lVar14);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = puVar3;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    uVar9 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb2820);
    if ((uVar9 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    uVar13 = puVar10[1];
    uVar6 = *(undefined4 *)(puVar10 + 2);
    lVar17 = *(long *)(*(long *)PTR_DAT_04bb2718 + 0x408);
    lVar14 = lVar11;
    if (lVar11 == 0) {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),0);
      plVar5 = (long *)(lVar12 + 8);
      if (lVar14 != 0) {
        plVar5 = (long *)(lVar14 + 0xa8);
      }
      lVar14 = *plVar5;
    }
    FUN_03d53860(*(undefined8 *)(lVar17 + 8),lVar14,uVar13,uVar6,auStack_180,0);
    uVar15 = uVar15 + 1;
    uVar16 = (ulong)((int)uVar16 + 1);
  } while (uVar15 != 0xb);
  return;
}

