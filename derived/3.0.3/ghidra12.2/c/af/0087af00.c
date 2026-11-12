
undefined8 FUN_0087af00(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *__s;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  uint *puVar15;
  undefined *local_70;
  long local_68;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_006bd550(param_2[1],0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar5);
  lVar6 = FUN_0088c0d0(param_1 + 8,&local_70);
  __s = PTR_DAT_04bb3250;
  if (lVar6 == 0) {
    uVar8 = *(uint *)(param_1 + 1000);
    if ((0 < (int)uVar8) ||
       (((*(long *)(param_1 + 0x2d8) != 0 &&
         (puVar15 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar15 != (uint *)0x0)) &&
        (uVar8 = *puVar15, 0 < (int)uVar8)))) {
      uVar13 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        if ((int)*(uint *)(param_1 + 1000) < 1) {
          if (((((*(long *)(param_1 + 0x2d8) != 0) &&
                (puVar15 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar15 != (uint *)0x0)) &&
               ((*(uint *)(param_1 + 0x2f0) <= uVar13 ||
                (*(char *)(*(long *)(param_1 + 0x2f8) + uVar13) != '\0')))) &&
              ((uVar13 < *puVar15 && (puVar15[1] != 0)))) && ((ushort)puVar15[2] != 0)) {
            iVar11 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              iVar11 = 0x1c;
            }
            puVar15 = (uint *)((ulong)(puVar15[1] * (int)uVar13 + (uint)(ushort)puVar15[2] * 8 +
                                      iVar11) + (long)puVar15);
            goto joined_r0x0087b248;
          }
        }
        else if (uVar13 < *(uint *)(param_1 + 1000)) {
          uVar12 = uVar13 & 0xffffffff;
          if (*(uint *)(param_1 + 0x3d8) <= uVar13) {
            uVar12 = 0;
          }
          puVar15 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar12 * 8);
joined_r0x0087b248:
          if (puVar15 != (uint *)0x0) {
            if (*puVar15 != 0) {
              cVar14 = *PTR_DAT_04bb3248;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(__s,0xff,0x288);
                }
                else {
                  uVar3 = *(uint *)(__s + 0x14c);
                  if (-1 < (int)uVar3) {
                    lVar6 = (ulong)uVar3 + (long)puVar15;
                    goto LAB_0087b10c;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar9 = (uint *)(ulong)*puVar15;
                lVar6 = 0;
                if ((*puVar15 == 0) || (puVar15 == puVar9)) goto LAB_0087b10c;
                lVar6 = 0xc;
                if (*(char *)((long)puVar15 + (10 - (long)puVar9)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar2 = (long)puVar15 + (lVar6 - (long)puVar9);
                if (lVar2 == 0) break;
                uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar9));
                *(undefined4 *)(__s + 0x14c) = 0xfffffffe;
                lVar6 = 0;
                if (uVar12 == 0) goto LAB_0087b10c;
                piVar10 = (int *)(lVar2 + 4);
                while (piVar10[-1] != -0x44991235) {
                  piVar10 = piVar10 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) {
                    lVar6 = 0;
                    goto LAB_0087b10c;
                  }
                }
                iVar11 = 0;
                if (*piVar10 != -1) {
                  iVar11 = *piVar10;
                }
                *(int *)(__s + 0x14c) = iVar11;
              } while (*puVar15 != 0);
            }
            lVar6 = 0;
LAB_0087b10c:
            local_68 = *(long *)PTR_PTR_04bb3270;
            if (lVar6 != 0) {
              local_68 = lVar6;
            }
            local_70 = puVar1;
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            lVar6 = param_2[1];
            (**(code **)(local_70 + 0x18))(&local_70);
            if (lVar6 == local_68) goto LAB_0087af5c;
            uVar12 = 0;
            bVar4 = true;
            do {
              lVar6 = param_2[1] + 2 + uVar12;
              cVar14 = *(char *)(lVar6 + -2);
              if (cVar14 != *(char *)(local_68 + uVar12)) break;
              if (cVar14 == '\0') {
                if (bVar4) goto LAB_0087af5c;
                break;
              }
              cVar14 = *(char *)(lVar6 + -1);
              if (cVar14 != *(char *)(local_68 + uVar12 + 1)) break;
              if (cVar14 == '\0') goto LAB_0087af5c;
              cVar14 = *(char *)(param_2[1] + 2 + uVar12);
              if (cVar14 != *(char *)(local_68 + uVar12 + 2)) break;
              if (cVar14 == '\0') goto LAB_0087af5c;
              bVar4 = uVar12 < 0x7fffe;
              uVar12 = uVar12 + 3;
            } while (uVar12 != 0x80001);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar8);
    }
    uVar7 = 0;
  }
  else {
LAB_0087af5c:
    uVar7 = 1;
  }
  return uVar7;
}

