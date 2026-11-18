
uint FUN_0343bc10(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
LAB_0343bda8:
    uVar3 = 1;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0343bda8;
    local_50 = 0;
    local_58 = *param_1;
    uStack_54 = param_1[1];
    local_60 = &PTR_FUN_04a36b50;
    uVar3 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_0343bf4c:
      local_48 = 0xbc;
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0343bf4c;
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 == (uint *)0x0)) goto LAB_0343bf4c;
      local_48 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        local_48 = 0;
        if (*puVar6 != 0) {
          uVar3 = puVar6[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar7 != 0) {
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < DAT_05326ec0) &&
                 (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), local_48 < 0xbd
                 )) goto LAB_0343bf58;
            }
          }
          local_48 = 0;
        }
      }
    }
LAB_0343bf58:
    local_44 = 0x15;
    lVar8 = *(long *)puVar2;
    if (local_48 == 0x15) {
      uVar3 = 0;
    }
    else {
      local_50 = 0;
      local_60 = &PTR_FUN_04a36b50;
      local_58 = *param_1;
      uStack_54 = param_1[1];
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_50 = lVar7;
          }
        }
      }
      uVar3 = FUN_01af9000(&local_60);
      lVar8 = *(long *)puVar2;
      uVar3 = uVar3 ^ 1;
    }
  }
  uVar4 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_50 = 0;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 == 0) {
LAB_0343bf78:
        local_48 = 0xbc;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0343bf78;
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
           (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar5 == (uint *)0x0)) goto LAB_0343bf78;
        local_48 = 0;
        uVar4 = *puVar5;
        if ((uVar4 != 0) && (puVar5 != (uint *)(ulong)uVar4)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
          local_48 = 0;
          if (*puVar6 != 0) {
            uVar4 = puVar6[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar4);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_48 < 0xbd)) goto LAB_0343bf84;
              }
            }
            local_48 = 0;
          }
        }
      }
LAB_0343bf84:
      local_44 = 0x15;
      if (local_48 == 0x15) {
        uVar4 = 1;
      }
      else {
        local_58 = *param_2;
        uStack_54 = param_2[1];
        lVar7 = *(long *)puVar2;
        local_60 = &PTR_FUN_04a36b50;
        local_50 = 0;
        uVar4 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
              local_50 = lVar7;
            }
          }
        }
        uVar4 = FUN_01af9000(&local_60);
      }
      goto LAB_0343bf20;
    }
  }
  uVar4 = 0;
LAB_0343bf20:
  uVar1 = uVar3 & uVar4 & 1;
  if (((uVar3 | uVar4) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

