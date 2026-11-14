
undefined8 FUN_01c27700(long param_1,undefined8 param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  
  uVar11 = 0;
  do {
    uVar6 = *(uint *)(param_1 + 0x1d0);
    if ((int)uVar6 < 1) {
      uVar7 = 0;
      if (*(long *)(param_1 + 0xc0) != 0) {
        puVar4 = *(uint **)(*(long *)(param_1 + 0xc0) + 8);
        uVar7 = 0;
        if (puVar4 != (uint *)0x0) {
          uVar7 = (ulong)*puVar4;
        }
      }
      if (uVar7 <= uVar11) {
        return 0;
      }
      if (0 < (int)uVar6) goto LAB_01c277b4;
      if ((((*(long *)(param_1 + 0xc0) != 0) &&
           (puVar4 = *(uint **)(*(long *)(param_1 + 0xc0) + 8), puVar4 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd8) <= uVar11 ||
           (*(char *)(*(long *)(param_1 + 0xe0) + uVar11) != '\0')))) &&
         (((uVar11 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * (int)uVar11 + (uint)(ushort)puVar4[2] * 8 + iVar10) +
                         (long)puVar4);
        goto joined_r0x01c278ec;
      }
    }
    else {
      if (uVar6 <= uVar11) {
        return 0;
      }
LAB_01c277b4:
      if (uVar11 < uVar6) {
        uVar7 = uVar11 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1c0) <= uVar11) {
          uVar7 = 0;
        }
        puVar4 = *(uint **)(*(long *)(param_1 + 0x1c8) + uVar7 * 8);
joined_r0x01c278ec:
        if (puVar4 != (uint *)0x0) {
          if (*puVar4 != 0) {
            cVar5 = DAT_0534be78;
            do {
              if (cVar5 == '\0') {
                cVar5 = '\x01';
                DAT_0534be7c = -1;
                DAT_0534be84 = 0xffffffffffffffff;
                DAT_0534be78 = '\x01';
                DAT_0534be8c = 0xffffffffffffffff;
                DAT_0534be94 = 0xffffffff;
              }
              else {
                if (-1 < (int)DAT_0534be84) {
                  puVar1 = (ushort *)((DAT_0534be84 & 0xffffffff) + (long)puVar4);
                  if (puVar1 != (ushort *)0x0) {
                    uVar6 = (uint)*puVar1;
                    goto LAB_01c27908;
                  }
                  break;
                }
                if ((int)DAT_0534be84 != -1) break;
              }
              lVar3 = (long)puVar4 - (ulong)*puVar4;
              if (*puVar4 == 0) break;
              uVar6 = 0x4c7b;
              if (lVar3 == 0) goto LAB_01c27908;
              lVar2 = 0xc;
              if (*(char *)(lVar3 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar3 == 0) break;
              uVar7 = (ulong)*(ushort *)(lVar3 + 8);
              DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
              if (uVar7 == 0) break;
              piVar9 = (int *)(lVar2 + lVar3 + 4);
              while (piVar9[-1] != 0x4765b463) {
                piVar9 = piVar9 + 2;
                uVar7 = uVar7 - 1;
                if (uVar7 == 0) goto LAB_01c27904;
              }
              iVar10 = 0;
              if (*piVar9 != -1) {
                iVar10 = *piVar9;
              }
              DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar10);
              if (*puVar4 == 0) break;
            } while( true );
          }
LAB_01c27904:
          uVar6 = 0x4c7b;
LAB_01c27908:
          uVar6 = uVar6 - *(ushort *)(param_1 + 0x408);
          if ((uVar6 < *(uint *)(param_1 + 1000)) &&
             (*(long *)(*(long *)(param_1 + 0x3f0) + (long)(int)uVar6 * 8) != 0)) {
            if (*puVar4 != 0) {
              cVar5 = DAT_0534be78;
              do {
                if (cVar5 == '\0') {
                  cVar5 = '\x01';
                  DAT_0534be7c = -1;
                  DAT_0534be84 = 0xffffffffffffffff;
                  DAT_0534be78 = '\x01';
                  DAT_0534be8c = 0xffffffffffffffff;
                  DAT_0534be94 = 0xffffffff;
                }
                else {
                  if (-1 < DAT_0534be7c) {
                    if ((undefined2 *)((ulong)DAT_0534be7c._4_4_ + (long)puVar4) !=
                        (undefined2 *)0x0) {
                      local_68 = *(undefined2 *)((ulong)DAT_0534be7c._4_4_ + (long)puVar4);
                      goto LAB_01c279f0;
                    }
                    break;
                  }
                  if (DAT_0534be7c._4_4_ != 0xffffffff) break;
                }
                puVar8 = (uint *)(ulong)*puVar4;
                local_68 = 0xfffe;
                if ((*puVar4 == 0) || (puVar4 == puVar8)) goto LAB_01c279f0;
                lVar3 = 0xc;
                if (*(char *)((long)puVar4 + (10 - (long)puVar8)) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar4 + (lVar3 - (long)puVar8);
                if (lVar3 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar8));
                DAT_0534be7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534be7c);
                if (uVar7 == 0) break;
                piVar9 = (int *)(lVar3 + 4);
                while (piVar9[-1] != -0x489482c9) {
                  piVar9 = piVar9 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_01c279ec;
                }
                iVar10 = 0;
                if (*piVar9 != -1) {
                  iVar10 = *piVar9;
                }
                DAT_0534be7c = CONCAT44(iVar10,(undefined4)DAT_0534be7c);
                if (*puVar4 == 0) break;
              } while( true );
            }
LAB_01c279ec:
            local_68 = 0xfffe;
LAB_01c279f0:
            local_66 = 0;
            local_64 = 0;
            FUN_0277d4ac(&local_68);
            uVar7 = FUN_0277d7b4(&local_68,param_2);
            if ((uVar7 & 1) != 0) {
              return 1;
            }
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

