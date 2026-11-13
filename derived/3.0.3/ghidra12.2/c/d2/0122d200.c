
void FUN_0122d200(int param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  int local_24;
  
  local_48._0_4_ = 0x842;
  local_48._4_4_ = 0;
  local_24 = param_1;
  FUN_0277d4ac(&local_48);
  puVar3 = PTR_DAT_04bb46b0;
  local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_0122d33c:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d390:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 1;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d390;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d494:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 2;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d494;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,3);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d598:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 3;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d598;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,4);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d69c:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 4;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d69c;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,5);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d7a0:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 5;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d7a0;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,6);
    lVar9 = *(long *)puVar3;
    if (lVar9 != 0) {
      puVar10 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x70;
LAB_0122d8a4:
          if ((uint)local_60 < 8) {
            lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_60) {
              lVar1 = lVar9 + 0x119228;
            }
            if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            if (iVar4 == param_1) {
              uVar7 = 6;
              goto LAB_0122da4c;
            }
          }
        }
      }
      else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0))
      goto LAB_0122d8a4;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,7);
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) goto LAB_0122dad4;
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 == 0) goto LAB_0122dad4;
      lVar9 = lVar9 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 == 0)) goto LAB_0122dad4;
    if (7 < (uint)local_60) goto LAB_0122dad4;
    lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_60) {
      lVar1 = lVar9 + 0x119228;
    }
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
      cVar2 = *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      cVar2 = *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    if (cVar2 != param_1) goto LAB_0122dad4;
    uVar7 = 7;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) != 0) {
      if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
         (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0)) goto LAB_0122d28c;
      goto LAB_0122d33c;
    }
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 == 0) goto LAB_0122d33c;
    lVar9 = lVar9 + 0x70;
LAB_0122d28c:
    if (7 < (uint)local_60) goto LAB_0122d33c;
    lVar1 = lVar9 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_60) {
      lVar1 = lVar9 + 0x119228;
    }
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar10 == (undefined8 *)0x0)) {
      iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      iVar4 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x289f8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    if (iVar4 != param_1) goto LAB_0122d33c;
    uVar7 = 0;
  }
LAB_0122da4c:
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "HouseOrder1";
  iVar4 = FUN_0273cd90(uVar7,&local_60);
  if (iVar4 != 0) {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    uVar8 = (uint)((ulong)uVar5 * 100 >> 0x20);
    DAT_05582b7c = uVar5;
    if (uVar8 == 0) {
      local_60 = (undefined *)0x85f;
    }
    else {
      if (2 < uVar8) goto LAB_0122dad4;
      local_60 = (undefined *)0x84b;
    }
    FUN_0277d4ac(&local_60);
    local_48._0_4_ = SUB84(local_60,0);
    local_48._4_4_ = local_60._4_4_;
  }
LAB_0122dad4:
  iVar4 = FUN_0277d6c4(&local_48);
  if (iVar4 == 0x842) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "TodayFortune";
    iVar4 = FUN_0274ce10(&local_24,&local_60);
    if (iVar4 == 1) {
      local_60 = (undefined *)0x846;
      FUN_0277d4ac(&local_60);
      local_48._0_4_ = SUB84(local_60,0);
      local_48._4_4_ = local_60._4_4_;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = (char *)CONCAT44(local_48._4_4_,(undefined4)local_48);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_48);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
        local_50 = lVar9;
      }
    }
  }
  FUN_01b152b8(&local_60);
  local_48 = local_58;
  uStack_6c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_70 = 1;
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a50ae4(&local_78,&local_48,param_2);
  return;
}

