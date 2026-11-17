
undefined8 FUN_02b67a30(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined **local_58;
  long lStack_50;
  ushort local_48;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == -1) {
    return 0;
  }
  local_58 = (undefined **)((ulong)local_58 & 0xffffffff00000000);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67ab8:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 0;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67ab8;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67bc4:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 1;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67bc4;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,2);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67cd0:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 2;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67cd0;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,3);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67d30:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 3;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67d30;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,4);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67eec:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 4;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67eec;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,5);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67f4c:
        puVar1 = PTR_DAT_04bc35d0;
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 5;
            goto LAB_02b68444;
          }
          local_58 = (undefined **)(puVar1 + 0x10);
          if ((((bVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67f4c;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,6);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b67fac:
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = &PTR_FUN_04a882d0;
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          local_58 = (undefined **)(PTR_DAT_04bb6ba8 + 0x10);
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 6;
            goto LAB_02b68444;
          }
          FUN_02640184(&local_58);
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b67fac;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,7);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b68208:
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = &PTR_FUN_04a882d0;
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          local_58 = (undefined **)(PTR_DAT_04bb6ba8 + 0x10);
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          if (*(char *)(lVar3 + 0x1c4) == param_2 || *(char *)(lVar3 + 0x1c5) == param_2) {
            uVar7 = 7;
            goto LAB_02b68444;
          }
          FUN_02640184(&local_58);
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b68208;
  }
  local_58 = (undefined **)CONCAT44(local_58._4_4_,8);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x70;
LAB_02b68304:
        if ((uint)local_58 < 10) {
          lVar4 = lVar3 + 0x1962d8 + ((ulong)local_58 & 0xffffffff) * 0x10d8;
          if (9 < (uint)local_58) {
            lVar4 = lVar3 + 0x1962d8;
          }
          local_58 = &PTR_FUN_04a882d0;
          local_48 = 1;
          lStack_50 = lVar4;
          if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
            bVar2 = 0;
          }
          else {
            puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
            bVar2 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar2 = (**(code **)*puVar6)();
            }
          }
          bVar5 = bVar2 & 1;
          local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
          local_58 = (undefined **)(PTR_DAT_04bb6ba8 + 0x10);
          lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
          uVar7 = 8;
          if ((*(char *)(lVar3 + 0x1c4) == param_2) || (*(char *)(lVar3 + 0x1c5) == param_2))
          goto LAB_02b68444;
          FUN_02640184(&local_58);
        }
      }
    }
    else if (((puVar6 != (undefined8 *)0x0) && ((long *)puVar6[0x26] != (long *)0x0)) &&
            (lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar3 != 0)) goto LAB_02b68304;
  }
  lVar4 = FUN_02663d80(9);
  if (lVar4 == 0) {
    return 0;
  }
  local_58 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
  local_48 = 1;
  lStack_50 = lVar4;
  if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
    bVar2 = 0;
  }
  else {
    puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28);
    bVar2 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      bVar2 = (**(code **)*puVar6)();
    }
  }
  bVar5 = bVar2 & 1;
  local_48 = CONCAT11(bVar2,(undefined1)local_48) & 0x1ff;
  local_58 = (undefined **)(PTR_DAT_04bb6ba8 + 0x10);
  lVar3 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  uVar7 = 9;
  if ((*(char *)(lVar3 + 0x1c4) != param_2) && (*(char *)(lVar3 + 0x1c5) != param_2)) {
    FUN_02640184(&local_58);
    return 0;
  }
LAB_02b68444:
  *param_1 = uVar7;
  local_58 = &PTR_FUN_04a882d0;
  if (((bVar5 != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return 1;
}

