
void FUN_030eaaf0(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 uVar18;
  uint uVar19;
  long *plVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  undefined *local_188;
  undefined8 *local_180;
  uint local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined1 auStack_82 [2];
  int local_80;
  
  lVar13 = param_1 + 0x350;
  if (*(long *)(param_1 + 0x358) != lVar13) {
    lVar22 = (long)*(int *)(param_1 + 0x364);
    puVar15 = auStack_82;
    if (auStack_82 <= (undefined1 *)((long)&local_a8 + 2U)) {
      puVar15 = (undefined1 *)((long)&local_a8 + 2U);
    }
    piVar21 = (int *)(*(long *)(param_1 + 0x358) - lVar22);
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar3 = PTR_DAT_04bc0bc0 + 0x10;
    do {
      *(undefined1 *)(piVar21 + 7) = 0;
      if (((((param_2 & 1) == 0) && (piVar21[6] != 0)) &&
          ((-1 < piVar21[6] || (*piVar21 == piVar21[1])))) || (*piVar21 == piVar21[1])) {
        uVar18 = 0;
        lVar12 = *(long *)(piVar21 + 4);
      }
      else {
        uVar18 = 1;
        *piVar21 = piVar21[1];
        lVar12 = *(long *)(piVar21 + 4);
      }
      if ((lVar12 != 0) && (*(long *)(piVar21 + 2) != 0)) {
        local_174 = 0;
        local_178 = 0x13;
        local_170 = 0xffffffff;
        uStack_168 = 0xffffffff00000000;
        local_160 = 0xffffffff;
        local_148 = 0x40;
        local_105 = 0;
        local_144[0] = 0;
        local_f0 = 0x40;
        local_ad = 0;
        local_ec[0] = 0;
        uStack_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_8a = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_188 = puVar3;
        local_180 = &local_a8;
        local_158 = puVar2;
        puStack_150 = local_144;
        local_100 = puVar2;
        puStack_f8 = local_ec;
        memset(&local_a8,0,(ulong)(puVar15 + (-0xe1 - (long)&local_188)) & 0xfffffffffffffffc | 2);
        local_80 = 0;
        iVar9 = *piVar21;
        if (0x62 < iVar9) {
          iVar9 = 99;
        }
        FUN_01be4af0(&local_188,**(undefined4 **)PTR_DAT_04bb3448,iVar9,2,1,3);
        plVar16 = *(long **)(piVar21 + 4);
        local_80 = iVar9;
        if ((*(long *)(piVar21 + 2) != 0) && ((char)plVar16[1] == '\0')) {
          FUN_01bea4e8(*plVar16,*(long *)(piVar21 + 2),&local_188);
          *(undefined1 *)(plVar16 + 1) = 1;
        }
        FUN_01bea9c8(*plVar16);
        if (*(int *)(*plVar16 + 0xc) == 0xd) {
          *(undefined1 *)(plVar16 + 1) = 0;
        }
      }
      if (-1 < piVar21[6]) {
        piVar21[6] = piVar21[6] + -1;
      }
      *(undefined1 *)(piVar21 + 7) = uVar18;
      puVar8 = PTR_DAT_04bc4e68;
      puVar7 = PTR_DAT_04bb2020;
      piVar21 = (int *)(*(long *)((long)piVar21 + lVar22 + 8) - lVar22);
    } while (piVar21 != (int *)(lVar13 - lVar22));
    if (*(long *)(param_1 + 0x358) != lVar13) {
      pcVar4 = (char *)(param_1 + 0x348);
      lVar22 = (long)*(int *)(param_1 + 0x364);
      plVar16 = (long *)(param_1 + 0x370);
      lVar12 = -lVar22;
      piVar21 = (int *)(*(long *)(param_1 + 0x358) - lVar22);
      piVar23 = (int *)(lVar13 - lVar22);
      if ((param_2 & 1) == 0) {
        uVar17 = 0;
        puVar2 = PTR_DAT_04bc4e68 + 0x10;
        puVar3 = PTR_DAT_04bb3ba0 + 0x10;
        puVar5 = PTR_DAT_04bb2020 + 0x10;
        do {
          if (uVar17 < 3) {
            iVar9 = piVar21[7];
            if (pcVar4[uVar17] == '\0') {
              iVar11 = 3;
              if (DAT_056efe9c == '\0') {
                iVar11 = 0;
              }
              if ((DAT_056efe98 != '\x01') || (*piVar21 < iVar11)) {
                if ((char)iVar9 != '\0') {
                  lVar13 = 0x18;
                  if (*(uint *)(plVar16[uVar17] + 0x228) < 4) {
                    lVar13 = 0;
                  }
                  plVar20 = *(long **)(*(long *)(plVar16[uVar17] + 0x230) + lVar13);
                  if (plVar20 != (long *)0x0) {
                    local_188 = puVar8 + 0x10;
                    local_180 = (undefined8 *)CONCAT44(local_180._4_4_,1);
                    (**(code **)(*plVar20 + 0x18))(plVar20,&local_188);
                    (**(code **)(plVar20[3] + 400))(0x3f800000,plVar20[1]);
                  }
                  if (((**(byte **)(param_1 + 0x368) & 1) == 0) ||
                     (lVar13 = *(long *)(*(byte **)(param_1 + 0x368) + 8), lVar13 == 0)) {
                    puVar14 = (undefined8 *)0x0;
                  }
                  else {
                    puVar14 = *(undefined8 **)(lVar13 + 0x18);
                    if ((*(byte *)(lVar13 + 8) & 10) != 2) {
                      puVar14 = (undefined8 *)0x0;
                    }
                  }
                  if (((*PTR_DAT_04bc78d8 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc78d8), iVar9 != 0)) {
                    *(undefined **)PTR_DAT_04bc78d0 = puVar3;
                    __cxa_guard_release(PTR_DAT_04bc78d8);
                  }
                  if (puVar14 != (undefined8 *)0x0) {
                    uVar10 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc78d0);
                    if ((uVar10 & 1) != 0) {
                      local_178 = local_178 & 0xffffff00;
                      local_180 = (undefined8 *)&DAT_040a7e65;
                      iVar9 = *(int *)(puVar14 + 0x32);
                      iVar11 = *(int *)(puVar14 + 0x31);
                      local_188 = puVar5;
                      if (iVar9 < iVar11) {
                        *(int *)(puVar14 + 0x32) = iVar9 + 1;
                        if (puVar14[0x30] != 0) {
                          iVar9 = *(int *)((long)puVar14 + 0x18c) + iVar9;
                          iVar6 = 0;
                          if (iVar11 <= iVar9) {
                            iVar6 = iVar11;
                          }
                          puVar15 = (undefined1 *)(puVar14[0x30] + (long)(iVar9 - iVar6) * 0x98);
                          *puVar15 = 0;
                          (**(code **)(puVar7 + 0x28))(&local_188);
                          puVar14 = *(undefined8 **)(puVar15 + 8);
                          if (puVar14 != local_180) {
                            lVar13 = 0;
                            do {
                              pcVar1 = (char *)((long)local_180 + lVar13);
                              lVar13 = lVar13 + 1;
                            } while (*pcVar1 != '\0');
                            uVar19 = (int)lVar13 - 1;
                            if (*(int *)(puVar15 + 0x14) <= (int)uVar19) {
                              uVar19 = *(int *)(puVar15 + 0x14) - 1;
                            }
                            if ((int)uVar19 < 1) {
                              uVar19 = 0;
                            }
                            else {
                              memcpy(puVar14,local_180,(ulong)uVar19);
                              puVar14 = (undefined8 *)((long)puVar14 + (ulong)uVar19);
                            }
                            *(undefined1 *)puVar14 = 0;
                            *(uint *)(puVar15 + 0x10) = uVar19;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_030eafd4;
              }
              plVar20 = *(long **)(*(long *)(plVar16[uVar17] + 0x230) +
                                  (ulong)(2 < *(uint *)(plVar16[uVar17] + 0x228)) * 0x10);
              if (plVar20 != (long *)0x0) {
                local_180 = (undefined8 *)CONCAT44(local_180._4_4_,7);
                local_188 = puVar2;
                (**(code **)(*plVar20 + 0x18))(plVar20,&local_188);
                (**(code **)(plVar20[3] + 0x1c0))(plVar20[1]);
              }
              pcVar4[uVar17] = '\x01';
            }
            if ((char)iVar9 != '\0') {
              plVar20 = *(long **)(*(long *)(plVar16[uVar17] + 0x230) +
                                  (ulong)(1 < *(uint *)(plVar16[uVar17] + 0x228)) * 8);
              if (plVar20 != (long *)0x0) {
                local_188 = puVar8 + 0x10;
                local_180 = (undefined8 *)((ulong)local_180 & 0xffffffff00000000);
                (**(code **)(*plVar20 + 0x18))(plVar20,&local_188);
                (**(code **)(plVar20[3] + 0x188))(0x3f800000,plVar20[1],0);
              }
            }
          }
LAB_030eafd4:
          uVar17 = uVar17 + 1;
          piVar21 = (int *)(lVar12 + *(long *)((long)piVar21 + lVar22 + 8));
        } while (piVar23 != piVar21);
      }
      else {
        if (*pcVar4 == '\0') {
          iVar9 = 3;
          if (DAT_056efe9c == '\0') {
            iVar9 = 0;
          }
          if ((DAT_056efe98 == '\x01') && (iVar9 <= *piVar21)) {
            plVar16 = *(long **)(*(long *)(*plVar16 + 0x230) +
                                (ulong)(2 < *(uint *)(*plVar16 + 0x228)) * 0x10);
            if (plVar16 != (long *)0x0) {
              local_188 = PTR_DAT_04bc4e68 + 0x10;
              local_180 = (undefined8 *)CONCAT44(local_180._4_4_,7);
              (**(code **)(*plVar16 + 0x18))(plVar16,&local_188);
              (**(code **)(plVar16[3] + 0x1c0))(plVar16[1]);
            }
            *pcVar4 = '\x01';
          }
        }
        piVar21 = (int *)(lVar12 + *(long *)((long)piVar21 + lVar22 + 8));
        if (piVar23 != piVar21) {
          if (*(char *)(param_1 + 0x349) == '\0') {
            iVar9 = 3;
            if (DAT_056efe9c == '\0') {
              iVar9 = 0;
            }
            if ((DAT_056efe98 == '\x01') && (iVar9 <= *piVar21)) {
              plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0x378) + 0x230) +
                                  (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x378) + 0x228)) * 0x10)
              ;
              if (plVar16 != (long *)0x0) {
                local_188 = PTR_DAT_04bc4e68 + 0x10;
                local_180 = (undefined8 *)CONCAT44(local_180._4_4_,7);
                (**(code **)(*plVar16 + 0x18))(plVar16,&local_188);
                (**(code **)(plVar16[3] + 0x1c0))(plVar16[1]);
              }
              *(undefined1 *)(param_1 + 0x349) = 1;
            }
          }
          piVar21 = (int *)(lVar12 + *(long *)((long)piVar21 + lVar22 + 8));
          if (piVar23 != piVar21) {
            if (*(char *)(param_1 + 0x34a) == '\0') {
              iVar9 = 3;
              if (DAT_056efe9c == '\0') {
                iVar9 = 0;
              }
              if ((DAT_056efe98 == '\x01') && (iVar9 <= *piVar21)) {
                plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0x380) + 0x230) +
                                    (ulong)(2 < *(uint *)(*(long *)(param_1 + 0x380) + 0x228)) *
                                    0x10);
                if (plVar16 != (long *)0x0) {
                  local_188 = PTR_DAT_04bc4e68 + 0x10;
                  local_180 = (undefined8 *)CONCAT44(local_180._4_4_,7);
                  (**(code **)(*plVar16 + 0x18))(plVar16,&local_188);
                  (**(code **)(plVar16[3] + 0x1c0))(plVar16[1]);
                }
                *(undefined1 *)(param_1 + 0x34a) = 1;
              }
            }
            do {
              piVar21 = (int *)(lVar12 + *(long *)((long)piVar21 + lVar22 + 8));
            } while (piVar23 != piVar21);
          }
        }
      }
    }
  }
  return;
}

