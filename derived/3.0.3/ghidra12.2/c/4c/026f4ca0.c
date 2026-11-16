
void FUN_026f4ca0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  undefined *local_90;
  char *local_88;
  undefined **local_80 [4];
  
  *(undefined4 *)((long)param_1 + 0xf) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x10) + 0x38))();
  if (lVar3 == 0) {
    return;
  }
  if ((*(long **)(lVar3 + 0x98) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x98), puVar4 == (undefined8 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    uVar5 = uVar5 & 0xffffffff;
  }
  local_88 = "ValidateVillageSave";
  local_80[0] = &PTR_FUN_04a89700;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  iVar2 = FUN_0273ec70(&LAB_0022ebf0 + *(long *)(lVar3 + 0x80) + *(long *)(lVar3 + 0x78),&local_90);
  if (iVar2 != 0) {
    *(undefined1 *)((long)param_1 + 0x12) = 1;
    FUN_02705554(&local_90,1,1);
    uVar10 = (ulong)local_90 >> 0x20;
    if ((int)((ulong)local_90 >> 0x20) != 8) {
      if ((int)local_90 == 0) {
        while( true ) {
          uVar9 = (uint)uVar10;
          uVar1 = uVar9;
          if (7 < uVar9) {
            uVar1 = 0xffffffff;
          }
          puVar4 = (undefined8 *)((long)param_1 + (ulong)uVar1 * 2);
          if (7 < uVar9) {
            puVar4 = param_1;
          }
          do {
            uVar6 = FUN_026eed64(param_2,uVar1);
            (*(code *)*local_80[0])(local_80,uVar6,puVar4);
            lVar7 = DAT_05574040;
          } while (7 < uVar9);
          if (DAT_05574040 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
          puVar4 = *(undefined8 **)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
            lVar7 = (**(code **)(*(long *)*puVar4 + 0x18))();
            lVar7 = lVar7 + 0x110;
          }
          else {
            lVar7 = (**(code **)(*(long *)puVar4[0x26] + 0x18))();
          }
          if (uVar9 == 7) break;
          plVar8 = (long *)(lVar7 + uVar10 * 0x48 + 0x1e3400);
          while ((6 < uVar10 || (plVar8[-1] == 0 && *plVar8 == 0))) {
            uVar10 = uVar10 + 1;
            plVar8 = plVar8 + 9;
            if (uVar10 == 7) goto LAB_026f4d7c;
          }
          uVar10 = (ulong)((int)uVar10 + 1);
        }
      }
      else {
        while( true ) {
          uVar9 = (uint)uVar10;
          uVar1 = uVar9;
          if (7 < uVar9) {
            uVar1 = 0xffffffff;
          }
          puVar4 = (undefined8 *)((long)param_1 + (ulong)uVar1 * 2);
          if (7 < uVar9) {
            puVar4 = param_1;
          }
          do {
            uVar6 = FUN_026eed64(param_2,uVar1);
            (*(code *)*local_80[0])(local_80,uVar6,puVar4);
            lVar7 = DAT_05574040;
          } while (7 < uVar9);
          if (DAT_05574040 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
          lVar7 = (**(code **)(*(long *)**(undefined8 **)(lVar7 + 0x10) + 0x18))();
          if (uVar9 == 7) break;
          plVar8 = (long *)(lVar7 + uVar10 * 0x48 + 0x1e3510);
          while ((6 < uVar10 || (plVar8[-1] == 0 && *plVar8 == 0))) {
            uVar10 = uVar10 + 1;
            plVar8 = plVar8 + 9;
            if (uVar10 == 7) goto LAB_026f4d7c;
          }
          uVar10 = (ulong)((int)uVar10 + 1);
        }
      }
    }
  }
LAB_026f4d7c:
  if (*(long *)(param_2 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x94) == 2) {
      lVar7 = 0;
    }
    else if (*(int *)(param_2 + 0x9c) == 2) {
      lVar7 = 1;
    }
    else if (*(int *)(param_2 + 0xa4) == 2) {
      lVar7 = 2;
    }
    else if (*(int *)(param_2 + 0xac) == 2) {
      lVar7 = 3;
    }
    else if (*(int *)(param_2 + 0xb4) == 2) {
      lVar7 = 4;
    }
    else if (*(int *)(param_2 + 0xbc) == 2) {
      lVar7 = 5;
    }
    else if (*(int *)(param_2 + 0xc4) == 2) {
      lVar7 = 6;
    }
    else {
      if (*(int *)(param_2 + 0xcc) != 2) goto LAB_026f4fd4;
      lVar7 = 7;
    }
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + lVar7 * 8 + 0x60);
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x20);
      goto LAB_026f4fd8;
    }
  }
LAB_026f4fd4:
  uVar6 = 0;
LAB_026f4fd8:
  (*(code *)*local_80[0])(local_80,uVar6,param_1 + 2);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x98) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x98) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

