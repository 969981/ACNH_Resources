
void FUN_005d3430(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  (**(code **)(*param_1 + 0x40))();
  lVar16 = *(long *)param_1[3];
  lVar14 = *(long *)(lVar16 + 0x18);
  *(undefined4 *)param_1[4] = 0;
  uVar8 = DAT_0413f4f8;
  uVar7 = DAT_0413f4f0;
  uVar6 = DAT_0413f4e8;
  uVar5 = DAT_0413f4e0;
  uVar4 = DAT_0413f4d8;
  uVar3 = DAT_0413f4d0;
  uVar2 = DAT_0413f4c8;
  uVar1 = DAT_0413f4c0;
  if (*(int *)(lVar14 + 0x38) < 1) {
LAB_005d3740:
    (**(code **)(*param_1 + 0x48))(param_1);
    return;
  }
  uVar13 = 0;
LAB_005d34c0:
  plVar15 = *(long **)(*(long *)(lVar14 + 0x30) + uVar13 * 8);
  switch((int)plVar15[4]) {
  case 1:
    lVar10 = FUN_0053ad50(*(undefined8 *)
                           (*(long *)(lVar16 + 0x40) + (long)*(int *)((long)plVar15 + 0x24) * 8));
    break;
  case 2:
    lVar10 = FUN_0053ae60(*(undefined8 *)
                           (*(long *)(lVar16 + 0x40) + (long)*(int *)((long)plVar15 + 0x24) * 8));
    break;
  default:
    FUN_004426d0(auStack_280,auStack_270,0x200);
    FUN_0043ac90(auStack_280,"Unknown buffer type. Can\'t instantiate cloth.");
    FUN_004221e0(0xabba38ad,auStack_270,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Cloth/Cloth/Utilities/Instantiation/hclInstantiationUtil.cpp"
                 ,0x156);
    FUN_00442760(auStack_280);
    *(undefined4 *)param_1[4] = 0x80040200;
    uVar13 = uVar13 + 1;
    if ((long)*(int *)(lVar14 + 0x38) <= (long)uVar13) goto LAB_005d3740;
    goto LAB_005d34c0;
  case 4:
    lVar10 = (**(code **)(*param_1 + 0x20))(param_1,plVar15);
    if (lVar10 == 0) goto LAB_005d371c;
    cVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,lVar10);
    if (cVar9 == '\0') goto LAB_005d36ec;
    pcVar12 = *(code **)(*param_1 + 0x30);
LAB_005d3664:
    (*pcVar12)(param_1,uVar13 & 0xffffffff,lVar10);
    uVar13 = uVar13 + 1;
    if ((long)*(int *)(lVar14 + 0x38) <= (long)uVar13) goto LAB_005d3740;
    goto LAB_005d34c0;
  case 5:
    lVar10 = (**(code **)(*param_1 + 0x28))(param_1,plVar15);
    if (lVar10 == 0) goto LAB_005d371c;
    cVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,lVar10);
    if (cVar9 != '\0') {
      pcVar12 = *(code **)(*param_1 + 0x38);
      goto LAB_005d3664;
    }
    goto LAB_005d36ec;
  case 6:
    lVar10 = FUN_00438810(0x120);
    FUN_005d3a20(lVar10,plVar15);
    goto LAB_005d36b8;
  case 7:
    lVar10 = FUN_00438810(0x120);
    FUN_005d3820(lVar10,plVar15);
    goto joined_r0x005d36b4;
  case 8:
    lVar10 = FUN_00438810(0x120);
    FUN_005d3c30(lVar10,plVar15);
joined_r0x005d36b4:
    if (lVar10 == 0) goto LAB_005d371c;
LAB_005d36b8:
    cVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,lVar10);
    if (cVar9 == '\0') goto LAB_005d36ec;
    uVar11 = *(undefined8 *)param_1[3];
    goto LAB_005d36dc;
  }
  cVar9 = (**(code **)(*plVar15 + 0x20))(plVar15,lVar10);
  if (cVar9 == '\0') {
LAB_005d36ec:
    (**(code **)(*param_1 + 0x50))(param_1,uVar13 & 0xffffffff);
  }
  else {
    uVar11 = *(undefined8 *)param_1[3];
    *(undefined8 *)(lVar10 + 0x98) = uVar2;
    *(undefined8 *)(lVar10 + 0x90) = uVar1;
    *(undefined8 *)(lVar10 + 0xa8) = uVar4;
    *(undefined8 *)(lVar10 + 0xa0) = uVar3;
    *(undefined8 *)(lVar10 + 0xb8) = uVar6;
    *(undefined8 *)(lVar10 + 0xb0) = uVar5;
    *(undefined8 *)(lVar10 + 0xe8) = uVar4;
    *(undefined8 *)(lVar10 + 0xe0) = uVar3;
    *(undefined8 *)(lVar10 + 0xf8) = uVar6;
    *(undefined8 *)(lVar10 + 0xf0) = uVar5;
    *(undefined8 *)(lVar10 + 200) = uVar8;
    *(undefined8 *)(lVar10 + 0xc0) = uVar7;
    *(undefined8 *)(lVar10 + 0xd8) = uVar2;
    *(undefined8 *)(lVar10 + 0xd0) = uVar1;
    *(undefined8 *)(lVar10 + 0x108) = uVar8;
    *(undefined8 *)(lVar10 + 0x100) = uVar7;
LAB_005d36dc:
    FUN_005144a0(uVar11,uVar13 & 0xffffffff,lVar10);
  }
  FUN_004435c0(lVar10);
  uVar13 = uVar13 + 1;
  if ((long)*(int *)(lVar14 + 0x38) <= (long)uVar13) goto LAB_005d3740;
  goto LAB_005d34c0;
LAB_005d371c:
  (**(code **)(*param_1 + 0x58))(param_1,uVar13 & 0xffffffff);
  uVar13 = uVar13 + 1;
  if ((long)*(int *)(lVar14 + 0x38) <= (long)uVar13) goto LAB_005d3740;
  goto LAB_005d34c0;
}

