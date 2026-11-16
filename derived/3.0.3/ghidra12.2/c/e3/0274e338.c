
void FUN_0274e338(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb46b0;
  local_24 = 0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) goto LAB_0274e504;
  lVar3 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x18300);
    lVar7 = *(long *)(lVar3 + 0x18320);
    if (lVar7 == 0) {
      FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x0274e4e4:
        if (plVar5 != (long *)0x0) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar3 + 0x18308);
          uStack_48 = 0x1000;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar3 + 0x18320) != 0) {
          plVar5 = *(long **)(*(long *)(lVar3 + 0x18320) + 0x20);
          goto joined_r0x0274e4e4;
        }
      }
      FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
  }
  local_24 = 1;
  if (*(long *)puVar2 == 0) {
LAB_0274e6c4:
    local_24 = 4;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,4);
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x18300);
        lVar7 = *(long *)(lVar3 + 0x18320);
        if (lVar7 == 0) {
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
        }
        else {
          if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
            uVar4 = 0;
            plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x0274e7e8:
            if (plVar5 != (long *)0x0) {
              local_58 = *plVar1;
              local_50 = *(undefined8 *)(lVar3 + 0x18308);
              uStack_48 = 0x1000;
              (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
            }
          }
          else {
            uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            uVar4 = uVar4 & 0xffffffff;
            if (*(long *)(lVar3 + 0x18320) != 0) {
              plVar5 = *(long **)(*(long *)(lVar3 + 0x18320) + 0x20);
              goto joined_r0x0274e7e8;
            }
          }
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
      }
      local_24 = 5;
      if (*(long *)puVar2 == 0) {
        return;
      }
      lVar3 = FUN_026eec4c(*(long *)puVar2,5);
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x18300);
        lVar7 = *(long *)(lVar3 + 0x18320);
        if (lVar7 == 0) {
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
        }
        else {
          if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
            uVar4 = 0;
LAB_0274e810:
            plVar5 = *(long **)(lVar7 + 0x20);
            if (plVar5 != (long *)0x0) {
              local_58 = *plVar1;
              local_50 = *(undefined8 *)(lVar3 + 0x18308);
              uStack_48 = 0x1000;
              (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
            }
          }
          else {
            uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            lVar7 = *(long *)(lVar3 + 0x18320);
            uVar4 = uVar4 & 0xffffffff;
            if (lVar7 != 0) goto LAB_0274e810;
          }
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
      }
    }
  }
  else {
    lVar3 = FUN_026eec4c(*(long *)puVar2,1);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x18300);
      lVar7 = *(long *)(lVar3 + 0x18320);
      if (lVar7 == 0) {
        FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
      }
      else {
        if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x0274e654:
          if (plVar5 != (long *)0x0) {
            local_58 = *plVar1;
            local_50 = *(undefined8 *)(lVar3 + 0x18308);
            uStack_48 = 0x1000;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar3 + 0x18320) != 0) {
            plVar5 = *(long **)(*(long *)(lVar3 + 0x18320) + 0x20);
            goto joined_r0x0274e654;
          }
        }
        FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
    }
LAB_0274e504:
    local_24 = 2;
    if (*(long *)puVar2 == 0) goto LAB_0274e6c4;
    lVar3 = FUN_026eec4c(*(long *)puVar2,2);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x18300);
      lVar7 = *(long *)(lVar3 + 0x18320);
      if (lVar7 == 0) {
        FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
      }
      else {
        if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x0274e628:
          if (plVar5 != (long *)0x0) {
            local_58 = *plVar1;
            local_50 = *(undefined8 *)(lVar3 + 0x18308);
            uStack_48 = 0x1000;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar3 + 0x18320) != 0) {
            plVar5 = *(long **)(*(long *)(lVar3 + 0x18320) + 0x20);
            goto joined_r0x0274e628;
          }
        }
        FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
    }
    local_24 = 3;
    if (*(long *)puVar2 != 0) {
      lVar3 = FUN_026eec4c(*(long *)puVar2,3);
      if (lVar3 != 0) {
        plVar1 = (long *)(lVar3 + 0x18300);
        lVar7 = *(long *)(lVar3 + 0x18320);
        if (lVar7 == 0) {
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
        }
        else {
          if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
            uVar4 = 0;
LAB_0274e660:
            plVar5 = *(long **)(lVar7 + 0x20);
            if (plVar5 != (long *)0x0) {
              local_58 = *plVar1;
              local_50 = *(undefined8 *)(lVar3 + 0x18308);
              uStack_48 = 0x1000;
              (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
            }
          }
          else {
            uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            lVar7 = *(long *)(lVar3 + 0x18320);
            uVar4 = uVar4 & 0xffffffff;
            if (lVar7 != 0) goto LAB_0274e660;
          }
          FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
          if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18),
             puVar6 != (undefined8 *)0x0)) {
            (**(code **)*puVar6)();
          }
        }
      }
      goto LAB_0274e6c4;
    }
  }
  local_24 = 6;
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar3 = FUN_026eec4c(*(long *)puVar2,6);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x18300);
    lVar7 = *(long *)(lVar3 + 0x18320);
    if (lVar7 == 0) {
      FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar7 + 0x20);
joined_r0x0274e998:
        if (plVar5 != (long *)0x0) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar3 + 0x18308);
          uStack_48 = 0x1000;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar3 + 0x18320) != 0) {
          plVar5 = *(long **)(*(long *)(lVar3 + 0x18320) + 0x20);
          goto joined_r0x0274e998;
        }
      }
      FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
  }
  local_24 = 7;
  if (*(long *)puVar2 == 0) {
    return;
  }
  lVar3 = FUN_026eec4c(*(long *)puVar2,7);
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)(lVar3 + 0x18300);
  lVar7 = *(long *)(lVar3 + 0x18320);
  if (lVar7 == 0) {
    FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar3 + 0x18320);
    uVar4 = uVar4 & 0xffffffff;
    if (lVar7 == 0) goto LAB_0274e9ec;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar3 + 0x18308);
    uStack_48 = 0x1000;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  }
LAB_0274e9ec:
  FUN_0274d230(*(long *)(lVar3 + 0x18308) + *plVar1,param_1,param_2,&local_24);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18320) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18320) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

