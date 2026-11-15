
uint FUN_024f824c(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
LAB_024f8374:
    lVar11 = *(long *)puVar3;
    uVar4 = FUN_0277d6c4(param_1);
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (((puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar8 != (uint *)0x0 && (uVar4 = *puVar8, uVar4 != 0)) &&
                (puVar8 != (uint *)(ulong)uVar4)))) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
              if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) &&
                 ((ulong)(ushort)puVar9[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar10 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < DAT_05326ec0) &&
                      (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                     (uVar2 == 0x8a)) goto LAB_024f8a74;
                }
              }
            }
          }
        }
      }
    }
    lVar11 = *(long *)puVar3;
    uVar4 = FUN_0277d6c4(param_1);
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024f85d0;
      local_48 = 0;
      local_50 = *param_1;
      uStack_4c = param_1[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
            local_48 = lVar10;
          }
        }
      }
      uVar7 = FUN_01af5064(&local_58,10);
      if ((uVar7 & 1) == 0) {
        lVar10 = *(long *)puVar3;
        goto LAB_024f85d0;
      }
LAB_024f8a6c:
      uVar4 = 1;
      goto LAB_024f8a78;
    }
LAB_024f85d0:
    uVar4 = FUN_0277d6c4(param_1);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0))
            {
              local_48 = lVar10;
            }
          }
        }
        uVar7 = FUN_01af5064(&local_58,0xb);
        if (((uVar7 & 1) != 0) && (uVar7 = FUN_024f6c7c(), (uVar7 & 1) != 0)) goto LAB_024f8a6c;
      }
    }
    lVar10 = *(long *)puVar3;
    uVar4 = FUN_0277d6c4(param_1);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0))
            {
              local_48 = lVar10;
            }
          }
        }
        uVar7 = FUN_01b045f0(&local_58);
        lVar11 = *(long *)puVar3;
        if ((uVar7 & 1) != 0) {
          uVar4 = FUN_0277d6c4(param_1);
          lVar10 = *(long *)puVar3;
          if (lVar10 != 0) {
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              local_48 = 0;
              local_58 = &PTR_FUN_04a36b50;
              local_50 = *param_1;
              uStack_4c = param_1[1];
              uVar4 = FUN_0277d6c4(&local_50);
              if (*(long *)puVar3 != 0) {
                lVar10 = *(long *)(lVar10 + 0x57e58);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                  lVar10 = *(long *)PTR_DAT_04bc0428;
                  uVar4 = FUN_0277d6c4(param_1);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                     (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
                     lVar10 != 0)) {
                    local_48 = lVar10;
                  }
                }
              }
              uVar7 = FUN_01af5064(&local_58,10);
              if ((uVar7 & 1) != 0) goto LAB_024f8a74;
              lVar10 = *(long *)puVar3;
            }
          }
          uVar4 = FUN_0277d6c4(param_1);
          lVar11 = *(long *)puVar3;
          if (lVar11 != 0) {
            lVar10 = *(long *)(lVar10 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              local_48 = 0;
              local_58 = &PTR_FUN_04a36b50;
              local_50 = *param_1;
              uStack_4c = param_1[1];
              uVar4 = FUN_0277d6c4(&local_50);
              if (*(long *)puVar3 != 0) {
                lVar10 = *(long *)(lVar11 + 0x57e58);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                  lVar10 = *(long *)PTR_DAT_04bc0428;
                  uVar4 = FUN_0277d6c4(param_1);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
                     (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
                     lVar10 != 0)) {
                    local_48 = lVar10;
                  }
                }
              }
              uVar4 = FUN_01af5064(&local_58,0xb);
              uVar4 = uVar4 ^ 1;
              goto LAB_024f8a78;
            }
          }
          goto LAB_024f8a6c;
        }
      }
    }
    uVar4 = FUN_0277d6c4(param_1);
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
               (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0))
            {
              local_48 = lVar10;
            }
          }
        }
        uVar7 = FUN_01b14bf0(&local_58);
        if ((uVar7 & 1) != 0) goto LAB_024f8a6c;
      }
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024f8374;
    local_48 = 0;
    local_50 = *param_1;
    uStack_4c = param_1[1];
    local_58 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8), lVar10 != 0)) {
          local_48 = lVar10;
        }
      }
    }
    iVar5 = FUN_01afcfa0(&local_58);
    if (((iVar5 == 0) || (puVar6 = (ushort *)FUN_01afd600(&local_58), puVar6 == (ushort *)0x0)) ||
       ((*puVar6 & 0x18) != 0x10)) goto LAB_024f8374;
  }
LAB_024f8a74:
  uVar4 = 0;
LAB_024f8a78:
  return uVar4 & 1;
}

