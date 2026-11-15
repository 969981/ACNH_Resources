
uint FUN_021d62e0(long param_1,uint param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  char *__src;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *__dest;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  char local_54 [7];
  undefined1 local_4d;
  undefined1 local_48 [4];
  undefined4 local_44;
  
  puVar5 = PTR_DAT_04bb3768;
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 == 0x10) {
    local_4d = 0;
    local_54[0] = '\0';
    local_58 = 8;
    local_48[0] = 1;
    local_44 = 0;
    puVar1 = PTR_DAT_04bb3768 + 0x10;
    local_68 = puVar1;
    local_60 = local_54;
    uVar7 = FUN_016d068c(&local_68,local_48);
    if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
      local_58 = 8;
      local_4d = 0;
      local_54[0] = '\0';
      local_48[0] = 1;
      local_44 = 1;
      local_68 = puVar1;
      local_60 = local_54;
      uVar7 = FUN_016d068c(&local_68,local_48);
      if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
        local_4d = 0;
        local_58 = 8;
        local_54[0] = '\0';
        local_48[0] = 1;
        local_44 = 2;
        local_68 = puVar5 + 0x10;
        local_60 = local_54;
        uVar7 = FUN_016d068c(&local_68,local_48);
        if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
          local_58 = 8;
          local_4d = 0;
          local_54[0] = '\0';
          local_48[0] = 1;
          local_44 = 3;
          local_68 = puVar5 + 0x10;
          local_60 = local_54;
          uVar7 = FUN_016d068c(&local_68,local_48);
          if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
            local_4d = 0;
            local_58 = 8;
            local_54[0] = '\0';
            local_48[0] = 1;
            local_44 = 4;
            local_68 = puVar5 + 0x10;
            local_60 = local_54;
            uVar7 = FUN_016d068c(&local_68,local_48);
            if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
              local_58 = 8;
              local_4d = 0;
              local_54[0] = '\0';
              local_48[0] = 1;
              local_44 = 5;
              local_68 = puVar5 + 0x10;
              local_60 = local_54;
              uVar7 = FUN_016d068c(&local_68,local_48);
              if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
                local_4d = 0;
                local_58 = 8;
                local_54[0] = '\0';
                local_48[0] = 1;
                local_44 = 6;
                local_68 = puVar5 + 0x10;
                local_60 = local_54;
                uVar7 = FUN_016d068c(&local_68,local_48);
                if (((uVar7 & 1) == 0) || (*local_60 == '\0')) {
                  local_58 = 8;
                  local_4d = 0;
                  local_54[0] = '\0';
                  local_48[0] = 1;
                  local_44 = 7;
                  local_68 = puVar5 + 0x10;
                  local_60 = local_54;
                  uVar7 = FUN_016d068c(&local_68,local_48);
                  if (((uVar7 & 1) == 0) || (*local_60 == '\0')) goto LAB_021d6634;
                }
              }
            }
          }
        }
      }
    }
    __dest = *(char **)(param_1 + 8);
    (**(code **)(local_68 + 0x18))(&local_68);
    __src = local_60;
    if (__dest != local_60) {
      (**(code **)(local_68 + 0x18))(&local_68);
      lVar8 = 0;
      do {
        if (local_60[lVar8] == '\0') goto LAB_021d6648;
        if (local_60[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_021d6648;
        }
        if (local_60[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_021d6648;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_021d6648:
      iVar3 = (int)lVar8;
      if (*(int *)(param_1 + 0x10) <= (int)lVar8) {
        iVar3 = *(int *)(param_1 + 0x10) + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      __dest[iVar3] = '\0';
    }
LAB_021d6670:
    uVar6 = 1;
  }
  else {
    if ((int)param_2 < 8) {
      lVar8 = *(long *)PTR_DAT_04bb46b0;
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          uVar6 = 0;
          if (lVar8 == 0) goto LAB_021d6674;
          lVar8 = lVar8 + 0x70;
        }
        else {
          if (puVar9 == (undefined8 *)0x0) goto LAB_021d6634;
          uVar6 = 0;
          if (((long *)puVar9[0x26] == (long *)0x0) ||
             (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), uVar6 = 0, lVar8 == 0))
          goto LAB_021d6674;
        }
        lVar4 = lVar8 + 0x218210 + (ulong)param_2 * 0x38;
        if (7 < param_2) {
          lVar4 = lVar8 + 0x218210;
        }
        if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar9 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar9)();
          uVar6 = uVar6 ^ 1;
        }
        pbVar2 = (byte *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
        uVar7 = (ulong)*pbVar2;
        if (((uVar7 < 0x23) && (pbVar2[1] <= (byte)PTR_DAT_04bc27f0[uVar7])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0)) {
          FUN_038d1270(param_1,"-----");
          if ((ulong)*pbVar2 < 0x23) {
            FUN_038d1270(param_1,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar2 * 8 + 0xb0),pbVar2[1]);
          }
        }
        else {
          **(undefined1 **)(param_1 + 8) = 0;
        }
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
        goto LAB_021d6670;
      }
    }
    else {
      local_68 = (undefined *)CONCAT44(param_2 - 8,(undefined4)local_68);
      local_68 = (undefined *)CONCAT71(local_68._1_7_,1);
      if (param_2 - 8 < 8) {
        uVar6 = FUN_016d055c(param_1,&local_68);
        goto LAB_021d6674;
      }
    }
LAB_021d6634:
    uVar6 = 0;
  }
LAB_021d6674:
  return uVar6 & 1;
}

