
void FUN_016c8184(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 uStack_49;
  undefined8 local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  lVar11 = *(long *)PTR_DAT_04bb4938;
  lVar10 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x148);
  if (lVar11 == 0 || lVar10 == 0) {
    return;
  }
  local_54 = *(undefined4 *)PTR_DAT_04bb4b48;
  uStack_50 = local_54;
  FUN_007d6c4c(&uStack_50);
  FUN_007d6d7c(&local_54,lVar11 + 8);
  iVar3 = *(int *)(lVar11 + 0x48);
  if (iVar3 == 3) {
    iVar3 = FUN_0252d29c();
    lVar10 = *(long *)PTR_DAT_04bb46b0;
    if (lVar10 == 0) {
      return;
    }
    puVar8 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar8[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    lVar10 = lVar10 + (long)iVar3 * 0xcb0;
    if ((*(long **)(lVar10 + 0x211c48) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x211c48), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    bVar2 = *(byte *)(*(long *)(lVar10 + 0x211c30) + *(long *)(lVar10 + 0x211c28) + 0x1590);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar10 + 0x211c48) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x211c48) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if ((bVar2 >> 4 & 1) == 0) {
      return;
    }
    puVar6 = &local_54;
    goto LAB_016c86c0;
  }
  if (iVar3 != 2) {
    if (iVar3 != 1) {
      return;
    }
    iVar3 = FUN_0252d29c();
    lVar7 = *(long *)PTR_DAT_04bb46b0;
    if (lVar7 != 0) {
      puVar8 = *(undefined8 **)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar7 != 0) {
          lVar7 = lVar7 + (long)iVar3 * 0xcb0;
          lVar1 = lVar7 + 0x211c90;
          plVar9 = *(long **)(lVar7 + 0x211cb8);
joined_r0x016c832c:
          if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
            uVar4 = 1;
          }
          else {
            uVar4 = (*(code *)**(undefined8 **)*plVar9)();
            uVar4 = uVar4 ^ 1;
          }
          bVar2 = *(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1590);
          if ((((uVar4 & 1) == 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar8 != (undefined8 *)0x0))
          {
            (**(code **)*puVar8)();
          }
          if ((bVar2 >> 4 & 1) != 0) {
            lVar7 = *(long *)(lVar1 + 0x28);
            if (lVar7 == 0) {
              lVar7 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
              *(byte *)(lVar7 + 0x1590) = *(byte *)(lVar7 + 0x1590) & 0xef;
            }
            else {
              if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
                uVar5 = 0;
LAB_016c853c:
                plVar9 = *(long **)(lVar7 + 0x20);
                if (plVar9 != (long *)0x0) {
                  local_48 = *(undefined **)(lVar1 + 8);
                  pcStack_40 = *(char **)(lVar1 + 0x10);
                  local_38 = 0x1594;
                  (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
                }
              }
              else {
                uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
                lVar7 = *(long *)(lVar1 + 0x28);
                uVar5 = uVar5 & 0xffffffff;
                if (lVar7 != 0) goto LAB_016c853c;
              }
              lVar7 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
              *(byte *)(lVar7 + 0x1590) = *(byte *)(lVar7 + 0x1590) & 0xef;
              if ((((uVar5 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                 (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18),
                 puVar8 != (undefined8 *)0x0)) {
                (**(code **)*puVar8)();
              }
            }
          }
        }
      }
      else if (((puVar8 != (undefined8 *)0x0) && ((long *)puVar8[0x26] != (long *)0x0)) &&
              (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 != 0)) {
        lVar7 = lVar7 + (long)iVar3 * 0xcb0;
        lVar1 = lVar7 + 0x211c20;
        plVar9 = *(long **)(lVar7 + 0x211c48);
        goto joined_r0x016c832c;
      }
    }
    uVar5 = FUN_016c7db8(&uStack_50);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(lVar11 + 0x98) != 0) {
        if (*(int *)(lVar11 + 0x98) != 0) {
          FUN_0252d11c(&uStack_49);
          local_48 = PTR_DAT_04bb2020 + 0x10;
          pcStack_40 = "IsHotelEditTutorial";
          iVar3 = FUN_02753180(&uStack_49,&local_48);
          if (iVar3 != 0) goto LAB_016c865c;
        }
        if ((*(byte *)(lVar11 + 0x54) & 1) != 0) {
          return;
        }
        local_48 = (undefined *)CONCAT44((int)((ulong)local_48 >> 0x20),4);
      }
LAB_016c865c:
      if (*(int *)(lVar11 + 0x98) != 0) {
        if (*(int *)(lVar11 + 0x98) != 0) {
          FUN_0252d11c(&uStack_49);
          local_48 = PTR_DAT_04bb2020 + 0x10;
          pcStack_40 = "IsHotelEditTutorial";
          iVar3 = FUN_02753180(&uStack_49,&local_48);
          if (iVar3 != 0) goto LAB_016c86b0;
        }
        uVar5 = (ulong)local_48 >> 0x20;
        local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
        if (((*(byte *)(lVar11 + 0x54) & 1) == 0) &&
           (local_48 = (undefined *)CONCAT44((int)uVar5,4), (*(byte *)(lVar11 + 0x54) >> 4 & 1) != 0
           )) {
          return;
        }
      }
LAB_016c86b0:
      uVar5 = FUN_016c7db8(&local_54);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    else {
      local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
      FUN_01586490(lVar10,&uStack_50,&local_48,1);
      local_48._0_4_ = 1;
      FUN_01586490(lVar10,&local_54,&local_48,1);
      local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
      FUN_01586490(lVar10,&uStack_50,&local_48,1);
    }
    puVar6 = &uStack_50;
LAB_016c86c0:
    FUN_016c7f78(puVar6,1);
    return;
  }
  iVar3 = FUN_0252d29c();
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) goto LAB_016c8748;
  puVar8 = *(undefined8 **)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar11 == 0) goto LAB_016c8748;
    lVar11 = lVar11 + (long)iVar3 * 0xcb0;
    lVar7 = lVar11 + 0x211c90;
    plVar9 = *(long **)(lVar11 + 0x211cb8);
  }
  else {
    if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
       (lVar11 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar11 == 0)) goto LAB_016c8748;
    lVar11 = lVar11 + (long)iVar3 * 0xcb0;
    lVar7 = lVar11 + 0x211c20;
    plVar9 = *(long **)(lVar11 + 0x211c48);
  }
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*(code *)**(undefined8 **)*plVar9)();
    uVar4 = uVar4 ^ 1;
  }
  bVar2 = *(byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1590);
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  if ((bVar2 >> 4 & 1) == 0) goto LAB_016c8748;
  FUN_016c7f78(&local_54,1);
  lVar11 = *(long *)(lVar7 + 0x28);
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
    *(byte *)(lVar11 + 0x1590) = *(byte *)(lVar11 + 0x1590) & 0xef;
    goto LAB_016c8748;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 0;
LAB_016c86e8:
    plVar9 = *(long **)(lVar11 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_48 = *(undefined **)(lVar7 + 8);
      pcStack_40 = *(char **)(lVar7 + 0x10);
      local_38 = 0x1594;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_48);
    }
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    lVar11 = *(long *)(lVar7 + 0x28);
    uVar5 = uVar5 & 0xffffffff;
    if (lVar11 != 0) goto LAB_016c86e8;
  }
  lVar11 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
  *(byte *)(lVar11 + 0x1590) = *(byte *)(lVar11 + 0x1590) & 0xef;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_016c8748:
  local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
  FUN_01586490(lVar10,&uStack_50,&local_48,1);
  return;
}

