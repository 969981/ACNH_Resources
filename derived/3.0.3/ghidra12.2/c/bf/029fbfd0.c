
/* WARNING: Type propagation algorithm not settling */

void FUN_029fbfd0(long param_1,long param_2,long param_3,undefined1 param_4,uint param_5,
                 long *param_6,long param_7)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  bool bVar20;
  float fVar21;
  int local_1cc;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined1 *local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  long local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined1 *local_70;
  
  cVar4 = *(char *)(param_7 + 2);
  lVar19 = *(long *)(param_7 + 8);
  bVar7 = cVar4 != '\0';
  bVar8 = *(char *)(param_7 + 1) == '\0';
  if (-1 < lVar19) {
    lVar10 = *param_6 - *(long *)(param_7 + 0x10);
    if (lVar10 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar11 = 0;
      if (*(long *)PTR_DAT_04bb29d0 != 0) {
        lVar11 = (lVar10 * 1000) / *(long *)PTR_DAT_04bb29d0;
      }
    }
    else {
      lVar11 = 0;
      if (DAT_05ae7888 != 0) {
        lVar11 = lVar10 / DAT_05ae7888;
      }
      lVar11 = lVar11 * 1000;
    }
    lVar19 = lVar11 + lVar19;
  }
  cVar5 = *(char *)(param_7 + 3);
  lVar10 = *(long *)(param_3 + 0x18);
  puVar3 = (undefined1 *)(param_1 + 0xd8) + (ulong)*(byte *)(param_1 + 0xd0) * 0x18;
  if (0xc5 < *(byte *)(param_1 + 0xd0)) {
    puVar3 = (undefined1 *)(param_1 + 0xd8);
  }
  puVar3[8] = 0xf6;
  *puVar3 = param_4;
  *(undefined2 *)(puVar3 + 10) = 0xfff6;
  *(undefined8 *)(puVar3 + 0x10) = 0xfffffffffffffff6;
  if (*(char *)(param_3 + 10) == '\0') {
LAB_029fc174:
    cVar6 = *(char *)(param_3 + 8);
joined_r0x029fc17c:
    bVar20 = false;
  }
  else {
    if ((param_5 & 1) == 0) {
      if (bVar7 || bVar8) {
        cVar6 = *(char *)(param_3 + 0xb);
        cVar18 = *(char *)(param_2 + 8);
        if (*(char *)(param_2 + 8) != cVar6) {
          *(char *)(param_2 + 8) = cVar6;
          uVar16 = 0xfffffff6;
          if (cVar6 == '\0') {
            uVar16 = 0xffffffff;
          }
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined4 *)(param_2 + 0x20) = uVar16;
          cVar18 = cVar6;
        }
        if (cVar4 != '\0') goto LAB_029fc14c;
      }
      else if (cVar5 != '\0') {
        puVar3[8] = *(undefined1 *)(param_3 + 0xb);
        goto LAB_029fc150;
      }
      goto LAB_029fc174;
    }
    if (cVar4 == '\0') {
      if ((cVar5 == '\0') || (cVar6 = *(char *)(param_3 + 0xb), *(char *)(param_2 + 8) == cVar6))
      goto LAB_029fc174;
      *(char *)(param_2 + 8) = cVar6;
      uVar16 = 0xfffffff6;
      if (cVar6 == '\0') {
        uVar16 = 0xffffffff;
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x20) = uVar16;
      cVar6 = *(char *)(param_3 + 8);
      goto joined_r0x029fc17c;
    }
    cVar6 = *(char *)(param_3 + 0xb);
    cVar18 = *(char *)(param_2 + 8);
    if (*(char *)(param_2 + 8) != cVar6) {
      *(char *)(param_2 + 8) = cVar6;
      uVar16 = 0xfffffff6;
      if (cVar6 == '\0') {
        uVar16 = 0xffffffff;
      }
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x20) = uVar16;
      cVar18 = cVar6;
    }
LAB_029fc14c:
    puVar3[8] = cVar18;
LAB_029fc150:
    bVar20 = true;
    cVar6 = *(char *)(param_3 + 8);
  }
  if (cVar6 != '\0') {
    if ((param_5 & 1) == 0) {
      if (bVar7 || bVar8) {
        if (*(int *)(param_3 + 0xc) != *(int *)(param_2 + 0xc)) {
          *(int *)(param_2 + 0x20) = *(int *)(param_3 + 0xc);
        }
        if (cVar4 != '\0') goto LAB_029fc1c8;
      }
      else if (cVar5 != '\0') {
        iVar14 = *(int *)(param_3 + 0xc);
        goto LAB_029fc1cc;
      }
    }
    else if (cVar4 == '\0') {
      if ((cVar5 != '\0') && (*(int *)(param_3 + 0xc) != *(int *)(param_2 + 0xc))) {
        *(int *)(param_2 + 0x20) = *(int *)(param_3 + 0xc);
      }
    }
    else {
      iVar14 = *(int *)(param_3 + 0xc);
      if (iVar14 == *(int *)(param_2 + 0xc)) {
LAB_029fc1c8:
        iVar14 = *(int *)(param_2 + 0x20);
      }
      else {
        *(int *)(param_2 + 0x20) = iVar14;
      }
LAB_029fc1cc:
      bVar20 = true;
      *(short *)(puVar3 + 10) = (short)iVar14;
    }
  }
  lVar11 = DAT_05ae7888;
  if (*(char *)(param_3 + 9) == '\0') {
LAB_029fc330:
    if (((param_5 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
      iVar14 = *(int *)(param_2 + 0x20);
      if ((-10 < iVar14) && (*(long *)(param_2 + 0x28) <= *param_6)) {
        if (iVar14 < 1) {
          *(int *)(param_2 + 0xc) = iVar14;
          iVar13 = -1;
          *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
          *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x28);
        }
        else {
          local_1b8 = local_1a8;
          local_1a8[0] = 0;
          uStack_1b0 = 0x10000000000;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          puStack_1c0 = &DAT_040e5c7a;
          local_1cc = 0;
          if (iVar14 != 99999) {
            local_1cc = iVar14;
          }
          local_1c8 = puVar1;
          FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0xff;
          local_90 = 0;
          uStack_88 = 0;
          local_70 = local_1b8;
          local_80 = 0;
          puStack_78 = puVar1;
          uVar17 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&puStack_78);
          if (((((uVar17 & 1) == 0) || (local_a0 == 0)) || (*(uint *)(local_a0 + 0x18) == 0)) ||
             (plVar2 = (long *)((ulong)*(uint *)(local_a0 + 0x18) + local_a0),
             *plVar2 != 0x101feff464e494d)) {
            *(int *)(param_2 + 0xc) = iVar14;
          }
          else {
            *(int *)(param_2 + 0xc) = iVar14;
            *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)((long)plVar2 + 0x14);
            *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((long)plVar2 + 0x1c);
          }
          *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x28);
          lVar10 = *param_6 - *(long *)(param_2 + 0x28);
          if (lVar10 == 0) {
            iVar13 = 0;
          }
          else {
            if (lVar10 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
              lVar11 = 0;
              if (*(long *)PTR_DAT_04bb29d0 != 0) {
                lVar11 = (lVar10 * 1000000) / *(long *)PTR_DAT_04bb29d0;
              }
            }
            else {
              if (lVar10 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
                lVar15 = 1000;
                lVar11 = 0;
                if (*(long *)PTR_DAT_04bb29d0 != 0) {
                  lVar11 = (lVar10 * 1000) / *(long *)PTR_DAT_04bb29d0;
                }
              }
              else {
                lVar11 = 0;
                if (DAT_05ae7888 != 0) {
                  lVar11 = lVar10 / DAT_05ae7888;
                }
                lVar15 = 1000000;
              }
              lVar11 = lVar11 * lVar15;
            }
            fVar21 = (float)*(int *)(param_2 + 0x30) * (float)(((double)lVar11 / 1000.0) / 1000.0);
            uVar12 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar12 = (uint)(fVar21 < 0.0);
            }
            iVar13 = (int)fVar21 - uVar12;
            uVar17 = (long)*(int *)(param_2 + 0x34) + 48000;
            if (uVar17 <= (ulong)(long)iVar13) {
              iVar13 = (int)uVar17;
            }
          }
        }
        iVar14 = -10;
        *(int *)(param_2 + 0x10) = iVar13;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x20) = 0xfffffff6;
      }
      if (*(int *)(param_2 + 0xc) < 1) {
        if ((iVar14 == -10) && (*(char *)(param_2 + 8) != '\0')) {
          *(undefined4 *)(param_2 + 0xc) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
          lVar10 = *param_6;
          *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
          *(long *)(param_2 + 0x18) = lVar10;
          if (bVar7 || bVar8) {
            lVar11 = *param_6;
            FUN_029e3558(&local_1b8,param_1 + 0x1398);
            lVar10 = *(long *)PTR_DAT_04bb26a8;
            uVar9 = FUN_0277d6c4(&local_1b8);
            for (lVar10 = *(long *)(lVar10 + 0x19f800); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8))
            {
              while (*(ushort *)(lVar10 + 0x20) <= uVar9) {
                if (uVar9 <= *(ushort *)(lVar10 + 0x20)) goto LAB_029fc870;
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_029fc868;
              }
            }
            goto LAB_029fc868;
          }
        }
      }
      else {
        lVar10 = *param_6 - *(long *)(param_2 + 0x18);
        if (lVar10 == 0) {
          iVar14 = 0;
          uVar17 = (long)*(int *)(param_2 + 0x34) + 48000;
        }
        else {
          if (lVar10 + 0x8637bd05af6U < 0x10c6f7a0b5ec) {
            lVar11 = 0;
            if (*(long *)PTR_DAT_04bb29d0 != 0) {
              lVar11 = (lVar10 * 1000000) / *(long *)PTR_DAT_04bb29d0;
            }
          }
          else {
            if (lVar10 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
              lVar15 = 1000;
              lVar11 = 0;
              if (*(long *)PTR_DAT_04bb29d0 != 0) {
                lVar11 = (lVar10 * 1000) / *(long *)PTR_DAT_04bb29d0;
              }
            }
            else {
              lVar11 = 0;
              if (DAT_05ae7888 != 0) {
                lVar11 = lVar10 / DAT_05ae7888;
              }
              lVar15 = 1000000;
            }
            lVar11 = lVar11 * lVar15;
          }
          fVar21 = (float)*(int *)(param_2 + 0x30) * (float)(((double)lVar11 / 1000.0) / 1000.0);
          uVar12 = 0;
          if (fVar21 != (float)(int)fVar21) {
            uVar12 = (uint)(fVar21 < 0.0);
          }
          iVar14 = (int)fVar21 - uVar12;
          uVar17 = (long)*(int *)(param_2 + 0x34) + 48000;
          if (uVar17 <= (ulong)(long)iVar14) {
            iVar14 = (int)uVar17;
          }
        }
        *(int *)(param_2 + 0x10) = iVar14;
        if (uVar17 <= (ulong)(long)iVar14) {
          *(undefined8 *)(param_2 + 0x30) = 0xffffffffffffffff;
          *(int *)(param_2 + 0xc) = *(char *)(param_2 + 8) + -1;
          lVar10 = *param_6;
          *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
          *(long *)(param_2 + 0x18) = lVar10;
          if (*(char *)(param_2 + 8) != 0 && (bVar7 || bVar8)) {
            lVar11 = *param_6;
            FUN_029e3558(&local_1b8,param_1 + 0x1398);
            lVar10 = *(long *)PTR_DAT_04bb26a8;
            uVar9 = FUN_0277d6c4(&local_1b8);
            for (lVar10 = *(long *)(lVar10 + 0x19f800); lVar10 != 0; lVar10 = *(long *)(lVar10 + 8))
            {
              while (*(ushort *)(lVar10 + 0x20) <= uVar9) {
                if (uVar9 <= *(ushort *)(lVar10 + 0x20)) goto LAB_029fc870;
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 == 0) goto LAB_029fc868;
              }
            }
LAB_029fc868:
            uVar16 = 0;
            goto LAB_029fc874;
          }
        }
      }
    }
  }
  else {
    uVar17 = (ulong)*(uint *)(param_3 + 0x10);
    if ((param_5 & 1) != 0) {
      if (cVar4 == '\0') {
        if (cVar5 != '\0') {
          *(long *)(param_2 + 0x28) =
               (*(long *)PTR_DAT_04bb29d0 * (lVar10 - lVar19)) / 1000 + *param_6;
        }
      }
      else {
        if (cVar5 == '\0') {
          lVar15 = DAT_05ae7888 * uVar17;
          lVar10 = *param_6 + lVar15;
        }
        else {
          lVar11 = *(long *)PTR_DAT_04bb29d0;
          lVar10 = (lVar11 * (lVar10 - lVar19)) / 1000 + *param_6;
          lVar15 = lVar11 * uVar17;
        }
        *(long *)(param_2 + 0x28) = lVar10;
        if (lVar15 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
          lVar10 = 0;
          if (lVar11 != 0) {
            lVar10 = (lVar15 * 1000) / lVar11;
          }
        }
        else {
          lVar10 = uVar17 * 1000;
        }
        bVar20 = true;
        *(long *)(puVar3 + 0x10) = lVar10 + lVar19;
      }
      goto LAB_029fc330;
    }
    if (!(!bVar7 && !bVar8)) {
      if (cVar5 == '\0') {
        *(ulong *)(param_2 + 0x28) = *param_6 + DAT_05ae7888 * uVar17;
      }
      else {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        *(long *)(param_2 + 0x28) = (lVar11 * (lVar10 - lVar19)) / 1000 + *param_6;
      }
      if (cVar4 == '\0') goto LAB_029fc8c4;
      if (lVar11 * uVar17 + 0x20c49ba5e353f7 < 0x4189374bc6a7ee) {
        lVar10 = 0;
        if (lVar11 != 0) {
          lVar10 = (long)(lVar11 * uVar17 * 1000) / lVar11;
        }
      }
      else {
        lVar10 = uVar17 * 1000;
      }
      lVar19 = lVar10 + lVar19;
      goto LAB_029fc8d8;
    }
    if (cVar5 != '\0') goto LAB_029fc8d8;
  }
LAB_029fc8c4:
  if (!bVar20) goto LAB_029fc8e8;
LAB_029fc8dc:
  *(char *)(param_1 + 0xd0) = *(char *)(param_1 + 0xd0) + '\x01';
LAB_029fc8e8:
  *(undefined8 *)(param_3 + 0x18) = 0xffffffffffffffff;
  *(undefined2 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined1 *)(param_3 + 10) = 0;
  return;
LAB_029fc870:
  uVar16 = *(undefined4 *)(lVar10 + 0x24);
LAB_029fc874:
  *(undefined4 *)(param_2 + 0x20) = uVar16;
  lVar10 = *(long *)PTR_DAT_04bb29d0;
  *(long *)(param_2 + 0x28) = lVar10 * 5 + lVar11;
  if (cVar4 == '\0') goto LAB_029fc8c4;
  if (lVar10 * 5 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar11 = 0;
    if (lVar10 != 0) {
      lVar11 = (lVar10 * 5000) / lVar10;
    }
  }
  else {
    lVar11 = 5000;
  }
  lVar19 = lVar11 + lVar19;
  *(short *)(puVar3 + 10) = (short)uVar16;
LAB_029fc8d8:
  *(long *)(puVar3 + 0x10) = lVar19;
  goto LAB_029fc8dc;
}

