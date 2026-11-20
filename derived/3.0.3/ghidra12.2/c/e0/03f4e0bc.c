
void FUN_03f4e0bc(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  
  if (*(char *)((long)param_1 + 0x4b) == '\0') goto LAB_03f4e510;
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = bVar1 | 0x2100;
  iVar4 = (**(code **)(**(long **)(param_1[1] + 0x78) + 0x40))
                    (*(long **)(param_1[1] + 0x78),param_1,uVar3);
  if (iVar4 != 0) {
    iVar4 = iVar4 << 0xb;
    goto LAB_03f4e4f8;
  }
  if (7 < *(byte *)((long)param_1 + 0x2f)) goto LAB_03f4e510;
  uVar10 = (uint)bVar1;
  switch(*(byte *)((long)param_1 + 0x2f)) {
  case 0:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    iVar4 = 0x800;
    goto LAB_03f4e4f8;
  case 1:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar6 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    lVar9 = *param_1;
    uVar3 = uVar10 + 0x2101;
    goto LAB_03f4e324;
  default:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar6 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    lVar9 = *param_1;
LAB_03f4e324:
    FUN_03fc222c(lVar9 + 0x34780,uVar3,uVar6);
    iVar4 = 0x1000;
    goto LAB_03f4e4f8;
  case 3:
  case 7:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar6 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar7 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar8 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar6);
    iVar4 = bVar1 + 0x2101;
    FUN_03fc222c(*param_1 + 0x34780,iVar4,uVar7);
    lVar9 = *param_1;
    break;
  case 4:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar6 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar7 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar8 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    FUN_03fc222c(*param_1 + 0x34780,uVar10 + 0x2101,uVar6);
    FUN_03fc222c(*param_1 + 0x34780,uVar10 + 0x2102,uVar7);
    lVar9 = *param_1;
    iVar4 = bVar1 + 0x2103;
    break;
  case 5:
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar5 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar6 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar7 = FUN_03f4bda8(lVar9,uVar2);
    lVar9 = *param_1;
    uVar2 = *(undefined1 *)param_1[7];
    *(short *)param_1[8] = *(short *)param_1[8] + 1;
    uVar8 = FUN_03f4bda8(lVar9,uVar2);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar5);
    iVar4 = bVar1 + 0x2101;
    FUN_03fc222c(*param_1 + 0x34780,iVar4,uVar6);
    FUN_03fc222c(*param_1 + 0x34780,uVar3,uVar7);
    lVar9 = *param_1;
  }
  FUN_03fc222c(lVar9 + 0x34780,iVar4,uVar8);
  iVar4 = 0x2000;
LAB_03f4e4f8:
  *(int *)(*param_1 + 0x34e0bc) = *(int *)(*param_1 + 0x34e0bc) + iVar4;
LAB_03f4e510:
  *(undefined1 *)((long)param_1 + 0x4b) = *(undefined1 *)((long)param_1 + 0x49);
  *(char *)((long)param_1 + 0x4a) = *(char *)((long)param_1 + 0x4a) + -1;
  FUN_03f4df84(param_1);
  return;
}

