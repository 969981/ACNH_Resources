
undefined8 FUN_0266dc30(undefined4 param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  byte bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar9 = (byte)param_3;
  local_48 = CONCAT44(local_48._4_4_,param_1);
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar6 == 0) {
      return 0;
    }
    lVar6 = lVar6 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return 0;
    }
    lVar6 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar6 == 0) {
      return 0;
    }
  }
  if (7 < (uint)local_48) {
    return 0;
  }
  lVar4 = lVar6 + 0x119228 + (local_48 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_48) {
    lVar4 = lVar6 + 0x119228;
  }
  lVar6 = *(long *)(lVar4 + 0xf9f8);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar4 + 0xf9f8);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar6 == 0) goto LAB_0266dd54;
    }
    plVar8 = *(long **)(lVar6 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_48 = *(ulong *)(lVar4 + 0xf9d8);
      local_40 = *(undefined8 *)(lVar4 + 0xf9e0);
      uStack_38 = 0xe;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_0266dd54:
  local_48 = CONCAT44(local_48._4_4_,param_2);
  if ((param_3 >> 7 & 1) == 0) {
    pcVar2 = (char *)(*(long *)(lVar4 + 0xf9e0) + *(ulong *)(lVar4 + 0xf9d8));
    pcVar3 = pcVar2 + (ulong)param_2 + 1;
    if (5 < param_2) {
      pcVar3 = pcVar2 + 1;
    }
    if (*pcVar3 != '\0') {
      pbVar1 = (byte *)(pcVar2 + 7);
      pbVar5 = pbVar1 + param_2;
      if (5 < param_2) {
        pbVar5 = pbVar1;
      }
      if ((uint)*pbVar5 < (param_3 & 0xff)) {
        uVar11 = (ulong)param_2;
        if (5 < param_2) {
          uVar11 = 0;
        }
        bVar9 = pbVar1[uVar11];
      }
      pbVar5 = pbVar1 + param_2;
      if (5 < param_2) {
        pbVar5 = pbVar1;
      }
      *pbVar5 = *pbVar5 - bVar9;
      uVar12 = 1;
      *pcVar2 = *pcVar2 - bVar9;
      goto joined_r0x0266dde8;
    }
  }
  uVar12 = 0;
joined_r0x0266dde8:
  if ((uVar7 & 1) == 0) {
    return uVar12;
  }
  if (*(long *)(lVar4 + 0xf9f8) == 0) {
    return uVar12;
  }
  puVar10 = *(undefined8 **)(*(long *)(lVar4 + 0xf9f8) + 0x18);
  if (puVar10 == (undefined8 *)0x0) {
    return uVar12;
  }
  (**(code **)*puVar10)();
  return uVar12;
}

