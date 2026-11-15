
undefined8 FUN_021fdf60(long param_1,long param_2,byte *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined *local_98;
  char *pcStack_90;
  int local_84;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [31];
  undefined1 local_4d;
  uint local_44;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  local_44 = FUN_020fd7d8(param_3);
  local_44 = local_44 & 0xff;
  local_4d = 0;
  local_70 = 0x20;
  local_6c[0] = 0;
  local_78 = local_6c;
  local_80 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_80,"-----");
  if ((ulong)*param_3 < 0x23) {
    FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_3 * 8 + 0xb0),
                 param_3[1]);
  }
  puVar7 = *(undefined1 **)(param_1 + 8);
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar1 = local_78;
  if (puVar7 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar5 = 0;
    do {
      if (local_78[lVar5] == '\0') goto LAB_021fe08c;
      if (local_78[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_021fe08c;
      }
      if (local_78[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_021fe08c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_021fe08c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(puVar7,puVar1,(long)iVar2);
    puVar7[iVar2] = 0;
  }
  puVar4 = PTR_DAT_04bb2020;
  local_84 = (int)(char)param_3[0x12678];
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "HouseReset";
  iVar2 = FUN_02749340(param_3 + 0x1267c,&local_98);
  if (iVar2 != 0) {
    local_84 = 1;
  }
  if (local_84 != 4) {
    if (local_84 == 0) {
      if (local_44 == 7) {
        puVar4 = &DAT_040ab2d3;
      }
      else {
        if (local_44 != 1) goto LAB_021fe218;
        puVar4 = &DAT_04086ca1;
      }
      FUN_038d1270(&local_80,puVar4);
      uVar8 = 3;
      goto LAB_021fe21c;
    }
    goto LAB_021fe218;
  }
  if (local_44 == 5) {
    FUN_038d1270(&local_80,"ImmQ_2");
    uVar8 = 1;
    goto LAB_021fe21c;
  }
  if (local_44 == 4) {
    FUN_038d1270(&local_80,"ImmQ_3");
    uVar8 = 2;
    goto LAB_021fe21c;
  }
  if ((local_44 == 0) && (lVar5 = *(long *)PTR_DAT_04bb46b0, lVar5 != 0)) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 != 0) {
        lVar5 = lVar5 + 0x70;
LAB_021fe1dc:
        FUN_038d1270(&local_80,"ImmQ_1_");
        if ((*(long **)(lVar5 + 0x1c24e8) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c24e8), puVar6 == (undefined8 *)0x0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)*puVar6)();
          uVar3 = uVar3 ^ 1;
        }
        local_9e = 0;
        local_9c = 0;
        local_a0 = *(undefined2 *)
                    (*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x900);
        FUN_0277d4ac(&local_a0);
        iVar2 = FUN_0277d6c4(&local_a0);
        if (iVar2 < 0x8ed) {
          if (iVar2 == 0x8a5) {
            pcStack_90 = "Apple";
            goto LAB_021fe368;
          }
          if (iVar2 == 0x8a6) {
            pcStack_90 = "Orange";
            goto LAB_021fe368;
          }
        }
        else {
          if (iVar2 == 0x8ed) {
            pcStack_90 = "Pear";
          }
          else if (iVar2 == 0x8ee) {
            pcStack_90 = "Peach";
          }
          else {
            if (iVar2 != 0x8ef) goto LAB_021fe380;
            pcStack_90 = "Cherry";
          }
LAB_021fe368:
          local_98 = puVar4 + 0x10;
          FUN_00958800(&local_80,&local_98,0xffffffff);
        }
LAB_021fe380:
        if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
        uVar8 = 0;
        goto LAB_021fe21c;
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar5 != 0)) goto LAB_021fe1dc;
  }
LAB_021fe218:
  uVar8 = 0xffffffff;
LAB_021fe21c:
  puVar7 = *(undefined1 **)(param_2 + 8);
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar1 = local_78;
  if (puVar7 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar5 = 0;
    do {
      if (local_78[lVar5] == '\0') goto LAB_021fe290;
      if (local_78[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_021fe290;
      }
      if (local_78[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_021fe290;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_021fe290:
    iVar2 = (int)lVar5;
    if (*(int *)(param_2 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(puVar7,puVar1,(long)iVar2);
    puVar7[iVar2] = 0;
  }
  return uVar8;
}

