
/* WARNING: Type propagation algorithm not settling */

bool FUN_01242fd0(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  char cVar9;
  int *piVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar2 = PTR_DAT_04bbbc78;
  uVar5 = *(uint *)(DAT_05150358 + 0x1c0);
  if ((0 < (int)uVar5) ||
     (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
       (puVar16 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
      (uVar5 = *puVar16, uVar5 != 0)))) {
    uVar17 = 0;
    lVar14 = DAT_05150358;
    do {
      if ((int)*(uint *)(lVar14 + 0x1c0) < 1) {
        if (((((*(long *)(lVar14 + 0xb0) != 0) &&
              (puVar16 = *(uint **)(*(long *)(lVar14 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
             ((*(uint *)(lVar14 + 200) <= uVar17 ||
              (*(char *)(*(long *)(lVar14 + 0xd0) + (long)(int)uVar17) != '\0')))) &&
            ((uVar17 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar16 = (uint *)((ulong)(puVar16[1] * uVar17 + (uint)(ushort)puVar16[2] * 8 + iVar15) +
                            (long)puVar16);
          goto joined_r0x012431a4;
        }
      }
      else if (uVar17 < *(uint *)(lVar14 + 0x1c0)) {
        uVar18 = uVar17;
        if (*(uint *)(lVar14 + 0x1b0) <= uVar17) {
          uVar18 = 0;
        }
        puVar16 = *(uint **)(*(long *)(lVar14 + 0x1b8) + (ulong)uVar18 * 8);
joined_r0x012431a4:
        if (puVar16 != (uint *)0x0) {
          if (*puVar16 != 0) {
            cVar9 = *PTR_DAT_04bbbc70;
            do {
              puVar3 = PTR_DAT_04bbbc70;
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar18 = *(uint *)(puVar2 + 0x40);
                if (-1 < (int)uVar18) {
                  if ((ushort *)((ulong)uVar18 + (long)puVar16) != (ushort *)0x0) {
                    uVar18 = (uint)*(ushort *)((ulong)uVar18 + (long)puVar16);
                    goto LAB_012431c0;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar16;
              uVar18 = 0;
              if ((*puVar16 == 0) || (puVar16 == puVar13)) goto LAB_012431c0;
              lVar14 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar13)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar16 + (lVar14 - (long)puVar13);
              if (lVar14 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar13));
              *(undefined4 *)(puVar2 + 0x40) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar10 = (int *)(lVar14 + 4);
              while (piVar10[-1] != 0x54706054) {
                piVar10 = piVar10 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_012431bc;
              }
              iVar15 = 0;
              if (*piVar10 != -1) {
                iVar15 = *piVar10;
              }
              *(int *)(puVar2 + 0x40) = iVar15;
              if (*puVar16 == 0) break;
            } while( true );
          }
LAB_012431bc:
          uVar18 = 0;
LAB_012431c0:
          uVar4 = FUN_0277d6c4(param_2);
          if (uVar4 == uVar18) {
            if (*puVar16 == 0) goto LAB_012432e0;
            cVar9 = *PTR_DAT_04bbbc70;
            goto LAB_01243224;
          }
          lVar14 = DAT_05150358;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar5);
  }
  return false;
LAB_01243224:
  puVar3 = PTR_DAT_04bbbc70;
  if (cVar9 == '\0') {
    cVar9 = '\x01';
    *(undefined8 *)puVar2 = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
    *puVar3 = 1;
    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
  }
  else {
    uVar5 = *(uint *)(puVar2 + 0x44);
    if (-1 < (int)uVar5) {
      if ((char *)((ulong)uVar5 + (long)puVar16) != (char *)0x0) {
        iVar15 = (int)*(char *)((ulong)uVar5 + (long)puVar16);
        uVar5 = *puVar16;
        goto joined_r0x012433d8;
      }
LAB_012432e0:
      iVar15 = -1;
      uVar5 = *puVar16;
joined_r0x012433d8:
      if (uVar5 == 0) {
LAB_012433f0:
        uVar11 = 0xfffe;
LAB_012433f4:
        local_78 = (undefined *)(ulong)uVar11;
        FUN_0277d4ac(&local_78);
        *(undefined2 *)param_1 = (undefined2)local_78;
        *(undefined1 *)((long)param_1 + 2) = local_78._2_1_;
        *(undefined1 *)((long)param_1 + 3) = local_78._3_1_;
        param_1[1] = local_78._4_4_;
        puVar2 = PTR_DAT_04bb43c0;
        if (iVar15 == -1) {
          return false;
        }
        local_70 = SUB84(local_78,0);
        local_6c = local_78._4_4_;
        local_68 = 0;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        uVar5 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(param_1);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
               (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8), lVar14 != 0))
            {
              local_68 = lVar14;
            }
          }
        }
        iVar6 = FUN_01ad7260(&local_78);
        if (iVar6 == 0) {
          return false;
        }
        iVar7 = FUN_01ad7260(&local_78);
        if ((iVar7 != 0) &&
           (((iVar15 == 0 || (iVar7 = FUN_01ad7260(&local_78), iVar15 < iVar7)) &&
            (puVar8 = (ushort *)FUN_01afd600(&local_78), puVar8 != (ushort *)0x0)))) {
          *puVar8 = *puVar8 & 0xfff8 | (ushort)iVar15 & 7;
        }
        *param_1 = local_70;
        param_1[1] = local_6c;
        return iVar6 != 0;
      }
      cVar9 = *PTR_DAT_04bbbc70;
      do {
        puVar3 = PTR_DAT_04bbbc70;
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar2 + 0x34);
          if (-1 < (int)uVar5) {
            if ((ushort *)((ulong)uVar5 + (long)puVar16) != (ushort *)0x0) {
              uVar11 = *(ushort *)((ulong)uVar5 + (long)puVar16);
              goto LAB_012433f4;
            }
            goto LAB_012433f0;
          }
          if (uVar5 != 0xffffffff) goto LAB_012433f0;
        }
        puVar13 = (uint *)(ulong)*puVar16;
        uVar11 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar13)) goto LAB_012433f4;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar13)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar13);
        if (lVar14 == 0) goto LAB_012433f0;
        uVar12 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar13));
        *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
        if (uVar12 == 0) goto LAB_012433f0;
        piVar10 = (int *)(lVar14 + 4);
        while (piVar10[-1] != -0x485b96aa) {
          piVar10 = piVar10 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_012433f0;
        }
        iVar6 = 0;
        if (*piVar10 != -1) {
          iVar6 = *piVar10;
        }
        *(int *)(puVar2 + 0x34) = iVar6;
        if (*puVar16 == 0) goto LAB_012433f0;
      } while( true );
    }
    if (uVar5 != 0xffffffff) goto LAB_012432e0;
  }
  lVar14 = (long)puVar16 - (ulong)*puVar16;
  if ((*puVar16 == 0) || (lVar14 == 0)) goto LAB_012432e0;
  lVar1 = 0xc;
  if (*(char *)(lVar14 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar14 == 0) goto LAB_012432e0;
  uVar12 = (ulong)*(ushort *)(lVar14 + 8);
  *(undefined4 *)(puVar2 + 0x44) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_012432e0;
  piVar10 = (int *)(lVar1 + lVar14 + 4);
  while (piVar10[-1] != 0x64b8fff8) {
    piVar10 = piVar10 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_012432e0;
  }
  iVar15 = 0;
  if (*piVar10 != -1) {
    iVar15 = *piVar10;
  }
  *(int *)(puVar2 + 0x44) = iVar15;
  if (*puVar16 == 0) goto LAB_012432e0;
  goto LAB_01243224;
}

