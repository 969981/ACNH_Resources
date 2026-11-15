
undefined8 FUN_01fa2a90(long *param_1,undefined4 *param_2)

{
  ulong *puVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  char *__dest;
  undefined1 *__src;
  undefined8 local_c8;
  ulong local_c0;
  uint *local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 auStack_a4 [63];
  undefined1 local_65;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb37e0;
  puVar4 = PTR_PTR_04bb2238;
  if (*(int *)((long)param_1 + 0xaf8c) == 5) {
    local_65 = 0;
    local_c8 = *(undefined **)PTR_DAT_04bb37e0;
    local_a8 = 0x40;
    local_b8 = (uint *)(PTR_DAT_04bb2f70 + 0x10);
    local_c0 = 0;
    local_b0 = auStack_a4;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(undefined1 **)(puVar4 + 8);
    if (auStack_a4 != __src) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
      lVar15 = 0;
      do {
        if (*(char *)(*(long *)(puVar4 + 8) + lVar15) == '\0') goto LAB_01fa2e14;
        lVar2 = *(long *)(puVar4 + 8) + lVar15;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_01fa2e14;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_01fa2e14;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_01fa2e14:
      iVar10 = (int)lVar15;
      if (local_a8 <= (int)lVar15) {
        iVar10 = local_a8 + -1;
      }
      memcpy(auStack_a4,__src,(long)iVar10);
      auStack_a4[iVar10] = 0;
    }
    local_58 = 0;
    local_b8 = (uint *)(PTR_DAT_04bb2bc0 + 0x10);
    local_60 = *(undefined4 *)puVar5;
    uStack_5c = *(undefined4 *)(puVar5 + 4);
    if (*(int *)(param_1[1] + 0x750) != 0) {
      return 0;
    }
    uVar12 = (**(code **)(*param_1 + 0x608))(param_1);
    if (((((uVar12 & 1) != 0) || ((*(byte *)(param_1 + 0x15f6) >> 5 & 1) != 0)) ||
        (uVar12 = FUN_01fc1450(param_1,&local_c8,0), (uVar12 & 1) == 0)) ||
       ((uVar12 = FUN_01b102e0(param_2 + 0x12,local_c0 & 0xffffffff), (uVar12 & 1) == 0 ||
        (uVar12 = FUN_01b104d0(param_2 + 0x28,local_c0 & 0xffffffff), (uVar12 & 1) == 0))))
    goto LAB_01fa305c;
    uVar9 = *(undefined4 *)(param_1[1] + 0x230);
    param_2[2] = (undefined4)local_c8;
    param_2[3] = local_c8._4_4_;
    *param_2 = uVar9;
    iVar8 = FUN_01b106b4(local_c0 & 0xffffffff);
    iVar10 = 0;
    if (iVar8 != 2) {
      iVar10 = iVar8;
    }
    uVar12 = local_c0 & 0xffffffff;
    param_2[0x3e] = iVar10;
LAB_01fa2fb0:
    uVar9 = FUN_01b107f4(uVar12);
LAB_01fa2fb4:
    param_2[0x3f] = uVar9;
LAB_01fa2fb8:
    uVar14 = 1;
  }
  else {
    puVar1 = (ulong *)(param_1 + 0x23f9);
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(puVar1);
    if (*(long *)puVar6 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        *param_2 = *(undefined4 *)(param_1[1] + 0x230);
        *(short *)(param_2 + 2) = (short)*puVar1;
        *(undefined1 *)((long)param_2 + 10) = *(undefined1 *)((long)param_1 + 0x11fca);
        *(undefined1 *)((long)param_2 + 0xb) = *(undefined1 *)((long)param_1 + 0x11fcb);
        param_2[3] = *(undefined4 *)((long)param_1 + 0x11fcc);
        param_2[8] = (int)param_1[0x23fc];
        param_2[9] = *(undefined4 *)((long)param_1 + 0x11fe4);
        param_2[0xc] = (int)param_1[0x23fe];
        param_2[0xd] = *(undefined4 *)((long)param_1 + 0x11ff4);
        param_2[0xe] = (int)param_1[0x23ff];
        param_2[0xf] = *(undefined4 *)((long)param_1 + 0x11ffc);
        param_2[0x10] = (int)param_1[0x2400];
        lVar15 = *(long *)puVar6;
        local_b8 = (uint *)0x0;
        local_c8 = PTR_DAT_04bc0510 + 0x10;
        param_2[0x11] = *(undefined4 *)((long)param_1 + 0x12004);
        local_c0 = *puVar1;
        uVar7 = FUN_0277d6c4(&local_c0);
        if (*(long *)puVar6 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01fa2f5c;
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar1);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
             (puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar16 == (uint *)0x0)) goto LAB_01fa2f5c;
          uVar17 = 0;
          uVar7 = *puVar16;
          if ((uVar7 != 0) && (puVar16 != (uint *)(ulong)uVar7)) {
            puVar18 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
            uVar17 = 0;
            if (*puVar18 != 0) {
              uVar7 = puVar18[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar15 != 0) {
                  uVar17 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar17 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar18 <= uVar17) {
                    uVar17 = 0xffffffff;
                  }
                  if ((uVar17 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar17 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar17 * 2),
                     uVar17 < 0x52)) goto LAB_01fa2d64;
                }
              }
              uVar17 = 0;
            }
          }
LAB_01fa2d64:
          local_b8 = puVar16;
          if (8 < uVar17 - 1) {
            uVar7 = *puVar16;
            uVar12 = 0;
            if ((uVar7 != 0) && (puVar16 != (uint *)(ulong)uVar7)) {
              puVar18 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
              if ((*puVar18 != 0) &&
                 ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar15 != 0) {
                  uVar17 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar17 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar18 <= uVar17) {
                    uVar17 = 0xffffffff;
                  }
                  if ((uVar17 < *(uint *)PTR_DAT_04bc0138) &&
                     (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0138 + 8) + (long)(int)uVar17 * 2),
                     uVar12 = (ulong)uVar3, uVar3 < 0x54)) goto LAB_01fa2f60;
                }
              }
              goto LAB_01fa2f5c;
            }
            goto LAB_01fa2f60;
          }
          __dest = *(char **)(param_2 + 0x2a);
          *(undefined8 *)(param_2 + 0x3e) = 0;
          if (__dest != "CommonStandWait") {
            iVar10 = 0xf;
            if ((int)param_2[0x2c] < 0x10) {
              iVar10 = param_2[0x2c] + -1;
            }
            memcpy(__dest,"CommonStandWait",(long)iVar10);
            __dest[iVar10] = '\0';
          }
          goto LAB_01fa2fb8;
        }
LAB_01fa2f5c:
        uVar12 = 0;
LAB_01fa2f60:
        uVar13 = FUN_01b102e0(param_2 + 0x12,uVar12);
        if ((uVar13 & 1) != 0) {
          uVar13 = FUN_01b104d0(param_2 + 0x28,uVar12);
          if ((uVar13 & 1) != 0) {
            if ((**(char **)(param_2 + 0x14) != '\0') || (**(char **)(param_2 + 0x2a) != '\0')) {
              uVar9 = FUN_01b106b4(uVar12);
              param_2[0x3e] = uVar9;
              goto LAB_01fa2fb0;
            }
            uVar9 = FUN_01b0e1ac(&local_c8);
            iVar10 = FUN_01b0ef90(&local_c8);
            if (iVar10 == 0xc) {
              uVar12 = FUN_020815ac(param_1 + 0x15f7,puVar1,param_1 + 0x23fb,param_1 + 0x23ff);
              uVar9 = 3;
              if ((uVar12 & 1) == 0) {
                uVar9 = 0xb;
              }
            }
            uVar12 = FUN_01b0e490(param_2 + 0x12,uVar9);
            if ((((uVar12 & 1) != 0) &&
                (uVar12 = FUN_01b0f590(param_2 + 0x28,uVar9), (uVar12 & 1) != 0)) &&
               ((**(char **)(param_2 + 0x14) != '\0' || (**(char **)(param_2 + 0x2a) != '\0')))) {
              uVar11 = FUN_01b0f774(uVar9);
              param_2[0x3e] = uVar11;
              uVar9 = FUN_01b0f8b4(uVar9);
              goto LAB_01fa2fb4;
            }
          }
        }
      }
    }
LAB_01fa305c:
    uVar14 = 0;
  }
  return uVar14;
}

