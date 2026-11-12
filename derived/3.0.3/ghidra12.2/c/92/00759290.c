
void FUN_00759290(undefined4 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uStack_28;
  short asStack_24 [2];
  
  switch(*param_1) {
  case 0:
    if (*(char *)(param_1 + 0x2a) != '\0') {
      **(undefined2 **)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
      *param_1 = 1;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      *(undefined1 *)((long)param_1 + 0xaa) = 0;
      *(undefined2 *)(param_1 + 10) = DAT_04cb6038;
    }
    break;
  case 1:
    if (**(short **)(param_1 + 0xc) != *(short *)PTR_DAT_04bb3170) {
      puVar7 = *(uint **)PTR_DAT_04bb3708;
      FUN_007ef010(asStack_24);
      uVar1 = *puVar7;
      uVar2 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        puVar5 = *(undefined8 **)(puVar7 + 2);
        do {
          if (*(short *)*puVar5 == asStack_24[0]) {
            return;
          }
          uVar2 = uVar2 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar2 != 0);
      }
      if (*(long *)(DAT_05231900 + 0x100) != 0) {
        FUN_015a2a64(*(long *)(DAT_05231900 + 0x100),*(long *)(param_1 + 0xc) + 8,
                     *(long *)(param_1 + 0xc),&DAT_0414e6e8,0,*(undefined1 *)((long)param_1 + 0xa9),
                     1);
      }
    }
    *param_1 = 2;
    break;
  case 2:
    if (**(short **)(param_1 + 0xc) == *(short *)PTR_DAT_04bb3170) {
      uVar2 = FUN_01596728(*(long *)(param_1 + 0xe) + 8);
      if (((uVar2 & 1) != 0) && (*(long *)(DAT_05231900 + 0x100) != 0)) {
        FUN_015a30c0(*(long *)(DAT_05231900 + 0x100),*(long *)(param_1 + 0xe) + 8);
      }
      uVar6 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0xe) = uVar6;
      uVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x10))(param_1 + 2);
      if (((uVar2 & 1) == 0) || (*(long *)(DAT_05231900 + 0x100) == 0)) goto LAB_007595c8;
      lVar3 = *(long *)(*(long *)(DAT_05231900 + 0x100) + 0xd41d0);
    }
    else {
      uVar2 = FUN_01596728(*(short **)(param_1 + 0xc) + 4);
      if ((uVar2 & 1) == 0) {
        if ((*(ushort *)(*(long *)(param_1 + 0xc) + 0x18) >> 6 & 1) == 0) {
          return;
        }
        lVar3 = *(long *)(DAT_05231900 + 0x100);
        if (lVar3 == 0) goto LAB_007595c8;
        FUN_015a30c0(lVar3,*(long *)(param_1 + 0xe) + 8);
        uVar6 = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0xe) = uVar6;
        uVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x10))(param_1 + 2);
        if ((uVar2 & 1) == 0) goto LAB_007595c8;
        lVar3 = *(long *)(lVar3 + 0xd41d0);
      }
      else {
        uVar2 = FUN_01596728(*(long *)(param_1 + 0xe) + 8);
        if (((uVar2 & 1) != 0) && (*(long *)(DAT_05231900 + 0x100) != 0)) {
          FUN_015a30c0(*(long *)(DAT_05231900 + 0x100),*(long *)(param_1 + 0xe) + 8);
        }
        uVar6 = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0xe) = uVar6;
        uVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x10))(param_1 + 2);
        if ((uVar2 & 1) == 0) goto LAB_007595c8;
        uVar2 = FUN_01596728(*(long *)(param_1 + 0xe) + 8);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(DAT_05231900 + 0x100) == 0) goto LAB_007595c8;
          plVar4 = (long *)(*(long *)(DAT_05231900 + 0x100) + 0xd41d0);
        }
        else {
          if (*(long *)(*(long *)(param_1 + 0xe) + 0x20) == 0) goto LAB_007595c8;
          plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0xe) + 0x20) + 0x380);
        }
        lVar3 = *plVar4;
      }
    }
    if ((lVar3 != 0) && (*(short *)((long)param_1 + 0x2a) == **(short **)(param_1 + 0xe))) {
      (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2);
    }
LAB_007595c8:
    *param_1 = 3;
    return;
  case 3:
    uVar2 = FUN_01596728(*(long *)(param_1 + 0xc) + 8);
    if ((uVar2 & 1) == 0) {
      **(undefined2 **)(param_1 + 0xc) = *(undefined2 *)PTR_DAT_04bb3170;
      *param_1 = 0;
    }
  }
  return;
}

