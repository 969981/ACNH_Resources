
void FUN_0255aba8(byte *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_48 [8];
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar14 = *puVar1;
  }
  else {
    uVar14 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar14 == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar14 >> 0x11) & 0x7ff8)
                      );
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0255acb0;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0255acb0:
    uVar14 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar10 = plVar13[0x2a];
  uVar2 = *(uint *)(plVar13 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3770);
  if ((int)lVar10 != 1) {
    return;
  }
  if ((uVar5 & uVar14) == 0) {
    return;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return;
  }
  (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],param_2,1);
  (**(code **)(*(long *)plVar13[0xd] + 0x160))((long *)plVar13[0xd],param_2 + 3);
  if ((ulong)*param_1 < 8) {
    lVar10 = DAT_054f5738 + (ulong)*param_1 * 0xc;
    *(undefined4 *)(lVar10 + 0xd88) = *param_2;
    *(undefined4 *)(lVar10 + 0xd8c) = param_2[1];
    *(undefined4 *)(lVar10 + 0xd90) = param_2[2];
  }
  FUN_0230f780(plVar13,0);
  if (*(char *)(param_2 + 4) == '\0') goto LAB_0255ae98;
  bVar12 = *param_1;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_68 = CONCAT71(local_68._1_7_,bVar12);
  lVar10 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
  if (lVar10 == 0) goto LAB_0255ae98;
  lVar11 = *(long *)(lVar10 + 0x1aa0);
  if (lVar11 == 0) {
    FUN_028166e0(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80),PTR_DAT_04bb37e0,0,
                 0xffffffff);
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
LAB_0255ae04:
      plVar6 = *(long **)(lVar11 + 0x20);
      if (plVar6 != (long *)0x0) {
        local_68 = *(ulong *)(lVar10 + 0x1a80);
        local_60 = *(undefined8 *)(lVar10 + 0x1a88);
        local_58 = 0x8b8;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
      }
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar10 + 0x1aa0);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar11 != 0) goto LAB_0255ae04;
    }
    FUN_028166e0(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80),PTR_DAT_04bb37e0,0,
                 0xffffffff);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x1aa0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x1aa0) + 0x18), puVar8 != (undefined8 *)0x0))
    {
      (**(code **)*puVar8)();
    }
  }
  local_68 = local_68 & 0xffffff0000000000;
  local_60 = CONCAT17(local_60._7_1_,6);
  local_60 = CONCAT26(local_60._6_2_,6);
  FUN_02321e44(auStack_48,plVar13,&local_68);
LAB_0255ae98:
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    *(undefined4 *)((long)plVar13 + 0x1bf4) = 0x3e800000;
    lVar10 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
    fVar15 = *pfVar9;
    *(undefined4 *)((long)plVar13 + 0x1bf4) = 0x3f800000;
    *(undefined4 *)((long)plVar13 + 0x1bec) = 0x3e800000;
    *(uint *)((long)plVar13 + 0x17cc) = *(uint *)((long)plVar13 + 0x17cc) | 0x400;
    *(float *)(plVar13 + 0x37e) = fVar15 * 0.25;
    lVar10 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar10 + 0x210) + 0xf0))(lVar10 + 0x210);
    fVar15 = *pfVar9;
    *(undefined4 *)((long)plVar13 + 0x1bec) = 0x3f800000;
    *(float *)(plVar13 + 0x37d) = fVar15 * 0.25;
  }
  return;
}

