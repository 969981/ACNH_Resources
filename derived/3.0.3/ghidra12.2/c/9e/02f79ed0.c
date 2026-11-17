
undefined8 FUN_02f79ed0(long param_1,undefined4 param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  lVar4 = DAT_05574040;
  if (DAT_05574040 == 0) {
    return 0;
  }
  uVar2 = FUN_026f4a88(DAT_05574040);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x10) == 0) {
    return 0;
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 0x10) + 0xe8);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar3 + 0x30))();
  if (lVar4 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar4 + 0x28);
  if (lVar8 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar4 + 0x28);
      uVar2 = uVar2 & 0xffffffff;
      if (lVar8 == 0) goto LAB_02f79f90;
    }
    plVar3 = *(long **)(lVar8 + 0x20);
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined **)(lVar4 + 8);
      pcStack_40 = *(char **)(lVar4 + 0x10);
      local_38 = 0x69560;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_02f79f90:
  uVar5 = FUN_02841980(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_2);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "UpdatePassport";
  FUN_0279a9f0(param_1 + 0x1f8,&local_48,1);
  bVar1 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar1) {
    return 1;
  }
  bVar9 = *(byte *)(param_1 + 0x2e0);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar9 == bVar1) {
    uVar7 = 0;
  }
  else {
    bVar9 = *(byte *)(param_1 + 0x4b0);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar9 == bVar1) {
      uVar7 = 1;
    }
    else {
      bVar9 = *(byte *)(param_1 + 0x680);
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar9 == bVar1) {
        uVar7 = 2;
      }
      else {
        bVar9 = *(byte *)(param_1 + 0x850);
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (bVar9 == bVar1) {
          uVar7 = 3;
        }
        else {
          bVar9 = *(byte *)(param_1 + 0xa20);
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar9 == bVar1) {
            uVar7 = 4;
          }
          else {
            bVar9 = *(byte *)(param_1 + 0xbf0);
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            if (bVar9 == bVar1) {
              uVar7 = 5;
            }
            else {
              bVar9 = *(byte *)(param_1 + 0xdc0);
              if (7 < bVar9) {
                bVar9 = 0xff;
              }
              if (bVar9 == bVar1) {
                uVar7 = 6;
              }
              else {
                bVar9 = *(byte *)(param_1 + 0xf90);
                if (7 < bVar9) {
                  bVar9 = 0xff;
                }
                if (bVar9 != bVar1) {
                  return 1;
                }
                uVar7 = 7;
              }
            }
          }
        }
      }
    }
  }
  FUN_02f7aa88(param_1,uVar7);
  return 1;
}

