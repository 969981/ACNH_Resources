
void FUN_017f3100(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *__src;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined8 local_60;
  long local_58;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  FUN_017ebc00(param_1,0);
  FUN_017e3150(param_1,0);
  FUN_0095e6c0(*(undefined8 *)PTR_DAT_04bb2228,param_2 & 1);
  FUN_017eacdc(param_1,1);
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    plVar9 = (long *)0x0;
    bVar3 = false;
    uVar11 = 0;
    goto LAB_017f3274;
  }
  uVar10 = *(uint *)(param_1 + 0xac);
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      uVar10 = 1;
    }
    else {
      uVar10 = *(uint *)(lVar8 + 0x5e8);
      if (4 < uVar10) goto LAB_017f321c;
      uVar11 = 0x101000100 >> (((ulong)uVar10 & 7) << 3);
      uVar10 = (uint)uVar11;
    }
  }
  else {
LAB_017f321c:
    uVar11 = 0;
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = (int)plVar9[0x2a] == 1;
    if (((*PTR_DAT_04bbe478 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe478), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe470 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe478);
    }
    uVar11 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbe470);
    if ((uVar11 & 1) == 0) {
      uVar10 = 0;
    }
    uVar11 = (ulong)uVar10;
  }
LAB_017f3274:
  local_65 = 0;
  local_e4[0] = 0;
  local_e8 = 0x80;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_58 = 0;
  local_60 = CONCAT26(local_60._6_2_,7);
  if (((plVar9 == (long *)0x0) || (!bVar3)) || ((uVar11 & 0xff) == 0)) {
    *(undefined1 *)(param_1 + 0x1a0) = 1;
  }
  else {
    local_128 = (undefined4)plVar9[0x2b];
    uStack_124 = *(undefined4 *)((long)plVar9 + 0x15c);
    local_120 = (undefined4)plVar9[0x2c];
    local_11c = *(undefined8 *)((long)plVar9 + 0x164);
    local_114 = *(undefined4 *)((long)plVar9 + 0x16c);
    local_110 = (undefined4)plVar9[0x2e];
    local_10c = *(undefined8 *)((long)plVar9 + 0x174);
    local_104 = *(undefined8 *)((long)plVar9 + 0x17c);
    puStack_f0 = local_e4;
    (**(code **)(plVar9[0x31] + 0x18))(plVar9 + 0x31);
    __src = (undefined1 *)plVar9[0x32];
    if (local_e4 != __src) {
      (**(code **)(plVar9[0x31] + 0x18))(plVar9 + 0x31);
      lVar8 = 0;
      do {
        if (*(char *)(plVar9[0x32] + lVar8) == '\0') goto LAB_017f3388;
        lVar1 = plVar9[0x32] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_017f3388;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_017f3388;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_017f3388:
      iVar4 = (int)lVar8;
      if (local_e8 <= (int)lVar8) {
        iVar4 = local_e8 + -1;
      }
      memcpy(local_e4,__src,(long)iVar4);
      local_e4[iVar4] = 0;
    }
    local_60 = plVar9[0x44];
    local_58 = plVar9[0x45];
    FUN_006fb3d0(plVar9);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1f0);
    *(byte *)(param_1 + 0x10e) = *(byte *)(param_1 + 0x13c) >> 7;
    *(byte *)(param_1 + 0xe6) = *(byte *)(param_1 + 0x13c) >> 4 & 1;
    *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_1 + 0xfe);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
    *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
    FUN_017e8150(param_1,0);
    FUN_017e83a0(param_1,0);
    FUN_017e8610(param_1,0);
    FUN_017ebc00(param_1,1);
    uVar7 = *(undefined8 *)puVar2;
    *(undefined1 *)(param_1 + 0x184) = 1;
    uVar5 = FUN_007402e0(uVar7,&local_128,local_128,1);
    *(undefined4 *)(param_1 + 0xac) = uVar5;
  }
  return;
}

