
/* WARNING: Type propagation algorithm not settling */

void FUN_039fefd0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  ushort uVar14;
  ushort uVar15;
  long *plVar16;
  undefined8 *puVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  long *plVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  long lVar36;
  ulong uVar37;
  undefined8 uVar38;
  long lVar39;
  char *pcVar40;
  char *pcVar41;
  long *plVar42;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_62;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar14 = *(ushort *)(param_1 + 10);
  if ((uVar14 & 1) != 0) {
    puVar22 = *(undefined8 **)(param_1 + 0x38);
    puVar23 = (undefined8 *)(param_1 + 0x30);
    if (puVar22 != puVar23) {
      lVar36 = (long)*(int *)(param_1 + 0x44);
      lVar39 = (long)puVar22 - lVar36;
      do {
        if ((*(ushort *)(param_1 + 0xc) & 0xc) == 4) {
          FUN_038fe410(*(undefined8 *)(lVar39 + 0x20));
        }
        lVar39 = *(long *)(lVar39 + lVar36 + 8) - lVar36;
      } while (lVar39 != (long)puVar23 - lVar36);
      puVar22 = *(undefined8 **)(param_1 + 0x38);
    }
    while (puVar22 != puVar23) {
      puVar27 = (undefined8 *)puVar22[1];
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22 = puVar27;
    }
    uVar14 = *(ushort *)(param_1 + 10);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(long *)(param_1 + 0x30) = param_1 + 0x30;
    *(undefined8 **)(param_1 + 0x38) = puVar23;
  }
  if ((uVar14 >> 1 & 1) != 0) {
    iVar19 = *(int *)(param_1 + 0x10);
    if (iVar19 == 2) {
      if (1 < *(int *)(param_1 + 0x28)) {
        plVar32 = (long *)(param_1 + 0x18);
        plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 8);
        while (plVar16 = plVar1, plVar16 != plVar32) {
          plVar42 = (long *)*plVar16;
          plVar1 = (long *)plVar16[1];
          iVar19 = nn::util::BinaryFileHeader::GetFileSize();
          iVar20 = nn::util::BinaryFileHeader::GetFileSize();
          if (0 < iVar19 - iVar20) {
            do {
              plVar42 = (long *)*plVar42;
              if (plVar42 == plVar32) {
                lVar39 = *plVar16;
                plVar42 = plVar32;
                goto joined_r0x039ff1b8;
              }
              iVar19 = nn::util::BinaryFileHeader::GetFileSize();
              iVar20 = nn::util::BinaryFileHeader::GetFileSize();
            } while (0 < iVar19 - iVar20);
            lVar39 = *plVar16;
joined_r0x039ff1b8:
            if (lVar39 != 0) {
              *(long *)(lVar39 + 8) = plVar16[1];
            }
            if ((long *)plVar16[1] != (long *)0x0) {
              *(long *)plVar16[1] = *plVar16;
            }
            *plVar16 = 0;
            plVar16[1] = 0;
            puVar23 = (undefined8 *)plVar42[1];
            plVar42[1] = (long)plVar16;
            *plVar16 = (long)plVar42;
            plVar16[1] = (long)puVar23;
            if (puVar23 != (undefined8 *)0x0) {
              *puVar23 = plVar16;
            }
          }
        }
      }
    }
    else if (iVar19 == 1) {
      if (1 < *(int *)(param_1 + 0x28)) {
        puVar23 = (undefined8 *)(param_1 + 0x18);
        puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
        if (puVar22 != puVar23) {
          lVar39 = -(long)*(int *)(param_1 + 0x2c);
          do {
            puVar27 = (undefined8 *)puVar22[1];
            puVar35 = (undefined8 *)*puVar22;
            iVar19 = *(int *)((long)puVar22 + lVar39 + 0x300);
            if (0 < *(int *)((long)puVar35 + lVar39 + 0x300) - iVar19) {
              puVar34 = puVar35;
              do {
                puVar34 = (undefined8 *)*puVar34;
                puVar17 = puVar23;
                if (puVar34 == puVar23) break;
                puVar17 = puVar34;
              } while (0 < *(int *)((long)puVar34 + lVar39 + 0x300) - iVar19);
              puVar34 = puVar27;
              if (puVar35 != (undefined8 *)0x0) {
                puVar35[1] = puVar27;
                puVar34 = (undefined8 *)puVar22[1];
              }
              if (puVar34 != (undefined8 *)0x0) {
                *puVar34 = *puVar22;
              }
              *puVar22 = 0;
              puVar22[1] = 0;
              puVar35 = (undefined8 *)puVar17[1];
              puVar17[1] = puVar22;
              *puVar22 = puVar17;
              puVar22[1] = puVar35;
              if (puVar35 != (undefined8 *)0x0) {
                *puVar35 = puVar22;
              }
            }
            puVar22 = puVar27;
          } while (puVar27 != puVar23);
        }
      }
    }
    else if ((iVar19 == 0) && (1 < *(int *)(param_1 + 0x28))) {
      lVar39 = *(long *)(param_1 + 0x20);
      do {
        lVar39 = *(long *)(lVar39 + 8);
      } while (lVar39 != param_1 + 0x18);
    }
    if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
      lVar36 = (long)*(int *)(param_1 + 0x2c);
      lVar39 = *(long *)(param_1 + 0x20) - lVar36;
      do {
        if ((*(ushort *)(param_1 + 0xc) & 0xc) == 4) {
          FUN_038fe410(*(undefined8 *)(lVar39 + 0x20));
        }
        lVar39 = *(long *)(lVar39 + lVar36 + 8) - lVar36;
      } while (lVar39 != (param_1 + 0x18) - lVar36);
    }
  }
  uVar14 = *(ushort *)(param_1 + 10);
  if ((uVar14 >> 2 & 1) != 0) {
    pcVar40 = (char *)(param_1 + 0x98);
    cVar5 = *pcVar40;
    cVar6 = *(char *)(param_1 + 0xd8);
    cVar7 = *(char *)(param_1 + 0x158);
    cVar8 = *(char *)(param_1 + 0x118);
    cVar9 = *(char *)(param_1 + 0x1d8);
    cVar10 = *(char *)(param_1 + 0x198);
    cVar11 = *(char *)(param_1 + 0x218);
    cVar12 = *(char *)(param_1 + 600);
    if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
      lVar36 = (long)*(int *)(param_1 + 0x2c);
      lVar39 = *(long *)(param_1 + 0x20) - lVar36;
      do {
        lVar24 = *(long *)(lVar39 + 0x20);
        if (*(short *)(lVar24 + 0xdc) != 0) {
          uVar28 = 0;
LAB_039ff3c8:
          plVar32 = (long *)(*(long *)(lVar39 + 0x28) + uVar28 * 0x430 + 0x10);
          lVar29 = *plVar32;
          if (*(short *)(lVar29 + 0x6c) != 0) {
            uVar33 = 0;
LAB_039ff40c:
            lVar24 = *(long *)(lVar29 + 0x38) + uVar33 * 0xa8;
            bVar13 = *(byte *)(lVar24 + 0x9c);
            if ((ulong)bVar13 != 0) {
              uVar30 = 0;
LAB_039ff488:
              uVar37 = 0;
LAB_039ff4b4:
              iVar19 = (int)uVar37;
              if (pcVar40[-(uVar37 >> 0x1f) & 0xffffffc000000000 | uVar37 << 6] == '\0')
              goto LAB_039ff4a8;
              lVar29 = 0;
              plVar1 = (long *)(pcVar40 + (long)iVar19 * 0x40 + 8);
              lVar25 = *(long *)(*(long *)(lVar24 + 0x30) + (long)(int)uVar30 * 8);
              pcVar2 = (char *)(lVar25 + 2);
              do {
                lVar3 = lVar25 + lVar29;
                if (*(char *)(lVar3 + 2) == '\0') goto LAB_039ff51c;
                if (*(char *)(lVar3 + 3) == '\0') {
                  lVar29 = lVar29 + 1;
                  goto LAB_039ff51c;
                }
                if (*(char *)(lVar3 + 4) == '\0') {
                  lVar29 = lVar29 + 2;
                  goto LAB_039ff51c;
                }
                lVar29 = lVar29 + 3;
              } while (lVar29 != 0x80001);
              lVar29 = 0;
LAB_039ff51c:
              (**(code **)(*plVar1 + 0x18))(plVar1);
              lVar25 = 0;
              do {
                iVar20 = (int)lVar29;
                if (*(char *)(*(long *)(pcVar40 + (long)iVar19 * 0x40 + 0x10) + lVar25) == '\0') {
LAB_039ff568:
                  iVar21 = (int)lVar25;
                  if (iVar20 < iVar21) goto LAB_039ff4a8;
LAB_039ff580:
                  if ((int)lVar25 < 1) goto LAB_039ff610;
                  uVar37 = 0;
                  pcVar41 = pcVar2;
                  goto LAB_039ff598;
                }
                lVar3 = *(long *)(pcVar40 + (long)iVar19 * 0x40 + 0x10) + lVar25;
                if (*(char *)(lVar3 + 1) == '\0') {
                  lVar25 = lVar25 + 1;
                  goto LAB_039ff568;
                }
                if (*(char *)(lVar3 + 2) == '\0') {
                  lVar25 = lVar25 + 2;
                  iVar21 = (int)lVar25;
                  if (iVar21 <= iVar20) goto LAB_039ff580;
                  goto LAB_039ff4a8;
                }
                lVar25 = lVar25 + 3;
              } while (lVar25 != 0x80001);
              if (-1 < iVar20) {
LAB_039ff610:
                (**(code **)(*plVar1 + 0x18))(plVar1);
                goto LAB_039ff620;
              }
              goto LAB_039ff4a8;
            }
            goto LAB_039ff3fc;
          }
          goto LAB_039ff3ac;
        }
LAB_039ff370:
        lVar39 = *(long *)(lVar39 + lVar36 + 8) - lVar36;
      } while (lVar39 != (param_1 + 0x18) - lVar36);
      uVar14 = *(ushort *)(param_1 + 10);
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 0x198) = 0;
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    *(undefined1 *)(param_1 + 0x218) = 0;
    *(undefined1 *)(param_1 + 600) = 0;
    *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x80;
  }
  if ((uVar14 >> 3 & 1) != 0) {
    uVar15 = *(ushort *)(param_1 + 8);
    *(ushort *)(param_1 + 8) = uVar15 & 0xfdff;
    if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
      lVar36 = (long)*(int *)(param_1 + 0x2c);
      lVar39 = *(long *)(param_1 + 0x20) - lVar36;
      do {
        if ((*(byte *)(lVar39 + 0x2b4) >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 8) = uVar15 | 0x200;
          break;
        }
        lVar39 = *(long *)(lVar39 + lVar36 + 8) - lVar36;
      } while (lVar39 != (param_1 + 0x18) - lVar36);
    }
  }
  *(ushort *)(param_1 + 10) = uVar14 & 0xfff0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
  while( true ) {
    pcVar26 = *(char **)(pcVar40 + (long)iVar19 * 0x40 + 0x10);
    pcVar31 = pcVar41;
    lVar29 = lVar25;
    while( true ) {
      lVar29 = lVar29 + -1;
      if (*pcVar31 != *pcVar26) break;
      if ((*pcVar31 == '\0') || (pcVar26 = pcVar26 + 1, pcVar31 = pcVar31 + 1, lVar29 == 0))
      goto LAB_039ff4a0;
    }
    uVar37 = uVar37 + 1;
    pcVar41 = pcVar41 + 1;
    if (uVar37 == (iVar20 - iVar21) + 1) break;
LAB_039ff598:
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if (pcVar2 + uVar37 == *(char **)(pcVar40 + (long)iVar19 * 0x40 + 0x10)) {
LAB_039ff4a0:
      if ((int)uVar37 != -1) goto LAB_039ff620;
      break;
    }
  }
LAB_039ff4a8:
  uVar37 = (ulong)(iVar19 + 1U);
  if (iVar19 + 1U == 8) goto LAB_039ff600;
  goto LAB_039ff4b4;
LAB_039ff600:
  if ((((cVar5 == '\0' && cVar6 == '\0') && (cVar8 == '\0' && cVar7 == '\0')) &&
      ((cVar10 == '\0' && cVar9 == '\0') && cVar11 == '\0')) && cVar12 == '\0') {
LAB_039ff620:
    lVar29 = *(long *)(lVar24 + 0x40) + uVar30 * 0x20;
    uVar14 = *(ushort *)(param_1 + 0xe);
    if ((uVar14 & 1) != 0) {
      *(undefined4 *)(lVar29 + 0x10) = *(undefined4 *)(param_1 + 0x94);
      uVar14 = *(ushort *)(param_1 + 0xe);
    }
    if ((uVar14 >> 1 & 1) != 0) {
      *(undefined4 *)(lVar29 + 8) = *(undefined4 *)(param_1 + 0x8c);
      uVar14 = *(ushort *)(param_1 + 0xe);
    }
    if ((uVar14 >> 2 & 1) != 0) {
      *(undefined4 *)(lVar29 + 0xc) = *(undefined4 *)(param_1 + 0x90);
      uVar14 = *(ushort *)(param_1 + 0xe);
    }
    if ((uVar14 >> 3 & 1) != 0) {
      uVar15 = *(ushort *)(lVar29 + 6) | 0x40;
      if (*(int *)(param_1 + 0x88) < 2) {
        uVar15 = *(ushort *)(lVar29 + 6) & 0xffbc;
      }
      uVar4 = 1;
      if ((uVar14 & 0x10) != 0) {
        uVar4 = 2;
      }
      *(ushort *)(lVar29 + 6) = uVar15 & 0xfffc | uVar4;
      *(char *)(lVar29 + 5) = (char)*(undefined4 *)(param_1 + 0x88);
    }
    local_62 = 0;
    uVar38 = *(undefined8 *)PTR_DAT_04bc1010;
    local_88 = 0;
    uStack_80 = 0x3f80000000000000;
    FUN_038f9634(&local_88);
    sVar18 = FUN_038fbe40(uVar38,&local_88,"nn::g3d(update)");
    *(long *)(*(long *)(lVar24 + 0x88) + uVar30 * 8) = (long)sVar18;
  }
  uVar30 = uVar30 + 1;
  if (uVar30 == bVar13) goto LAB_039ff3f0;
  goto LAB_039ff488;
LAB_039ff3f0:
  lVar29 = *plVar32;
LAB_039ff3fc:
  uVar33 = uVar33 + 1;
  if (*(ushort *)(lVar29 + 0x6c) <= uVar33) goto LAB_039ff3a4;
  goto LAB_039ff40c;
LAB_039ff3a4:
  lVar24 = *(long *)(lVar39 + 0x20);
LAB_039ff3ac:
  uVar28 = uVar28 + 1;
  if (*(ushort *)(lVar24 + 0xdc) <= uVar28) goto LAB_039ff370;
  goto LAB_039ff3c8;
}

