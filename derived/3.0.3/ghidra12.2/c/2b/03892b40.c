
undefined8 FUN_03892b40(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined *puVar9;
  char cVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_48 [4];
  byte local_44 [4];
  
  puVar9 = PTR_DAT_04bcb7d8;
  if (*(char *)(param_1 + 0x560) == '\0') {
    return 0;
  }
  plVar21 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  uVar11 = (**(code **)(*plVar21 + 0x28))(plVar21);
  if (*(ushort *)(param_1 + 0x538) != 0) {
    lVar8 = plVar21[4];
    uVar6 = *(ushort *)(param_1 + 0x538) + 1 >> 1;
    uVar14 = uVar6;
    if (uVar6 < 2) {
      uVar14 = 1;
    }
    if (**(char **)(param_1 + 0x528) == -1) {
      uVar4 = 1;
      do {
        uVar18 = uVar4;
        if (uVar14 == uVar18) {
          return 0;
        }
        uVar3 = uVar18;
        if (*(uint *)(param_1 + 0x520) <= uVar18) {
          uVar3 = 0;
        }
        uVar4 = uVar18 + 1;
      } while ((*(char **)(param_1 + 0x528))[uVar3] == -1);
      if (uVar6 <= uVar18) {
        return 0;
      }
    }
    local_44[0] = (**(code **)(*plVar21 + 0x80))(plVar21);
    if (local_44[0] != 0xff) {
      plVar12 = *(long **)(*(long *)puVar9 + 0x68);
      if (*(byte *)(plVar12 + 4) == local_44[0]) {
        lVar16 = param_1 + 0x4c8;
        bVar5 = *(byte *)(param_1 + 0x5a0);
      }
      else {
        cVar10 = (**(code **)(*plVar12 + 0x158))(plVar12,local_44);
        uVar14 = (uint)cVar10;
        if (*(uint *)(param_1 + 0x4a8) <= uVar14) {
          uVar14 = 0;
        }
        lVar16 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar14 * 0x70;
        bVar5 = *(byte *)(param_1 + 0x5a0);
      }
      if (bVar5 != 0) {
        uVar14 = 0;
        do {
          uVar6 = uVar14;
          if (*(uint *)(param_1 + 0x508) <= uVar14) {
            uVar6 = 0;
          }
          uVar4 = uVar14;
          if (*(uint *)(lVar16 + 0x40) <= uVar14) {
            uVar4 = 0;
          }
          if (*(long *)(*(long *)(param_1 + 0x510) + (ulong)uVar6 * 0x10) !=
              *(long *)(*(long *)(lVar16 + 0x48) + (ulong)uVar4 * 0x10)) {
            return 0;
          }
          lVar1 = *(long *)(param_1 + 0x510) + (ulong)uVar6 * 0x10;
          lVar2 = *(long *)(lVar16 + 0x48) + (ulong)uVar4 * 0x10;
          if (*(char *)(lVar1 + 8) != *(char *)(lVar2 + 8)) {
            return 0;
          }
          if (*(char *)(lVar1 + 9) != *(char *)(lVar2 + 9)) {
            return 0;
          }
          uVar14 = uVar14 + 1;
        } while (bVar5 != uVar14);
      }
      if (*(short *)(param_1 + 0x538) == 0) {
        return 1;
      }
      uVar22 = 0;
      do {
        if ((uVar11 >> (uVar22 & 0x3f) & 1) != 0) {
          uVar14 = (uint)uVar22 & 0xff;
          if ((param_2 & 1) == 0) {
LAB_03892d84:
            uVar7 = (undefined1)uVar22;
            local_48[0] = uVar7;
            auVar23 = (**(code **)(*plVar21 + 0x130))(plVar21,local_48);
            if (*(int *)(param_1 + 0x568) != 0) {
              plVar12 = *(long **)(param_1 + 0x570);
              lVar16 = (long)*(int *)(param_1 + 0x568) << 3;
              do {
                plVar17 = (long *)*plVar12;
                if (((*plVar17 == auVar23._0_8_) &&
                    ((uint)*(byte *)(plVar17 + 1) == (auVar23._8_4_ & 0xff))) &&
                   ((uint)*(byte *)((long)plVar17 + 9) == (auVar23._9_4_ & 0xff))) {
                  local_64[0] = uVar7;
                  (**(code **)(*plVar21 + 0x200))(plVar21,local_64);
                  goto LAB_03892d34;
                }
                plVar12 = plVar12 + 1;
                lVar16 = lVar16 + -8;
              } while (lVar16 != 0);
            }
            plVar12 = *(long **)(*(long *)puVar9 + 0x68);
            local_68[0] = uVar7;
            cVar10 = (**(code **)(*plVar12 + 0x158))(plVar12,local_68);
            uVar14 = (uint)cVar10;
            if (*(uint *)(param_1 + 0x4a8) <= uVar14) {
              uVar14 = 0;
            }
            uVar6 = *(uint *)(param_1 + 0x520);
            if (0 < (int)uVar6) {
              uVar13 = (ulong)uVar6;
              pcVar19 = *(char **)(param_1 + 0x528);
              do {
                if (uVar22 == ((long)*pcVar19 & 0xffffffffU)) {
                  if (uVar22 != ((long)(char)lVar8 & 0xffffffffU)) {
                    if (*(int *)(param_1 + 0x530) !=
                        *(int *)(*(long *)(param_1 + 0x4b0) + (long)(int)uVar14 * 0x70 + 0x68)) {
                      return 0;
                    }
                    lVar16 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar14 * 0x70;
                    uVar13 = 0;
                    do {
                      uVar20 = uVar13 & 0xffffffff;
                      if (*(uint *)(lVar16 + 0x58) <= uVar13) {
                        uVar20 = 0;
                      }
                      if ((*(char **)(param_1 + 0x528))[uVar13] !=
                          *(char *)(*(long *)(lVar16 + 0x60) + uVar20)) {
                        return 0;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar6 != uVar13);
                  }
                  break;
                }
                uVar13 = uVar13 - 1;
                pcVar19 = pcVar19 + 1;
              } while (uVar13 != 0);
            }
          }
          else {
            uVar13 = (ulong)*(uint *)(param_1 + 0x520);
            if (0 < (int)*(uint *)(param_1 + 0x520)) {
              pbVar15 = *(byte **)(param_1 + 0x528);
              do {
                if (*pbVar15 == uVar14) {
                  if (uVar14 != 0xff) goto LAB_03892d84;
                  break;
                }
                uVar13 = uVar13 - 1;
                pbVar15 = pbVar15 + 1;
              } while (uVar13 != 0);
            }
          }
        }
LAB_03892d34:
        uVar22 = uVar22 + 1;
        if (*(ushort *)(param_1 + 0x538) <= uVar22) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

