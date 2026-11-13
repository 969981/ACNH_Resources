
void FUN_00ce7be0(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  long *plVar18;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
      ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar8)) {
    plVar18 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar8 = 1;
      goto joined_r0x00ce7ca4;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00ce7ca4;
    }
  }
  uVar8 = 0;
joined_r0x00ce7ca4:
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb37d0);
    uVar7 = 0;
    if ((int)lVar12 == 1) {
      uVar7 = uVar8;
    }
    if (((uVar10 & 1) != 0) && (uVar7 != 0)) {
      plVar9 = plVar18 + 0x7c;
      lVar12 = *(long *)PTR_DAT_04bb27a8;
      (**(code **)(plVar18[0x7c] + 0x18))(plVar9);
      (**(code **)(plVar18[0x7c] + 0x18))(plVar9);
      if ((undefined1 *)plVar18[0x7d] != &DAT_040bf969) {
        uVar10 = 0;
        bVar4 = true;
        do {
          cVar5 = ((undefined1 *)plVar18[0x7d])[uVar10];
          if (cVar5 != (&DAT_040bf969)[uVar10]) break;
          if (cVar5 == '\0') {
            if (bVar4) goto LAB_00ce7df4;
            break;
          }
          bVar4 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(plVar18[0x7c] + 0x18))(plVar9);
        (**(code **)(plVar18[0x7c] + 0x18))(plVar9);
        pcVar16 = (char *)plVar18[0x7d];
        if (pcVar16 != "rct") {
          if (*pcVar16 != 'r') {
LAB_00ce7e60:
            lVar13 = FUN_0265c2a0((int)plVar18[0xa1]);
            if (lVar13 == 0) {
              return;
            }
            if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
               (puVar11 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar11 == (undefined8 *)0x0)) {
              uVar8 = 1;
            }
            else {
              uVar8 = (**(code **)*puVar11)();
              uVar8 = uVar8 ^ 1;
            }
            cVar5 = FUN_020fd7d8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
            if ((((uVar8 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            if (cVar5 == '\a') {
              lVar13 = 2;
            }
            else {
              if (cVar5 != '\x01') {
                return;
              }
              lVar13 = 3;
            }
            iVar6 = *(int *)(*(long *)(param_1 + 8) + lVar13 * 4);
            FUN_0126a570(*(undefined8 *)(*(long *)(lVar12 + 0x3aa0) + (long)iVar6 * 8),auStack_4c);
            lVar12 = plVar18[0x77];
            local_48 = 0;
            uVar7 = FUN_006bd550("BuildingSiteIndex",0);
            uVar8 = *(uint *)(lVar12 + 0x20);
            if (uVar8 != 0) {
              lVar12 = *(long *)(lVar12 + 0x28);
              if ((int)uVar8 < 2) {
                uVar14 = 0;
              }
              else {
                uVar14 = 0;
                iVar17 = uVar8 - 1;
                do {
                  uVar1 = iVar17 + uVar14;
                  if ((int)uVar1 < 0 != SCARRY4(iVar17,uVar14)) {
                    uVar1 = uVar1 + 1;
                  }
                  uVar15 = (int)uVar1 >> 1;
                  uVar1 = *(uint *)(lVar12 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
                  if (uVar1 == uVar7) goto LAB_00ce7fcc;
                  if (uVar1 < uVar7) {
                    uVar14 = uVar15 + 1;
                  }
                  else {
                    iVar17 = uVar15 - 1;
                  }
                } while ((int)uVar14 < iVar17);
              }
              uVar15 = uVar14;
              if (*(uint *)(lVar12 + (long)(int)uVar14 * 0x20 + 0x18) == uVar7) {
LAB_00ce7fcc:
                if (-1 < (int)uVar15) {
                  if (uVar8 <= uVar15) {
                    uVar15 = 0;
                  }
                  *(int *)(lVar12 + (ulong)uVar15 * 0x20) = iVar6;
                }
              }
            }
            lVar12 = plVar18[0x77];
            uVar7 = FUN_006bd550("PrologueStep",0);
            uVar8 = *(uint *)(lVar12 + 0x20);
            if (uVar8 != 0) {
              lVar12 = *(long *)(lVar12 + 0x28);
              if ((int)uVar8 < 2) {
                uVar14 = 0;
              }
              else {
                uVar14 = 0;
                iVar6 = uVar8 - 1;
                do {
                  uVar1 = iVar6 + uVar14;
                  if ((int)uVar1 < 0 != SCARRY4(iVar6,uVar14)) {
                    uVar1 = uVar1 + 1;
                  }
                  uVar15 = (int)uVar1 >> 1;
                  uVar1 = *(uint *)(lVar12 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
                  if (uVar1 == uVar7) goto LAB_00ce806c;
                  if (uVar1 < uVar7) {
                    uVar14 = uVar15 + 1;
                  }
                  else {
                    iVar6 = uVar15 - 1;
                  }
                } while ((int)uVar14 < iVar6);
              }
              uVar15 = uVar14;
              if (*(uint *)(lVar12 + (long)(int)uVar14 * 0x20 + 0x18) == uVar7) {
LAB_00ce806c:
                if (-1 < (int)uVar15) {
                  if (uVar8 <= uVar15) {
                    uVar15 = 0;
                  }
                  *(undefined4 *)(lVar12 + (ulong)uVar15 * 0x20) = 2;
                }
              }
            }
            local_50 = 0;
            FUN_01e39778(plVar18,auStack_4c,&local_50,0);
            lVar12 = plVar18[0x76];
            *(undefined4 *)(lVar12 + 0x4e4) = 0;
            if (*(int *)(lVar12 + 0x378) < 0x23) {
              *(undefined4 *)(lVar12 + 0x3a4) = 0;
              return;
            }
            return;
          }
          lVar13 = 0;
          do {
            if ((lVar13 == 0x80000) ||
               (lVar2 = lVar13 + 1, pcVar16[lVar2] != (&DAT_040dedda)[lVar13])) goto LAB_00ce7e60;
            lVar13 = lVar13 + 1;
          } while (pcVar16[lVar2] != '\0');
        }
      }
LAB_00ce7df4:
      lVar12 = plVar18[0x77];
      uVar7 = FUN_006bd550("PrologueStep",0);
      uVar8 = *(uint *)(lVar12 + 0x20);
      if (uVar8 != 0) {
        lVar12 = *(long *)(lVar12 + 0x28);
        if ((int)uVar8 < 2) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          iVar6 = uVar8 - 1;
          do {
            uVar1 = iVar6 + uVar14;
            if ((int)uVar1 < 0 != SCARRY4(iVar6,uVar14)) {
              uVar1 = uVar1 + 1;
            }
            uVar15 = (int)uVar1 >> 1;
            uVar1 = *(uint *)(lVar12 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
            if (uVar1 == uVar7) goto LAB_00ce7eb4;
            if (uVar1 < uVar7) {
              uVar14 = uVar15 + 1;
            }
            else {
              iVar6 = uVar15 - 1;
            }
          } while ((int)uVar14 < iVar6);
        }
        uVar15 = uVar14;
        if (*(uint *)(lVar12 + (long)(int)uVar14 * 0x20 + 0x18) == uVar7) {
LAB_00ce7eb4:
          if (-1 < (int)uVar15) {
            if (uVar8 <= uVar15) {
              uVar15 = 0;
            }
            *(undefined4 *)(lVar12 + (ulong)uVar15 * 0x20) = 2;
          }
        }
      }
    }
  }
  return;
}

