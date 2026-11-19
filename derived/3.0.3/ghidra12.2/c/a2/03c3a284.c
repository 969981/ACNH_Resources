
undefined8 FUN_03c3a284(long param_1,undefined4 *param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  VibrationNode *pVVar8;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  FUN_03c3a13c();
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 == 2) {
    nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
  }
  else if ((iVar6 != 1) &&
          ((iVar6 != 0 ||
           (iVar6 = nn::hid::VibrationPlayer::Load
                              (*(void **)(param_1 + 0x250),*(ulong *)(param_1 + 0x28)), iVar6 != 0))
          )) {
    return 0;
  }
  lVar1 = param_1 + (long)param_3 * 0x10;
  puVar2 = (undefined8 *)(param_1 + 600);
  *(undefined8 *)(lVar1 + 0x1a8) = 0;
  if (param_4 == 1) {
    lVar1 = param_1 + (long)param_3 * 0x10;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x260) < *(int *)(param_1 + 0x264)) {
      pVVar8 = *(VibrationNode **)(param_1 + 0x270);
      if (pVVar8 != (VibrationNode *)0x0) {
        *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)pVVar8;
      }
      nn::hid::VibrationNodeConnection::VibrationNodeConnection((VibrationNodeConnection *)pVVar8);
      if (*(int *)(param_1 + 0x260) < *(int *)(param_1 + 0x264)) {
        *(VibrationNode **)(*(long *)(param_1 + 0x268) + (long)*(int *)(param_1 + 0x260) * 8) =
             pVVar8;
        *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
      }
    }
    else {
      pVVar8 = (VibrationNode *)0x0;
    }
    *(VibrationNode **)(lVar1 + 0x1a8) = pVVar8;
    iVar6 = *(int *)(param_1 + 0x20);
    puVar7 = (undefined8 *)(param_1 + 0x250);
    if (iVar6 == 0) {
LAB_03c3a418:
      nn::hid::VibrationNodeConnection::Connect(pVVar8,(VibrationNode *)*puVar7);
    }
    else if ((iVar6 == 2) || (iVar6 == 1)) {
      nn::hid::VibrationWriter::Write((VibrationValue *)*puVar2);
      puVar7 = puVar2;
      goto LAB_03c3a418;
    }
    lVar1 = param_1 + (long)param_3 * 0x10;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    if (param_4 == 0) goto LAB_03c3a4f0;
  }
  if (*(int *)(param_1 + 0x260) < *(int *)(param_1 + 0x264)) {
    pVVar8 = *(VibrationNode **)(param_1 + 0x270);
    if (pVVar8 != (VibrationNode *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)pVVar8;
    }
    nn::hid::VibrationNodeConnection::VibrationNodeConnection((VibrationNodeConnection *)pVVar8);
    if (*(int *)(param_1 + 0x260) < *(int *)(param_1 + 0x264)) {
      *(VibrationNode **)(*(long *)(param_1 + 0x268) + (long)*(int *)(param_1 + 0x260) * 8) = pVVar8
      ;
      *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    }
  }
  else {
    pVVar8 = (VibrationNode *)0x0;
  }
  *(VibrationNode **)(lVar1 + 0x1b0) = pVVar8;
  iVar6 = *(int *)(param_1 + 0x20);
  puVar7 = (undefined8 *)(param_1 + 0x250);
  if (iVar6 != 0) {
    if ((iVar6 != 1) && (iVar6 != 2)) goto LAB_03c3a4f0;
    nn::hid::VibrationWriter::Write((VibrationValue *)*puVar2);
    puVar7 = puVar2;
  }
  nn::hid::VibrationNodeConnection::Connect(pVVar8,(VibrationNode *)*puVar7);
LAB_03c3a4f0:
  FUN_03c3a530(param_1);
  *(undefined4 *)(param_1 + 0x14) = 2;
  return 1;
}

