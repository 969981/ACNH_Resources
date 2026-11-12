
void FUN_007eaf80(undefined8 param_1,uint *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (0 < (int)*param_2) {
    uVar7 = 0;
    do {
      if (**(long **)(*(long *)(param_2 + 2) + uVar7 * 8) == param_3) {
        if (-1 < (int)uVar7) goto LAB_007eb0c0;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (*param_2 != uVar7);
  }
  plVar5 = (long *)FUN_007eada0();
  if (plVar5 == (long *)0x0) {
LAB_007eb0c0:
    plVar5 = (long *)&DAT_04cb6038;
  }
  else {
    *plVar5 = param_3;
    *(undefined1 *)((long)plVar5 + 10) = 1;
    *(undefined4 *)(plVar5 + 2) = *param_4;
    *(undefined4 *)((long)plVar5 + 0x14) = param_4[1];
    plVar5[3] = *(long *)(param_4 + 2);
    plVar5[4] = *(long *)(param_4 + 4);
    lVar1 = *(long *)(param_4 + 6);
    lVar2 = *(long *)(param_4 + 8);
    lVar9 = *(long *)(param_4 + 0xc);
    plVar5[7] = *(long *)(param_4 + 10);
    plVar5[8] = lVar9;
    plVar5[5] = lVar1;
    plVar5[6] = lVar2;
    lVar9 = *(long *)(param_4 + 0x12);
    lVar1 = *(long *)(param_4 + 0xe);
    lVar2 = *(long *)(param_4 + 0x10);
    *(undefined1 *)(plVar5 + 0xc) = *(undefined1 *)(param_4 + 0x14);
    plVar5[10] = lVar2;
    plVar5[0xb] = lVar9;
    plVar5[9] = lVar1;
    uVar6 = *(undefined8 *)(param_4 + 0x15);
    uVar8 = *(undefined8 *)(param_4 + 0x17);
    *(undefined8 *)((long)plVar5 + 0x74) = *(undefined8 *)(param_4 + 0x19);
    *(undefined8 *)((long)plVar5 + 0x6c) = uVar8;
    *(undefined8 *)((long)plVar5 + 100) = uVar6;
    uVar3 = param_4[0x1b];
    if (1 < uVar3) {
      uVar3 = 0;
    }
    *(uint *)((long)plVar5 + 0x7c) = uVar3;
    *(undefined1 *)(plVar5 + 0x10) = *(undefined1 *)(param_4 + 0x1c);
    *(undefined1 *)((long)plVar5 + 0x81) = *(undefined1 *)((long)param_4 + 0x71);
    *(undefined2 *)((long)plVar5 + 0x82) = *(undefined2 *)((long)param_4 + 0x72);
    lVar1 = *(long *)(param_4 + 0x20);
    plVar5[0x11] = *(long *)(param_4 + 0x1e);
    plVar5[0x12] = lVar1;
    lVar9 = *(long *)(param_4 + 0x26);
    lVar1 = *(long *)(param_4 + 0x22);
    lVar2 = *(long *)(param_4 + 0x24);
    *(undefined8 *)((long)plVar5 + 0xad) = *(undefined8 *)((long)param_4 + 0x9d);
    plVar5[0x14] = lVar2;
    plVar5[0x15] = lVar9;
    plVar5[0x13] = lVar1;
    memcpy((void *)((long)plVar5 + 0xb5),(void *)((long)param_4 + 0xa5),0x800);
    uVar4 = *(undefined1 *)((long)param_4 + 0x8a5);
    *(undefined2 *)((long)plVar5 + 0x8b6) = 0;
    *(undefined1 *)((long)plVar5 + 0x8b5) = uVar4;
    FUN_027c1b80(plVar5 + 2);
    plVar5 = plVar5 + 1;
  }
  FUN_007ef010(param_1,plVar5);
  return;
}

