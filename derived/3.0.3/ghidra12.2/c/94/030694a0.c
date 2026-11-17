
void FUN_030694a0(uint param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_3;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar3 == 0) {
    return;
  }
  lVar8 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar3 = *(long *)(lVar8 + 0x2d010);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar8 + 0x2d010) == 0) goto LAB_03069580;
      plVar5 = *(long **)(*(long *)(lVar8 + 0x2d010) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar8 + 0x2cff0);
      local_40 = *(undefined8 *)(lVar8 + 0x2cff8);
      uStack_38 = 0x1000;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_03069580:
  uVar7 = 0;
  lVar3 = *(long *)(lVar8 + 0x2cff8) + *(long *)(lVar8 + 0x2cff0);
  do {
    pbVar1 = (byte *)(lVar3 + ((long)((ulong)uVar7 << 0x20) >> 0x1e));
    sVar2 = *(short *)(pbVar1 + 2);
    if (sVar2 == 0) {
      *pbVar1 = (byte)param_1;
      *(char *)(lVar3 + (long)(int)uVar7 * 4 + 1) = (char)param_2;
LAB_030695ec:
      *(short *)(pbVar1 + 2) = sVar2 + 1;
      break;
    }
    if ((param_1 == *pbVar1) && (param_2 == *(byte *)(lVar3 + (long)(int)uVar7 * 4 + 1))) {
      if (sVar2 != -1) goto LAB_030695ec;
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x400);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x2d010) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x2d010) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

