
void FUN_01b06c00(uint *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  uint local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_48 = (undefined **)CONCAT44(local_48._4_4_,0x8d);
  puVar5 = *(uint **)(param_2 + 0x10);
  if (puVar5 == (uint *)0x0) {
    local_54 = 0xbc;
  }
  else {
    uVar4 = *puVar5;
    if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
      if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
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
             (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_54 = (uint)uVar2,
             uVar2 < 0xbd)) goto LAB_01b06cb8;
        }
      }
    }
    local_54 = 0;
  }
LAB_01b06cb8:
  if (local_54 == 0x8d) {
    FUN_01b01a74(&local_54,param_2 + 0xc);
    puVar3 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_54);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_38 = 0;
        local_48 = &PTR_FUN_04a36b50;
        local_40 = local_54;
        uStack_3c = uStack_50;
        uVar4 = FUN_0277d6c4(&local_40);
        lVar8 = DAT_0532a768;
        if (*(long *)puVar3 == 0) {
LAB_01b06e44:
          local_4c = 0xbc;
        }
        else {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01b06e44;
          uVar4 = FUN_0277d6c4(&local_54);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
             (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar5 == (uint *)0x0)) goto LAB_01b06e44;
          uVar4 = *puVar5;
          local_4c = 0;
          if ((uVar4 != 0) && (puVar5 != (uint *)(ulong)uVar4)) {
            puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
            local_4c = 0;
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
                     (local_4c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                     local_4c < 0xbd)) goto LAB_01b06e48;
                }
              }
              local_4c = 0;
            }
          }
        }
LAB_01b06e48:
        if (((local_4c < 0xe) && ((1 << (ulong)(local_4c & 0x1f) & 0x2601U) != 0)) ||
           (local_4c == 0x57)) {
          puVar5 = &local_54;
          goto LAB_01b06e84;
        }
      }
    }
  }
  puVar5 = &DAT_0532a850;
LAB_01b06e84:
  uVar4 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = uVar4;
  return;
}

