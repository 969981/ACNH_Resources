
void FUN_01db6ef0(long param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  long *plVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  int iVar27;
  byte local_94 [4];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  piVar2 = (int *)(param_1 + 0x74a0);
  local_94[0] = *(byte *)(param_1 + 0x8410);
  *piVar2 = 0;
  if (7 < local_94[0]) {
    local_94[0] = 0xff;
  }
  uVar6 = FUN_02582fe0(local_94);
  *(undefined4 *)(param_1 + 0x8414) = uVar6;
  puVar4 = PTR_DAT_04bb21c8;
  plVar14 = (long *)PTR_DAT_04bb21d0;
  if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0x281) == '\0') {
    uVar24 = 0;
LAB_01db6fc0:
    iVar27 = 0;
  }
  else {
    lVar19 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x180) + 0x50);
    uVar24 = *(uint *)(lVar19 + 0x10);
    uVar21 = (ulong)uVar24;
    if (1 < uVar24) {
      uVar21 = 0;
    }
    uVar24 = *(uint *)(*(long *)(lVar19 + uVar21 * 8) + 0x18);
    if ((int)uVar24 < 1) goto LAB_01db6fc0;
    uVar18 = 0;
    iVar27 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if (*(char *)(*plVar14 + 0x281) != '\0') {
        lVar19 = *(long *)(*(long *)(*(long *)puVar4 + 0x180) + 0x50);
        uVar7 = *(uint *)(lVar19 + 0x10);
        uVar21 = (ulong)uVar7;
        if (1 < uVar7) {
          uVar21 = 0;
        }
        puVar20 = *(uint **)(lVar19 + uVar21 * 8);
        if ((int)uVar18 < (int)puVar20[6]) {
          lVar19 = *(long *)(puVar20 + 2);
          uVar7 = uVar18;
          if (*puVar20 <= uVar18) {
            uVar7 = 0;
          }
          if (lVar19 != 0) {
            plVar22 = (long *)(lVar19 + (ulong)uVar7 * 0x48);
            if (param_2 == 0) {
LAB_01db70e0:
              if (*(long *)(lVar19 + (ulong)uVar7 * 0x48 + 0x40) != 0) {
                uVar26 = *(undefined8 *)(param_1 + 0x28);
                FUN_00699eb4(auStack_90,*(undefined8 *)(lVar19 + (ulong)uVar7 * 0x48 + 0x30));
                uVar21 = FUN_0069aa28(auStack_90);
                puVar5 = PTR_DAT_04bc11a8;
                if ((uVar21 & 1) != 0) {
                  puStack_78 = auStack_90;
                  puStack_68 = &DAT_0409f795;
                  local_80 = uVar26;
                  local_70 = puVar1;
                  uVar7 = (*(code *)**(undefined8 **)(PTR_DAT_04bc11a8 + 0x30))
                                    (PTR_DAT_04bc11a8 + 0x30,&local_80);
                  uVar8 = (*(code *)**(undefined8 **)(puVar5 + 0xe0))(puVar5 + 0xe0,&local_80);
                  uVar9 = (*(code *)**(undefined8 **)(puVar5 + 400))(puVar5 + 400,&local_80);
                  uVar10 = (*(code *)**(undefined8 **)(puVar5 + 0x240))(puVar5 + 0x240,&local_80);
                  uVar11 = (*(code *)**(undefined8 **)(puVar5 + 0x2f0))(puVar5 + 0x2f0,&local_80);
                  uVar12 = (*(code *)**(undefined8 **)(puVar5 + 0x3a0))(puVar5 + 0x3a0,&local_80);
                  uVar13 = (*(code *)**(undefined8 **)(puVar5 + 0x450))(puVar5 + 0x450,&local_80);
                  uVar21 = (*(code *)**(undefined8 **)(puVar5 + 0x500))(puVar5 + 0x500,&local_80);
                  uVar15 = (*(code *)**(undefined8 **)(puVar5 + 0x5b0))(puVar5 + 0x5b0,&local_80);
                  uVar16 = (*(code *)**(undefined8 **)(puVar5 + 0x660))(puVar5 + 0x660,&local_80);
                  if ((((((((uVar16 & 1) != 0) || ((uVar7 & 1) != 0)) || ((uVar8 & 1) != 0)) ||
                        (((uVar9 & 1) != 0 || ((uVar10 & 1) != 0)))) ||
                       (((uVar11 & 1) != 0 || (((uVar12 & 1) != 0 || ((uVar13 & 1) != 0)))))) ||
                      (((uVar21 & 1) != 0 || ((uVar15 & 1) != 0)))) &&
                     ((lVar19 = *(long *)(*(long *)(param_1 + 0x28) + 0x48), lVar19 != 0 &&
                      (uVar7 = *(uint *)(DAT_05379880 + 0x28), uVar7 != 0xffffffff)))) {
                    if (*(uint *)(DAT_05379880 + 8) <= uVar7) {
                      uVar7 = 0;
                    }
                    lVar25 = *(long *)(DAT_05379880 + 0x10) + (long)(int)uVar7 * 0x40;
                    if ((*(char *)(lVar25 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar25 + 0x20))) {
                      uVar15 = 0;
                      uVar21 = (ulong)*(uint *)(lVar25 + 0x20);
                      do {
                        if (*(uint *)(lVar25 + 0x10) <= (uint)uVar15 ||
                            *(long *)(lVar25 + 0x18) == 0) break;
                        lVar17 = nn::friends::Friend::GetAccountId();
                        if (lVar17 == lVar19) {
                          plVar14 = (long *)(param_1 + 0x71d0 + (long)iVar27 * 0x18);
                          iVar27 = iVar27 + 1;
                          lVar19 = *(long *)(param_1 + 0x28);
                          *plVar14 = *plVar22;
                          lVar19 = *(long *)(lVar19 + 0x48);
                          *(uint *)(plVar14 + 2) = uVar18;
                          plVar14[1] = lVar19;
                          *piVar2 = *piVar2 + 1;
                          plVar14 = (long *)PTR_DAT_04bb21d0;
                          if (iVar27 != 0x1e) goto LAB_01db6fe0;
                          goto LAB_01db7438;
                        }
                        uVar16 = (uVar21 & 0xffffffff00000000) + 0x100000000;
                        uVar15 = uVar16 >> 0x20;
                        iVar23 = (int)uVar21;
                        uVar21 = uVar16 | uVar21 & 0xffffffff;
                      } while ((int)(uVar16 >> 0x20) < iVar23);
                    }
                  }
                }
              }
              if (param_2 != 0) {
                lVar19 = *(long *)(param_2 + 8);
                if ((*(long *)(lVar19 + 0x28) != 0) &&
                   (plVar14 = *(long **)(*(long *)(lVar19 + 0x28) + 0x20), plVar14 != (long *)0x0))
                {
                  local_80 = *(undefined8 *)(lVar19 + 8);
                  puStack_78 = *(undefined1 **)(lVar19 + 0x10);
                  local_70 = (undefined *)0x680;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_80);
                }
                plVar14 = (long *)PTR_DAT_04bb21d0;
                uVar21 = 0;
                lVar19 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
                do {
                  if (*(long *)(lVar19 + (-(uVar21 >> 0x1f) & 0xfffffff000000000 | uVar21 << 4)) ==
                      0) {
                    lVar25 = (long)(int)uVar21;
LAB_01db73ac:
                    plVar3 = (long *)(lVar19 + lVar25 * 0x10);
                    *plVar3 = *plVar22;
                    *(undefined4 *)(plVar3 + 1) = 1;
                    break;
                  }
                  lVar25 = (uVar21 << 0x20) + 0x100000000;
                  if (*(long *)(lVar19 + (lVar25 >> 0x1c)) == 0) {
                    lVar25 = lVar25 >> 0x20;
                    goto LAB_01db73ac;
                  }
                  uVar7 = (int)uVar21 + 2;
                  uVar21 = (ulong)uVar7;
                } while (uVar7 != 100);
                goto LAB_01db6fe0;
              }
            }
            else {
              lVar25 = *(long *)(param_2 + 8);
              if ((*(long *)(lVar25 + 0x28) != 0) &&
                 (plVar14 = *(long **)(*(long *)(lVar25 + 0x28) + 0x20), plVar14 != (long *)0x0)) {
                local_80 = *(undefined8 *)(lVar25 + 8);
                puStack_78 = *(undefined1 **)(lVar25 + 0x10);
                local_70 = (undefined *)0x680;
                (**(code **)(*plVar14 + 0x20))(plVar14,&local_80);
              }
              plVar14 = (long *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
              lVar25 = *plVar22;
              if (*plVar14 == lVar25) goto LAB_01db70e0;
              uVar21 = 0;
              do {
                uVar21 = uVar21 + 1;
                if (*(long *)((long)plVar14 +
                             (-(uVar21 >> 0x1f & 1) & 0xfffffff000000000 |
                             uVar21 * 0x10 & 0xffffffff0)) == lVar25) {
                  if (0 < (int)uVar21) goto LAB_01db6fd0;
                  goto LAB_01db70e0;
                }
                uVar15 = (uVar21 & 0xffffffff) + 1;
                if ((int)uVar15 == 100) goto LAB_01db70e0;
                uVar21 = uVar15 & 0xffffffff;
              } while (*(long *)((long)plVar14 +
                                (-(uVar15 >> 0x1f & 1) & 0xfffffff000000000 |
                                uVar15 * 0x10 & 0xffffffff0)) != lVar25);
              if ((int)uVar15 < 1) goto LAB_01db70e0;
            }
LAB_01db6fd0:
            plVar14 = &DAT_05358908;
          }
        }
      }
LAB_01db6fe0:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar24);
    if (iVar27 == 0x1e) goto LAB_01db7438;
  }
  do {
    lVar19 = (long)iVar27;
    iVar27 = iVar27 + 1;
    *(undefined8 *)(param_1 + 0x71d0 + lVar19 * 0x18) = 0;
  } while (iVar27 != 0x1e);
LAB_01db7438:
  uVar18 = (uint)*(byte *)(*plVar14 + 0x281);
  if (*(byte *)(*plVar14 + 0x281) != 0) {
    lVar19 = *(long *)(*(long *)(*(long *)puVar4 + 0x180) + 0x50);
    uVar18 = *(uint *)(lVar19 + 0x10);
    uVar21 = (ulong)uVar18;
    if (1 < uVar18) {
      uVar21 = 0;
    }
    uVar18 = *(uint *)(*(long *)(lVar19 + uVar21 * 8) + 0x1c);
  }
  *(bool *)(param_1 + 0x8424) = (int)uVar24 < (int)uVar18;
  return;
}

