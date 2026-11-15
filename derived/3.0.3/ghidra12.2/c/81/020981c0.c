
void FUN_020981c0(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  ulong local_118;
  float local_110;
  undefined4 local_10c;
  float local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_020983d8;
  if (((((uint)DAT_05407638 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)((uint)DAT_05407638 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0))
      || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != (uint)DAT_05407638)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      uVar9 = *(uint *)(lVar6 + 0x5e8);
      if (4 < uVar9) goto LAB_02098280;
      uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
    }
  }
  else {
LAB_02098280:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bc2240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc2240), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc2238 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2240);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc2238);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      lVar6 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar6 == 0) {
        fVar10 = 10.0;
        local_110 = 10.0;
      }
      else {
        fVar10 = (float)*(int *)(lVar6 + 0xd88) * 5.0 + 10.0;
        local_110 = (float)*(int *)(lVar6 + 0xd8c) * 5.0 + 10.0;
      }
      local_118 = (ulong)(uint)fVar10;
      (**(code **)(*(long *)plVar8[0xd] + 0x100))((long *)plVar8[0xd],&local_118);
      lVar6 = 0;
      if (plVar8[0xe] != 0) {
        lVar6 = plVar8[0xe] + 0x278;
      }
      FUN_03ebb160(lVar6,0);
    }
  }
  lVar6 = *(long *)puVar2;
  if (lVar6 != 0) {
    local_55 = 0;
    local_118 = 0x3400000000;
    local_d8 = 0x80;
    local_104 = 0x3f800000;
    puStack_e0 = local_d4;
    local_d4[0] = 0;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    local_48 = 0;
    local_4c = 0;
    local_fc = 0;
    local_50 = 7;
    lVar7 = *(long *)PTR_DAT_04bb5ce0;
    local_f4 = 0;
    if (lVar7 == 0) {
      local_108 = 30.0;
      local_110 = 40.0;
    }
    else {
      local_110 = *(float *)(lVar7 + 0xd74) + 0.0;
      local_108 = *(float *)(lVar7 + 0xd7c) + -10.0;
    }
    local_10c = 0x42200000;
    DAT_05407638._4_4_ = FUN_007402e0(lVar6,&local_118,0,0);
    return;
  }
LAB_020983d8:
  DAT_05407638._4_4_ = *(undefined4 *)PTR_DAT_04bb3238;
  return;
}

