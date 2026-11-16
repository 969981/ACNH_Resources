
void FUN_02648330(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar8 + 0x28);
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_026483b8;
      plVar4 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar8 + 8);
      lStack_40 = *(long *)(lVar8 + 0x10);
      local_38 = 0xb548;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_026483b8:
  lVar7 = 0;
  plVar4 = (long *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
  while( true ) {
    uVar1 = *(uint *)((long)plVar4 + lVar7 * 4 + 0xaf00);
    plVar5 = plVar4 + (ulong)uVar1 * 0xe;
    if (399 < uVar1) {
      plVar5 = plVar4;
    }
    if ((*plVar5 != 0) &&
       ((*(int *)((long)plVar5 + 0x2c) != 0 && (int)plVar5[2] != 0) && *plVar5 == *param_2)) break;
    lVar7 = lVar7 + 1;
    if (lVar7 == 400) {
LAB_026484bc:
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return;
    }
  }
  if (-1 < (int)(uint)lVar7) {
    if ((*(long *)(lVar8 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_38 = 0xb548;
      local_48 = *(long *)(lVar8 + 8);
      lStack_40 = *(long *)(lVar8 + 0x10);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      plVar4 = (long *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    }
    lVar2 = DAT_04da6480;
    plVar5 = plVar4;
    if (((uint)lVar7 < 400) &&
       (uVar1 = *(uint *)((long)plVar4 + lVar7 * 4 + 0xaf00), plVar5 = plVar4 + (ulong)uVar1 * 0xe,
       399 < uVar1)) {
      plVar5 = plVar4;
    }
    if (*(int *)((long)plVar5 + 0x5c) != -1) {
      *(int *)((long)plVar5 + 0x5c) = *(int *)((long)plVar5 + 0x5c) + 1;
    }
    if (*(char *)((long)plVar5 + 0x6d) != -1) {
      *(char *)((long)plVar5 + 0x6d) = *(char *)((long)plVar5 + 0x6d) + '\x01';
    }
    plVar5[10] = *(long *)(lVar2 + 0x4060);
    FUN_026463a0();
  }
  goto LAB_026484bc;
}

