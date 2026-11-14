
void FUN_01b07208(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar5 = DAT_0532acd4;
  local_48 = (undefined **)CONCAT44(local_48._4_4_,0x8e);
  puVar6 = *(uint **)(param_2 + 0x10);
  if (puVar6 == (uint *)0x0) {
    local_54 = 0xbc;
  }
  else {
    uVar2 = *puVar6;
    if (uVar2 != 0 && puVar6 != (uint *)(ulong)uVar2) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      if (((*puVar7 != 0) && (uVar2 = puVar7[1], uVar2 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_54 = (uint)uVar3,
             uVar3 < 0xbd)) goto LAB_01b072c0;
        }
      }
    }
    local_54 = 0;
  }
LAB_01b072c0:
  if (local_54 != 0x8e) {
    *param_1 = DAT_0532acd0;
    param_1[1] = uVar5;
    return;
  }
  FUN_01b01a74(&local_54,param_2 + 0xc);
  puVar4 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_54);
  lVar9 = *(long *)puVar4;
  if (lVar9 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
      puVar6 = &DAT_0532acd0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_01b0748c;
      local_38 = 0;
      local_48 = &PTR_FUN_04a36b50;
      local_40 = local_54;
      uStack_3c = uStack_50;
      uVar5 = FUN_0277d6c4(&local_40);
      lVar8 = DAT_0532a768;
      if (*(long *)puVar4 == 0) {
LAB_01b07474:
        local_4c = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01b07474;
        uVar5 = FUN_0277d6c4(&local_54);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar5) ||
           (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8),
           puVar6 == (uint *)0x0)) goto LAB_01b07474;
        uVar5 = *puVar6;
        local_4c = 0;
        if ((uVar5 != 0) && (puVar6 != (uint *)(ulong)uVar5)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
          local_4c = 0;
          if (*puVar7 != 0) {
            uVar5 = puVar7[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar5);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_4c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_4c < 0xbd)) goto LAB_01b07478;
              }
            }
            local_4c = 0;
          }
        }
      }
LAB_01b07478:
      puVar6 = &local_54;
      if (local_4c != 0) {
        puVar6 = &DAT_0532acd0;
      }
      goto LAB_01b0748c;
    }
  }
  puVar6 = &DAT_0532acd0;
LAB_01b0748c:
  uVar5 = puVar6[1];
  *param_1 = *puVar6;
  param_1[1] = uVar5;
  return;
}

