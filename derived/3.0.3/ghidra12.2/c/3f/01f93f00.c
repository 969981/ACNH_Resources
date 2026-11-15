
/* WARNING: Removing unreachable block (ram,0x01f942dc) */

undefined8 FUN_01f93f00(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 uVar8;
  long lVar9;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [7];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [7];
  undefined1 local_85;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  undefined *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  
  puVar1 = PTR_DAT_04bb3768;
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  if (lVar7 == 0) {
LAB_01f942a0:
    uVar5 = FUN_03773640();
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_03773640(), (uVar5 & 1) != 0)) {
      lVar7 = 0;
      if (DAT_05574040 != 0) {
        local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
        if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar9 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
        }
        else {
          lVar9 = 0;
        }
        lVar7 = 0;
        if (lVar9 != 0) {
          lVar7 = lVar9 + 0xa8;
        }
      }
      local_45 = 0;
      local_50 = 8;
      local_4c[0] = 0;
      local_58 = local_4c;
      local_60 = PTR_DAT_04bb3768 + 0x10;
      if ((*(long **)(lVar7 + 0x36540) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x36540), puVar4 == (undefined8 *)0x0)) {
        uVar8 = *(undefined2 *)(*(long *)(lVar7 + 0x36528) + *(long *)(lVar7 + 0x36520) + 0x3f8);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        uVar8 = *(undefined2 *)(*(long *)(lVar7 + 0x36528) + *(long *)(lVar7 + 0x36520) + 0x3f8);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x36540) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x36540) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
      FUN_0376b510(&local_60,uVar8);
      lVar7 = *(long *)(param_1 + 8);
      (**(code **)(local_60 + 0x18))(&local_60);
      (**(code **)(local_60 + 0x18))(&local_60);
      puVar2 = local_58;
      (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
      if (puVar2 == *(undefined1 **)(lVar7 + 1000)) goto LAB_01f94434;
      uVar5 = 0;
      bVar3 = true;
      do {
        if (local_58[uVar5] != (*(undefined1 **)(lVar7 + 1000))[uVar5]) break;
        if (local_58[uVar5] == '\0') {
          if (bVar3) goto LAB_01f94434;
          break;
        }
        bVar3 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
    }
    uVar6 = 0;
  }
  else {
    local_45 = 0;
    local_50 = 8;
    local_58 = local_4c;
    local_4c[0] = 0;
    local_80 = PTR_DAT_04bb3768 + 0x10;
    local_70 = 8;
    local_65 = 0;
    local_6c[0] = 0;
    local_78 = local_6c;
    local_60 = local_80;
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar9 = *(long *)(DAT_05ab7608 + 8), lVar9 == 0)) {
      uVar8 = *(undefined2 *)(lVar7 + 0x2a);
    }
    else if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
            (puVar4 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar4 == (undefined8 *)0x0)) {
      uVar8 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar8 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    uVar5 = FUN_0376b510(&local_60,uVar8);
    if ((uVar5 & 1) == 0) {
LAB_01f94090:
      uVar5 = FUN_036e1fd8(lVar7,&local_80);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 8);
        (**(code **)(local_80 + 0x18))(&local_80);
        (**(code **)(local_80 + 0x18))(&local_80);
        puVar2 = local_78;
        (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
        if (puVar2 == *(undefined1 **)(lVar7 + 1000)) goto LAB_01f94434;
        uVar5 = 0;
        bVar3 = true;
        do {
          if (local_78[uVar5] != (*(undefined1 **)(lVar7 + 1000))[uVar5]) break;
          if (local_78[uVar5] == '\0') {
            if (bVar3) goto LAB_01f94434;
            break;
          }
          bVar3 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
      }
      local_c0 = puVar1 + 0x10;
      local_85 = 0;
      local_98 = local_8c;
      local_90 = 8;
      local_b8 = local_ac;
      local_8c[0] = 0;
      local_b0 = 8;
      local_a5 = 0;
      local_ac[0] = 0;
      local_a0 = local_c0;
      uVar5 = FUN_0376ee00(&local_a0,&local_c0);
      if ((uVar5 & 1) == 0) goto LAB_01f942a0;
      lVar7 = *(long *)(param_1 + 8);
      (**(code **)(local_a0 + 0x18))(&local_a0);
      (**(code **)(local_a0 + 0x18))(&local_a0);
      puVar2 = local_98;
      (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
      if (puVar2 != *(undefined1 **)(lVar7 + 1000)) {
        uVar5 = 0;
        bVar3 = true;
        do {
          if (local_98[uVar5] != (*(undefined1 **)(lVar7 + 1000))[uVar5]) break;
          if (local_98[uVar5] == '\0') {
            if (bVar3) goto LAB_01f94434;
            break;
          }
          bVar3 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        lVar7 = *(long *)(param_1 + 8);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        puVar2 = local_b8;
        (**(code **)(*(long *)(lVar7 + 0x3e0) + 0x18))(lVar7 + 0x3e0);
        if (puVar2 != *(undefined1 **)(lVar7 + 1000)) {
          uVar5 = 0;
          bVar3 = true;
          do {
            if (local_b8[uVar5] != (*(undefined1 **)(lVar7 + 1000))[uVar5]) break;
            if (local_b8[uVar5] == '\0') {
              if (bVar3) goto LAB_01f94434;
              break;
            }
            bVar3 = uVar5 < 0x80000;
            uVar5 = uVar5 + 1;
          } while (uVar5 != 0x80001);
          goto LAB_01f942a0;
        }
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 8);
      (**(code **)(local_60 + 0x18))(&local_60);
      (**(code **)(local_60 + 0x18))(&local_60);
      puVar2 = local_58;
      (**(code **)(*(long *)(lVar9 + 0x3e0) + 0x18))(lVar9 + 0x3e0);
      if (puVar2 != *(undefined1 **)(lVar9 + 1000)) {
        uVar5 = 0;
        bVar3 = true;
        do {
          if (local_58[uVar5] != (*(undefined1 **)(lVar9 + 1000))[uVar5]) break;
          if (local_58[uVar5] == '\0') {
            if (bVar3) goto LAB_01f94434;
            break;
          }
          bVar3 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        goto LAB_01f94090;
      }
    }
LAB_01f94434:
    uVar6 = 1;
  }
  return uVar6;
}

