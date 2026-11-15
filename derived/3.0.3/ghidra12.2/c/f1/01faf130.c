
void FUN_01faf130(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined *local_50;
  undefined8 *puStack_48;
  undefined4 local_28;
  undefined2 local_24 [2];
  
  uVar3 = FUN_01fae650();
  if ((uVar3 & 1) != 0) {
switchD_01faf320_caseD_0:
    uVar4 = 0;
    goto LAB_01faf250;
  }
  lVar8 = *(long *)PTR_DAT_04bb27f8;
  if (lVar8 == 0) {
LAB_01faf280:
    lVar9 = *(long *)(param_4 + 8);
    lVar8 = lVar9 + 0x3e0;
    local_24[0] = FUN_0376baa0(lVar8);
    lVar6 = *(long *)PTR_DAT_04bb4130;
    if (lVar6 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar9 + 0x3e0) + 0x18))(lVar8);
    uVar2 = FUN_006bd550(*(undefined8 *)(lVar9 + 1000),0);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar2);
    lVar6 = FUN_0079e4d0(lVar6,&local_50);
    if (lVar6 == 0) {
      return;
    }
    uVar3 = FUN_03770770(local_24,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = FUN_037385c0(*(undefined8 *)PTR_DAT_04bb4e28,&local_28,lVar8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    switch(local_28) {
    case 0:
      goto switchD_01faf320_caseD_0;
    case 1:
      goto switchD_01faf320_caseD_1;
    case 2:
      uVar4 = 1;
      break;
    case 3:
      uVar4 = 0;
      break;
    default:
      return;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    puStack_48 = &DAT_0407ebb1;
    fVar10 = (float)FUN_03771b40(uVar4,&local_50);
    *param_5 = fVar10 + 0.0;
    param_5[1] = param_2 + 0.0;
    param_5[2] = param_3 + 10.0;
    return;
  }
  sVar1 = FUN_0376baa0(*(long *)(param_4 + 8) + 0x3e0);
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || (*(long *)PTR_DAT_04bc1530 == 0)) {
    sVar7 = *(short *)(lVar8 + 0x2c);
    if ((*(ushort *)(lVar8 + 0x28) & 0x80) != 0) {
      sVar7 = -1;
    }
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
    if ((*(long **)(lVar8 + 0x11b0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar8 + 0x11b0), puVar5 == (undefined8 *)0x0)) {
      sVar7 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      sVar7 = *(short *)(*(long *)(lVar8 + 0x1198) + *(long *)(lVar8 + 0x1190) + 2);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar8 + 0x11b0) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x11b0) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  if ((sVar7 == -1) || (sVar7 != sVar1)) goto LAB_01faf280;
switchD_01faf320_caseD_1:
  uVar4 = 1;
LAB_01faf250:
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_48 = &DAT_0407ebb1;
  fVar10 = (float)FUN_03771b40(uVar4,&local_50);
  *param_5 = fVar10;
  param_5[1] = param_2;
  param_5[2] = param_3;
  return;
}

