
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_025310c0(byte *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  short *psVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  byte *pbVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  byte local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  
  bVar2 = *param_1;
  bVar18 = *PTR_DAT_04bb32e0;
  bVar17 = bVar2;
  if (7 < bVar2) {
    bVar17 = 0xff;
  }
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  if (bVar17 == bVar18) {
    FUN_02507c6c(&local_6c,1,1,1,0);
    local_74 = local_68;
    uVar15 = (ulong)(byte)local_6c;
    local_78[0] = 0xff;
    if ((byte)local_6c < 8) {
      local_78[0] = (byte)local_6c;
    }
    local_70 = local_64;
    if ((param_2 & 1) == 0) {
      if ((byte)local_6c < 8) {
        local_7c[0] = (byte)local_6c;
        uVar6 = FUN_025310c0(local_7c,0);
        puVar3 = PTR_DAT_04bb5038;
        while ((uVar6 & 1) == 0) {
          do {
            if (uVar15 == 7) goto LAB_02531788;
            uVar15 = uVar15 + 1;
            uVar6 = FUN_02507924(local_78,puVar3 + uVar15);
          } while ((uVar6 & 1) == 0);
          local_7c[0] = puVar3[uVar15];
          uVar15 = (ulong)local_7c[0];
          if (7 < local_7c[0]) goto LAB_02531788;
          local_78[0] = local_7c[0];
          uVar6 = FUN_025310c0(local_7c,0);
        }
        goto LAB_02531780;
      }
    }
    else if ((byte)local_6c < 8) {
      local_7c[0] = (byte)local_6c;
      uVar6 = FUN_025310c0(local_7c,0);
      puVar4 = PTR_DAT_04bb6298;
      puVar3 = PTR_DAT_04bb5038;
      while ((uVar6 & 1) == 0) {
        bVar17 = local_78[0];
        if (DAT_054f5738 == 0) {
          psVar9 = &DAT_054f0c08;
          cVar14 = DAT_054f0c6c;
          if ((DAT_054f0c70 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
            if (iVar5 != 0) {
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c6c = '\0';
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
            psVar9 = &DAT_054f0c08;
            bVar17 = local_78[0];
            cVar14 = DAT_054f0c6c;
          }
        }
        else {
          lVar8 = DAT_054f5738 + uVar15 * 0xd0 +
                  (ulong)(*(uint *)(DAT_054f5738 + uVar15 * 4 + 0xd68) & 1) * 0x68;
          psVar9 = (short *)(lVar8 + 0x6e8);
          cVar14 = *(char *)(lVar8 + 0x74c);
        }
        if ((cVar14 != '\0') && (*psVar9 == *(short *)puVar4 && *(int *)(psVar9 + 0x30) == 7))
        break;
        uVar15 = (ulong)bVar17;
        if ((7 < bVar17) || (uVar15 + 1 == 8)) goto LAB_02531788;
        pbVar16 = puVar3 + uVar15 + 1;
        local_78[0] = bVar17;
        uVar6 = FUN_02507924(local_78,pbVar16);
        if ((uVar6 & 1) == 0) {
          if (uVar15 + 2 == 8) goto LAB_02531788;
          pbVar16 = puVar3 + uVar15 + 2;
          uVar6 = FUN_02507924(local_78,pbVar16);
          if ((uVar6 & 1) == 0) {
            if (uVar15 + 3 == 8) goto LAB_02531788;
            pbVar16 = puVar3 + uVar15 + 3;
            uVar6 = FUN_02507924(local_78,pbVar16);
            if ((uVar6 & 1) == 0) {
              if (uVar15 + 4 == 8) goto LAB_02531788;
              pbVar16 = puVar3 + uVar15 + 4;
              uVar6 = FUN_02507924(local_78,pbVar16);
              if ((uVar6 & 1) == 0) {
                if (uVar15 + 5 == 8) goto LAB_02531788;
                pbVar16 = puVar3 + uVar15 + 5;
                uVar6 = FUN_02507924(local_78,pbVar16);
                if ((uVar6 & 1) == 0) {
                  if (uVar15 + 6 == 8) goto LAB_02531788;
                  pbVar16 = puVar3 + uVar15 + 6;
                  uVar6 = FUN_02507924(local_78,pbVar16);
                  if ((uVar6 & 1) == 0) {
                    if (uVar15 + 7 == 8) goto LAB_02531788;
                    pbVar16 = puVar3 + uVar15 + 7;
                    uVar6 = FUN_02507924(local_78,pbVar16);
                    if ((uVar6 & 1) == 0) {
                      if (bVar17 == 0) goto LAB_02531788;
                      pbVar16 = puVar3 + uVar15 + 8;
                      FUN_02507924(local_78,pbVar16);
                    }
                  }
                }
              }
            }
          }
        }
        local_7c[0] = *pbVar16;
        uVar15 = (ulong)local_7c[0];
        if (7 < local_7c[0]) goto LAB_02531788;
        local_78[0] = local_7c[0];
        uVar6 = FUN_025310c0(local_7c,0);
      }
      goto LAB_02531780;
    }
  }
  else {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar10 = (uint *)&DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar10 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar10 = (uint *)(DAT_054f5738 + 0x204);
      if (bVar2 < 8) {
        puVar10 = (uint *)(DAT_054f5738 + 0x204) + (ulong)bVar2 * 2;
      }
    }
    local_6c = 0x19;
    if ((*puVar10 >> 0x19 & 1) != 0) goto LAB_02531780;
    if ((DAT_054f5738 == 0) || (uVar15 = (ulong)*param_1, 7 < uVar15)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar9 = &DAT_054f0c08;
        cVar14 = DAT_054f0c6c;
        if (iVar5 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
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
          cVar14 = DAT_054f0c6c;
        }
        goto joined_r0x02531858;
      }
      psVar9 = &DAT_054f0c08;
      if (DAT_054f0c6c != '\0') goto LAB_025314b4;
LAB_025314d8:
      uVar19 = 0;
    }
    else {
      lVar8 = DAT_054f5738 + uVar15 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar15 * 4 + 0xd68) & 1) * 0x68;
      psVar9 = (short *)(lVar8 + 0x6e8);
      cVar14 = *(char *)(lVar8 + 0x74c);
joined_r0x02531858:
      if (cVar14 == '\0') goto LAB_025314d8;
LAB_025314b4:
      if ((*psVar9 != *(short *)PTR_DAT_04bb6298) ||
         (uVar19 = *(uint *)(psVar9 + 2), 0x148 < uVar19)) goto LAB_025314d8;
    }
    if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68), iVar5 != 0)) {
      DAT_054f0b60 = 0;
      __cxa_guard_release(&DAT_054f0b68);
    }
    lVar8 = DAT_054f5738;
    puVar4 = PTR_DAT_04bc2fe8;
    puVar3 = PTR_DAT_04bc2fe0;
    if (DAT_054f5738 == 0) {
      puVar10 = &DAT_054f0b60;
    }
    else {
      if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
        lVar13 = *(long *)(DAT_054f5738 + 0xd0);
        if (lVar13 == 0) {
LAB_02531604:
          puVar11 = (uint *)0x0;
        }
        else {
          puVar10 = *(uint **)(lVar13 + 8);
          if (((puVar10 != (uint *)0x0) &&
              (((*(uint *)(DAT_054f5738 + 0xe8) <= uVar19 ||
                (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (ulong)uVar19) != '\0')) &&
               (uVar19 < *puVar10)))) && ((puVar10[1] != 0 && ((ushort)puVar10[2] != 0)))) {
            iVar5 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              iVar5 = 0x1c;
            }
            puVar10 = (uint *)((ulong)(puVar10[1] * uVar19 + (uint)(ushort)puVar10[2] * 8 + iVar5) +
                              (long)puVar10);
            if (puVar10 != (uint *)0x0) goto LAB_02531610;
          }
          piVar12 = *(int **)(lVar13 + 8);
          puVar11 = (uint *)0x0;
          if (piVar12 != (int *)0x0) {
            if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0'))
               || ((*piVar12 == 0 || ((piVar12[1] == 0 || ((ulong)*(ushort *)(piVar12 + 2) == 0)))))
               ) goto LAB_02531604;
            lVar13 = 0xc;
            if (*(char *)((long)piVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            puVar11 = (uint *)((long)piVar12 + lVar13 + (ulong)*(ushort *)(piVar12 + 2) * 8);
          }
        }
      }
      else if (uVar19 < *(uint *)(DAT_054f5738 + 0x1e0)) {
        if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar19) {
          uVar19 = 0;
        }
        puVar10 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar19];
        if (puVar10 != (uint *)0x0) goto LAB_02531610;
        puVar11 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
      }
      else {
        puVar11 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
      }
      puVar10 = &DAT_054f0b60;
      if (puVar11 != (uint *)0x0) {
        puVar10 = puVar11;
      }
    }
LAB_02531610:
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bc2fe0;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar19 = *(uint *)(puVar4 + 0x60);
          if (-1 < (int)uVar19) {
            if (((char *)((ulong)uVar19 + (long)puVar10) != (char *)0x0) &&
               (*(char *)((ulong)uVar19 + (long)puVar10) != '\0')) goto LAB_02531780;
            break;
          }
          if (uVar19 != 0xffffffff) break;
        }
        lVar13 = (long)puVar10 - (ulong)*puVar10;
        if ((*puVar10 == 0) || (lVar13 == 0)) break;
        lVar1 = 0xc;
        if (*(char *)(lVar13 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar13 == 0) break;
        uVar15 = (ulong)*(ushort *)(lVar13 + 8);
        *(undefined4 *)(puVar4 + 0x60) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar12 = (int *)(lVar1 + lVar13 + 4);
        while (piVar12[-1] != 0x5681a1c3) {
          piVar12 = piVar12 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_0253170c;
        }
        iVar5 = 0;
        if (*piVar12 != -1) {
          iVar5 = *piVar12;
        }
        *(int *)(puVar4 + 0x60) = iVar5;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0253170c:
    if ((param_2 & 1) != 0) {
      if ((lVar8 == 0) || (uVar15 = (ulong)*param_1, 7 < uVar15)) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar9 = &DAT_054f0c08;
          if (iVar5 != 0) {
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c6c = '\0';
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
          psVar9 = &DAT_054f0c08;
        }
      }
      else {
        psVar9 = (short *)(lVar8 + uVar15 * 0xd0 +
                           (ulong)(*(uint *)(lVar8 + uVar15 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
      }
      if ((((char)psVar9[0x32] != '\0') && (*psVar9 == *(short *)PTR_DAT_04bb6298)) &&
         (*(int *)(psVar9 + 0x30) == 7)) {
LAB_02531780:
        uVar7 = 1;
        goto LAB_0253178c;
      }
    }
  }
LAB_02531788:
  uVar7 = 0;
LAB_0253178c:
  return uVar7;
}

