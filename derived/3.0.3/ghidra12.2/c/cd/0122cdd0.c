
void FUN_0122cdd0(uint param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_38;
  
  if (param_1 == 0xffffffff) {
    return;
  }
  lVar10 = (long)(int)param_1;
  if (*(int *)((long)&DAT_0514e4c0 + (long)(int)param_1 * 4) == 6) {
    *(undefined4 *)((long)&DAT_0514e4c0 + lVar10 * 4) = 4;
  }
  switch(*(undefined4 *)((long)&DAT_0514e4c0 + lVar10 * 4)) {
  case 1:
switchD_0122ce40_caseD_1:
    FUN_0122d200(param_1,&DAT_0514e440 + lVar10 * 2);
    break;
  case 2:
    local_60 = CONCAT44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc),1);
    uVar3 = FUN_017baf44();
    local_58 = CONCAT71(local_58._1_7_,uVar3) & 0xffffffffffffff01;
    local_68 = &PTR_LAB_0492e760;
    local_38 = 0xea79;
    FUN_0277d4ac(&local_38);
    FUN_011f3880(&local_68,0,&local_38,&DAT_0514e440 + lVar10 * 2);
    break;
  case 4:
    if (DAT_04c487d4 != -1) {
      local_68 = (undefined **)CONCAT44(local_68._4_4_,3);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 3 & 1) != 0) {
        if (DAT_05574040 == 0) {
LAB_0122d0a8:
          lVar5 = 0;
        }
        else {
          puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar4 = (**(code **)(*(long *)*puVar9 + 0x38))();
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 + 0x70;
            }
          }
          else {
            if (puVar9 == (undefined8 *)0x0) goto LAB_0122d0a8;
            lVar5 = 0;
            if ((long *)puVar9[0x26] != (long *)0x0) {
              lVar5 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
            }
          }
        }
        lVar4 = *(long *)(lVar5 + 0x1c24e8);
        if (lVar4 == 0) {
          uVar6 = 0;
        }
        else {
          if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
            lVar4 = *(long *)(lVar5 + 0x1c24e8);
            uVar6 = uVar6 & 0xffffffff;
            if (lVar4 == 0) goto LAB_0122d118;
          }
          plVar7 = *(long **)(lVar4 + 0x20);
          if (plVar7 != (long *)0x0) {
            local_68 = *(undefined ***)(lVar5 + 0x1c24c8);
            local_60 = *(undefined8 *)(lVar5 + 0x1c24d0);
            local_58 = 0x928;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
          }
        }
LAB_0122d118:
        puVar1 = (uint *)(*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x904);
        puVar2 = puVar1 + param_1;
        if (7 < param_1) {
          puVar2 = puVar1;
        }
        *puVar2 = *(uint *)(&DAT_0514e448 + lVar10 * 2) & 0x3ff |
                  (*(uint *)((long)&DAT_0514e448 + lVar10 * 0x10 + 4) & 0x3ff) << 10 | 0x100000;
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 0x18),
           puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
        *(undefined4 *)((long)&DAT_0514e4c0 + lVar10 * 4) = 1;
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
          lVar5 = 0;
          if (lVar4 != 0) {
            lVar5 = lVar4 + 0x70;
          }
        }
        else {
          lVar5 = (**(code **)(*(long *)(*(undefined8 **)(DAT_05574040 + 0x10))[0x26] + 0x38))();
        }
        plVar7 = *(long **)(lVar5 + 0x1c24e8);
        if (((plVar7 != (long *)0x0) &&
            (puVar9 = (undefined8 *)*plVar7, puVar9 != (undefined8 *)0x0)) &&
           ((uVar6 = (**(code **)*puVar9)(), (uVar6 & 1) != 0 &&
            ((lVar5 = *(long *)(lVar5 + 0x1c24e8), lVar5 != 0 &&
             (puVar9 = *(undefined8 **)(lVar5 + 8), puVar9 != (undefined8 *)0x0)))))) {
          (**(code **)*puVar9)();
        }
        goto switchD_0122ce40_caseD_1;
      }
    }
    uVar8 = 6;
    goto LAB_0122d064;
  case 5:
    if (DAT_05574040 == 0) {
LAB_0122cfa8:
      lVar5 = 0;
    }
    else {
      puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar9 + 0x38))();
        lVar5 = 0;
        if (lVar4 != 0) {
          lVar5 = lVar4 + 0x70;
        }
      }
      else {
        if (puVar9 == (undefined8 *)0x0) goto LAB_0122cfa8;
        lVar5 = 0;
        if ((long *)puVar9[0x26] != (long *)0x0) {
          lVar5 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
        }
      }
    }
    lVar4 = *(long *)(lVar5 + 0x1c24e8);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
        lVar4 = *(long *)(lVar5 + 0x1c24e8);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar4 == 0) goto LAB_0122d018;
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 != (long *)0x0) {
        local_68 = *(undefined ***)(lVar5 + 0x1c24c8);
        local_60 = *(undefined8 *)(lVar5 + 0x1c24d0);
        local_58 = 0x928;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      }
    }
LAB_0122d018:
    puVar1 = (uint *)(*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x904);
    puVar2 = puVar1 + param_1;
    if (7 < param_1) {
      puVar2 = puVar1;
    }
    *puVar2 = *puVar2 & 0xff8fffff | 0x300000;
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
    uVar8 = 3;
LAB_0122d064:
    *(undefined4 *)((long)&DAT_0514e4c0 + lVar10 * 4) = uVar8;
  }
  *(undefined1 *)(param_2 + lVar10) = 1;
  return;
}

