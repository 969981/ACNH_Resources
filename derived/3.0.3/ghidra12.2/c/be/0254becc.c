
/* WARNING: Removing unreachable block (ram,0x0254c3d0) */
/* WARNING: Removing unreachable block (ram,0x0254c494) */

undefined8 FUN_0254becc(byte *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  short *psVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  long *plVar16;
  uint *puVar17;
  byte local_60 [4];
  byte local_5c [4];
  uint local_58;
  undefined4 uStack_54;
  char local_50;
  char local_4f;
  char local_4e;
  undefined4 local_44;
  uint local_24;
  
  if (*param_2 == 1) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        local_58 = 0x1e;
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
        local_58 = 0x1e;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar17 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*param_1 * 2;
      }
      local_58 = 0x1e;
    }
  }
  else if (*param_2 == 2) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar17 = puVar17 + (ulong)*param_1 * 2;
      }
    }
    local_58 = 0x1d;
  }
  else {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar17 = puVar17 + (ulong)*param_1 * 2;
      }
    }
    local_58 = 0x1b;
  }
  if ((local_58 < 0x39) && (local_58 < 0x39)) {
    *puVar17 = *puVar17 & (1 << (ulong)local_58 ^ 0xffffffffU);
  }
  puVar5 = PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x15c) == 0)) {
    return 0;
  }
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar9 + 0x15c) != 0) {
    pbVar1 = (byte *)(lVar9 + 0x158);
  }
  bVar14 = *pbVar1;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  bVar3 = *param_1;
  uVar10 = (ulong)bVar3;
  bVar13 = bVar3;
  if (7 < bVar3) {
    bVar13 = 0xff;
  }
  if (bVar14 == bVar13) {
    return 0;
  }
  if (*param_2 != 1) {
    if (*param_2 == 2) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_054f0960);
          puVar17 = (uint *)&DAT_054f0958;
          if (iVar7 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar17 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar17 = (uint *)(DAT_054f5738 + 0x204);
        if (bVar3 < 8) {
          puVar17 = puVar17 + uVar10 * 2;
        }
      }
      local_58 = 0x1d;
      *puVar17 = *puVar17 | 0x20000000;
      if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
        puVar11 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
      else {
        puVar11 = (undefined4 *)PTR_DAT_04bb3238;
      }
      local_44 = *puVar11;
      FUN_0071c8d0(&local_58,&local_44,PTR_DAT_04bb3238,0);
      plVar16 = (long *)CONCAT44(uStack_54,local_58);
      if (plVar16 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3770);
        if ((uVar10 & 1) == 0) {
          local_4f = '\0';
        }
      }
      lVar9 = CONCAT44(uStack_54,local_58);
      if (lVar9 == 0) {
        return 1;
      }
      if (local_50 == '\0') {
        return 1;
      }
      if (local_4f == '\0') {
        return 1;
      }
      if (local_4e == '\0') {
        return 1;
      }
      local_24 = 1;
      if (*(long *)(lVar9 + 0x70) == 0) {
        local_24 = 0;
      }
      else {
        uVar2 = *(uint *)(*(long *)(lVar9 + 0x70) + 0x280);
        uVar15 = 0;
        if (uVar2 < 0x149) {
          uVar15 = uVar2;
        }
        if (uVar15 != 1) {
          local_24 = uVar15;
          if (6 < uVar15 - 0x126) goto LAB_0254c414;
          if (uVar15 != 300) {
            local_5c[0] = *param_1;
            if (7 < local_5c[0]) {
              local_5c[0] = 0xff;
            }
            FUN_024efea0(local_5c,lVar9 + 0x18e0);
            lVar9 = CONCAT44(uStack_54,local_58);
          }
        }
        FUN_0243da38(lVar9);
        lVar9 = CONCAT44(uStack_54,local_58);
      }
LAB_0254c414:
      plVar16 = *(long **)(lVar9 + 0x60);
      if (plVar16 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          plVar16 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar16 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar16 + 0x4e8))(plVar16,0);
      return 1;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if (bVar3 < 8) {
        puVar17 = puVar17 + uVar10 * 2;
      }
    }
    uVar15 = *puVar17 | 0x8000000;
LAB_0254c53c:
    *puVar17 = uVar15;
    return 1;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar17 = (uint *)&DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar17 = (uint *)(DAT_054f5738 + 0x204);
    if (bVar3 < 8) {
      puVar17 = puVar17 + uVar10 * 2;
    }
  }
  local_58 = 0x1e;
  *puVar17 = *puVar17 | 0x40000000;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar11 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar11 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_44 = *puVar11;
  FUN_0071c8d0(&local_58,&local_44,PTR_DAT_04bb3238,0);
  plVar16 = (long *)CONCAT44(uStack_54,local_58);
  if (plVar16 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3770);
    if ((uVar10 & 1) == 0) {
      local_4f = '\0';
    }
  }
  lVar9 = CONCAT44(uStack_54,local_58);
  if (lVar9 == 0) {
    return 1;
  }
  if (local_50 == '\0') {
    return 1;
  }
  if (local_4f == '\0') {
    return 1;
  }
  if (local_4e == '\0') {
    return 1;
  }
  local_24 = 1;
  if (*(long *)(lVar9 + 0x70) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(*(long *)(lVar9 + 0x70) + 0x280);
  uVar15 = 0;
  if (uVar2 < 0x149) {
    uVar15 = uVar2;
  }
  if (uVar15 == 1) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar17 = puVar17 + (ulong)*param_1 * 2;
      }
    }
    uVar15 = *puVar17 & 0xbfffffff;
    goto LAB_0254c53c;
  }
  if (6 < uVar15 - 0x126) {
    return 1;
  }
  local_24 = uVar15;
  if (uVar15 != 300) {
    local_60[0] = *param_1;
    if (7 < local_60[0]) {
      local_60[0] = 0xff;
    }
    FUN_024efea0(local_60,lVar9 + 0x18e0);
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar17 = (uint *)&DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar17 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar17 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar17 = puVar17 + (ulong)*param_1 * 2;
    }
  }
  *puVar17 = *puVar17 & 0xbfffffff;
  lVar4 = CONCAT44(uStack_54,local_58);
  local_24 = 1;
  *(undefined8 *)(lVar4 + 0x18c0) = *(undefined8 *)(lVar4 + 0x1940);
  *(undefined8 *)(lVar4 + 0x18c0) = 0;
  *(undefined8 *)(lVar4 + 0x18c8) = *(undefined8 *)(lVar4 + 0x1948);
  *(undefined8 *)(lVar4 + 0x18c8) = 0;
  *(undefined8 *)(lVar4 + 0x18d0) = *(undefined8 *)(lVar4 + 0x1950);
  *(undefined8 *)(lVar4 + 0x18d0) = 0;
  *(undefined2 *)(lVar4 + 0x18d8) = *(undefined2 *)(lVar4 + 0x1958);
  *(undefined8 *)(lVar4 + 0x18a0) = *(undefined8 *)(lVar4 + 0x1920);
  *(undefined8 *)(lVar4 + 0x18a0) = 0;
  *(undefined8 *)(lVar4 + 0x18a8) = *(undefined8 *)(lVar4 + 0x1928);
  *(undefined8 *)(lVar4 + 0x18a8) = 0;
  *(undefined8 *)(lVar4 + 0x18b0) = *(undefined8 *)(lVar4 + 0x1930);
  *(undefined8 *)(lVar4 + 0x18b0) = 0;
  *(undefined8 *)(lVar4 + 0x18b8) = *(undefined8 *)(lVar4 + 0x1938);
  *(undefined8 *)(lVar4 + 0x18b8) = 0;
  *(undefined8 *)(lVar4 + 0x1880) = *(undefined8 *)(lVar4 + 0x1900);
  *(undefined8 *)(lVar4 + 0x1880) = 0;
  *(undefined8 *)(lVar4 + 0x1888) = *(undefined8 *)(lVar4 + 0x1908);
  *(undefined8 *)(lVar4 + 0x1888) = 0;
  *(undefined8 *)(lVar4 + 0x1890) = *(undefined8 *)(lVar4 + 0x1910);
  *(undefined8 *)(lVar4 + 0x1890) = 0;
  *(undefined8 *)(lVar4 + 0x1898) = *(undefined8 *)(lVar4 + 0x1918);
  *(undefined8 *)(lVar4 + 0x1898) = 0;
  *(undefined8 *)(lVar4 + 0x1860) = *(undefined8 *)(lVar4 + 0x18e0);
  *(undefined8 *)(lVar4 + 0x1868) = *(undefined8 *)(lVar4 + 0x18e8);
  *(undefined8 *)(lVar4 + 0x1870) = *(undefined8 *)(lVar4 + 0x18f0);
  *(undefined8 *)(lVar4 + 0x1878) = *(undefined8 *)(lVar4 + 0x18f8);
  lVar9 = 0;
  if (*(long *)(lVar4 + 0x70) != 0) {
    lVar9 = *(long *)(lVar4 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar9,1);
  lVar9 = *(long *)puVar5;
  if (lVar9 == 0) {
LAB_0254c6b4:
    if (7 < *pbVar12) {
LAB_0254c6c0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar9 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar17 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar17 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar17 & 8) != 0) {
            pbVar12 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar14 = *pbVar12;
        bVar6 = 7 < bVar14;
        if (bVar6) {
          bVar14 = 0xff;
        }
        local_24 = CONCAT31(local_24._1_3_,bVar14);
        if (!bVar6) goto LAB_0254c748;
      }
      pbVar12 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0254c6b4;
      }
      goto LAB_0254c6c0;
    }
  }
  bVar13 = *pbVar12;
  bVar14 = bVar13;
  if (7 < bVar13) {
    bVar14 = 0xff;
  }
  local_24 = CONCAT31(local_24._1_3_,bVar14);
  if (7 < bVar13) {
    return 1;
  }
LAB_0254c748:
  psVar8 = (short *)FUN_0251b214(&local_24);
  if ((((char)psVar8[0x32] != '\0') && (*psVar8 == *(short *)PTR_DAT_04bb6298)) &&
     ((uVar10 = FUN_0231f070(*(undefined4 *)(psVar8 + 2),0), (uVar10 & 1) != 0 ||
      (uVar10 = FUN_0251b2f8(&local_24), (uVar10 & 1) != 0)))) {
    plVar16 = *(long **)(CONCAT44(uStack_54,local_58) + 0x68);
    (**(code **)(*plVar16 + 0x140))(plVar16,psVar8 + 6,1);
  }
  return 1;
}

