
void FUN_025a7b38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  puVar1 = PTR_DAT_04bb2020;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "Situ_All";
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
    if (lVar2 != 0) goto LAB_025a7bbc;
LAB_025a7c2c:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
       (lVar2 = FUN_026eec4c(), lVar2 == 0)) goto LAB_025a7c2c;
LAB_025a7bbc:
    lVar3 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar3 + 0x2a8e8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x2a8e8), puVar4 == (undefined8 *)0x0)) {
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8));
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8));
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x2a8e8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x2a8e8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    lVar2 = (long)iVar6;
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    FUN_026054d0(lVar3,&local_48,lVar2);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "Situ_MultiPlay";
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
    if (lVar2 != 0) goto LAB_025a7ca4;
LAB_025a7d18:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
       (lVar2 = FUN_026eec4c(), lVar2 == 0)) goto LAB_025a7d18;
LAB_025a7ca4:
    lVar3 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar3 + 0x2a8e8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x2a8e8), puVar4 == (undefined8 *)0x0)) {
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 4);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 4);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x2a8e8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x2a8e8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    lVar2 = (long)iVar6;
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    FUN_026054d0(lVar3,&local_48,lVar2);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "Situ_MultiVillagers";
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
    if (lVar2 != 0) goto LAB_025a7d90;
LAB_025a7e04:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
       (lVar2 = FUN_026eec4c(), lVar2 == 0)) goto LAB_025a7e04;
LAB_025a7d90:
    lVar3 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar3 + 0x2a8e8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x2a8e8), puVar4 == (undefined8 *)0x0)) {
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 8);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 8);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x2a8e8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x2a8e8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    lVar2 = (long)iVar6;
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    FUN_026054d0(lVar3,&local_48,lVar2);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "Situ_LocalMultiPlay";
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
    if (lVar2 != 0) goto LAB_025a7e7c;
LAB_025a7ef0:
    lVar2 = 0;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    if (((*(int *)(param_1 + 0x1c) == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
       (lVar2 = FUN_026eec4c(), lVar2 == 0)) goto LAB_025a7ef0;
LAB_025a7e7c:
    lVar3 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar3 + 0x2a8e8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x2a8e8), puVar4 == (undefined8 *)0x0)) {
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 0xc);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 0xc);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x2a8e8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x2a8e8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    lVar2 = (long)iVar6;
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    FUN_026054d0(lVar3,&local_48,lVar2);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "Situ_PhotoMode";
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_34[0] = *(byte *)(param_1 + 0x18);
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
joined_r0x025a7f64:
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar3 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar3 + 0x2a8e8) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x2a8e8), puVar4 == (undefined8 *)0x0)) {
        iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 0x10);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        iVar6 = *(int *)(*(long *)(lVar3 + 0x2a8d0) + *(long *)(lVar3 + 0x2a8c8) + 0x10);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x2a8e8) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x2a8e8) + 8), puVar4 != (undefined8 *)0x0))
        {
          (**(code **)*puVar4)();
        }
      }
      lVar2 = (long)iVar6;
      lVar3 = *(long *)(param_1 + 8);
      goto joined_r0x025a8084;
    }
  }
  else if ((*(int *)(param_1 + 0x1c) != -1) && (*(long *)PTR_DAT_04bb46b0 != 0)) {
    lVar2 = FUN_026eec4c();
    goto joined_r0x025a7f64;
  }
  lVar2 = 0;
  lVar3 = *(long *)(param_1 + 8);
joined_r0x025a8084:
  if (lVar3 != 0) {
    FUN_026054d0(lVar3,&local_48,lVar2);
  }
  return;
}

