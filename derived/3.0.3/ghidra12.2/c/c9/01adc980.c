
undefined8 FUN_01adc980(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  int *piVar12;
  byte local_38 [4];
  uint local_34;
  uint local_14;
  
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_01adab50(param_1,local_38);
  local_34 = 0;
  do {
    if ((local_34 != 0) && (local_34 < 0xe)) {
      uVar2 = local_34 + 7;
      if (-1 < (int)local_34) {
        uVar2 = local_34;
      }
      if (((uint)((int)uVar2 >> 3) < 2) &&
         ((local_38[(uint)((int)uVar2 >> 3)] >> (ulong)(local_34 & 7) & 1) != 0)) {
        if (local_34 != 9) {
          return 0;
        }
        local_14 = 9;
        if (param_2[1] != '\0') {
          puVar9 = *(uint **)(param_1 + 0x10);
          if (puVar9 == (uint *)0x0) {
            local_14 = 0x21;
          }
          else {
            uVar2 = *puVar9;
            local_14 = 0;
            if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
              puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
              local_14 = 0;
              if (*puVar10 != 0) {
                uVar2 = puVar10[1];
                if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                  lVar6 = 0xc;
                  if (*(char *)((long)puVar10 + 10) != '\0') {
                    lVar6 = 0x1c;
                  }
                  lVar6 = (long)puVar10 + lVar6 + (ulong)(ushort)puVar10[2] * 8;
                  if (lVar6 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar2 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar9 - lVar6) / (ulong)uVar2);
                    }
                    if (*puVar10 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < *(uint *)PTR_DAT_04bc0148) &&
                       (local_14 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar1 * 2),
                       local_14 < 0xa2)) goto LAB_01adcac0;
                  }
                }
                local_14 = 0;
              }
            }
          }
LAB_01adcac0:
          if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
            if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                 (puVar9 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar9 != (uint *)0x0))
                && ((*(uint *)(DAT_0532a7a0 + 200) <= local_14 ||
                    (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_14) != '\0')))) &&
               (((local_14 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
              iVar5 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                iVar5 = 0x1c;
              }
              puVar9 = (uint *)((ulong)(puVar9[1] * local_14 + (uint)(ushort)puVar9[2] * 8 + iVar5)
                               + (long)puVar9);
              goto joined_r0x01adcbec;
            }
          }
          else if (local_14 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
            uVar2 = local_14;
            if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_14) {
              uVar2 = 0;
            }
            puVar9 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x01adcbec:
            if (puVar9 != (uint *)0x0) {
              puVar10 = (uint *)((long)puVar9 - (ulong)*puVar9);
              if (((*puVar9 != 0) && (puVar10 != (uint *)0x0)) &&
                 ((*puVar10 != 0 &&
                  ((uVar2 = puVar10[1], uVar2 != 0 && ((ulong)(ushort)puVar10[2] != 0)))))) {
                lVar6 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar10 + lVar6 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar6 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar2 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar9 - lVar6) / (ulong)uVar2);
                  }
                  if (*puVar10 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc02c8) &&
                     (0xfffd < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc02c8 + 8) +
                                                  (long)(int)uVar1 * 2) - 10U))) {
                    return 0;
                  }
                }
              }
            }
          }
        }
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f08d8 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
            puVar9 = &DAT_054f08d0;
            if (iVar5 != 0) {
              DAT_054f08d0 = 0;
              __cxa_guard_release(&DAT_054f08d8);
            }
          }
          else {
            puVar9 = &DAT_054f08d0;
          }
        }
        else {
          puVar9 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
        }
        local_14 = 8;
        if ((*puVar9 >> 8 & 1) != 0) {
          FUN_025196e4(&local_14);
          lVar6 = FUN_02547c90(&local_14);
          if (*(char *)(lVar6 + 9) == '\0') {
            return 0;
          }
          uVar7 = FUN_02547c90(&local_14);
          uVar8 = FUN_0277d7b4(uVar7,param_1 + 8);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        puVar9 = (uint *)FUN_01ad81b0(param_1);
        puVar4 = PTR_DAT_04bbe220;
        puVar3 = PTR_DAT_04bbe218;
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
        if (*puVar9 == 0) goto LAB_01adcd68;
        cVar11 = *PTR_DAT_04bbe218;
        break;
      }
    }
    local_34 = local_34 + 1;
    if (local_34 == 0xe) {
      return 0;
    }
  } while( true );
LAB_01adccb8:
  if (cVar11 == '\0') {
    cVar11 = '\x01';
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *puVar3 = 1;
    *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(uint *)(puVar4 + 0xc);
    if (-1 < (int)uVar2) {
      if (((char *)((ulong)uVar2 + (long)puVar9) != (char *)0x0) &&
         (*(char *)((ulong)uVar2 + (long)puVar9) != '\0')) {
        return 0;
      }
LAB_01adcd68:
      if (*param_2 == '\0') {
        local_14 = 0xb;
        lVar6 = FUN_0172f620(puVar9,6,0x42ad246a,DAT_0532ad08);
        if (lVar6 == 0) {
          return 0;
        }
        uVar2 = local_14 + 7;
        if (-1 < (int)local_14) {
          uVar2 = local_14;
        }
        if ((*(byte *)(lVar6 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(local_14 & 7) & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
    if (uVar2 != 0xffffffff) goto LAB_01adcd68;
  }
  puVar10 = (uint *)(ulong)*puVar9;
  if ((*puVar9 == 0) || (puVar9 == puVar10)) goto LAB_01adcd68;
  lVar6 = 0xc;
  if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
    lVar6 = 0x1c;
  }
  lVar6 = (long)puVar9 + (lVar6 - (long)puVar10);
  if (lVar6 == 0) goto LAB_01adcd68;
  uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
  *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
  if (uVar8 == 0) goto LAB_01adcd68;
  piVar12 = (int *)(lVar6 + 4);
  while (piVar12[-1] != 0x555442aa) {
    piVar12 = piVar12 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_01adcd68;
  }
  iVar5 = 0;
  if (*piVar12 != -1) {
    iVar5 = *piVar12;
  }
  *(int *)(puVar4 + 0xc) = iVar5;
  if (*puVar9 == 0) goto LAB_01adcd68;
  goto LAB_01adccb8;
}

