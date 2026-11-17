
uint FUN_02f79bf0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  lVar5 = DAT_05574040;
  if (*(char *)(param_1 + 0x1291) != '\0') {
    return 0xffffffff;
  }
  if (DAT_05574040 == 0) {
    return 0xffffffff;
  }
  uVar3 = FUN_026f4a88(DAT_05574040);
  if ((uVar3 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
    return 0xffffffff;
  }
  plVar4 = *(long **)(*(long *)(lVar5 + 0x10) + 0xe8);
  if (plVar4 == (long *)0x0) {
    return 0xffffffff;
  }
  lVar5 = (**(code **)(*plVar4 + 0x30))();
  if (lVar5 == 0) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(lVar5 + 0x28);
  if (lVar8 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar5 + 0x28);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar8 == 0) goto LAB_02f79ce8;
    }
    plVar4 = *(long **)(lVar8 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined **)(lVar5 + 8);
      pcStack_50 = *(char **)(lVar5 + 0x10);
      local_48 = 0x69560;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_02f79ce8:
  uVar2 = FUN_02841d60(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_2,param_3,param_4);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (2 < uVar2) {
    return 0xffffffff;
  }
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
    bVar1 = *(byte *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x69170);
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    bVar1 = *(byte *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x69170);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  if (uVar2 != bVar1) {
    return uVar2;
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "UpdatePassport";
  FUN_0279a9f0(param_1 + 0x1f8,&local_58,1);
  bVar1 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar1) {
    return uVar2;
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
                  return uVar2;
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
  return uVar2;
}

