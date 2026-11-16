
undefined1 FUN_027a51c0(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  undefined1 uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  char cVar12;
  uint uVar13;
  int *piVar14;
  undefined4 local_24;
  
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar7 = (uint *)FUN_01b1ee90(lVar9 + 0x1b80,&local_24);
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 == 0) {
      return 0;
    }
    cVar12 = *PTR_DAT_04bb6440;
    while (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      uVar3 = *puVar7;
      if (uVar3 == 0) goto LAB_027a5334;
LAB_027a5298:
      puVar10 = (uint *)(ulong)uVar3;
      if (puVar7 == puVar10) goto LAB_027a5334;
      lVar9 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar7 + (lVar9 - (long)puVar10);
      if (lVar9 == 0) goto LAB_027a5334;
      uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_027a5334;
      piVar14 = (int *)(lVar9 + 4);
      while (piVar14[-1] != 0x3b89953c) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_027a5334;
      }
      iVar1 = 0;
      if (*piVar14 != -1) {
        iVar1 = *piVar14;
      }
      *(int *)(puVar5 + 0x1c) = iVar1;
      if (*puVar7 == 0) {
        return 0;
      }
    }
    uVar3 = *(uint *)(puVar5 + 0x1c);
    if ((int)uVar3 < 0) {
      if ((uVar3 == 0xffffffff) && (uVar3 = *puVar7, uVar3 != 0)) goto LAB_027a5298;
    }
    else if (((int *)((ulong)uVar3 + (long)puVar7) != (int *)0x0) &&
            (0 < *(int *)((ulong)uVar3 + (long)puVar7))) {
      uVar11 = (ulong)*puVar7;
      uVar8 = 5;
      if (*puVar7 == 0) {
        return 5;
      }
      goto LAB_027a55f4;
    }
LAB_027a5334:
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      uVar13 = *(uint *)(puVar5 + 0x18);
      while (uVar11 = (ulong)uVar3, (int)uVar13 < 0) {
        if ((uVar13 != 0xffffffff) || (lVar9 = (long)puVar7 - uVar11, lVar9 == 0))
        goto LAB_027a53e8;
        lVar2 = 0xc;
        if (*(char *)(lVar9 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar9 == 0) goto LAB_027a53e8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 8);
        *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_027a53e8;
        puVar10 = (uint *)(lVar2 + lVar9 + 4);
        while (puVar10[-1] != 0x6e9bc8c) {
          puVar10 = puVar10 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_027a53e8;
        }
        uVar13 = 0;
        if (*puVar10 != 0xffffffff) {
          uVar13 = *puVar10;
        }
        *(uint *)(puVar5 + 0x18) = uVar13;
        uVar3 = *puVar7;
        if (uVar3 == 0) {
          return 0;
        }
      }
      if (((int *)((long)puVar7 + (ulong)uVar13) != (int *)0x0) &&
         (0 < *(int *)((long)puVar7 + (ulong)uVar13))) {
        uVar8 = 4;
LAB_027a55f4:
        bVar6 = *(int *)(puVar5 + 0x4c) == -1;
        while( true ) {
          if ((!bVar6) || (lVar9 = (long)puVar7 - uVar11, lVar9 == 0)) {
            return uVar8;
          }
          lVar2 = 0xc;
          if (*(char *)(lVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar9 == 0) break;
          uVar11 = (ulong)*(ushort *)(lVar9 + 8);
          *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
          if (uVar11 == 0) {
            return uVar8;
          }
          piVar14 = (int *)(lVar2 + lVar9 + 4);
          while (piVar14[-1] != 0x1be772f0) {
            piVar14 = piVar14 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              return uVar8;
            }
          }
          bVar6 = false;
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar5 + 0x4c) = iVar1;
          uVar11 = (ulong)*puVar7;
          if (*puVar7 == 0) {
            return uVar8;
          }
        }
        return uVar8;
      }
LAB_027a53e8:
      uVar3 = *puVar7;
      if (uVar3 != 0) {
        uVar13 = *(uint *)(puVar5 + 0x14);
        while (uVar11 = (ulong)uVar3, (int)uVar13 < 0) {
          if ((uVar13 != 0xffffffff) || (lVar9 = (long)puVar7 - uVar11, lVar9 == 0))
          goto LAB_027a5498;
          lVar2 = 0xc;
          if (*(char *)(lVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar9 == 0) goto LAB_027a5498;
          uVar11 = (ulong)*(ushort *)(lVar9 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar11 == 0) goto LAB_027a5498;
          puVar10 = (uint *)(lVar2 + lVar9 + 4);
          while (puVar10[-1] != 0xb4c9609c) {
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_027a5498;
          }
          uVar13 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar13 = *puVar10;
          }
          *(uint *)(puVar5 + 0x14) = uVar13;
          uVar3 = *puVar7;
          if (uVar3 == 0) {
            return 0;
          }
        }
        if (((int *)((long)puVar7 + (ulong)uVar13) != (int *)0x0) &&
           (0 < *(int *)((long)puVar7 + (ulong)uVar13))) {
          uVar8 = 3;
          goto LAB_027a55f4;
        }
LAB_027a5498:
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          uVar13 = *(uint *)(puVar5 + 0x10);
          while (uVar11 = (ulong)uVar3, (int)uVar13 < 0) {
            if ((uVar13 != 0xffffffff) || (lVar9 = (long)puVar7 - uVar11, lVar9 == 0))
            goto LAB_027a5548;
            lVar2 = 0xc;
            if (*(char *)(lVar9 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar9 == 0) goto LAB_027a5548;
            uVar11 = (ulong)*(ushort *)(lVar9 + 8);
            *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
            if (uVar11 == 0) goto LAB_027a5548;
            puVar10 = (uint *)(lVar2 + lVar9 + 4);
            while (puVar10[-1] != 0x89a9492c) {
              puVar10 = puVar10 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_027a5548;
            }
            uVar13 = 0;
            if (*puVar10 != 0xffffffff) {
              uVar13 = *puVar10;
            }
            *(uint *)(puVar5 + 0x10) = uVar13;
            uVar3 = *puVar7;
            if (uVar3 == 0) {
              return 0;
            }
          }
          if (((int *)((long)puVar7 + (ulong)uVar13) != (int *)0x0) &&
             (0 < *(int *)((long)puVar7 + (ulong)uVar13))) {
            uVar8 = 2;
            goto LAB_027a55f4;
          }
LAB_027a5548:
          uVar3 = *puVar7;
          if (uVar3 != 0) {
            uVar13 = *(uint *)(puVar5 + 0xc);
            while (uVar11 = (ulong)uVar3, (int)uVar13 < 0) {
              if ((uVar13 != 0xffffffff) || (lVar9 = (long)puVar7 - uVar11, lVar9 == 0))
              goto LAB_027a5680;
              lVar2 = 0xc;
              if (*(char *)(lVar9 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar9 == 0) goto LAB_027a5680;
              uVar11 = (ulong)*(ushort *)(lVar9 + 8);
              *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
              if (uVar11 == 0) goto LAB_027a5680;
              puVar10 = (uint *)(lVar2 + lVar9 + 4);
              while (puVar10[-1] != 0xce0933fc) {
                puVar10 = puVar10 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_027a5680;
              }
              uVar13 = 0;
              if (*puVar10 != 0xffffffff) {
                uVar13 = *puVar10;
              }
              *(uint *)(puVar5 + 0xc) = uVar13;
              uVar3 = *puVar7;
              if (uVar3 == 0) {
                return 0;
              }
            }
            if (((int *)((long)puVar7 + (ulong)uVar13) != (int *)0x0) &&
               (0 < *(int *)((long)puVar7 + (ulong)uVar13))) {
              uVar8 = 1;
              goto LAB_027a55f4;
            }
LAB_027a5680:
            uVar3 = *puVar7;
            if (uVar3 != 0) {
              uVar13 = *(uint *)(puVar5 + 0x4c);
              while( true ) {
                if (-1 < (int)uVar13) {
                  if ((undefined1 *)((long)puVar7 + (ulong)uVar13) == (undefined1 *)0x0) {
                    return 0;
                  }
                  return *(undefined1 *)((long)puVar7 + (ulong)uVar13);
                }
                if (uVar13 != 0xffffffff) break;
                lVar9 = (long)puVar7 - (ulong)uVar3;
                if (lVar9 == 0) {
                  return 0;
                }
                lVar2 = 0xc;
                if (*(char *)(lVar9 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                if (lVar2 + lVar9 == 0) {
                  return 0;
                }
                uVar11 = (ulong)*(ushort *)(lVar9 + 8);
                *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
                if (uVar11 == 0) {
                  return 0;
                }
                puVar10 = (uint *)(lVar2 + lVar9 + 4);
                while (puVar10[-1] != 0x1be772f0) {
                  puVar10 = puVar10 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) {
                    return 0;
                  }
                }
                uVar13 = 0;
                if (*puVar10 != 0xffffffff) {
                  uVar13 = *puVar10;
                }
                *(uint *)(puVar5 + 0x4c) = uVar13;
                uVar3 = *puVar7;
                if (uVar3 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

