
/* WARNING: Type propagation algorithm not settling */

bool FUN_01f32628(ulong param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    bVar3 = *PTR_DAT_04bb32e0;
joined_r0x01f326ac:
    if (7 < bVar3) {
LAB_01f326b0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
        bVar3 = *PTR_DAT_04bb5038;
      }
      else {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar11 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar12 = (byte *)(lVar11 + 0x471);
          }
        }
        if (*pbVar12 < 8) goto LAB_01f32734;
        bVar3 = *PTR_DAT_04bb5038;
      }
      if (7 < bVar3) {
        return false;
      }
    }
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x01f326ac;
      }
      goto LAB_01f326b0;
    }
  }
LAB_01f32734:
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return false;
  }
  uVar14 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar15 = 1;
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01f327e8;
      uVar15 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
      uVar14 = (uint)uVar15;
    }
    if (plVar13 == (long *)0x0) goto LAB_01f32844;
LAB_01f327f0:
    bVar6 = (int)plVar13[0x2a] == 1;
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar15 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3278);
    if ((uVar15 & 1) == 0) {
      uVar14 = 0;
    }
    uVar15 = (ulong)uVar14;
    lVar11 = *(long *)puVar4;
  }
  else {
LAB_01f327e8:
    uVar15 = 0;
    uVar14 = 0;
    if (plVar13 != (long *)0x0) goto LAB_01f327f0;
LAB_01f32844:
    bVar6 = false;
    lVar11 = *(long *)puVar4;
  }
  if (lVar11 == 0) {
    return false;
  }
  uVar14 = *(uint *)PTR_DAT_04bb3958;
  if (((uVar14 == 0) ||
      (plVar8 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar14)))) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar14 = 1;
      goto joined_r0x01f328f8;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f328f8;
    }
  }
  uVar14 = 0;
joined_r0x01f328f8:
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3928);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar14;
    }
    if ((uVar10 & 1) == 0) {
      return false;
    }
    if (uVar1 == 0) {
      return false;
    }
    if ((param_1 & 1) == 0) {
      if ((int)plVar8[0x58] != 0) {
        FUN_020475d0(plVar8);
      }
    }
    else {
      if ((int)plVar8[0x58] == 0) {
        FUN_020480c4(plVar8);
      }
      if ((char)plVar8[0x5e] != '\0') {
        if (plVar13 == (long *)0x0) {
          return true;
        }
        if (!bVar6) {
          return true;
        }
        if ((uVar15 & 0xff) == 0) {
          return true;
        }
        if (*(long *)PTR_DAT_04bb7ff8 == 0) {
          return true;
        }
        return *(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0;
      }
    }
  }
  return false;
}

