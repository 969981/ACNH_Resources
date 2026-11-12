
void FUN_0086675c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  lVar2 = FUN_0084d0f8(0xb6);
  if (iVar1 != -0x6efba09b) {
    puVar3 = (undefined4 *)(**(code **)(*(long *)**(undefined8 **)(lVar2 + 0x44c8) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2b8) = *puVar3;
    lVar2 = FUN_0084d0f8(0xb6);
    puVar3 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar2 + 0x44c8) + 8) + 0xf0))();
    *(undefined4 *)(param_1 + 700) = *puVar3;
    lVar2 = FUN_0084d0f8(0xb6);
    puVar3 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar2 + 0x44c8) + 0x10) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2c0) = *puVar3;
    lVar2 = FUN_0084d0f8(0xb6);
    puVar3 = (undefined4 *)(**(code **)(**(long **)(*(long *)(lVar2 + 0x44c8) + 0x18) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2c4) = *puVar3;
    lVar2 = FUN_0084d0f8(0xb6);
    lVar2 = *(long *)(lVar2 + 0x44c8);
    goto LAB_00866b20;
  }
  uVar8 = 0;
  uVar7 = 0;
  switch(*(undefined4 *)(param_1 + 0x178)) {
  case 0:
    puVar5 = (undefined8 *)(lVar2 + 0x6b0);
    goto LAB_008668ac;
  case 1:
    puVar5 = (undefined8 *)(lVar2 + 0xd60);
    goto LAB_008668ac;
  case 2:
    lVar4 = 0x1490;
    break;
  case 3:
    lVar4 = 0x1a80;
    break;
  case 4:
    lVar4 = 0x20b0;
    break;
  case 5:
    lVar4 = 0x26e0;
    break;
  case 6:
    lVar4 = 0x2d90;
    break;
  case 7:
    lVar4 = 0x3540;
    break;
  case 8:
    lVar4 = 0x3c70;
    break;
  default:
    goto switchD_008667c4_default;
  }
  puVar5 = (undefined8 *)(lVar2 + lVar4);
LAB_008668ac:
  puVar3 = (undefined4 *)(**(code **)(**(long **)*puVar5 + 0xf0))();
  uVar7 = *puVar3;
switchD_008667c4_default:
  *(undefined4 *)(param_1 + 0x2b8) = uVar7;
  lVar2 = FUN_0084d0f8(0xb6);
  switch(*(undefined4 *)(param_1 + 0x178)) {
  case 0:
    plVar6 = (long *)(lVar2 + 0x6b0);
    goto LAB_00866944;
  case 1:
    plVar6 = (long *)(lVar2 + 0xd60);
    goto LAB_00866944;
  case 2:
    lVar4 = 0x1490;
    break;
  case 3:
    lVar4 = 0x1a80;
    break;
  case 4:
    lVar4 = 0x20b0;
    break;
  case 5:
    lVar4 = 0x26e0;
    break;
  case 6:
    lVar4 = 0x2d90;
    break;
  case 7:
    lVar4 = 0x3540;
    break;
  case 8:
    lVar4 = 0x3c70;
    break;
  default:
    goto switchD_008668f8_default;
  }
  plVar6 = (long *)(lVar2 + lVar4);
LAB_00866944:
  puVar3 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 8) + 0xf0))();
  uVar8 = *puVar3;
switchD_008668f8_default:
  *(undefined4 *)(param_1 + 700) = uVar8;
  lVar2 = FUN_0084d0f8(0xb6);
  uVar8 = 0;
  uVar7 = 0;
  switch(*(undefined4 *)(param_1 + 0x178)) {
  case 0:
    plVar6 = (long *)(lVar2 + 0x6b0);
    goto LAB_008669e4;
  case 1:
    plVar6 = (long *)(lVar2 + 0xd60);
    goto LAB_008669e4;
  case 2:
    lVar4 = 0x1490;
    break;
  case 3:
    lVar4 = 0x1a80;
    break;
  case 4:
    lVar4 = 0x20b0;
    break;
  case 5:
    lVar4 = 0x26e0;
    break;
  case 6:
    lVar4 = 0x2d90;
    break;
  case 7:
    lVar4 = 0x3540;
    break;
  case 8:
    lVar4 = 0x3c70;
    break;
  default:
    goto switchD_00866998_default;
  }
  plVar6 = (long *)(lVar2 + lVar4);
LAB_008669e4:
  puVar3 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x10) + 0xf0))();
  uVar7 = *puVar3;
switchD_00866998_default:
  *(undefined4 *)(param_1 + 0x2c0) = uVar7;
  lVar2 = FUN_0084d0f8(0xb6);
  switch(*(undefined4 *)(param_1 + 0x178)) {
  case 0:
    plVar6 = (long *)(lVar2 + 0x6b0);
    goto LAB_00866a7c;
  case 1:
    plVar6 = (long *)(lVar2 + 0xd60);
    goto LAB_00866a7c;
  case 2:
    lVar4 = 0x1490;
    break;
  case 3:
    lVar4 = 0x1a80;
    break;
  case 4:
    lVar4 = 0x20b0;
    break;
  case 5:
    lVar4 = 0x26e0;
    break;
  case 6:
    lVar4 = 0x2d90;
    break;
  case 7:
    lVar4 = 0x3540;
    break;
  case 8:
    lVar4 = 0x3c70;
    break;
  default:
    goto switchD_00866a30_default;
  }
  plVar6 = (long *)(lVar2 + lVar4);
LAB_00866a7c:
  puVar3 = (undefined4 *)(**(code **)(**(long **)(*plVar6 + 0x18) + 0xf0))();
  uVar8 = *puVar3;
switchD_00866a30_default:
  *(undefined4 *)(param_1 + 0x2c4) = uVar8;
  lVar2 = FUN_0084d0f8(0xb6);
  switch(*(undefined4 *)(param_1 + 0x178)) {
  case 0:
    plVar6 = (long *)(lVar2 + 0x6b0);
    goto LAB_00866b1c;
  case 1:
    plVar6 = (long *)(lVar2 + 0xd60);
    goto LAB_00866b1c;
  case 2:
    lVar4 = 0x1490;
    break;
  case 3:
    lVar4 = 0x1a80;
    break;
  case 4:
    lVar4 = 0x20b0;
    break;
  case 5:
    lVar4 = 0x26e0;
    break;
  case 6:
    lVar4 = 0x2d90;
    break;
  case 7:
    lVar4 = 0x3540;
    break;
  case 8:
    lVar4 = 0x3c70;
    break;
  default:
    uVar7 = 0;
    goto LAB_00866b34;
  }
  plVar6 = (long *)(lVar2 + lVar4);
LAB_00866b1c:
  lVar2 = *plVar6;
LAB_00866b20:
  puVar3 = (undefined4 *)(**(code **)(**(long **)(lVar2 + 0x20) + 0xf0))();
  uVar7 = *puVar3;
LAB_00866b34:
  *(undefined4 *)(param_1 + 0x2c8) = uVar7;
  return;
}

