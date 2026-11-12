
undefined8 FUN_00859f60(long param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return 0;
  }
  if (param_3 == 0) {
    switch(param_2) {
    default:
      puVar10 = (uint *)(param_1 + 0x2c8);
      break;
    case 1:
      puVar10 = (uint *)(param_1 + 0x2d8);
      break;
    case 2:
      puVar10 = (uint *)(param_1 + 0x2e8);
      break;
    case 3:
      puVar10 = (uint *)(param_1 + 0x2f8);
      break;
    case 4:
      puVar10 = (uint *)(param_1 + 0x308);
      break;
    case 5:
      puVar10 = (uint *)(param_1 + 0x318);
      break;
    case 6:
      puVar10 = (uint *)(param_1 + 0x328);
      break;
    case 7:
      puVar10 = (uint *)(param_1 + 0x338);
      break;
    case 8:
      puVar10 = (uint *)(param_1 + 0x348);
    }
    if (0 < (int)*puVar10) {
      uVar9 = 0;
      puVar11 = (uint *)(param_1 + 0x2c8);
      do {
        puVar8 = puVar11;
        switch(param_2) {
        case 1:
          puVar8 = (uint *)(param_1 + 0x2d8);
          break;
        case 2:
          puVar8 = (uint *)(param_1 + 0x2e8);
          break;
        case 3:
          puVar8 = (uint *)(param_1 + 0x2f8);
          break;
        case 4:
          puVar8 = (uint *)(param_1 + 0x308);
          break;
        case 5:
          puVar8 = (uint *)(param_1 + 0x318);
          break;
        case 6:
          puVar8 = (uint *)(param_1 + 0x328);
          break;
        case 7:
          puVar8 = (uint *)(param_1 + 0x338);
          break;
        case 8:
          puVar8 = (uint *)(param_1 + 0x348);
        }
        uVar1 = uVar9;
        if (*puVar8 <= uVar9) {
          uVar1 = 0;
        }
        if (*(int *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 4) == param_4) {
          puVar10 = (uint *)(param_1 + 0x348);
          puVar8 = (uint *)(param_1 + 0x338);
          puVar2 = (uint *)(param_1 + 0x328);
          puVar3 = (uint *)(param_1 + 0x318);
          puVar4 = (uint *)(param_1 + 0x308);
          puVar5 = (uint *)(param_1 + 0x2f8);
          puVar6 = (uint *)(param_1 + 0x2e8);
          puVar7 = (uint *)(param_1 + 0x2d8);
          switch(param_2) {
          case 1:
            goto switchD_0085a130_caseD_1;
          case 2:
            goto switchD_0085a130_caseD_2;
          case 3:
            goto switchD_0085a130_caseD_3;
          case 4:
            goto switchD_0085a130_caseD_4;
          case 5:
            goto switchD_0085a130_caseD_5;
          case 6:
            goto switchD_0085a130_caseD_6;
          case 7:
            goto switchD_0085a130_caseD_7;
          case 8:
            goto switchD_0085a130_caseD_8;
          }
          goto switchD_0085a130_default;
        }
        uVar9 = uVar9 + 1;
      } while (*puVar10 != uVar9);
    }
  }
  else {
    switch(param_2) {
    default:
      puVar10 = (uint *)(param_1 + 0x358);
      break;
    case 1:
      puVar10 = (uint *)(param_1 + 0x368);
      break;
    case 2:
      puVar10 = (uint *)(param_1 + 0x378);
      break;
    case 3:
      puVar10 = (uint *)(param_1 + 0x388);
      break;
    case 4:
      puVar10 = (uint *)(param_1 + 0x398);
      break;
    case 5:
      puVar10 = (uint *)(param_1 + 0x3a8);
      break;
    case 6:
      puVar10 = (uint *)(param_1 + 0x3b8);
      break;
    case 7:
      puVar10 = (uint *)(param_1 + 0x3c8);
      break;
    case 8:
      puVar10 = (uint *)(param_1 + 0x3d8);
    }
    if (0 < (int)*puVar10) {
      uVar9 = 0;
      puVar11 = (uint *)(param_1 + 0x358);
      do {
        puVar8 = puVar11;
        switch(param_2) {
        case 1:
          puVar8 = (uint *)(param_1 + 0x368);
          break;
        case 2:
          puVar8 = (uint *)(param_1 + 0x378);
          break;
        case 3:
          puVar8 = (uint *)(param_1 + 0x388);
          break;
        case 4:
          puVar8 = (uint *)(param_1 + 0x398);
          break;
        case 5:
          puVar8 = (uint *)(param_1 + 0x3a8);
          break;
        case 6:
          puVar8 = (uint *)(param_1 + 0x3b8);
          break;
        case 7:
          puVar8 = (uint *)(param_1 + 0x3c8);
          break;
        case 8:
          puVar8 = (uint *)(param_1 + 0x3d8);
        }
        uVar1 = uVar9;
        if (*puVar8 <= uVar9) {
          uVar1 = 0;
        }
        if (*(int *)(*(long *)(puVar8 + 2) + (ulong)uVar1 * 4) == param_4) {
          puVar10 = (uint *)(param_1 + 0x3d8);
          puVar8 = (uint *)(param_1 + 0x3c8);
          puVar2 = (uint *)(param_1 + 0x3b8);
          puVar3 = (uint *)(param_1 + 0x3a8);
          puVar4 = (uint *)(param_1 + 0x398);
          puVar5 = (uint *)(param_1 + 0x388);
          puVar6 = (uint *)(param_1 + 0x378);
          puVar7 = (uint *)(param_1 + 0x368);
          switch(param_2) {
          case 1:
switchD_0085a130_caseD_1:
            puVar11 = puVar7;
            break;
          case 2:
switchD_0085a130_caseD_2:
            puVar11 = puVar6;
            break;
          case 3:
switchD_0085a130_caseD_3:
            puVar11 = puVar5;
            break;
          case 4:
switchD_0085a130_caseD_4:
            puVar11 = puVar4;
            break;
          case 5:
switchD_0085a130_caseD_5:
            puVar11 = puVar3;
            break;
          case 6:
switchD_0085a130_caseD_6:
            puVar11 = puVar2;
            break;
          case 7:
switchD_0085a130_caseD_7:
            puVar11 = puVar8;
            break;
          case 8:
switchD_0085a130_caseD_8:
            puVar11 = puVar10;
          }
switchD_0085a130_default:
          if (*puVar11 <= uVar9) {
            uVar9 = 0;
          }
          *(undefined4 *)(*(long *)(puVar11 + 2) + (ulong)uVar9 * 4) = DAT_04c9a0c8;
          return 1;
        }
        uVar9 = uVar9 + 1;
      } while (*puVar10 != uVar9);
    }
  }
  return 0;
}

