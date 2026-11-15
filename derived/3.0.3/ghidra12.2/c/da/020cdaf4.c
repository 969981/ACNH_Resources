
void FUN_020cdaf4(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x020cdba8;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cdba8;
    }
  }
  uVar8 = 0;
joined_r0x020cdba8:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    if ((uVar8 & uVar3) == 1) {
      lVar5 = plVar7[0x77];
      if (*(int *)(lVar5 + 0x77b0) == 0x31) {
        lVar6 = *(long *)(lVar5 + 8);
        uVar8 = *(uint *)(lVar6 + 0x288);
        *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
        uVar8 = uVar8 ^ uVar8 << 0xb;
        *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
        uVar3 = *(uint *)(lVar6 + 0x294);
        *(uint *)(lVar6 + 0x290) = uVar3;
        uVar8 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
        *(uint *)(lVar6 + 0x294) = uVar8;
        *(int *)(lVar5 + 0xaf1c) = (int)((ulong)uVar8 * 0x78 >> 0x20) + 0x3c;
      }
      else if (*(int *)(lVar5 + 0x77b0) == 0x2f) {
        *(undefined4 *)(lVar5 + 0xaf20) = 0xffffffff;
      }
    }
  }
  return;
}

