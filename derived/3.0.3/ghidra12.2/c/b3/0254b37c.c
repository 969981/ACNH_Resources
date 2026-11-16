
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0254b37c(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  short *psVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  uint *puVar16;
  byte local_38 [4];
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    return true;
  }
  if (*(int *)(lVar8 + 0x15c) == 0) {
    return true;
  }
  if (*(int *)(lVar8 + 0x15c) == 0) {
    return true;
  }
  bVar12 = *param_1;
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar8 + 0x15c) != 0) {
    pbVar1 = (byte *)(lVar8 + 0x158);
  }
  bVar11 = *pbVar1;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  if (bVar11 == bVar12) {
    return true;
  }
  iVar5 = FUN_00a74b78(param_1);
  if (iVar5 == 4) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar16 = (uint *)&DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar16 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar16 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar16 = puVar16 + (ulong)*param_1 * 2;
      }
    }
    local_34 = 0x1e;
    if ((*puVar16 >> 0x1e & 1) != 0) {
      return false;
    }
    if ((DAT_054f5738 == 0) || (uVar13 = (ulong)*param_1, 7 < uVar13)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar9 = &DAT_054f0c08;
        if (iVar5 != 0) {
          DAT_054f0c6c = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
          psVar9 = &DAT_054f0c08;
        }
      }
      else {
        psVar9 = &DAT_054f0c08;
      }
    }
    else {
      psVar9 = (short *)(DAT_054f5738 + uVar13 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar13 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    puVar3 = PTR_DAT_04bb27c0;
    if (((((char)psVar9[0x32] != '\0') && (*psVar9 == *(short *)PTR_DAT_04bb6298)) &&
        (*(uint *)(psVar9 + 2) < 0x149)) && (*(uint *)(psVar9 + 2) == 1)) {
      return false;
    }
    if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
      puVar16 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    else {
      puVar16 = (uint *)PTR_DAT_04bb3238;
    }
    lVar8 = *(long *)PTR_DAT_04bb27c0;
    if (lVar8 != 0) {
      uVar15 = *puVar16;
      if (((uVar15 == 0) ||
          (plVar14 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                               ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
         (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar15)))) {
        plVar14 = (long *)0x0;
      }
      if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)puVar3;
        iVar5 = (**(code **)(*plVar7 + 0x60))();
        if (iVar5 < 0x11) {
          uVar15 = 1;
        }
        else {
          if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0254b5d4;
          uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0254b5d4:
        uVar15 = 0;
      }
      if (plVar14 != (long *)0x0) {
        lVar8 = plVar14[0x2a];
        uVar2 = *(uint *)(plVar14 + 0x49);
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
        if ((((int)lVar8 == 1) && ((uVar6 & uVar15) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
          plVar14 = (long *)plVar14[0xc];
          if (plVar14 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(&DAT_052461c0);
              plVar14 = &DAT_05240280;
              if (iVar5 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar14 = &DAT_05240280;
            }
          }
          uVar13 = (**(code **)(*plVar14 + 0x100))(plVar14);
          if ((uVar13 & 1) == 0) {
            return false;
          }
        }
      }
    }
  }
  lVar8 = *(long *)puVar4;
  if (lVar8 == 0) {
LAB_0254b69c:
    if (7 < *pbVar10) {
LAB_0254b6a8:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar8 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar16 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar16 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar16 & 8) != 0) {
            pbVar10 = (byte *)(lVar8 + 0x471);
          }
        }
        local_38[0] = *pbVar10;
        if (local_38[0] < 8) goto LAB_0254b728;
      }
      pbVar10 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0254b69c;
      }
      goto LAB_0254b6a8;
    }
  }
  local_38[0] = *pbVar10;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
LAB_0254b728:
  uVar13 = FUN_02532880(local_38,PTR_DAT_04bb3238);
  if ((uVar13 & 1) != 0) {
    return false;
  }
  if ((DAT_054f5738 == 0) || (7 < (ulong)*param_1)) {
    return true;
  }
  return *(int *)(DAT_054f5738 + (ulong)*param_1 * 8 + 0xf04) == 0;
}

