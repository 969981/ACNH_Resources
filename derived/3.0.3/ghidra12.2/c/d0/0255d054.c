
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0255d054(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar4 = PTR_DAT_04bb27c0;
  if ((ulong)*param_2 < 8) {
    puVar2 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar2 = (uint *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
    }
    uVar10 = *puVar2;
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar10 == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    pbVar3 = PTR_DAT_04bb3790;
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0255d154;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0255d154;
    }
  }
  uVar10 = 0;
  pbVar3 = PTR_DAT_04bb3790;
joined_r0x0255d154:
  PTR_DAT_04bb3790 = pbVar3;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3788 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3790);
    }
    puVar4 = PTR_DAT_04bb3788;
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3788);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar10;
    }
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3790), iVar5 != 0)) {
      *(undefined **)puVar4 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3790);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3788);
    if (((uVar7 & 1) != 0) && (plVar9[0x53] != 0)) {
      switch(param_1) {
      case 0:
        return 0;
      case 1:
        lVar8 = 0xbdd0;
        break;
      case 2:
        lVar8 = 0xbdd8;
        break;
      case 3:
        lVar8 = 0xbde0;
        break;
      case 4:
      case 5:
        lVar8 = 0xbde8;
        break;
      case 6:
        lVar8 = 0xbdf0;
        break;
      case 7:
        lVar8 = 0xbdf8;
        break;
      case 8:
        lVar8 = 0xbe00;
        break;
      default:
        lVar8 = 0x1480;
        break;
      case 10:
        lVar8 = 0xbe08;
      }
      return *(undefined8 *)(plVar9[0x53] + lVar8);
    }
  }
  return 0;
}

