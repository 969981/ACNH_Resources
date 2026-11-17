
bool FUN_02c66a30(long param_1,byte *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_60 [28];
  uint local_44;
  
  local_44 = 0xffffffff;
  if (7 < *(uint *)(param_1 + 0x1c66c)) goto switchD_02c66a84_caseD_1;
  lVar1 = param_1 + 0x1f8;
  switch(*(uint *)(param_1 + 0x1c66c)) {
  case 0:
    if (*(int *)(param_1 + 0x22598) == 0) {
      local_44 = 1;
    }
  default:
    goto switchD_02c66a84_caseD_1;
  case 3:
  case 5:
    if (param_3 != 1) goto switchD_02c66a84_caseD_1;
    break;
  case 4:
  case 6:
    if (param_3 == 3) {
      FUN_02645730(auStack_60,lVar1);
      if (DAT_05574040 == 0) goto switchD_02c66a84_caseD_1;
      puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
        if (lVar7 == 0) goto switchD_02c66a84_caseD_1;
        lVar7 = lVar7 + 0x70;
      }
      else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
              (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 == 0))
      goto switchD_02c66a84_caseD_1;
      if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar8)();
        uVar5 = uVar5 ^ 1;
      }
      lVar2 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8);
      bVar4 = *(long *)(lVar2 + 0x1e33b0) != 0 || *(long *)(lVar2 + 0x1e33b8) != 0;
      if (*(long *)(lVar2 + 0x1e33f8) != 0 || *(long *)(lVar2 + 0x1e3400) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e3440) != 0 || *(long *)(lVar2 + 0x1e3448) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e3488) != 0 || *(long *)(lVar2 + 0x1e3490) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e34d0) != 0 || *(long *)(lVar2 + 0x1e34d8) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e3518) != 0 || *(long *)(lVar2 + 0x1e3520) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e3560) != 0 || *(long *)(lVar2 + 0x1e3568) != 0) {
        bVar4 = bVar4 + 1;
      }
      if (*(long *)(lVar2 + 0x1e35a8) != 0 || *(long *)(lVar2 + 0x1e35b0) != 0) {
        bVar4 = bVar4 + 1;
      }
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
      if (bVar4 < 2) goto switchD_02c66a84_caseD_1;
      if (*(char *)(param_1 + 0x97cd8) != '\0') {
        param_2[0x33] = 1;
        local_44 = 7;
        goto switchD_02c66a84_caseD_1;
      }
      goto LAB_02c66ad8;
    }
    if (param_3 != 2) goto switchD_02c66a84_caseD_1;
    break;
  case 7:
    if (param_3 != 2) goto switchD_02c66a84_caseD_1;
LAB_02c66ad8:
    uVar6 = FUN_01b4b030(lVar1);
    if ((uVar6 & 1) == 0) goto switchD_02c66a84_caseD_1;
    goto LAB_02c66ae4;
  }
  uVar6 = FUN_01b4b030(lVar1);
  if ((uVar6 & 1) == 0) {
    local_44 = 8;
  }
  else {
LAB_02c66ae4:
    local_44 = 9;
  }
switchD_02c66a84_caseD_1:
  uVar5 = local_44;
  if (*(int *)(param_1 + 0x1c668) == -1) {
    *(int *)(param_1 + 0x1c668) = 1;
  }
  if (local_44 != 0xffffffff) {
    *(uint *)(param_1 + 0x1c66c) = local_44;
    uVar3 = local_44;
    if (0x13 < local_44) {
      uVar3 = 0;
    }
    (**(code **)((&DAT_0565fe20)[(ulong)uVar3 * 2] + 0x18))(&DAT_0565fe20 + (ulong)uVar3 * 2);
    *(undefined8 *)(param_2 + 0x10) = (&DAT_0565fe28)[(ulong)uVar3 * 2];
    *(long *)(param_2 + 0x28) = param_1 + 0x1c680;
    bVar4 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *param_2 = bVar4;
  }
  return uVar5 != 0xffffffff;
}

