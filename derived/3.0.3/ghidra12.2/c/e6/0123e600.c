
undefined8 FUN_0123e600(uint *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar14 = *(long *)puVar1;
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_78 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar1 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar3 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8);
            if (lVar14 != 0) {
              local_68 = lVar14;
            }
          }
        }
      }
      uVar6 = FUN_01ad7260(&local_78);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      iVar4 = FUN_01ad7260(&local_78);
      if ((iVar4 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_78), puVar7 == (ushort *)0x0)) {
        local_84 = 0;
      }
      else {
        local_84 = *puVar7 & 7;
        uVar3 = FUN_01ad7260(&local_78);
        if (uVar3 <= local_84) {
          local_84 = 0;
        }
      }
      puVar1 = PTR_DAT_04bbbc78;
      uVar3 = *(uint *)(DAT_05150358 + 0x1c0);
      if ((0 < (int)uVar3) ||
         (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
           (puVar17 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
          (uVar3 = *puVar17, uVar3 != 0)))) {
        uVar18 = 0;
        lVar14 = DAT_05150358;
        do {
          if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
            if (((((*(long *)(lVar14 + 0xb0) != 0) &&
                  (puVar17 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
                 ((*(uint *)(lVar14 + 200) <= uVar18 ||
                  (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar18) != '\0')))) &&
                ((uVar18 < *puVar17 && (puVar17[1] != 0)))) && ((ushort)puVar17[2] != 0)) {
              iVar4 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                iVar4 = 0x1c;
              }
              puVar17 = (uint *)((ulong)(puVar17[1] * uVar18 + (uint)(ushort)puVar17[2] * 8 + iVar4)
                                + (long)puVar17);
              goto joined_r0x0123e918;
            }
          }
          else if (uVar18 < *(uint *)(lVar14 + 0x1c0)) {
            uVar16 = uVar18;
            if (*(uint *)(lVar14 + 0x1b0) <= uVar18) {
              uVar16 = 0;
            }
            puVar17 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar16 * 8);
joined_r0x0123e918:
            if (puVar17 != (uint *)0x0) {
              if (*puVar17 != 0) {
                cVar8 = DAT_051513c0;
                do {
                  puVar2 = PTR_DAT_04bbbc70;
                  if (cVar8 == '\0') {
                    cVar8 = '\x01';
                    *(undefined8 *)puVar1 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
                    *puVar2 = 1;
                    *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                  }
                  else {
                    uVar16 = *(uint *)(puVar1 + 0x34);
                    if (-1 < (int)uVar16) {
                      if ((ushort *)((ulong)uVar16 + (long)puVar17) != (ushort *)0x0) {
                        uVar16 = (uint)*(ushort *)((ulong)uVar16 + (long)puVar17);
                        goto LAB_0123e934;
                      }
                      break;
                    }
                    if (uVar16 != 0xffffffff) break;
                  }
                  puVar13 = (uint *)(ulong)*puVar17;
                  uVar16 = 0xfffe;
                  if ((*puVar17 == 0) || (puVar17 == puVar13)) goto LAB_0123e934;
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar17 + (10 - (long)puVar13)) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar17 + (lVar14 - (long)puVar13);
                  if (lVar14 == 0) goto LAB_0123e934;
                  uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar13));
                  *(undefined4 *)(puVar1 + 0x34) = 0xfffffffe;
                  if (uVar12 == 0) goto LAB_0123e934;
                  piVar10 = (int *)(lVar14 + 4);
                  while (piVar10[-1] != -0x485b96aa) {
                    piVar10 = piVar10 + 2;
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) goto LAB_0123e930;
                  }
                  iVar4 = 0;
                  if (*piVar10 != -1) {
                    iVar4 = *piVar10;
                  }
                  *(int *)(puVar1 + 0x34) = iVar4;
                  if (*puVar17 == 0) break;
                } while( true );
              }
LAB_0123e930:
              uVar16 = 0xfffe;
LAB_0123e934:
              uVar5 = FUN_0277d6c4(param_2);
              lVar14 = DAT_05150358;
              if (uVar5 == uVar16) {
                if (*puVar17 != 0) {
                  cVar8 = DAT_051513c0;
                  do {
                    puVar2 = PTR_DAT_04bbbc70;
                    if (cVar8 == '\0') {
                      cVar8 = '\x01';
                      *(undefined8 *)puVar1 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
                      *puVar2 = 1;
                      *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                    }
                    else {
                      uVar16 = *(uint *)(puVar1 + 0x44);
                      if (-1 < (int)uVar16) {
                        if ((char *)((ulong)uVar16 + (long)puVar17) != (char *)0x0) {
                          cVar9 = *(char *)((ulong)uVar16 + (long)puVar17);
                          goto LAB_0123ea3c;
                        }
                        break;
                      }
                      if (uVar16 != 0xffffffff) break;
                    }
                    puVar13 = (uint *)(ulong)*puVar17;
                    cVar9 = -1;
                    if ((*puVar17 == 0) || (puVar17 == puVar13)) goto LAB_0123ea3c;
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar17 + (10 - (long)puVar13)) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar17 + (lVar15 - (long)puVar13);
                    if (lVar15 == 0) break;
                    uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar13));
                    *(undefined4 *)(puVar1 + 0x44) = 0xfffffffe;
                    if (uVar12 == 0) break;
                    piVar10 = (int *)(lVar15 + 4);
                    while (piVar10[-1] != 0x64b8fff8) {
                      piVar10 = piVar10 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_0123ea38;
                    }
                    iVar4 = 0;
                    if (*piVar10 != -1) {
                      iVar4 = *piVar10;
                    }
                    *(int *)(puVar1 + 0x44) = iVar4;
                    if (*puVar17 == 0) break;
                  } while( true );
                }
LAB_0123ea38:
                cVar9 = -1;
LAB_0123ea3c:
                if (local_84 == (int)cVar9) {
                  if (*puVar17 == 0) goto LAB_0123eb74;
                  cVar8 = *PTR_DAT_04bbbc70;
                  goto LAB_0123ea70;
                }
              }
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar3);
      }
    }
  }
  return 0;
  while( true ) {
    puVar13 = (uint *)(ulong)*puVar17;
    uVar11 = 0;
    if ((*puVar17 == 0) || (puVar17 == puVar13)) goto LAB_0123eb78;
    lVar14 = 0xc;
    if (*(char *)((long)puVar17 + (10 - (long)puVar13)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar17 + (lVar14 - (long)puVar13);
    if (lVar14 == 0) goto LAB_0123eb74;
    uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar13));
    *(undefined4 *)(puVar1 + 0x40) = 0xfffffffe;
    uVar11 = 0;
    if (uVar12 == 0) goto LAB_0123eb78;
    piVar10 = (int *)(lVar14 + 4);
    while (piVar10[-1] != 0x54706054) {
      piVar10 = piVar10 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        uVar11 = 0;
        goto LAB_0123eb78;
      }
    }
    iVar4 = 0;
    if (*piVar10 != -1) {
      iVar4 = *piVar10;
    }
    *(int *)(puVar1 + 0x40) = iVar4;
    if (*puVar17 == 0) break;
LAB_0123ea70:
    puVar2 = PTR_DAT_04bbbc70;
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar1 = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar1 + 0x40);
      if (-1 < (int)uVar3) {
        if ((ushort *)((ulong)uVar3 + (long)puVar17) == (ushort *)0x0) {
LAB_0123eb74:
          uVar11 = 0;
        }
        else {
          uVar11 = *(ushort *)((ulong)uVar3 + (long)puVar17);
        }
        goto LAB_0123eb78;
      }
      if (uVar3 != 0xffffffff) goto LAB_0123eb74;
    }
  }
  uVar11 = 0;
LAB_0123eb78:
  local_80 = (uint)uVar11;
  local_7c = 0;
  FUN_0277d4ac(&local_80);
  *param_1 = local_80;
  param_1[1] = local_7c;
  return 1;
}

