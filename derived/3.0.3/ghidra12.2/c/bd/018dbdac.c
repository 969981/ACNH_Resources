
void FUN_018dbdac(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    if (((((int)param_3 == 0) ||
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              (param_3 >> 0x14 & 0xfff) * 8), plVar15 == (long *)0x0)) ||
        ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || ((int)plVar15[0x46] != (int)param_3)) {
      plVar15 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar4;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      pbVar3 = PTR_DAT_04bb3ff0;
      if (iVar6 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_018dbe6c;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_018dbe6c:
      uVar7 = 0;
      pbVar3 = PTR_DAT_04bb3ff0;
    }
    PTR_DAT_04bb3ff0 = pbVar3;
    if (plVar15 != (long *)0x0) {
      lVar9 = plVar15[0x2a];
      if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3ff0);
      }
      puVar5 = PTR_DAT_04bb3fe8;
      uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3fe8);
      uVar1 = 0;
      if ((int)lVar9 == 1) {
        uVar1 = uVar7;
      }
      if (((uVar13 & 1) != 0) && (uVar1 != 0)) {
        plVar8 = *(long **)PTR_DAT_04bb27d0;
        lVar9 = *plVar8;
        if (*(byte *)(lVar9 + 0x476) < 2) {
          FUN_01947ba0(plVar15);
          goto LAB_018dc008;
        }
        lVar14 = *(long *)PTR_DAT_04bb39b0;
        if (lVar14 == 0) {
          bVar10 = *PTR_DAT_04bb32e0;
LAB_018dc02c:
          if (bVar10 < 8) goto LAB_018dc084;
LAB_018dc034:
          bVar10 = *(byte *)(lVar9 + 0x473);
          pbVar11 = PTR_DAT_04bb5038;
          if ((long)(char)bVar10 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
            if (7 < bVar10) {
              puVar2 = (uint *)(lVar9 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar11 = (byte *)(lVar9 + 0x471);
            }
          }
          bVar10 = *pbVar11;
          if (7 < bVar10) {
            bVar10 = *PTR_DAT_04bb5038;
            goto LAB_018dc084;
          }
        }
        else {
          pbVar11 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar14 + 0x15c) != 0) {
            pbVar11 = (byte *)(lVar14 + 0x158);
          }
          bVar10 = *pbVar11;
          if (7 < bVar10) {
            if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              bVar10 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_018dc02c;
            }
            goto LAB_018dc034;
          }
LAB_018dc084:
          if (7 < bVar10) {
            bVar10 = 0xff;
          }
        }
        bVar12 = *param_2;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        if (bVar12 != bVar10) {
          return;
        }
        bVar10 = *(byte *)(lVar9 + 0x473);
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          uVar13 = (long)(char)bVar10 & 0xffffffff;
          pbVar11 = (byte *)(lVar9 + 0x48) + uVar13 * 0x80;
          if (7 < bVar10) {
            pbVar11 = (byte *)(lVar9 + 0x48);
          }
          if ((*pbVar11 >> 3 & 1) != 0) {
            lVar9 = plVar8[2] + 0x108 + uVar13 * 0xc;
            if (0xb < bVar10) {
              lVar9 = plVar8[2] + 0x108;
            }
            if (*(char *)(lVar9 + 10) == '\0') {
              local_58 = 0;
              *(undefined1 *)(param_1 + 0x69) = 4;
              local_52 = 0;
              local_54 = 0xff00;
              if (*(int *)(param_1 + 0x38) < 0) {
                return;
              }
              FUN_01db1df0(*plVar8 + 0x480,*(int *)(param_1 + 0x38),&local_58,param_1 + 0x60,0x10,0)
              ;
              return;
            }
          }
        }
        uVar7 = FUN_0194d848(*(undefined1 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0x6b));
        if (uVar7 == 0) {
          return;
        }
        lVar9 = *(long *)puVar4;
        if (lVar9 == 0) {
          return;
        }
        plVar15 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8);
        if (((plVar15 == (long *)0x0) || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar15 + 0x46) != uVar7)) {
          plVar15 = (long *)0x0;
        }
        if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar9 = *(long *)puVar4;
          iVar6 = (**(code **)(*plVar8 + 0x60))();
          if (iVar6 < 0x11) {
            uVar7 = 1;
            goto LAB_018dc288;
          }
          if (*(uint *)(lVar9 + 0x5e8) < 5) {
            uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
            goto LAB_018dc288;
          }
        }
        uVar7 = 0;
LAB_018dc288:
        if (plVar15 == (long *)0x0) {
          return;
        }
        lVar9 = plVar15[0x2a];
        if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
          *(undefined **)puVar5 = PTR_DAT_04bb3fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3ff0);
        }
        uVar13 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3fe8);
        uVar1 = 0;
        if ((int)lVar9 == 1) {
          uVar1 = uVar7;
        }
        if ((uVar13 & 1) == 0) {
          return;
        }
        if (uVar1 == 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x69) = 0;
        FUN_01947ba0(plVar15);
        return;
      }
    }
  }
  if (*(char *)(param_1 + 0x69) != '\x02') {
    return;
  }
  plVar15 = *(long **)PTR_DAT_04bb27d0;
  lVar9 = *plVar15;
  if (*(byte *)(lVar9 + 0x476) < 2) goto LAB_018dc008;
  bVar10 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)bVar10 == 0xffffffffffffffff) goto LAB_018dc008;
  uVar13 = (long)(char)bVar10 & 0xffffffff;
  puVar2 = (uint *)(lVar9 + 0x48) + uVar13 * 0x20;
  if (7 < bVar10) {
    puVar2 = (uint *)(lVar9 + 0x48);
  }
  if ((*puVar2 >> 3 & 1) == 0) goto LAB_018dc008;
  lVar14 = plVar15[2] + 0x108 + uVar13 * 0xc;
  if (0xb < bVar10) {
    lVar14 = plVar15[2] + 0x108;
  }
  if (*(char *)(lVar14 + 10) != '\0') goto LAB_018dc008;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if (lVar14 == 0) {
    bVar10 = *PTR_DAT_04bb32e0;
LAB_018dc1a4:
    if (bVar10 < 8) goto LAB_018dc1d0;
LAB_018dc1ac:
    pbVar3 = PTR_DAT_04bb5038;
    if ((*puVar2 & 8) != 0) {
      pbVar3 = (byte *)(lVar9 + 0x471);
    }
    bVar10 = *pbVar3;
    if (7 < bVar10) {
      bVar10 = *PTR_DAT_04bb5038;
      goto LAB_018dc1d0;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar14 + 0x158);
    }
    bVar10 = *pbVar3;
    if (7 < bVar10) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar10 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_018dc1a4;
      }
      goto LAB_018dc1ac;
    }
LAB_018dc1d0:
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
  }
  bVar12 = *param_2;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar12 == bVar10) {
    local_58 = 0;
    *(undefined1 *)(param_1 + 0x69) = 4;
    local_52 = 0;
    local_54 = 0xff00;
    if (-1 < *(int *)(param_1 + 0x38)) {
      FUN_01db1df0(*plVar15 + 0x480,*(int *)(param_1 + 0x38),&local_58,param_1 + 0x60,0x10,0);
    }
  }
LAB_018dc008:
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}

