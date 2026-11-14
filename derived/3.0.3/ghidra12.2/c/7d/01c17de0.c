
void FUN_01c17de0(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  uVar11 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 0x1c8);
    if ((int)uVar4 < 1) {
      uVar7 = 0;
      if (*(long *)(param_1 + 0xb8) != 0) {
        puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
        uVar7 = 0;
        if (puVar5 != (uint *)0x0) {
          uVar7 = (ulong)*puVar5;
        }
      }
      if (uVar7 <= uVar11) {
        return;
      }
      if (0 < (int)uVar4) goto LAB_01c17e84;
      if ((((*(long *)(param_1 + 0xb8) != 0) &&
           (puVar5 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar5 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd0) <= uVar11 ||
           (*(char *)(*(long *)(param_1 + 0xd8) + uVar11) != '\0')))) &&
         (((uVar11 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar5 = (uint *)((ulong)(puVar5[1] * (int)uVar11 + (uint)(ushort)puVar5[2] * 8 + iVar12) +
                         (long)puVar5);
        if (puVar5 == (uint *)0x0) goto LAB_01c17e40;
        goto LAB_01c17ea8;
      }
    }
    else {
      if (uVar4 <= uVar11) {
        return;
      }
LAB_01c17e84:
      if (uVar11 < uVar4) {
        uVar7 = uVar11 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar11) {
          uVar7 = 0;
        }
        puVar5 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar7 * 8);
        if (puVar5 != (uint *)0x0) {
LAB_01c17ea8:
          uVar4 = *puVar5;
          if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
LAB_01c17eb8:
            local_64 = 0;
          }
          else {
            puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
            local_64 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar10 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar5 - lVar10) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05349778) &&
                     (local_64 = (uint)*(ushort *)(DAT_05349780 + (long)(int)uVar1 * 2),
                     local_64 < 10)) goto LAB_01c17ebc;
                }
              }
              goto LAB_01c17eb8;
            }
          }
LAB_01c17ebc:
          if (local_64 == *param_3) {
            if (*puVar5 != 0) {
              cVar6 = DAT_05349760;
              do {
                if (cVar6 == '\0') {
                  cVar6 = '\x01';
                  DAT_05349760 = '\x01';
                  DAT_05349764 = 0xffffffffffffffff;
                  DAT_0534976c = -1;
                  DAT_05349774 = 0xffffffff;
                }
                else {
                  if (-1 < DAT_0534976c) {
                    if ((undefined2 *)((ulong)DAT_0534976c._4_4_ + (long)puVar5) !=
                        (undefined2 *)0x0) {
                      local_6c = *(undefined2 *)((ulong)DAT_0534976c._4_4_ + (long)puVar5);
                      goto LAB_01c18088;
                    }
                    break;
                  }
                  if (DAT_0534976c._4_4_ != 0xffffffff) break;
                }
                puVar8 = (uint *)(ulong)*puVar5;
                local_6c = 0xfffe;
                if ((*puVar5 == 0) || (puVar5 == puVar8)) goto LAB_01c18088;
                lVar10 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar5 + (lVar10 - (long)puVar8);
                if (lVar10 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
                DAT_0534976c = CONCAT44(0xfffffffe,(undefined4)DAT_0534976c);
                if (uVar7 == 0) break;
                piVar9 = (int *)(lVar10 + 4);
                while (piVar9[-1] != -0x489482c9) {
                  piVar9 = piVar9 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_01c18084;
                }
                iVar12 = 0;
                if (*piVar9 != -1) {
                  iVar12 = *piVar9;
                }
                DAT_0534976c = CONCAT44(iVar12,(undefined4)DAT_0534976c);
                if (*puVar5 == 0) break;
              } while( true );
            }
LAB_01c18084:
            local_6c = 0xfffe;
LAB_01c18088:
            local_6a = 0;
            local_68 = 0;
            FUN_0277d4ac(&local_6c);
            lVar10 = *(long *)puVar3;
            uVar4 = FUN_0277d6c4(&local_6c);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                FUN_0277dedc(&local_6c);
                lVar10 = (**(code **)(*param_2 + 0x18))();
                uVar4 = FUN_0277d6c4(&local_6c);
                if ((uVar4 >> 3 & 0x1fff) < 0x753) {
                  lVar2 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar10 + lVar2) = *(uint *)(lVar10 + lVar2) | 1 << (ulong)(uVar4 & 0x1f)
                  ;
                }
              }
            }
          }
        }
      }
    }
LAB_01c17e40:
    uVar11 = uVar11 + 1;
  } while( true );
}

