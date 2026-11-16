
/* WARNING: Removing unreachable block (ram,0x029ef5c8) */
/* WARNING: Removing unreachable block (ram,0x029ef5d0) */

void FUN_029ee360(long *param_1,int *param_2)

{
  ushort uVar1;
  MutexType *pMVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  short sVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ulong uVar14;
  long lVar15;
  ushort *puVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  long lVar20;
  undefined8 uVar21;
  uint *puVar22;
  long *plVar23;
  long *plVar24;
  int *piVar25;
  short *psVar26;
  long *plVar27;
  uint uVar28;
  char cVar29;
  uint *puVar30;
  ulong uVar31;
  int iVar32;
  undefined8 *puVar33;
  uint uVar34;
  short sVar35;
  ushort uVar36;
  short sVar37;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  plVar24 = (long *)PTR_DAT_04bb26a8;
  if ((int)param_1[0x25b] == 0) {
    uVar36 = 0xffff;
    sVar35 = 1;
    goto LAB_029eeb44;
  }
  if (*(char *)((long)param_2 + 5) != '\0') {
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(undefined4 *)(lVar20 + 0xa7684) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    *(undefined4 *)(lVar20 + 0xa7688) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    *(undefined4 *)(param_1 + 0x25b) = 1;
    *(undefined1 *)((long)param_1 + 0x139b) = 0;
  }
  puVar8 = PTR_DAT_04bb27d0;
  if (*(char *)((long)param_2 + 6) == '\0') {
    if (*(char *)((long)param_1 + 0x139b) == '\0') {
      return;
    }
  }
  else {
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 == 0xffffffffffffffff) {
LAB_029ee428:
      *(undefined1 *)((long)param_1 + 0x1395) = 1;
    }
    else {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar10)) goto LAB_029ee428;
      lVar20 = *plVar24;
      *(undefined4 *)(lVar20 + 0xa7684) = 0xffffffff;
      *(undefined1 *)(lVar20 + 0xa7680) = 1;
      *(undefined2 *)(param_1 + 0x26f) = 0xffff;
      *(undefined4 *)(lVar20 + 0xa7688) = 0xffffffff;
      *(undefined1 *)(lVar20 + 0xa7681) = 1;
      *(undefined4 *)(param_1 + 0x25b) = 1;
    }
    *(undefined1 *)((long)param_1 + 0x139b) = 1;
  }
  if ((char)param_2[1] == '\0') {
    if (*(char *)((long)param_1 + 0x1394) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x273) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x1394) = 1;
    lVar20 = **(long **)puVar8;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar10)) goto LAB_029ee61c;
    }
    lVar20 = *plVar24;
    pMVar2 = (MutexType *)(lVar20 + 0x89710);
    nn::os::LockMutex(pMVar2);
    uVar21 = *(undefined8 *)(lVar20 + 0x896e8);
    nn::os::UnlockMutex(pMVar2);
    local_80._0_4_ =
         CONCAT13((char)((ulong)uVar21 >> 0x10),
                  CONCAT12((char)((ulong)uVar21 >> 8),(short)((ulong)uVar21 >> 0x30)));
    local_80._0_6_ =
         CONCAT15((char)((ulong)uVar21 >> 0x20),
                  CONCAT14((char)((ulong)uVar21 >> 0x18),(uint)local_80));
    local_80._0_7_ = CONCAT16((char)((ulong)uVar21 >> 0x28),(undefined6)local_80);
    bVar10 = FUN_0273f0a0(&DAT_055efed8);
    plVar24 = (long *)PTR_DAT_04bb26a8;
    if ((bVar10 & 1) == 0) {
      if (((char)param_1[0x273] == '\0') && (0 < *param_2)) {
        *(undefined1 *)((long)param_1 + 0x1396) = 0;
        if ((int)param_1[0x25b] != 0) {
          *(undefined1 *)((long)param_1 + 0x1395) = 1;
        }
        *(undefined2 *)(param_1 + 0x273) = 1;
      }
    }
    else {
      if ((*(char *)((long)param_1 + 0x1397) != '\0') &&
         (*(undefined1 *)((long)param_1 + 0x1396) = 0, (int)param_1[0x25b] != 0)) {
        *(undefined1 *)((long)param_1 + 0x1395) = 1;
      }
      plVar24 = (long *)PTR_DAT_04bb26a8;
      if (*(char *)((long)param_1 + 0x139a) == '\0') {
        *(undefined1 *)((long)param_1 + 0x139a) = 1;
      }
      else {
        lVar20 = FUN_00a8255c(&local_80,(long)param_1 + 0x12ec);
        if ((lVar20 - 0xe10U < 0xffffffffffffe3e1) &&
           (*(undefined1 *)((long)param_1 + 0x1396) = 0, (int)param_1[0x25b] != 0)) {
          *(undefined1 *)((long)param_1 + 0x1395) = 1;
        }
      }
      *(long *)((long)param_1 + 0x12ec) = local_80;
    }
    *(byte *)((long)param_1 + 0x1397) = (bVar10 ^ 0xff) & 1;
    if (*(char *)((long)param_1 + 0x1396) == '\0') {
      *(undefined1 *)((long)param_1 + 0x1396) = 1;
      uVar11 = FUN_0273f0a0(&DAT_055efed8);
      lVar20 = *(long *)(*plVar24 + 0x19f7e0);
      if ((lVar20 != 0) &&
         ((0 < *(int *)(lVar20 + 0x1c0) ||
          (((*(long *)(lVar20 + 0xb0) != 0 &&
            (piVar25 = *(int **)(*(long *)(lVar20 + 0xb0) + 8), piVar25 != (int *)0x0)) &&
           (*piVar25 != 0)))))) {
        uVar12 = FUN_029ec430((long)param_1 + 0x12dc,&local_80,(uVar11 ^ 1) & 1);
        puVar9 = PTR_DAT_04bc4150;
        puVar8 = PTR_DAT_04bc4148;
        uVar12 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
          if (((((*(long *)(lVar20 + 0xb0) != 0) &&
                (puVar22 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar22 != (uint *)0x0)) &&
               ((*(uint *)(lVar20 + 200) <= uVar12 ||
                (*(char *)(*(long *)(lVar20 + 0xd0) + (ulong)uVar12) != '\0')))) &&
              ((uVar12 < *puVar22 && (puVar22[1] != 0)))) && ((ushort)puVar22[2] != 0)) {
            iVar32 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              iVar32 = 0x1c;
            }
            puVar22 = (uint *)((ulong)(puVar22[1] * uVar12 + (uint)(ushort)puVar22[2] * 8 + iVar32)
                              + (long)puVar22);
            goto joined_r0x029ee8a8;
          }
        }
        else if (uVar12 < *(uint *)(lVar20 + 0x1c0)) {
          if (*(uint *)(lVar20 + 0x1b0) <= uVar12) {
            uVar12 = 0;
          }
          puVar22 = *(uint **)(*(long *)(lVar20 + 0x1b8) + (ulong)uVar12 * 8);
joined_r0x029ee8a8:
          if (puVar22 != (uint *)0x0) {
            uVar12 = *puVar22;
            if (uVar12 != 0) {
              cVar29 = *PTR_DAT_04bc4148;
              uVar17 = 0x12d;
              do {
                if (cVar29 == '\0') {
                  cVar29 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
                  uVar12 = *puVar22;
                }
                else {
                  uVar34 = *(uint *)(puVar9 + 0xc);
                  if (-1 < (int)uVar34) {
                    if ((undefined2 *)((ulong)uVar34 + (long)puVar22) == (undefined2 *)0x0) break;
                    uVar17 = *(undefined2 *)((ulong)uVar34 + (long)puVar22);
                    goto LAB_029ef974;
                  }
                  if (uVar34 != 0xffffffff) goto LAB_029ef974;
                }
                lVar20 = (long)puVar22 - (ulong)uVar12;
                if (((ulong)uVar12 == 0) || (lVar20 == 0)) goto LAB_029ef974;
                lVar15 = 0xc;
                if (*(char *)(lVar20 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                if (lVar15 + lVar20 == 0) goto LAB_029ef974;
                uVar31 = (ulong)*(ushort *)(lVar20 + 8);
                *(undefined4 *)(puVar9 + 0xc) = 0xfffffffe;
                if (uVar31 == 0) goto LAB_029ef974;
                piVar25 = (int *)(lVar15 + lVar20 + 4);
                while (piVar25[-1] != 0xf30a50e) {
                  piVar25 = piVar25 + 2;
                  uVar31 = uVar31 - 1;
                  if (uVar31 == 0) goto LAB_029ef974;
                }
                iVar32 = 0;
                if (*piVar25 != -1) {
                  iVar32 = *piVar25;
                }
                *(int *)(puVar9 + 0xc) = iVar32;
                uVar12 = *puVar22;
                if (uVar12 == 0) goto LAB_029ef974;
              } while( true );
            }
            uVar17 = 0x12d;
LAB_029ef974:
            *(undefined2 *)((long)param_1 + 0x1382) = uVar17;
            uVar12 = *puVar22;
            if (uVar12 != 0) {
              cVar29 = *puVar8;
              uVar17 = 0x1c2;
              do {
                if (cVar29 == '\0') {
                  cVar29 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
                  uVar12 = *puVar22;
                }
                else {
                  uVar34 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar34) {
                    if ((undefined2 *)((ulong)uVar34 + (long)puVar22) == (undefined2 *)0x0) break;
                    uVar17 = *(undefined2 *)((ulong)uVar34 + (long)puVar22);
                    goto LAB_029efa48;
                  }
                  if (uVar34 != 0xffffffff) goto LAB_029efa48;
                }
                lVar20 = (long)puVar22 - (ulong)uVar12;
                if (((ulong)uVar12 == 0) || (lVar20 == 0)) goto LAB_029efa48;
                lVar15 = 0xc;
                if (*(char *)(lVar20 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                if (lVar15 + lVar20 == 0) goto LAB_029efa48;
                uVar31 = (ulong)*(ushort *)(lVar20 + 8);
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar31 == 0) goto LAB_029efa48;
                piVar25 = (int *)(lVar15 + lVar20 + 4);
                while (piVar25[-1] != 0x45ffea9a) {
                  piVar25 = piVar25 + 2;
                  uVar31 = uVar31 - 1;
                  if (uVar31 == 0) goto LAB_029efa48;
                }
                iVar32 = 0;
                if (*piVar25 != -1) {
                  iVar32 = *piVar25;
                }
                *(int *)(puVar9 + 8) = iVar32;
                uVar12 = *puVar22;
                if (uVar12 == 0) goto LAB_029efa48;
              } while( true );
            }
            uVar17 = 0x1c2;
LAB_029efa48:
            *(undefined2 *)(param_1 + 0x272) = uVar17;
          }
        }
      }
      lVar20 = *(long *)(*plVar24 + 0x19f7e8);
      if ((lVar20 != 0) &&
         ((0 < *(int *)(lVar20 + 0x1c0) ||
          (((*(long *)(lVar20 + 0xb0) != 0 &&
            (piVar25 = *(int **)(*(long *)(lVar20 + 0xb0) + 8), piVar25 != (int *)0x0)) &&
           (*piVar25 != 0)))))) {
        uVar11 = FUN_029ed2f0((long)param_1 + 0x12dc,&local_80,(uVar11 ^ 1) & 1);
        puVar9 = PTR_DAT_04bc4168;
        puVar8 = PTR_DAT_04bc4160;
        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
          if ((((*(long *)(lVar20 + 0xb0) != 0) &&
               (puVar22 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar22 != (uint *)0x0)) &&
              ((*(uint *)(lVar20 + 200) <= uVar11 ||
               (*(char *)(*(long *)(lVar20 + 0xd0) + (ulong)uVar11) != '\0')))) &&
             (((uVar11 < *puVar22 && (puVar22[1] != 0)) && ((ushort)puVar22[2] != 0)))) {
            iVar32 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              iVar32 = 0x1c;
            }
            puVar22 = (uint *)((ulong)(puVar22[1] * uVar11 + (uint)(ushort)puVar22[2] * 8 + iVar32)
                              + (long)puVar22);
            goto joined_r0x029efc04;
          }
        }
        else if (uVar11 < *(uint *)(lVar20 + 0x1c0)) {
          if (*(uint *)(lVar20 + 0x1b0) <= uVar11) {
            uVar11 = 0;
          }
          puVar22 = *(uint **)(*(long *)(lVar20 + 0x1b8) + (ulong)uVar11 * 8);
joined_r0x029efc04:
          if (puVar22 != (uint *)0x0) {
            uVar11 = *puVar22;
            if (uVar11 != 0) {
              cVar29 = *PTR_DAT_04bc4160;
              uVar17 = 0xc9;
              do {
                if (cVar29 == '\0') {
                  cVar29 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
                  uVar11 = *puVar22;
                }
                else {
                  uVar12 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar12) {
                    if ((undefined2 *)((ulong)uVar12 + (long)puVar22) == (undefined2 *)0x0) break;
                    uVar17 = *(undefined2 *)((ulong)uVar12 + (long)puVar22);
                    goto LAB_029efc20;
                  }
                  if (uVar12 != 0xffffffff) goto LAB_029efc20;
                }
                lVar20 = (long)puVar22 - (ulong)uVar11;
                if (((ulong)uVar11 == 0) || (lVar20 == 0)) goto LAB_029efc20;
                lVar15 = 0xc;
                if (*(char *)(lVar20 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                if (lVar15 + lVar20 == 0) goto LAB_029efc20;
                uVar31 = (ulong)*(ushort *)(lVar20 + 8);
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar31 == 0) goto LAB_029efc20;
                piVar25 = (int *)(lVar15 + lVar20 + 4);
                while (piVar25[-1] != 0xf30a50e) {
                  piVar25 = piVar25 + 2;
                  uVar31 = uVar31 - 1;
                  if (uVar31 == 0) goto LAB_029efc20;
                }
                iVar32 = 0;
                if (*piVar25 != -1) {
                  iVar32 = *piVar25;
                }
                *(int *)(puVar9 + 8) = iVar32;
                uVar11 = *puVar22;
                if (uVar11 == 0) goto LAB_029efc20;
              } while( true );
            }
            uVar17 = 0xc9;
LAB_029efc20:
            *(undefined2 *)((long)param_1 + 0x1384) = uVar17;
            uVar11 = *puVar22;
            if (uVar11 != 0) {
              cVar29 = *puVar8;
              while (cVar29 == '\0') {
                cVar29 = '\x01';
                *(undefined8 *)puVar9 = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                *(undefined4 *)(puVar9 + 0x18) = 0xffffffff;
                uVar11 = *puVar22;
LAB_029efc78:
                puVar30 = (uint *)(ulong)uVar11;
                uVar17 = 0x1e0;
                if ((puVar30 == (uint *)0x0) || (puVar22 == puVar30)) goto LAB_029efcf4;
                lVar20 = 0xc;
                if (*(char *)((long)puVar22 + (10 - (long)puVar30)) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar22 + (lVar20 - (long)puVar30);
                if (lVar20 == 0) goto LAB_029efcfc;
                uVar31 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar30));
                *(undefined4 *)(puVar9 + 4) = 0xfffffffe;
                if (uVar31 == 0) goto LAB_029efcfc;
                piVar25 = (int *)(lVar20 + 4);
                while (piVar25[-1] != 0x45ffea9a) {
                  piVar25 = piVar25 + 2;
                  uVar31 = uVar31 - 1;
                  if (uVar31 == 0) goto LAB_029efcfc;
                }
                iVar32 = 0;
                if (*piVar25 != -1) {
                  iVar32 = *piVar25;
                }
                *(int *)(puVar9 + 4) = iVar32;
                uVar11 = *puVar22;
                if (uVar11 == 0) goto LAB_029efcfc;
              }
              uVar12 = *(uint *)(puVar9 + 4);
              if ((int)uVar12 < 0) {
                if (uVar12 == 0xffffffff) goto LAB_029efc78;
              }
              else if ((undefined2 *)((ulong)uVar12 + (long)puVar22) != (undefined2 *)0x0) {
                uVar17 = *(undefined2 *)((ulong)uVar12 + (long)puVar22);
LAB_029efcf4:
                *(undefined2 *)((long)param_1 + 0x1392) = uVar17;
                goto LAB_029ee61c;
              }
            }
LAB_029efcfc:
            *(undefined2 *)((long)param_1 + 0x1392) = 0x1e0;
          }
        }
      }
    }
  }
LAB_029ee61c:
  nn::os::LockMutex((MutexType *)(param_1 + 0x263));
  uVar36 = *(ushort *)(param_1 + 0x267);
  sVar35 = *(short *)((long)param_1 + 0x133e);
  sVar6 = *(short *)((long)param_1 + 0x133a);
  uVar17 = *(undefined2 *)((long)param_1 + 0x133c);
  bVar10 = *(byte *)(param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x268) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x263));
  puVar8 = PTR_DAT_04bb27d0;
  lVar20 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar20 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) goto LAB_029eea14;
  pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
  if (7 < bVar5) {
    pbVar3 = (byte *)(lVar20 + 0x48);
  }
  if ((((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar5)) || (6 < bVar10 - 1))
  goto LAB_029eea14;
  switch((uint)bVar10) {
  case 1:
    if ((int)param_1[0x25b] != 0) {
      *(undefined1 *)((long)param_1 + 0x1395) = 1;
    }
    goto LAB_029eea14;
  case 2:
    *(short *)((long)param_1 + 0x137a) = sVar6;
    lVar20 = *plVar24;
    *(int *)(lVar20 + 0xa7688) = (int)sVar6;
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    uVar19 = 2;
    break;
  case 3:
    *(short *)((long)param_1 + 0x137a) = sVar6;
    lVar20 = *plVar24;
    *(int *)(lVar20 + 0xa7688) = (int)sVar6;
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    uVar19 = 4;
    break;
  case 4:
    *(short *)((long)param_1 + 0x137a) = sVar6;
    *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
    *(short *)((long)param_1 + 0x138a) = sVar35;
    lVar20 = *plVar24;
    *(int *)(lVar20 + 0xa7684) = (int)(short)uVar36;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    FUN_02a0d600(lVar20 + 0xa7660,0xbd0309d1,0x100);
    uVar19 = 7;
    goto LAB_029ee990;
  case 5:
    *(short *)((long)param_1 + 0x137a) = sVar6;
    *(short *)((long)param_1 + 0x138a) = sVar35;
    lVar20 = *plVar24;
    *(int *)(lVar20 + 0xa7684) = (int)(short)uVar36;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    FUN_02a0d600(lVar20 + 0xa7660,0xbd0309d1,0x100);
    uVar19 = 5;
LAB_029ee990:
    *(undefined2 *)(param_1 + 0x271) = 0;
    *(ushort *)(param_1 + 0x26f) = uVar36;
    *(undefined4 *)(param_1 + 0x25b) = uVar19;
    goto LAB_029eea14;
  case 6:
    *(ushort *)((long)param_1 + 0x137e) = uVar36;
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    lVar20 = *plVar24;
    *(undefined2 *)((long)param_1 + 0x138c) = uVar17;
    *(uint *)(lVar20 + 0xa7684) = (uint)uVar36;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined4 *)(param_1 + 0x25b) = 10;
    uVar17 = *(undefined2 *)((long)param_1 + 0x138c);
    goto LAB_029eea10;
  case 7:
    *(ushort *)(param_1 + 0x270) = uVar36;
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    lVar20 = *plVar24;
    *(undefined2 *)((long)param_1 + 0x138e) = uVar17;
    *(uint *)(lVar20 + 0xa7684) = (uint)uVar36;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined4 *)(param_1 + 0x25b) = 0xb;
    uVar17 = *(undefined2 *)((long)param_1 + 0x138e);
LAB_029eea10:
    *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
    goto LAB_029eea14;
  }
  *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
  *(undefined4 *)(param_1 + 0x25b) = uVar19;
LAB_029eea14:
  if (*(char *)((long)param_1 + 0x1395) != '\0') {
    plVar23 = *(long **)puVar8;
    lVar20 = *plVar23;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 == 0xffffffffffffffff) {
LAB_029eea58:
      *(undefined4 *)((long)param_1 + 0x137e) = *(undefined4 *)((long)param_1 + 0x1382);
      *(int *)((long)param_1 + 0x138c) = (int)param_1[0x272];
      if (1 < *(byte *)(*plVar23 + 0x476)) {
        local_68 = 0;
        local_62 = 0;
        local_80 = 0x10003ffffffff;
        local_78 = 1;
        local_64 = 0xff00;
        if (-1 < (int)param_1[0x26a]) {
          FUN_01db1df0(*plVar23 + 0x480,(int)param_1[0x26a],&local_68,&local_80,10,0);
          plVar23 = *(long **)puVar8;
        }
      }
    }
    else {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar10)) goto LAB_029eea58;
    }
    lVar20 = *plVar24;
    *(undefined4 *)(lVar20 + 0xa7684) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    *(undefined4 *)(lVar20 + 0xa7688) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    lVar20 = *plVar23;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 == 0xffffffffffffffff) {
LAB_029eeb30:
      *(undefined2 *)((long)param_1 + 0x1386) = 3;
      uVar19 = 0xd;
    }
    else {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar10)) goto LAB_029eeb30;
      uVar19 = 1;
    }
    *(undefined4 *)(param_1 + 0x25b) = uVar19;
    *(undefined2 *)((long)param_1 + 0x1395) = 0;
  }
LAB_029eeb44:
  uVar1 = (short)param_1[0x271] + 1;
  *(ushort *)(param_1 + 0x271) = uVar1;
  puVar8 = PTR_DAT_04bb27d0;
  switch((int)param_1[0x25b]) {
  case 2:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 == 0) {
      *(undefined4 *)(param_1 + 0x25b) = 3;
      *(undefined2 *)((long)param_1 + 0x1386) = 0x1e;
    }
    break;
  case 3:
  case 4:
    sVar6 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar6;
    if (sVar6 != 0) {
      return;
    }
    *(undefined2 *)((long)param_1 + 0x137a) = 0xffff;
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 == 0xffffffffffffffff) {
LAB_029eebd8:
      uVar36 = *(ushort *)((long)param_1 + 0x137c);
      iVar32 = (int)(short)uVar36;
      if (uVar36 == 0x40) {
        sVar35 = 0x9ab;
        if (1 < *(byte *)((long)param_1 + 0x139d)) {
          sVar35 = 0xa6e;
        }
      }
      else {
        if (-1 < (short)uVar36) {
          local_80 = CONCAT44(0xffffffff,(uint)local_80);
          local_68 = (int)(short)uVar36;
          FUN_029efe90(&local_68,&local_80);
          if (-1 < local_80) {
            sVar35 = local_80._4_2_ + 300;
            if (*(byte *)((long)param_1 + 0x139d) < 2) {
              sVar35 = local_80._4_2_;
            }
            goto LAB_029ef144;
          }
        }
        sVar35 = 0xa6e;
      }
    }
    else {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) == 0) || (*(byte *)(lVar20 + 0x472) == bVar10)) goto LAB_029eebd8;
      iVar32 = (int)(short)uVar36;
    }
LAB_029ef144:
    puVar8 = PTR_DAT_04bb26a8;
    *(short *)((long)param_1 + 0x138a) = sVar35;
    lVar20 = *(long *)puVar8;
    *(int *)(lVar20 + 0xa7684) = iVar32;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    FUN_02a0d600(lVar20 + 0xa7660,0xbd0309d1,0x100);
    *(undefined2 *)(param_1 + 0x271) = 0;
    *(ushort *)(param_1 + 0x26f) = uVar36;
    goto LAB_029ef188;
  case 5:
    if (uVar1 < *(ushort *)((long)param_1 + 0x138a)) {
      return;
    }
    if (-1 < (short)*(ushort *)((long)param_1 + 0x137a)) {
      lVar20 = *(long *)PTR_DAT_04bb26a8;
      *(uint *)(lVar20 + 0xa7688) = (uint)*(ushort *)((long)param_1 + 0x137a);
      *(undefined1 *)(lVar20 + 0xa7681) = 1;
      *(undefined4 *)(param_1 + 0x25b) = 6;
      *(undefined2 *)((long)param_1 + 0x1386) = 0xc3;
      return;
    }
    *(undefined4 *)(param_1 + 0x25b) = 8;
    uVar17 = 0xd2;
    goto LAB_029ef124;
  case 6:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x25b) = 8;
    uVar17 = 0x69;
LAB_029ef124:
    *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
    *(char *)((long)param_1 + 0x139e) = (char)uVar17;
    break;
  case 7:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(int *)(lVar20 + 0xa7688) = (int)*(short *)((long)param_1 + 0x137a);
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    *(undefined2 *)((long)param_1 + 0x137a) = 0xffff;
LAB_029ef188:
    *(undefined4 *)(param_1 + 0x25b) = 5;
    break;
  case 8:
    sVar35 = *(short *)((long)param_1 + 0x1386);
    if (sVar35 != 0) {
      *(ushort *)((long)param_1 + 0x1386) = sVar35 - 1U;
      if (sVar35 == 1) {
        lVar20 = *(long *)PTR_DAT_04bb26a8;
        *(undefined4 *)(lVar20 + 0xa7684) = 0xffffffff;
        *(undefined1 *)(lVar20 + 0xa7680) = 1;
        *(undefined2 *)(param_1 + 0x26f) = 0xffff;
        return;
      }
      uVar11 = 0;
      if (*(byte *)((long)param_1 + 0x139e) != 0) {
        uVar11 = ((uint)(ushort)(sVar35 - 1U) << 8) / (uint)*(byte *)((long)param_1 + 0x139e);
      }
      FUN_02a0d600(*(long *)PTR_DAT_04bb26a8 + 0xa7660,0xbd0309d1,uVar11);
      return;
    }
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar10)) {
LAB_029ef130:
        *(undefined4 *)(param_1 + 0x25b) = 1;
        return;
      }
    }
    bVar10 = *(byte *)((long)param_1 + 0x139d);
    iVar32 = bVar10 - 1;
    *(char *)((long)param_1 + 0x139d) = (char)iVar32;
    if (iVar32 == 0) {
      *(undefined4 *)(param_1 + 0x25b) = 9;
      *(undefined2 *)((long)param_1 + 0x1386) = 0x15;
      return;
    }
    if (bVar10 == 2) {
      if ((ulong)*(byte *)((long)param_1 + 0x13a1) == 0) {
        sVar35 = 0x65;
      }
      else {
        uVar11 = *(uint *)((long)param_1 + 0x12dc);
        *(int *)((long)param_1 + 0x12dc) = (int)param_1[0x25c];
        uVar11 = uVar11 ^ uVar11 << 0xb;
        *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)((long)param_1 + 0x12e4);
        uVar12 = *(uint *)(param_1 + 0x25d);
        *(uint *)((long)param_1 + 0x12e4) = uVar12;
        uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
        *(uint *)(param_1 + 0x25d) = uVar11;
        sVar35 = (short)((ulong)*(byte *)((long)param_1 + 0x13a1) * (ulong)uVar11 >> 0x20) + 0x65;
      }
    }
    else {
      sVar35 = -1;
    }
    *(short *)((long)param_1 + 0x137a) = sVar35;
    FUN_029efde0(param_1);
    FUN_029efd08(param_1);
    plVar24 = *(long **)puVar8;
    *(undefined4 *)(param_1 + 0x25b) = 5;
    if (*(byte *)(*plVar24 + 0x476) < 2) {
      return;
    }
    local_78 = 5;
    local_80 = CONCAT26(*(undefined2 *)((long)param_1 + 0x138a),0x300000000);
    local_80 = CONCAT44(local_80._4_4_,
                        *(uint *)((long)param_1 + 0x137a) >> 0x10 |
                        *(uint *)((long)param_1 + 0x137a) << 0x10);
    goto LAB_029ef208;
  case 9:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(uint *)(lVar20 + 0xa7684) = (uint)*(ushort *)((long)param_1 + 0x137e);
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined4 *)(param_1 + 0x25b) = 10;
    uVar17 = *(undefined2 *)((long)param_1 + 0x138c);
    *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      return;
    }
    uVar18 = *(undefined2 *)((long)param_1 + 0x137e);
    local_78 = 6;
    goto LAB_029eee64;
  case 10:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    plVar24 = *(long **)PTR_DAT_04bb27d0;
    lVar20 = *plVar24;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar10)) goto LAB_029ef130;
    }
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(uint *)(lVar20 + 0xa7684) = (uint)*(ushort *)(param_1 + 0x270);
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined4 *)(param_1 + 0x25b) = 0xb;
    uVar17 = *(undefined2 *)((long)param_1 + 0x138e);
    *(undefined2 *)((long)param_1 + 0x1386) = uVar17;
    if (*(byte *)(*plVar24 + 0x476) < 2) {
      return;
    }
    uVar18 = (undefined2)param_1[0x270];
    local_78 = 7;
LAB_029eee64:
    local_80 = CONCAT26(1,CONCAT24(uVar17,0xffff0000));
    local_80 = CONCAT62(local_80._2_6_,uVar18);
LAB_029ef208:
    FUN_01de7124(param_1 + 0x269,&local_80,10);
    break;
  case 0xb:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    lVar20 = *(long *)PTR_DAT_04bb26a8;
    *(undefined4 *)(lVar20 + 0xa7684) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7680) = 1;
    *(undefined2 *)(param_1 + 0x26f) = 0xffff;
    *(undefined4 *)(lVar20 + 0xa7688) = 0xffffffff;
    *(undefined1 *)(lVar20 + 0xa7681) = 1;
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      pbVar3 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
      if (7 < bVar10) {
        pbVar3 = (byte *)(lVar20 + 0x48);
      }
      if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar10)) goto LAB_029ef130;
    }
    *(undefined4 *)(param_1 + 0x25b) = 0xc;
    *(undefined2 *)((long)param_1 + 0x1386) = 0x18;
    break;
  case 0xc:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 == 0) {
      *(undefined1 *)((long)param_1 + 0x1395) = 1;
    }
    break;
  case 0xd:
    sVar35 = *(short *)((long)param_1 + 0x1386) + -1;
    *(short *)((long)param_1 + 0x1386) = sVar35;
    if (sVar35 != 0) {
      return;
    }
    bVar10 = *(byte *)(param_1 + 0x274);
    plVar24 = (long *)param_1[1];
    plVar23 = (long *)PTR_DAT_04bb26a8;
    pcVar7 = PTR_DAT_04bc4178;
    puVar33 = (undefined8 *)PTR_DAT_04bc4180;
    while( true ) {
      PTR_DAT_04bb26a8 = (undefined *)plVar23;
      PTR_DAT_04bc4178 = pcVar7;
      PTR_DAT_04bc4180 = (undefined *)puVar33;
      if (plVar24 == param_1) break;
      plVar23 = (long *)plVar24[1];
      plVar27 = plVar23;
      if (*plVar24 != 0) {
        *(long **)(*plVar24 + 8) = plVar23;
        plVar27 = (long *)plVar24[1];
      }
      if (plVar27 != (long *)0x0) {
        *plVar27 = *plVar24;
      }
      *plVar24 = 0;
      plVar24[1] = 0;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      plVar24[-1] = param_1[3];
      param_1[3] = (long)(plVar24 + -1);
      plVar24 = plVar23;
      plVar23 = (long *)PTR_DAT_04bb26a8;
      pcVar7 = PTR_DAT_04bc4178;
      puVar33 = (undefined8 *)PTR_DAT_04bc4180;
    }
    lVar20 = *(long *)(*plVar23 + 0x19f790);
    if (lVar20 != 0) {
      uVar31 = 0;
      cVar29 = *pcVar7;
      do {
        if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
          if (((*(long *)(lVar20 + 0xb0) == 0) ||
              (puVar22 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar22 == (uint *)0x0)) ||
             (*puVar22 <= uVar31)) break;
          if (((*(uint *)(lVar20 + 200) <= uVar31) ||
              (*(char *)(*(long *)(lVar20 + 0xd0) + uVar31) != '\0')) &&
             ((puVar22[1] != 0 && ((ushort)puVar22[2] != 0)))) {
            iVar32 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              iVar32 = 0x1c;
            }
            puVar22 = (uint *)((ulong)(puVar22[1] * (int)uVar31 + (uint)(ushort)puVar22[2] * 8 +
                                      iVar32) + (long)puVar22);
            goto joined_r0x029ef368;
          }
        }
        else {
          if (*(uint *)(lVar20 + 0x1c0) <= uVar31) break;
          uVar14 = uVar31 & 0xffffffff;
          if (*(uint *)(lVar20 + 0x1b0) <= uVar31) {
            uVar14 = 0;
          }
          puVar22 = *(uint **)(*(long *)(lVar20 + 0x1b8) + uVar14 * 8);
joined_r0x029ef368:
          if ((puVar22 != (uint *)0x0) && (uVar11 = *puVar22, uVar11 != 0)) {
            do {
              if (cVar29 == '\0') {
                *puVar33 = 0xffffffffffffffff;
                puVar33[1] = 0xffffffffffffffff;
                cVar29 = '\x01';
                puVar33[2] = 0xffffffffffffffff;
                uVar11 = *puVar22;
                *pcVar7 = '\x01';
              }
              else {
                uVar12 = *(uint *)((long)puVar33 + 4);
                if (-1 < (int)uVar12) {
                  if ((((ushort *)((ulong)uVar12 + (long)puVar22) != (ushort *)0x0) &&
                      (uVar36 = *(ushort *)((ulong)uVar12 + (long)puVar22),
                      0 < (short)uVar36 && uVar36 <= bVar10)) && ((int)param_1[2] < (int)param_1[5])
                     ) {
                    puVar13 = (ushort *)param_1[3];
                    if (puVar13 != (ushort *)0x0) {
                      param_1[3] = *(long *)puVar13;
                    }
                    *puVar13 = uVar36;
                    puVar13[8] = 0;
                    puVar13[9] = 0;
                    puVar13[10] = 0;
                    puVar13[0xb] = 0;
                    puVar16 = puVar13 + 4;
                    puVar16[0] = 0;
                    puVar16[1] = 0;
                    puVar16[2] = 0;
                    puVar16[3] = 0;
                    lVar15 = *param_1;
                    *param_1 = (long)puVar16;
                    *(long **)(puVar13 + 8) = param_1;
                    *(long *)puVar16 = lVar15;
                    if (lVar15 != 0) {
                      *(ushort **)(lVar15 + 8) = puVar16;
                    }
                    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                  }
                  break;
                }
                if (uVar12 != 0xffffffff) break;
              }
              if (((ulong)uVar11 == 0) || (lVar15 = (long)puVar22 - (ulong)uVar11, lVar15 == 0))
              break;
              lVar4 = 0xc;
              if (*(char *)(lVar15 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              if (lVar4 + lVar15 == 0) break;
              uVar14 = (ulong)*(ushort *)(lVar15 + 8);
              *(undefined4 *)((long)puVar33 + 4) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar25 = (int *)(lVar4 + lVar15 + 4);
              while (piVar25[-1] != -0x2b76d2e7) {
                piVar25 = piVar25 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ef230;
              }
              iVar32 = 0;
              if (*piVar25 != -1) {
                iVar32 = *piVar25;
              }
              *(int *)((long)puVar33 + 4) = iVar32;
              uVar11 = *puVar22;
              if (uVar11 == 0) break;
            } while( true );
          }
        }
LAB_029ef230:
        uVar31 = uVar31 + 1;
      } while( true );
    }
    FUN_038aaa70(param_1,(long)param_1 + 0x12dc);
    if (((char)param_1[0x273] == '\0') || (*(char *)((long)param_1 + 0x1399) != '\0')) {
      uVar11 = *(uint *)(param_1 + 2);
      if ((int)uVar11 < 2) {
        uVar12 = 0;
        goto LAB_029ef4e8;
      }
      uVar12 = 0;
      if ((param_1[1] != 0) && (psVar26 = (short *)(param_1[1] + -8), psVar26 != (short *)0x0)) {
        uVar12 = (uint)(*psVar26 == *(short *)((long)param_1 + 0x137c));
      }
      *(char *)((long)param_1 + 0x139c) = (char)uVar12;
LAB_029ef4fc:
      local_6c = 0;
      uVar12 = uVar12 & 0xff;
      if (uVar11 <= uVar12) {
LAB_029ef580:
        cVar29 = '\0';
        if (uVar11 != 0) {
          cVar29 = (char)((uVar12 + 1) / uVar11);
        }
        *(char *)((long)param_1 + 0x139c) = (char)(uVar12 + 1) - cVar29 * (char)uVar11;
        goto LAB_029ef590;
      }
      uVar34 = uVar12 + 1 & 3;
      plVar24 = param_1;
      if (2 < uVar12) {
        uVar28 = uVar12 + 1 & 0x1fc;
        do {
          uVar28 = uVar28 - 4;
          plVar24 = *(long **)(*(long *)(*(long *)(plVar24[1] + 8) + 8) + 8);
        } while (uVar28 != 0);
      }
      for (; uVar34 != 0; uVar34 = uVar34 - 1) {
        plVar24 = (long *)plVar24[1];
      }
      if ((plVar24 == (long *)0x0) || (plVar24 + -1 == (long *)0x0)) goto LAB_029ef580;
      sVar35 = (short)plVar24[-1];
      uVar34 = (uint)sVar35;
      cVar29 = '\0';
      if (uVar11 != 0) {
        cVar29 = (char)((uVar12 + 1) / uVar11);
      }
      *(short *)((long)param_1 + 0x137c) = sVar35;
      *(char *)((long)param_1 + 0x139c) = (char)(uVar12 + 1) - cVar29 * (char)uVar11;
      if (-1 < sVar35) goto LAB_029ef598;
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(param_1 + 2);
      if (uVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          uVar28 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
          uVar34 = uVar28 + 1;
          plVar24 = param_1;
          if (6 < uVar28) {
            uVar28 = uVar34 & 0xfffffff8;
            do {
              uVar28 = uVar28 - 8;
              plVar24 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  plVar24[1] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar28 != 0);
          }
          for (uVar34 = uVar34 & 7; uVar34 != 0; uVar34 = uVar34 - 1) {
            plVar24 = (long *)plVar24[1];
          }
          if (((plVar24 != (long *)0x0) && (plVar24 + -1 != (long *)0x0)) &&
             ((short)plVar24[-1] == 0x5f)) goto LAB_029ef4d8;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar11);
        uVar12 = uVar11;
      }
LAB_029ef4d8:
      if (uVar11 <= uVar12) {
        uVar12 = 0;
      }
      *(undefined1 *)((long)param_1 + 0x1399) = 1;
LAB_029ef4e8:
      *(char *)((long)param_1 + 0x139c) = (char)uVar12;
      if (0 < (int)uVar11) goto LAB_029ef4fc;
LAB_029ef590:
      uVar34 = 1;
      *(undefined2 *)((long)param_1 + 0x137c) = 1;
LAB_029ef598:
      local_6c = 0;
      local_80 = CONCAT44(local_80._4_4_,0xffffffff);
      local_70 = uVar34 & 0xffff;
      FUN_029efe90(&local_70,&local_80);
      uVar11 = (uint)local_80 & ((int)(uint)local_80 >> 0x1f ^ 0xffffffffU);
    }
    local_74 = 0;
    if (0x95 < uVar11) {
      uVar12 = *(uint *)((long)param_1 + 0x12dc);
      *(int *)((long)param_1 + 0x12dc) = (int)param_1[0x25c];
      uVar12 = uVar12 ^ uVar12 << 0xb;
      *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)((long)param_1 + 0x12e4);
      uVar28 = *(uint *)(param_1 + 0x25d);
      *(uint *)((long)param_1 + 0x12e4) = uVar28;
      uVar12 = uVar12 >> 8 ^ uVar28 >> 0x13 ^ uVar12 ^ uVar28;
      *(uint *)(param_1 + 0x25d) = uVar12;
      if ((uVar12 & 1) != 0) {
        if (uVar11 < 0x12d) {
          local_6c = 2;
        }
        else {
          local_6c = 1;
        }
      }
    }
    if ((ulong)*(byte *)((long)param_1 + 0x139f) == 0) {
      iVar32 = 1;
    }
    else {
      uVar12 = *(uint *)((long)param_1 + 0x12dc);
      *(int *)((long)param_1 + 0x12dc) = (int)param_1[0x25c];
      uVar12 = uVar12 ^ uVar12 << 0xb;
      *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)((long)param_1 + 0x12e4);
      uVar28 = *(uint *)(param_1 + 0x25d);
      *(uint *)((long)param_1 + 0x12e4) = uVar28;
      uVar12 = uVar12 >> 8 ^ uVar28 >> 0x13 ^ uVar12 ^ uVar28;
      *(uint *)(param_1 + 0x25d) = uVar12;
      iVar32 = (int)((ulong)*(byte *)((long)param_1 + 0x139f) * (ulong)uVar12 >> 0x20) + 1;
    }
    uVar17 = (undefined2)iVar32;
    *(undefined2 *)((long)param_1 + 0x137a) = uVar17;
    *(undefined1 *)((long)param_1 + 0x139d) = 4;
    if (local_6c == 1) {
      sVar6 = *(short *)((long)param_1 + 0x137c);
      sVar35 = 0x3c;
      if (300 < uVar11) {
        sVar35 = (short)uVar11 + -300;
      }
      *(short *)((long)param_1 + 0x1386) = sVar35;
      sVar37 = 0xa6e;
      if ((sVar6 != 0x40) && (-1 < sVar6)) {
        local_80 = CONCAT44(0xffffffff,(uint)local_80);
        local_68 = (int)sVar6;
        FUN_029efe90(&local_68,&local_80);
        sVar37 = local_80._4_2_ + 300;
        if (*(byte *)((long)param_1 + 0x139d) < 2) {
          sVar37 = local_80._4_2_;
        }
        if (local_80 < 0) {
          sVar37 = 0xa6e;
        }
      }
      lVar20 = *plVar23;
      *(short *)((long)param_1 + 0x138a) = sVar37;
      *(int *)(lVar20 + 0xa7684) = (int)sVar6;
      *(undefined1 *)(lVar20 + 0xa7680) = 1;
      FUN_02a0d600(lVar20 + 0xa7660,0xbd0309d1,0x100);
      *(undefined2 *)(param_1 + 0x271) = 0;
      *(short *)(param_1 + 0x26f) = sVar6;
      *(undefined4 *)(param_1 + 0x25b) = 7;
      plVar24 = *(long **)PTR_DAT_04bb27d0;
      if (*(byte *)(*plVar24 + 0x476) < 2) {
        return;
      }
      iVar32 = (int)param_1[0x26a];
      local_80._0_4_ = CONCAT22(uVar17,(short)uVar34);
      local_80._0_6_ = CONCAT24(sVar35,(uint)local_80);
      local_78 = 4;
      local_80 = CONCAT26(*(undefined2 *)((long)param_1 + 0x138a),(undefined6)local_80);
      if (iVar32 < 0) {
        return;
      }
    }
    else {
      local_68 = uVar34;
      if (local_6c == 2) {
        sVar35 = 0x3c;
        if (uVar11 < 0x12d) {
          sVar35 = 0x12d - (short)uVar11;
        }
        lVar20 = *plVar23;
        *(short *)((long)param_1 + 0x1386) = sVar35;
        *(int *)(lVar20 + 0xa7688) = iVar32;
        *(undefined1 *)(lVar20 + 0xa7681) = 1;
        *(undefined4 *)(param_1 + 0x25b) = 4;
        puVar33 = (undefined8 *)PTR_DAT_04bb27d0;
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          return;
        }
        if (uVar34 == 0x40) {
          uVar18 = 0x9ab;
          if (1 < *(byte *)((long)param_1 + 0x139d)) {
            uVar18 = 0xa6e;
          }
        }
        else {
          uVar18 = 0xa6e;
          if (-1 < (int)uVar34) {
            local_80._4_4_ = -1;
            FUN_029efe90(&local_68,&local_80);
            iVar32 = local_80._4_4_ + 300;
            if (*(byte *)((long)param_1 + 0x139d) < 2) {
              iVar32 = local_80._4_4_;
            }
            uVar18 = (undefined2)iVar32;
            if (local_80._4_4_ < 0) {
              uVar18 = 0xa6e;
            }
          }
        }
        local_78 = 3;
      }
      else {
        lVar20 = *plVar23;
        sVar35 = 300;
        *(int *)(lVar20 + 0xa7688) = iVar32;
        *(undefined1 *)(lVar20 + 0xa7681) = 1;
        *(undefined2 *)((long)param_1 + 0x1386) = 300;
        *(undefined4 *)(param_1 + 0x25b) = 2;
        puVar33 = (undefined8 *)PTR_DAT_04bb27d0;
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          return;
        }
        if (uVar34 == 0x40) {
          uVar18 = 0x9ab;
          if (1 < *(byte *)((long)param_1 + 0x139d)) {
            uVar18 = 0xa6e;
          }
        }
        else {
          uVar18 = 0xa6e;
          if (-1 < (int)uVar34) {
            local_80._4_4_ = -1;
            FUN_029efe90(&local_68,&local_80);
            iVar32 = local_80._4_4_ + 300;
            if (*(byte *)((long)param_1 + 0x139d) < 2) {
              iVar32 = local_80._4_4_;
            }
            uVar18 = (undefined2)iVar32;
            if (local_80._4_4_ < 0) {
              uVar18 = 0xa6e;
            }
          }
        }
        local_78 = 2;
      }
      local_80._0_4_ = CONCAT22(uVar17,(short)uVar34);
      local_80._0_6_ = CONCAT24(sVar35,(uint)local_80);
      local_80 = CONCAT26(uVar18,(undefined6)local_80);
      iVar32 = (int)param_1[0x26a];
      if (iVar32 < 0) {
        return;
      }
      plVar24 = (long *)*puVar33;
    }
    local_62 = 0;
    local_64 = 0xff00;
    local_68 = 0;
    FUN_01db1df0(*plVar24 + 0x480,iVar32,&local_68,&local_80,10,0);
  }
  return;
}

