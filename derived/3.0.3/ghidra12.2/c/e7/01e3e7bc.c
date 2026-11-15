
uint FUN_01e3e7bc(long *param_1,byte *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  byte local_44 [4];
  byte local_28 [4];
  byte local_24 [4];
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((*(byte *)(param_1[0x77] + 0xad58) >> 5 & 1) == 0) {
    local_44[0] = *param_2;
    pbVar7 = local_44;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    plVar9 = param_1;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb27c0;
    if (lVar8 == 0) {
      plVar9 = (long *)0x0;
      bVar2 = false;
      uVar10 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1[0x77] + 0x7d6c);
      if ((((uVar4 == 0) ||
           (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                               ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
          ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar4)) {
        plVar9 = (long *)0x0;
      }
      if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)puVar1;
        iVar3 = (**(code **)(*plVar5 + 0x60))();
        if (iVar3 < 0x11) {
          uVar10 = 1;
          uVar4 = 1;
        }
        else {
          if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01e3e8d0;
          uVar10 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
          uVar4 = (uint)uVar10;
        }
      }
      else {
LAB_01e3e8d0:
        uVar10 = 0;
        uVar4 = 0;
      }
      if (plVar9 == (long *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = (int)plVar9[0x2a] == 1;
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
        if ((uVar10 & 1) == 0) {
          uVar4 = 0;
        }
        uVar10 = (ulong)uVar4;
      }
    }
    local_24[0] = *param_2;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    uVar6 = FUN_01e3e9e4(param_1,local_24,0);
    uVar4 = 0;
    if ((((uVar6 & 1) == 0) || (uVar4 = 0, plVar9 == (long *)0x0)) ||
       ((!bVar2 || ((uVar10 & 0xff) == 0)))) goto LAB_01e3e990;
    local_28[0] = *param_2;
    pbVar7 = local_28;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  uVar4 = FUN_01e3e9e4(plVar9,pbVar7,0);
LAB_01e3e990:
  return uVar4 & 1;
}

