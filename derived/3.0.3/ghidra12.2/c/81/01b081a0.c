
byte FUN_01b081a0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  int *piVar13;
  long lVar14;
  uint local_40;
  undefined4 uStack_3c;
  undefined **local_38;
  uint local_30;
  undefined4 uStack_2c;
  long local_28;
  
  iVar5 = FUN_01afcfa0();
  if ((((iVar5 == 0) || (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) ||
      ((*puVar7 & 0x18) != 0x10)) && (uVar8 = FUN_01b085e0(param_1), (uVar8 & 1) != 0)) {
    uVar8 = FUN_01b032d0(param_1);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_01b032d0(param_1), (uVar8 & 1) != 0)) &&
       ((*(byte *)(param_1 + 0xb) & 3) != 0)) {
      local_38 = (undefined **)CONCAT44(local_38._4_4_,0xb9);
      puVar9 = *(uint **)(param_1 + 0x10);
      if (puVar9 == (uint *)0x0) {
        local_40 = 0xbc;
      }
      else {
        uVar6 = *puVar9;
        local_40 = 0;
        if ((uVar6 != 0) && (puVar9 != (uint *)(ulong)uVar6)) {
          puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
          local_40 = 0;
          if (*puVar11 != 0) {
            uVar6 = puVar11[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar6);
                }
                if (*puVar11 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_40 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_40 < 0xbd)) goto LAB_01b082ac;
              }
            }
            local_40 = 0;
          }
        }
      }
LAB_01b082ac:
      if (local_40 != 0xb9) {
        FUN_01b079ec(&local_40,param_1);
        puVar2 = PTR_DAT_04bb43c0;
        local_28 = 0;
        local_38 = &PTR_FUN_04a36b50;
        local_30 = local_40;
        uStack_2c = uStack_3c;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        uVar6 = FUN_0277d6c4(&local_30);
        lVar10 = DAT_0532a768;
        if (*(long *)puVar2 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            uVar6 = FUN_0277d6c4(&local_40);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0))
            {
              local_28 = lVar10;
            }
          }
        }
        bVar4 = FUN_01b081a0(&local_38);
        goto LAB_01b084fc;
      }
    }
    puVar3 = PTR_DAT_04bbfeb8;
    puVar2 = PTR_DAT_04bbfeb0;
    puVar9 = *(uint **)(param_1 + 0x10);
    if (puVar9 == (uint *)0x0) {
      uVar6 = 0xbc;
    }
    else {
      uVar1 = *puVar9;
      uVar6 = 0;
      if ((uVar1 != 0) && (puVar9 != (uint *)(ulong)uVar1)) {
        puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar1);
        uVar6 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar11 + lVar10 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar6 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 uVar6 < 0xbd)) goto LAB_01b0835c;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_01b0835c:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
           (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
           (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
         (((uVar6 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar9 = (uint *)((ulong)(puVar9[1] * uVar6 + (uint)(ushort)puVar9[2] * 8 + iVar5) +
                         (long)puVar9);
        goto joined_r0x01b084f4;
      }
    }
    else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01b084f4:
      if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
        cVar12 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar3 + 0x34);
            if (-1 < (int)uVar6) {
              if ((char *)((ulong)uVar6 + (long)puVar9) == (char *)0x0) break;
              bVar4 = *(char *)((ulong)uVar6 + (long)puVar9) != '\0';
              goto LAB_01b084fc;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)*puVar9;
          bVar4 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar11)) goto LAB_01b084fc;
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + (lVar10 - (long)puVar11);
          if (lVar10 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
          *(undefined4 *)(puVar3 + 0x34) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar13 = (int *)(lVar10 + 4);
          while (piVar13[-1] != 0x2c1b3b5b) {
            piVar13 = piVar13 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_01b084f8;
          }
          bVar4 = 0;
          iVar5 = 0;
          if (*piVar13 != -1) {
            iVar5 = *piVar13;
          }
          *(int *)(puVar3 + 0x34) = iVar5;
          if (*puVar9 == 0) goto LAB_01b084fc;
        } while( true );
      }
    }
  }
LAB_01b084f8:
  bVar4 = 0;
LAB_01b084fc:
  return bVar4 & 1;
}

