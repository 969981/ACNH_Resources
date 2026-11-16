
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02549590(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  ulong uVar11;
  byte local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar9 = &DAT_054f08d0;
      if (iVar3 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar9 = &DAT_054f08d0;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x200);
  }
  local_5c = 4;
  if ((*puVar9 >> 4 & 1) != 0) {
    return true;
  }
  FUN_02507c6c(&local_5c,1,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  local_64 = local_58;
  local_68[0] = 0xff;
  if ((local_5c & 0xff) < 8) {
    local_68[0] = (byte)local_5c;
  }
  local_60 = local_54;
  if ((local_5c & 0xff) < 8) {
    bVar1 = (byte)local_5c;
    if (DAT_054f5738 == 0) goto LAB_02549680;
    do {
      piVar6 = (int *)(DAT_054f5738 + (ulong)bVar1 * 8 + 0x204);
      while( true ) {
        bVar1 = local_68[0];
        if (*piVar6 < 0) {
          return true;
        }
        uVar11 = (ulong)local_68[0];
        if ((7 < local_68[0]) || (uVar11 + 1 == 8)) goto LAB_02549640;
        pbVar7 = puVar2 + uVar11 + 1;
        uVar4 = FUN_02507924(local_68,pbVar7);
        if ((uVar4 & 1) == 0) {
          if (uVar11 + 2 == 8) goto LAB_02549640;
          pbVar7 = puVar2 + uVar11 + 2;
          uVar4 = FUN_02507924(local_68,pbVar7);
          if ((uVar4 & 1) == 0) {
            if (uVar11 + 3 == 8) goto LAB_02549640;
            pbVar7 = puVar2 + uVar11 + 3;
            uVar4 = FUN_02507924(local_68,pbVar7);
            if ((uVar4 & 1) == 0) {
              if (uVar11 + 4 == 8) goto LAB_02549640;
              pbVar7 = puVar2 + uVar11 + 4;
              uVar4 = FUN_02507924(local_68,pbVar7);
              if ((uVar4 & 1) == 0) {
                if (uVar11 + 5 == 8) goto LAB_02549640;
                pbVar7 = puVar2 + uVar11 + 5;
                uVar4 = FUN_02507924(local_68,pbVar7);
                if ((uVar4 & 1) == 0) {
                  if (uVar11 + 6 == 8) goto LAB_02549640;
                  pbVar7 = puVar2 + uVar11 + 6;
                  uVar4 = FUN_02507924(local_68,pbVar7);
                  if ((uVar4 & 1) == 0) {
                    if (uVar11 + 7 == 8) goto LAB_02549640;
                    pbVar7 = puVar2 + uVar11 + 7;
                    uVar4 = FUN_02507924(local_68,pbVar7);
                    if ((uVar4 & 1) == 0) {
                      if (bVar1 == 0) goto LAB_02549640;
                      pbVar7 = puVar2 + uVar11 + 8;
                      FUN_02507924(local_68,pbVar7);
                    }
                  }
                }
              }
            }
          }
        }
        bVar1 = *pbVar7;
        if (7 < bVar1) goto LAB_02549640;
        local_68[0] = bVar1;
        if (DAT_054f5738 != 0) break;
LAB_02549680:
        piVar6 = (int *)&DAT_054f0958;
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          piVar6 = (int *)&DAT_054f0958;
        }
      }
    } while( true );
  }
LAB_02549640:
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar9 = &DAT_054f08c0;
      if (iVar3 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar9 = &DAT_054f08c0;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x1fc);
  }
  local_5c = 0;
  if ((*puVar9 & 1) != 0) {
    return true;
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_0254988c:
    if (7 < *pbVar7) {
LAB_02549898:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar1 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar1 != 0xffffffffffffffff) {
          puVar9 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar1 & 0xffffffffU) * 0x20;
          if (7 < bVar1) {
            puVar9 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar9 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        uVar5 = (uint)*pbVar7;
        if (*pbVar7 < 8) goto LAB_02549908;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0254988c;
      }
      goto LAB_02549898;
    }
  }
  uVar5 = (uint)*pbVar7;
  if (7 < uVar5) {
    uVar5 = 0xff;
  }
LAB_02549908:
  if ((DAT_054f5738 == 0) || (7 < uVar5)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar10 = &DAT_054f0c08;
      if (iVar3 != 0) {
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
      psVar10 = &DAT_054f0c08;
    }
  }
  else {
    psVar10 = (short *)(DAT_054f5738 + (ulong)uVar5 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + (ulong)uVar5 * 4 + 0xd68) & 1) * 0x68 +
                       0x6e8);
  }
  if (((char)psVar10[0x32] == '\0') || (*psVar10 != *(short *)PTR_DAT_04bb6298)) {
    return false;
  }
  return *(int *)(psVar10 + 0x30) != 1;
}

