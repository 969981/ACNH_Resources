
undefined8 FUN_0252c550(ulong param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  byte local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_0252c5c4:
    if (7 < *pbVar11) {
LAB_0252c5d0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar15 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar11 = (byte *)(lVar15 + 0x471);
          }
        }
        uVar18 = (uint)*pbVar11;
        if (*pbVar11 < 8) goto LAB_0252c640;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar11 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0252c5c4;
      }
      goto LAB_0252c5d0;
    }
  }
  uVar18 = (uint)*pbVar11;
  if (7 < uVar18) {
    uVar18 = 0xff;
  }
LAB_0252c640:
  if (DAT_054f5738 == 0) {
    sVar19 = 0;
  }
  else {
    sVar19 = *(short *)(DAT_054f5738 + 0x11c8);
  }
  FUN_02507c6c(local_6c,7,1,0,0);
  puVar9 = PTR_DAT_04bc31b0;
  puVar8 = PTR_DAT_04bc1220;
  puVar7 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb5038;
  puVar5 = PTR_DAT_04bb27d0;
  uVar20 = (uint)local_6c[0];
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if ((param_1 & 1) == 0) {
    if (local_6c[0] < 8) {
      do {
        local_7c[0] = (byte)uVar20;
        if ((7 < uVar18) || (uVar18 != uVar20)) {
          pbVar11 = (byte *)FUN_02582a24(local_7c,1);
          plVar16 = *(long **)puVar5;
          bVar3 = *pbVar11;
          lVar15 = *plVar16;
          bVar4 = *(byte *)(lVar15 + 0x473);
          if ((long)(char)bVar4 == 0xffffffffffffffff) {
            if (*puVar8 != bVar3) goto LAB_0252c98c;
LAB_0252c96c:
            sVar14 = *(short *)puVar7;
          }
          else {
            puVar1 = (uint *)(lVar15 + 0x48);
            puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
            if (7 < bVar4) {
              puVar2 = puVar1;
            }
            pbVar11 = puVar8;
            if ((*puVar2 & 8) != 0) {
              pbVar11 = (byte *)(lVar15 + 0x473);
            }
            if (*pbVar11 == bVar3) goto LAB_0252c96c;
            sVar14 = -1;
            if ((bVar3 != 0xff) && ((*puVar2 >> 3 & 1) != 0)) {
              puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
              if (7 < bVar3) {
                puVar2 = puVar1;
              }
              if (((byte)*puVar2 >> 3 & 1) == 0) {
LAB_0252c98c:
                sVar14 = -1;
              }
              else {
                lVar15 = plVar16[2];
                if ((*(byte *)(lVar15 + 0x1e2) == 0xff) || (*(byte *)(lVar15 + 0x1e2) != bVar3)) {
                  if (7 < bVar3) goto LAB_0252c98c;
                  sVar14 = *(short *)(lVar15 + (ulong)bVar3 * 0xc + 0x108);
                }
                else {
                  sVar14 = *(short *)(lVar15 + 0x1e0);
                }
              }
            }
          }
          if (sVar14 == sVar19) {
            return 1;
          }
        }
        uVar13 = (ulong)uVar20;
        do {
          if (uVar13 == 7) {
            return 0;
          }
          uVar13 = uVar13 + 1;
          uVar12 = FUN_02507924(local_78,puVar6 + uVar13);
        } while ((uVar12 & 1) == 0);
        local_78[0] = puVar6[uVar13];
        uVar20 = (uint)local_78[0];
        if (7 < uVar20) {
          return 0;
        }
      } while( true );
    }
  }
  else if (local_6c[0] < 8) {
    do {
      local_7c[0] = (byte)uVar20;
      if ((7 < uVar18) || (uVar18 != uVar20)) {
        pbVar11 = (byte *)FUN_02582a24(local_7c,1);
        plVar16 = *(long **)puVar5;
        bVar3 = *pbVar11;
        lVar15 = *plVar16;
        bVar4 = *(byte *)(lVar15 + 0x473);
        if ((long)(char)bVar4 == 0xffffffffffffffff) {
          if (*puVar8 != bVar3) goto LAB_0252c7a8;
LAB_0252c788:
          sVar14 = *(short *)puVar7;
        }
        else {
          puVar1 = (uint *)(lVar15 + 0x48);
          puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar2 = puVar1;
          }
          pbVar11 = puVar8;
          if ((*puVar2 & 8) != 0) {
            pbVar11 = (byte *)(lVar15 + 0x473);
          }
          if (*pbVar11 == bVar3) goto LAB_0252c788;
          sVar14 = -1;
          if ((bVar3 != 0xff) && ((*puVar2 >> 3 & 1) != 0)) {
            puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar2 = puVar1;
            }
            if (((byte)*puVar2 >> 3 & 1) == 0) {
LAB_0252c7a8:
              sVar14 = -1;
            }
            else {
              lVar17 = plVar16[2];
              if ((*(byte *)(lVar17 + 0x1e2) == 0xff) || (*(byte *)(lVar17 + 0x1e2) != bVar3)) {
                if (7 < bVar3) goto LAB_0252c7a8;
                sVar14 = *(short *)(lVar17 + (ulong)bVar3 * 0xc + 0x108);
              }
              else {
                sVar14 = *(short *)(lVar17 + 0x1e0);
              }
            }
          }
        }
        if (sVar14 == sVar19) {
          return 1;
        }
        uVar13 = (ulong)local_7c[0];
        if (local_7c[0] < 8) {
          if (1 < *(byte *)(lVar15 + 0x476)) {
            bVar3 = *(byte *)(lVar15 + uVar13 * 4 + 0x44e);
            if ((long)(char)bVar3 != 0xffffffffffffffff) {
              pbVar11 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
              if (7 < bVar3) {
                pbVar11 = (byte *)(lVar15 + 0x48);
              }
              if ((*pbVar11 >> 3 & 1) != 0) goto LAB_0252c820;
            }
            goto LAB_0252c7f8;
          }
          iVar10 = FUN_02582d8c(local_7c,2);
          sVar14 = -1;
          if ((-1 < iVar10) && (uVar13 = (ulong)local_7c[0], local_7c[0] < 8)) {
LAB_0252c820:
            sVar14 = *(short *)(puVar9 + uVar13 * 0x30 + 9);
          }
        }
        else {
LAB_0252c7f8:
          sVar14 = -1;
        }
        if (sVar14 == sVar19) {
          return 1;
        }
      }
      uVar13 = (ulong)uVar20;
      do {
        if (uVar13 == 7) {
          return 0;
        }
        uVar13 = uVar13 + 1;
        uVar12 = FUN_02507924(local_78,puVar6 + uVar13);
      } while ((uVar12 & 1) == 0);
      local_78[0] = puVar6[uVar13];
      uVar20 = (uint)local_78[0];
      if (7 < uVar20) {
        return 0;
      }
    } while( true );
  }
  return 0;
}

