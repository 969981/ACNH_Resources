
void FUN_03731a90(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  
  if ((*(uint *)(&DAT_00001230 + param_1) >> 5 & 1) != 0) {
    return;
  }
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x20;
  puVar4 = PTR_DAT_04bb2720;
  *(undefined4 *)(param_1 + 0x1234) = 1;
  puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
  lVar11 = *(long *)puVar4;
  puVar8 = &DAT_055c04a0;
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x330) != 0)) {
    puVar8 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
    iVar5 = FUN_006bd550(*puVar8,0);
    if (iVar5 != 0x758f7eaf) {
      puVar10 = &DAT_055c04a0;
    }
    puVar8 = puVar10;
  }
  puVar4 = PTR_DAT_04bb27c0;
  iVar5 = *(int *)(puVar8 + 7);
  if (DAT_05ac0a90 == iVar5) {
    lVar11 = 0;
  }
  else if (DAT_05ac0aa0 == iVar5) {
    lVar11 = 1;
  }
  else if (DAT_05ac0ab0 == iVar5) {
    lVar11 = 2;
  }
  else if (DAT_05ac0ac0 == iVar5) {
    lVar11 = 3;
  }
  else if (DAT_05ac0ad0 == iVar5) {
    lVar11 = 4;
  }
  else if (DAT_05ac0ae0 == iVar5) {
    lVar11 = 5;
  }
  else if (DAT_05ac0af0 == iVar5) {
    lVar11 = 6;
  }
  else if (DAT_05ac0b00 == iVar5) {
    lVar11 = 7;
  }
  else if (DAT_05ac0b10 == iVar5) {
    lVar11 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar5) {
      iVar5 = 0;
      bVar3 = false;
      iVar6 = *(int *)(param_1 + 0xe0);
      goto joined_r0x03731ee8;
    }
    lVar11 = 9;
  }
  bVar3 = true;
  iVar5 = (&DAT_05ac0a98)[lVar11 * 4];
  iVar6 = *(int *)(param_1 + 0xe0);
joined_r0x03731ee8:
  if (iVar6 != 0) {
    plVar17 = *(long **)(param_1 + 0xe8);
    lVar11 = (long)iVar6 << 3;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    do {
      lVar13 = *plVar17;
      if ((*(ushort *)(lVar13 + 0x114) >> 5 & 1) == 0) {
        if (bVar3) {
          if (((*(int *)(lVar13 + 0x3c) != 2) && (iVar5 == *(int *)(lVar13 + 0xe8))) &&
             (*(int *)(lVar13 + 0xd8) != 0)) goto LAB_03731cdc;
        }
        else if (*(int *)(lVar13 + 0x3c) != 2) {
LAB_03731cdc:
          uVar15 = *(uint *)(lVar13 + 8);
          if ((uVar15 != 0) && (lVar12 = *(long *)puVar4, lVar12 != 0)) {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar15 >> 0x11) & 0x7ff8));
            if ((plVar16 == (long *)0x0) ||
               (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar15))
               )) {
              plVar16 = (long *)0x0;
            }
            if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar12 = *(long *)puVar4;
              iVar6 = (**(code **)(*plVar9 + 0x60))();
              if (iVar6 < 0x11) {
                uVar15 = 1;
              }
              else {
                uVar15 = *(uint *)(lVar12 + 0x5e8);
                if (4 < uVar15) goto LAB_03731d7c;
                uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
              }
            }
            else {
LAB_03731d7c:
              uVar15 = 0;
            }
            if (plVar16 != (long *)0x0) {
              lVar12 = plVar16[0x2a];
              uVar2 = *(uint *)(plVar16 + 0x49);
              if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
                *(undefined **)PTR_DAT_04bb37d0 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb37d8);
              }
              uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
              if ((((int)lVar12 == 1) && ((uVar7 & uVar15) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
                lVar12 = plVar16[0xd];
                if (((lVar12 != 0) && ((*(byte *)(param_1 + 0x1231) >> 5 & 1) == 0)) &&
                   (iVar6 = FUN_03722560(param_1,lVar13 + 0x10), iVar6 != -1)) {
                  lVar14 = *(long *)(*(long *)(param_1 + 0xe8) + (long)iVar6 * 8);
                  *(ushort *)(lVar14 + 0x114) = *(ushort *)(lVar14 + 0x114) | 8;
                  *(undefined4 *)(lVar14 + 0xf0) = *(undefined4 *)(lVar12 + 0x278);
                  *(undefined4 *)(lVar14 + 0xf4) = *(undefined4 *)(lVar12 + 0x27c);
                  *(undefined4 *)(lVar14 + 0xf8) = *(undefined4 *)(lVar12 + 0x280);
                  *(undefined4 *)(lVar14 + 0xfc) = *(undefined4 *)(lVar12 + 0x2b4);
                  lVar13 = *(long *)PTR_DAT_04bb2720;
                  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x330) == 0)) {
                    puVar10 = &DAT_055c04a0;
                  }
                  else {
                    puVar10 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338))
                    ;
                    iVar6 = FUN_006bd550(*puVar10,0);
                    puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar6 != 0x758f7eaf) {
                      puVar10 = &DAT_055c04a0;
                    }
                  }
                  *(undefined4 *)(lVar14 + 0x100) = *(undefined4 *)(puVar10 + 7);
                }
                FUN_006fb3d0(plVar16);
                *(int *)(param_1 + 0x1234) = *(int *)(param_1 + 0x1234) + 1;
              }
            }
          }
        }
      }
      plVar17 = plVar17 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  return;
}

