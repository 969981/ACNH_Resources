
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02548b40(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  byte local_90;
  undefined7 uStack_8f;
  char local_88;
  char local_87;
  char local_86;
  undefined4 local_7c;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  puVar1 = PTR_DAT_04bb39b0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if (lVar14 == 0) {
    return 0;
  }
  if (*(int *)(lVar14 + 0x15c) == 0) {
    return 0;
  }
  uVar16 = (ulong)*param_2;
  if (uVar16 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar17 = &DAT_054f0c08;
        if (iVar11 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar17 = &DAT_054f0c08;
      }
    }
    else {
      psVar17 = (short *)(DAT_054f5738 + uVar16 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar16 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((char)psVar17[0x32] == '\0') {
      return 0;
    }
    if (*psVar17 != *(short *)PTR_DAT_04bb6298) {
      return 0;
    }
    uVar16 = FUN_0231f070(*(undefined4 *)(psVar17 + 2),0);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_0251b2f8(param_2);
      goto joined_r0x02548d68;
    }
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar15 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (pbVar15 = (byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8)))) {
LAB_02548c74:
      local_90 = *pbVar15;
      if (7 < local_90) {
        return 0;
      }
    }
    else {
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02548c6c:
        pbVar15 = PTR_DAT_04bb5038;
        goto LAB_02548c74;
      }
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar14 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar2 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x471);
        }
      }
      local_90 = *pbVar15;
      if (7 < local_90) goto LAB_02548c6c;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar17 = &DAT_054f0c08;
        if (iVar11 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar17 = &DAT_054f0c08;
      }
    }
    else {
      psVar17 = (short *)(DAT_054f5738 + (ulong)local_90 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + (ulong)local_90 * 4 + 0xd68) & 1) * 0x68
                         + 0x6e8);
    }
    if ((char)psVar17[0x32] == '\0') {
      return 0;
    }
    if (*psVar17 != *(short *)PTR_DAT_04bb6298) {
      return 0;
    }
    uVar16 = FUN_0231f070(*(undefined4 *)(psVar17 + 2),0);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_0251b2f8(&local_90);
joined_r0x02548d68:
      if ((uVar16 & 1) == 0) {
        return 0;
      }
    }
  }
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar10 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb3238;
  lVar14 = *(long *)puVar1;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_02548dfc:
    if (7 < *pbVar15) {
LAB_02548e08:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar14 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar2 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar15 = (byte *)(lVar14 + 0x471);
          }
        }
        uVar19 = (uint)*pbVar15;
        if (*pbVar15 < 8) goto LAB_02548e78;
      }
      pbVar15 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02548dfc;
      }
      goto LAB_02548e08;
    }
  }
  uVar19 = (uint)*pbVar15;
  if (7 < uVar19) {
    uVar19 = 0xff;
  }
LAB_02548e78:
  local_74 = local_68;
  local_78[0] = local_6c[0];
  if (7 < local_6c[0]) {
    local_78[0] = 0xff;
  }
  local_70 = local_64;
  if (7 < local_6c[0]) {
    return 1;
  }
  puVar1 = PTR_DAT_04bb3780 + 0x10;
  do {
    uVar18 = (uint)local_6c[0];
    if (*param_2 < 8) {
      uVar4 = (uint)*param_2;
joined_r0x02548ef4:
      if (uVar4 != uVar18) goto LAB_02548ef8;
    }
    else {
      uVar4 = uVar19;
      if (uVar19 < 8) goto joined_r0x02548ef4;
LAB_02548ef8:
      puVar3 = (undefined4 *)puVar8;
      if (DAT_054f5738 != 0) {
        puVar3 = (undefined4 *)(DAT_054f5738 + (ulong)local_6c[0] * 4 + 0xde8);
      }
      local_7c = *puVar3;
      FUN_0071c8d0(&local_90,&local_7c,puVar8,0);
      plVar7 = (long *)CONCAT71(uStack_8f,local_90);
      if (plVar7 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar11 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar16 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
        if ((uVar16 & 1) == 0) {
          local_87 = '\0';
        }
      }
      puVar9 = PTR_DAT_04bb3968;
      lVar14 = CONCAT71(uStack_8f,local_90);
      if ((((lVar14 != 0) && (local_88 != '\0')) && (local_87 != '\0')) && (local_86 != '\0')) {
        piVar12 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x21a8) + 0xf0))
                                   (*(long *)PTR_DAT_04bb3968 + 0x21a8);
        iVar11 = *piVar12;
        piVar12 = (int *)(**(code **)(*(long *)(*(long *)puVar9 + 0x21d8) + 0xf0))
                                   (*(long *)puVar9 + 0x21d8);
        uVar18 = *(uint *)(lVar14 + 0x288) ^ *(uint *)(lVar14 + 0x288) << 0xb;
        uVar4 = *(uint *)(lVar14 + 0x294);
        iVar5 = *piVar12;
        *(undefined4 *)(lVar14 + 0x288) = *(undefined4 *)(lVar14 + 0x28c);
        uVar18 = uVar18 >> 8 ^ uVar4 >> 0x13 ^ uVar18 ^ uVar4;
        uVar6 = *(undefined4 *)(lVar14 + 0x290);
        *(uint *)(lVar14 + 0x290) = uVar4;
        *(uint *)(lVar14 + 0x294) = uVar18;
        *(undefined4 *)(lVar14 + 0x28c) = uVar6;
        lVar14 = CONCAT71(uStack_8f,local_90);
        bVar20 = *param_2;
        uVar18 = iVar11 + (int)((ulong)uVar18 * (ulong)(uint)(iVar5 - iVar11) >> 0x20) + 1;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        *(byte *)(lVar14 + 0x1f8c) = bVar20;
        uVar6 = *param_1;
        *(byte *)(lVar14 + 0x1fac) = (byte)(uVar18 >> 0x1f);
        *(undefined4 *)(lVar14 + 0x1fa0) = 0;
        *(uint *)(lVar14 + 0x1fa4) = uVar18 & (int)uVar18 >> 0x1f;
        *(uint *)(lVar14 + 0x1fa8) = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
        *(undefined1 *)(lVar14 + 0x1fad) = 1;
        *(undefined4 *)(lVar14 + 0x1f90) = uVar6;
      }
      uVar18 = (uint)local_78[0];
    }
    if (7 < uVar18) {
      return 1;
    }
    uVar16 = (ulong)uVar18;
    if (uVar16 + 1 == 8) {
      return 1;
    }
    pbVar15 = puVar10 + uVar16 + 1;
    uVar13 = FUN_02507924(local_78,pbVar15);
    if ((uVar13 & 1) == 0) {
      if (uVar16 + 2 == 8) {
        return 1;
      }
      pbVar15 = puVar10 + uVar16 + 2;
      uVar13 = FUN_02507924(local_78,pbVar15);
      if ((uVar13 & 1) == 0) {
        if (uVar16 + 3 == 8) {
          return 1;
        }
        pbVar15 = puVar10 + uVar16 + 3;
        uVar13 = FUN_02507924(local_78,pbVar15);
        if ((uVar13 & 1) == 0) {
          if (uVar16 + 4 == 8) {
            return 1;
          }
          pbVar15 = puVar10 + uVar16 + 4;
          uVar13 = FUN_02507924(local_78,pbVar15);
          if ((uVar13 & 1) == 0) {
            if (uVar16 + 5 == 8) {
              return 1;
            }
            pbVar15 = puVar10 + uVar16 + 5;
            uVar13 = FUN_02507924(local_78,pbVar15);
            if ((uVar13 & 1) == 0) {
              if (uVar16 + 6 == 8) {
                return 1;
              }
              pbVar15 = puVar10 + uVar16 + 6;
              uVar13 = FUN_02507924(local_78,pbVar15);
              if ((uVar13 & 1) == 0) {
                if (uVar16 + 7 == 8) {
                  return 1;
                }
                pbVar15 = puVar10 + uVar16 + 7;
                uVar13 = FUN_02507924(local_78,pbVar15);
                if ((uVar13 & 1) == 0) {
                  if (uVar18 == 0) {
                    return 1;
                  }
                  pbVar15 = puVar10 + uVar16 + 8;
                  FUN_02507924(local_78,pbVar15);
                }
              }
            }
          }
        }
      }
    }
    local_6c[0] = *pbVar15;
    if (7 < local_6c[0]) {
      return 1;
    }
    local_78[0] = local_6c[0];
  } while( true );
}

