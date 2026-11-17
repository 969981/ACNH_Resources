
undefined8 FUN_02b5e950(undefined4 *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined **local_48;
  long local_40;
  undefined1 local_38;
  byte local_37;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == -1) {
    return 0;
  }
  local_48 = (undefined **)((ulong)local_48 & 0xffffffff00000000);
  if (DAT_05574040 == 0) {
LAB_02b5e9e0:
    local_48 = (undefined **)CONCAT44(local_48._4_4_,1);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5ea34:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_48 = &PTR_FUN_04a882d0;
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 1;
              goto LAB_02b5f1d4;
            }
            if ((((bVar1 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5ea34;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,2);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5ea94:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_48 = &PTR_FUN_04a882d0;
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 2;
              goto LAB_02b5f1d4;
            }
            if ((((bVar1 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5ea94;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,3);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5eaf4:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_48 = &PTR_FUN_04a882d0;
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 3;
              goto LAB_02b5f1d4;
            }
            if ((((bVar1 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5eaf4;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,4);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5eb54:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_48 = &PTR_FUN_04a882d0;
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 4;
              goto LAB_02b5f1d4;
            }
            if ((((bVar1 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5eb54;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,5);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5ebb4:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_48 = &PTR_FUN_04a882d0;
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 5;
              goto LAB_02b5f1d4;
            }
            if ((((bVar1 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar4)();
            }
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5ebb4;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,6);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5ec14:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            local_48 = (undefined **)(PTR_DAT_04bb8088 + 0x10);
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 6;
              goto LAB_02b5f1d4;
            }
            FUN_02640184(&local_48);
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5ec14;
    }
    local_48 = (undefined **)CONCAT44(local_48._4_4_,7);
    if (DAT_05574040 != 0) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
LAB_02b5ec74:
          if ((uint)local_48 < 8) {
            lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_48) {
              lVar6 = lVar2 + 0x119228;
            }
            local_38 = 1;
            local_40 = lVar6;
            if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
              bVar1 = 0;
            }
            else {
              puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
              bVar1 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                bVar1 = (**(code **)*puVar4)();
              }
            }
            local_37 = bVar1 & 1;
            local_48 = (undefined **)(PTR_DAT_04bb8088 + 0x10);
            lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
            if ((*(char *)(lVar2 + 0x289f8) == param_2) || (*(char *)(lVar2 + 0x289f9) == param_2))
            {
              uVar5 = 7;
              goto LAB_02b5f1d4;
            }
            FUN_02640184(&local_48);
          }
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0))
      goto LAB_02b5ec74;
    }
    uVar3 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
      if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
         (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0)) goto LAB_02b5e9d4;
      goto LAB_02b5e9e0;
    }
    lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar2 == 0) goto LAB_02b5e9e0;
    lVar2 = lVar2 + 0x70;
LAB_02b5e9d4:
    if (7 < (uint)local_48) goto LAB_02b5e9e0;
    lVar6 = lVar2 + 0x119228 + ((ulong)local_48 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_48) {
      lVar6 = lVar2 + 0x119228;
    }
    local_48 = &PTR_FUN_04a882d0;
    local_38 = 1;
    local_40 = lVar6;
    if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
      bVar1 = 0;
    }
    else {
      puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
      bVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar1 = (**(code **)*puVar4)();
      }
    }
    local_37 = bVar1 & 1;
    lVar2 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
    if ((*(char *)(lVar2 + 0x289f8) != param_2) && (*(char *)(lVar2 + 0x289f9) != param_2)) {
      if (((bVar1 & 1) != 0) &&
         ((*(long *)(lVar6 + 0x28) != 0 &&
          (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)))) {
        (**(code **)*puVar4)();
      }
      goto LAB_02b5e9e0;
    }
    uVar5 = 0;
LAB_02b5f1d4:
    *param_1 = uVar5;
    if (((local_37 != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    uVar3 = 1;
  }
  return uVar3;
}

