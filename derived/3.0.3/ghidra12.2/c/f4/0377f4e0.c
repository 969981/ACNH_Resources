
/* WARNING: Removing unreachable block (ram,0x0377f900) */
/* WARNING: Removing unreachable block (ram,0x0377f524) */
/* WARNING: Removing unreachable block (ram,0x0377fa58) */

undefined8 FUN_0377f4e0(undefined1 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 local_48;
  char *pcStack_40;
  uint local_34;
  
  puVar3 = PTR_DAT_04bb46b0;
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    if ((((*(byte *)(lVar10 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x188) + 0x38))(), lVar10 != 0)
       ) {
      if (*(long **)(lVar10 + 0x36620) == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar8 = (undefined8 *)**(long **)(lVar10 + 0x36620);
        uVar9 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar8)();
        }
      }
      iVar6 = (int)*(char *)(*(long *)(lVar10 + 0x36608) + *(long *)(lVar10 + 0x36600));
      local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar6);
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x36620) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x36620) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      if (iVar6 == 2) {
        if ((*(long **)(lVar10 + 0x37ca8) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x37ca8), puVar8 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar8)();
          uVar4 = uVar4 ^ 1;
        }
        uVar2 = *(ushort *)(*(long *)(lVar10 + 0x37c90) + *(long *)(lVar10 + 0x37c88) + 0x408c);
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        if ((*(long **)(lVar10 + 0x39058) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x39058), puVar8 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar8)();
          uVar5 = uVar5 ^ 1;
        }
        local_48 = (undefined *)
                   (CONCAT44(local_48._4_4_,
                             (uint)*(ushort *)
                                    (*(long *)(lVar10 + 0x39040) + *(long *)(lVar10 + 0x39038) + 100
                                    )) & 0xffffffff0000000f);
        param_1[1] = (int)local_48 == 1;
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x39058) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x39058) + 8), puVar8 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar8)();
        }
        puVar3 = PTR_DAT_04bb2020;
        *param_1 = 1;
        local_48 = puVar3 + 0x10;
        pcStack_40 = "IsParty";
        iVar6 = FUN_02758850(&local_48);
        if (iVar6 != 0) {
          *param_1 = 0;
        }
        *(uint *)(param_1 + 4) = (uint)uVar2;
        uVar7 = FUN_0377fc30(uVar2,1);
        *(undefined4 *)(param_1 + 0x14) = uVar7;
        if ((*(long **)(lVar10 + 0x39058) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x39058), puVar8 == (undefined8 *)0x0)) {
          *(undefined4 *)(param_1 + 0x18) =
               *(undefined4 *)(*(long *)(lVar10 + 0x39040) + *(long *)(lVar10 + 0x39038) + 0x68);
        }
        else {
          uVar9 = (**(code **)*puVar8)();
          *(undefined4 *)(param_1 + 0x18) =
               *(undefined4 *)(*(long *)(lVar10 + 0x39040) + *(long *)(lVar10 + 0x39038) + 0x68);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar10 + 0x39058) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x39058) + 8),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
        *(undefined2 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0xe) = 0x101;
        param_1[0x12] = 0;
        FUN_0377e950(uVar2,param_1);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        if (*(long *)(lVar10 + 0x37ca8) == 0) {
          return 1;
        }
        puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x37ca8) + 8);
        if (puVar8 == (undefined8 *)0x0) {
          return 1;
        }
        (**(code **)*puVar8)();
        return 1;
      }
    }
  }
  if (DAT_05aed670 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar6 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  iVar6 = *(int *)(puVar8 + 7);
  if (DAT_05ac0a90 == iVar6) {
    lVar10 = 0;
  }
  else if (DAT_05ac0aa0 == iVar6) {
    lVar10 = 1;
  }
  else if (DAT_05ac0ab0 == iVar6) {
    lVar10 = 2;
  }
  else if (DAT_05ac0ac0 == iVar6) {
    lVar10 = 3;
  }
  else if (DAT_05ac0ad0 == iVar6) {
    lVar10 = 4;
  }
  else if (DAT_05ac0ae0 == iVar6) {
    lVar10 = 5;
  }
  else if (DAT_05ac0af0 == iVar6) {
    lVar10 = 6;
  }
  else if (DAT_05ac0b00 == iVar6) {
    lVar10 = 7;
  }
  else if (DAT_05ac0b10 == iVar6) {
    lVar10 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar6) {
      return 0;
    }
    lVar10 = 9;
  }
  uVar4 = (&DAT_05ac0a94)[lVar10 * 4];
  local_34 = uVar4;
  if ((uVar4 != 5) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    if ((((*(byte *)(lVar10 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x188) + 0x38))(), lVar10 != 0)
       ) {
      switch(local_34) {
      case 0:
        lVar10 = lVar10 + 0x390a0;
        break;
      case 1:
        lVar10 = lVar10 + 0x3a488;
        break;
      case 2:
        lVar10 = lVar10 + 0x3b870;
        break;
      case 3:
        lVar10 = lVar10 + 0x3cc58;
        break;
      case 4:
        lVar10 = lVar10 + 0x3e040;
        break;
      default:
        goto switchD_0377f948_default;
      }
      if ((*(long **)(lVar10 + 0x13a0) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x13a0), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      local_48 = (undefined *)
                 (CONCAT44(local_48._4_4_,
                           (uint)*(ushort *)
                                  (*(long *)(lVar10 + 5000) + *(long *)(lVar10 + 0x1380) + 100)) &
                 0xffffffff0000000f);
      param_1[1] = (int)local_48 == 1;
      *(undefined4 *)(param_1 + 0x18) =
           *(undefined4 *)(*(long *)(lVar10 + 5000) + *(long *)(lVar10 + 0x1380) + 0x68);
      *(undefined8 *)(param_1 + 0xc) =
           *(undefined8 *)(*(long *)(lVar10 + 5000) + *(long *)(lVar10 + 0x1380) + 0x5c);
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x13a0) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x13a0) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
  }
switchD_0377f948_default:
  *param_1 = 0;
  *(uint *)(param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 8) = 0x7fffffff;
  lVar11 = *(long *)puVar3;
  lVar10 = 0;
  if (lVar11 != 0) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    if (((*(byte *)(lVar11 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar11 = 0;
    }
    lVar10 = 0;
    if (lVar11 != 0) {
      lVar10 = lVar11 + 0xa8;
    }
  }
  if ((*(long **)(lVar10 + 0x36540) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x36540), puVar8 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar8)();
    uVar5 = uVar5 ^ 1;
  }
  lVar11 = 0;
  while( true ) {
    uVar2 = *(ushort *)(*(long *)(lVar10 + 0x36528) + *(long *)(lVar10 + 0x36520) + lVar11 * 2);
    uVar12 = (uVar2 >> 10) - 1;
    if (6 < uVar12) {
      uVar12 = 5;
    }
    uVar1 = 5;
    if (uVar2 != 0) {
      uVar1 = uVar12;
    }
    local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar1);
    if (uVar1 == uVar4) break;
    lVar11 = lVar11 + 1;
    if (lVar11 == 0x1fb) {
joined_r0x0377fb18:
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar10 + 0x36540) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x36540) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      uVar7 = FUN_0377fc30(uVar4,0);
      *(undefined4 *)(param_1 + 0x14) = uVar7;
      FUN_0377e950(uVar4,param_1);
      return 1;
    }
  }
  *(int *)(param_1 + 8) = (int)lVar11;
  goto joined_r0x0377fb18;
}

