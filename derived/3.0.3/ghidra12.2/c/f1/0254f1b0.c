
undefined8 FUN_0254f1b0(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  byte bVar10;
  long *plVar11;
  uint uVar12;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  undefined1 local_41;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  puVar9 = (uint *)PTR_DAT_04bb3238;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar9 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  uVar12 = *puVar9;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0254f424;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0254f424;
    }
  }
  uVar12 = 0;
joined_r0x0254f424:
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar8 = plVar11[0x2a];
  uVar1 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
  if ((int)lVar8 != 1) {
    return 0;
  }
  if ((uVar5 & uVar12) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  bVar10 = *param_1;
  uStack_4c = *(undefined4 *)puVar3;
  local_41 = 0;
  local_45 = 0;
  local_46 = 0;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_54 = CONCAT31(local_54._1_3_,bVar10);
  local_50 = 1;
  local_48 = 1;
  uVar7 = FUN_02530cec(&local_54);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  local_54 = 0xbd;
  plVar11[0x318] = plVar11[0x328];
  plVar11[0x318] = 0;
  plVar11[0x319] = plVar11[0x329];
  plVar11[0x319] = 0;
  plVar11[0x31a] = plVar11[0x32a];
  plVar11[0x31a] = 0;
  *(short *)(plVar11 + 0x31b) = (short)plVar11[0x32b];
  plVar11[0x314] = plVar11[0x324];
  plVar11[0x314] = 0;
  plVar11[0x315] = plVar11[0x325];
  plVar11[0x315] = 0;
  plVar11[0x316] = plVar11[0x326];
  plVar11[0x316] = 0;
  plVar11[0x317] = plVar11[0x327];
  plVar11[0x317] = 0;
  plVar11[0x310] = plVar11[800];
  plVar11[0x310] = 0;
  plVar11[0x311] = plVar11[0x321];
  plVar11[0x311] = 0;
  plVar11[0x312] = plVar11[0x322];
  plVar11[0x312] = 0;
  plVar11[0x313] = plVar11[0x323];
  plVar11[0x313] = 0;
  plVar11[0x30c] = plVar11[0x31c];
  plVar11[0x30d] = plVar11[0x31d];
  plVar11[0x30e] = plVar11[0x31e];
  plVar11[0x30f] = plVar11[799];
  lVar8 = 0;
  if (plVar11[0xe] != 0) {
    lVar8 = plVar11[0xe] + 0x278;
  }
  FUN_03ebb160(lVar8,0xbd);
  return 1;
}

