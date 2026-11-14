
ulong FUN_016d2640(long *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined **local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [7];
  undefined1 local_a5;
  undefined **local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [7];
  undefined1 local_85;
  undefined *local_80;
  undefined1 *local_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  local_65 = 0;
  local_6c[0] = 0;
  local_70 = 8;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  local_78 = local_6c;
  if ((param_2 & 1) == 0) {
    FUN_021d7aa0(&local_80,param_1);
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1);
    puVar9 = (undefined1 *)param_1[1];
    if (local_6c != puVar9) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_016d271c;
        lVar1 = param_1[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_016d271c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_016d271c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_016d271c:
      iVar2 = (int)lVar6;
      if (local_70 <= (int)lVar6) {
        iVar2 = local_70 + -1;
      }
      memcpy(local_6c,puVar9,(long)iVar2);
      local_6c[iVar2] = 0;
    }
  }
  uVar8 = 0;
  do {
    if (DAT_05574040 != 0) {
      puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar6 != 0) {
          uVar5 = 0x1c90;
LAB_016d27e0:
          local_85 = 0;
          lVar6 = lVar6 + (ulong)(uVar5 | 0x210000) + uVar8 * 0xcb0;
          local_8c[0] = 0;
          local_90 = 8;
          local_a0 = &PTR_LAB_04908da0;
          local_98 = local_8c;
          if ((*(long **)(lVar6 + 0x728) == (long *)0x0) ||
             (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x728), puVar7 == (undefined8 *)0x0)) {
            FUN_02774cf0(*(long *)(lVar6 + 0x710) + *(long *)(lVar6 + 0x708),&local_a0);
          }
          else {
            uVar4 = (**(code **)*puVar7)();
            FUN_02774cf0(*(long *)(lVar6 + 0x710) + *(long *)(lVar6 + 0x708),&local_a0);
            if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x728) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x728) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          local_a5 = 0;
          local_ac[0] = 0;
          local_b0 = 8;
          local_c0 = &PTR_LAB_04908da0;
          local_b8 = local_ac;
          if ((param_2 & 1) == 0) {
            FUN_021d7aa0(&local_c0,&local_a0);
          }
          else {
            (*(code *)local_a0[3])(&local_a0);
            puVar9 = local_98;
            if (local_ac != local_98) {
              (*(code *)local_a0[3])(&local_a0);
              lVar6 = 0;
              do {
                if (local_98[lVar6] == '\0') goto LAB_016d291c;
                if (local_98[lVar6 + 1] == '\0') {
                  lVar6 = lVar6 + 1;
                  goto LAB_016d291c;
                }
                if (local_98[lVar6 + 2] == '\0') {
                  lVar6 = lVar6 + 2;
                  goto LAB_016d291c;
                }
                lVar6 = lVar6 + 3;
              } while (lVar6 != 0x80001);
              lVar6 = 0;
LAB_016d291c:
              iVar2 = (int)lVar6;
              if (local_b0 <= (int)lVar6) {
                iVar2 = local_b0 + -1;
              }
              memcpy(local_ac,puVar9,(long)iVar2);
              local_ac[iVar2] = 0;
            }
          }
          (*(code *)local_c0[3])(&local_c0);
          (*(code *)local_c0[3])(&local_c0);
          puVar9 = local_b8;
          (**(code **)(local_80 + 0x18))(&local_80);
          if (puVar9 == local_78) goto LAB_016d29f8;
          uVar4 = 0;
          bVar3 = true;
          do {
            if (local_b8[uVar4] != local_78[uVar4]) break;
            if (local_b8[uVar4] == '\0') {
              if (bVar3) goto LAB_016d29f8;
              break;
            }
            if (local_b8[uVar4 + 1] != local_78[uVar4 + 1]) break;
            if (local_b8[uVar4 + 1] == '\0') goto LAB_016d29f8;
            if (local_b8[uVar4 + 2] != local_78[uVar4 + 2]) break;
            if (local_b8[uVar4 + 2] == '\0') goto LAB_016d29f8;
            bVar3 = uVar4 < 0x7fffe;
            uVar4 = uVar4 + 3;
          } while (uVar4 != 0x80001);
        }
      }
      else if (((puVar7 != (undefined8 *)0x0) && ((long *)puVar7[0x26] != (long *)0x0)) &&
              (lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar6 != 0)) {
        uVar5 = 0x1c20;
        goto LAB_016d27e0;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 8);
  uVar8 = 0xffffffff;
LAB_016d29f8:
  return uVar8 & 0xffffffff;
}

