
undefined8 FUN_0151307c(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ushort uVar14;
  uint *puVar15;
  bool bVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  int local_74;
  undefined4 local_70;
  byte local_6c [4];
  undefined8 local_68;
  undefined2 local_60;
  byte local_5e;
  byte local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  
  uVar11 = FUN_01512a38();
  puVar8 = PTR_DAT_04bb6298;
  if ((uVar11 & 1) == 0) goto LAB_01513908;
  uVar14 = *(ushort *)PTR_DAT_04bb6298;
  uVar11 = (ulong)(short)uVar14;
  if (uVar11 == 0xffffffffffffffff) {
LAB_01513250:
    local_68._0_4_ = 0x20;
    uVar11 = FUN_0290cbcc(&local_68);
    if ((uVar11 & 1) == 0) {
      uVar13 = FUN_0180c600();
      return uVar13;
    }
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    uVar11 = FUN_0290cbcc(&local_68);
    if ((uVar11 & 1) == 0) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
      uVar11 = FUN_0290cbcc(&local_68);
      if (((uVar11 & 1) != 0) && (uVar11 = FUN_00975b70(param_1 + 0x18), (uVar11 & 1) != 0))
      goto LAB_01513908;
    }
    else {
      uVar11 = FUN_0252c550(0);
      if ((uVar11 & 1) != 0) {
        uVar11 = FUN_0277e294(param_1 + 4);
        if ((uVar11 & 1) != 0) {
          FUN_01ad5d04(&local_68,param_1 + 4);
          uVar11 = FUN_01ae87f0(&local_68);
          if ((uVar11 & 1) == 0) {
            local_74 = 0xe;
            iVar9 = FUN_01ae7550(&local_68);
            if (iVar9 != local_74) {
              local_74 = 0xd;
              iVar9 = FUN_01ae7550(&local_68);
              if ((iVar9 != local_74) &&
                 ((uVar11 = FUN_01ae7a70(&local_68), (uVar11 & 1) == 0 || ((local_5e >> 3 & 1) == 0)
                  ))) goto LAB_01513344;
            }
          }
          goto LAB_01513908;
        }
      }
    }
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
    puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar14 * 8);
    if (0xff < (uint)(int)(short)uVar14) {
      puVar15 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar15 >> 6 & 1) == 0) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
      puVar15 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar14) {
        puVar15 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar15 >> 3 & 1) == 0) {
        local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
        puVar15 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
        if (0xff < uVar14) {
          puVar15 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar15 >> 0x15 & 1) == 0) {
          local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1a);
          puVar15 = (uint *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
          if (0xff < uVar14) {
            puVar15 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar15 >> 0x1a & 1) == 0) {
LAB_015131f8:
            local_68 = (undefined *)CONCAT44(local_68._4_4_,0x22);
            puVar1 = PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8;
            if (0xff < uVar14) {
              puVar1 = PTR_DAT_04bc39f8;
            }
            if ((*(uint *)(puVar1 + 4) >> 2 & 1) == 0) goto LAB_01513250;
            if ((*(long *)PTR_DAT_04bb4938 == 0) ||
               (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) == 0)) goto LAB_01513908;
          }
          else if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
                   ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) ||
                  ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4 &&
                   (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)))) {
            local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
            uVar12 = FUN_0290cbcc(&local_68);
            if ((uVar12 & 1) == 0) goto LAB_015131f8;
          }
        }
      }
    }
  }
LAB_01513344:
  puVar1 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_1 + 4);
  if (*(long *)puVar1 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_01513468;
    if ((*(int *)(param_1 + 0x20) != DAT_0520ee18) ||
       (((*(int *)(param_1 + 0x24) != DAT_0520ee1c || (*(int *)(param_1 + 0x30) != DAT_0520ee28)) ||
        (*(int *)(param_1 + 0x34) != DAT_0520ee2c)))) {
      sVar7 = *(short *)puVar8;
      if (sVar7 != -1) {
        local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
        puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
        if (0xff < (uint)(int)sVar7) {
          puVar15 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((((*puVar15 >> 3 & 1) != 0) &&
            (lVar18 = *(long *)PTR_DAT_04bb5c90, *(int *)(lVar18 + 0x28) <= *(int *)(param_1 + 0x20)
            )) && ((*(int *)(param_1 + 0x30) <= *(int *)(lVar18 + 0x38) &&
                   ((*(int *)(lVar18 + 0x2c) <= *(int *)(param_1 + 0x24) &&
                    (*(int *)(param_1 + 0x34) <= *(int *)(lVar18 + 0x3c))))))) goto LAB_01513908;
      }
      goto LAB_01513468;
    }
    goto LAB_01513908;
  }
LAB_01513468:
  local_6c[0] = *param_1;
  if (local_6c[0] < 8) {
    uVar14 = *(ushort *)puVar8;
    if (uVar14 == 0xffff) goto LAB_0151359c;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
    puVar15 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar14 * 8);
    if (0xff < uVar14) {
      puVar15 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar15 >> 3 & 1) != 0) {
      local_68 = (undefined *)CONCAT71(local_68._1_7_,local_6c[0]);
      uVar11 = FUN_02669430(&local_68);
      if ((uVar11 & 1) == 0) goto LAB_01513908;
      uVar14 = *(ushort *)puVar8;
      if (uVar14 == 0xffff) goto LAB_0151359c;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
    puVar15 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar14 & 0xffffffffU) * 8);
    if (0xff < uVar14) {
      puVar15 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar15 >> 6 & 1) == 0) goto LAB_0151359c;
    if (local_6c[0] < 8) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
      if (((*puVar15 >> 6 & 1) != 0) && (uVar11 = FUN_02915598(local_6c), (uVar11 & 1) != 0))
      goto LAB_0151359c;
    }
    else {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
      if ((*puVar15 >> 6 & 1) != 0) goto LAB_0151359c;
    }
LAB_01513908:
    uVar13 = 0;
  }
  else {
    local_6c[0] = 0xff;
LAB_0151359c:
    uVar6 = *(undefined2 *)(param_1 + 4);
    bVar4 = param_1[6];
    bVar5 = param_1[7];
    local_74 = *(int *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    lVar19 = *(long *)puVar1;
    local_70 = uVar3;
    uVar10 = FUN_0277d6c4(&local_74);
    lVar18 = *(long *)puVar1;
    if (lVar18 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_58 = 0;
        local_60 = uVar6;
        local_5e = bVar4;
        local_5d = bVar5;
        local_5c = uVar3;
        uVar10 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar1 == 0) {
LAB_015137f4:
          puVar15 = (uint *)0x0;
          uVar14 = 0;
          bVar16 = true;
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_015137f4;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_74);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
             (puVar15 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar15 == (uint *)0x0)) goto LAB_015137f4;
          uVar14 = 0;
          uVar10 = *puVar15;
          if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
            puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
            uVar14 = 0;
            if (*puVar17 != 0) {
              uVar10 = puVar17[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar18 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar15 - lVar18) / (ulong)uVar10);
                  }
                  if (*puVar17 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar14 < 0xbd)) goto LAB_01513734;
                }
              }
              uVar14 = 0;
            }
          }
LAB_01513734:
          if (uVar14 == 0x76) goto LAB_01513908;
          uVar14 = 0;
          uVar10 = *puVar15;
          if ((uVar10 == 0) || (puVar15 == (uint *)(ulong)uVar10)) {
LAB_01513934:
            bVar16 = false;
          }
          else {
            puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
            uVar14 = 0;
            if (*puVar17 == 0) goto LAB_01513934;
            uVar10 = puVar17[1];
            if ((uVar10 == 0) || ((ulong)(ushort)puVar17[2] == 0)) {
LAB_01513930:
              uVar14 = 0;
              goto LAB_01513934;
            }
            lVar18 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar18 == 0) goto LAB_01513930;
            uVar2 = 0;
            if ((ulong)uVar10 != 0) {
              uVar2 = (uint)((ulong)((long)puVar15 - lVar18) / (ulong)uVar10);
            }
            if (*puVar17 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if (*(uint *)PTR_DAT_04bc0048 <= uVar2) goto LAB_01513930;
            uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2);
            if (uVar14 < 0x52) goto LAB_01513934;
            bVar16 = false;
            uVar14 = 0;
          }
        }
        if (uVar14 == 0x42) {
          iVar9 = 0;
          if (*(long *)PTR_DAT_04bbbc38 != 0) {
            iVar9 = *(int *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
          }
          if (iVar9 == 0) goto LAB_01513908;
        }
        if (bVar16) {
          uVar14 = 0xbc;
        }
        else {
          uVar10 = *puVar15;
          uVar14 = 0;
          if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
            puVar17 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
            uVar14 = 0;
            if (*puVar17 != 0) {
              uVar10 = puVar17[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar18 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar15 - lVar18) / (ulong)uVar10);
                  }
                  if (*puVar17 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar14 < 0xbd)) goto LAB_015138f4;
                }
              }
              uVar14 = 0;
            }
          }
        }
LAB_015138f4:
        if (uVar14 == 0xb0) goto LAB_01513908;
      }
    }
    uVar13 = 1;
  }
  return uVar13;
}

