
bool FUN_0033fdc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    return true;
  case 2:
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + -1)) {
      uVar12 = *param_1;
      uVar10 = param_1[1];
      uVar2 = param_2[-1];
      *param_1 = param_2[-2];
      param_1[1] = uVar2;
      param_2[-2] = uVar12;
      param_2[-1] = uVar10;
    }
    break;
  case 3:
    uVar3 = *(uint *)(param_1 + 3);
    puVar7 = param_1 + 2;
    puVar8 = param_2 + -2;
    if (*(uint *)(param_1 + 1) < uVar3) {
      if (uVar3 < *(uint *)(param_2 + -1)) {
        uVar12 = *param_1;
        uVar10 = param_1[1];
        uVar2 = param_2[-1];
        *param_1 = *puVar8;
        param_1[1] = uVar2;
        *puVar8 = uVar12;
        param_2[-1] = uVar10;
        return true;
      }
      uVar12 = *param_1;
      uVar10 = param_1[1];
      *param_1 = *puVar7;
      param_1[1] = param_1[3];
      *puVar7 = uVar12;
      param_1[3] = uVar10;
      if (*(uint *)(param_1 + 3) < *(uint *)(param_2 + -1)) {
        uVar12 = *puVar7;
        uVar10 = param_1[3];
        uVar2 = param_2[-1];
        *puVar7 = *puVar8;
        param_1[3] = uVar2;
        *puVar8 = uVar12;
        param_2[-1] = uVar10;
        return true;
      }
      return true;
    }
    if (*(uint *)(param_2 + -1) <= uVar3) {
      return true;
    }
    uVar12 = *puVar7;
    uVar10 = param_1[3];
    uVar2 = param_2[-1];
    *puVar7 = *puVar8;
    param_1[3] = uVar2;
    *puVar8 = uVar12;
    param_2[-1] = uVar10;
    if (*(uint *)(param_1 + 3) <= *(uint *)(param_1 + 1)) {
      return true;
    }
    goto LAB_0034016c;
  case 4:
    uVar3 = *(uint *)(param_1 + 3);
    puVar7 = param_1 + 2;
    puVar8 = param_1 + 4;
    uVar4 = *(uint *)(param_1 + 5);
    if (*(uint *)(param_1 + 1) < uVar3) {
      if (uVar3 < uVar4) {
        uVar12 = *param_1;
        uVar10 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = param_1[5];
      }
      else {
        uVar12 = *puVar7;
        uVar10 = param_1[3];
        *puVar7 = *param_1;
        param_1[3] = param_1[1];
        *param_1 = uVar12;
        param_1[1] = uVar10;
        if (uVar4 <= *(uint *)(param_1 + 3)) goto LAB_00340118;
        uVar12 = *puVar7;
        uVar10 = param_1[3];
        *puVar7 = *puVar8;
        param_1[3] = param_1[5];
      }
      *puVar8 = uVar12;
      param_1[5] = uVar10;
    }
    else if (uVar3 < uVar4) {
      uVar12 = *puVar7;
      uVar10 = param_1[3];
      *puVar7 = *puVar8;
      param_1[3] = param_1[5];
      *puVar8 = uVar12;
      param_1[5] = uVar10;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar12 = *param_1;
        uVar10 = param_1[1];
        *param_1 = *puVar7;
        param_1[1] = param_1[3];
        *puVar7 = uVar12;
        param_1[3] = uVar10;
      }
    }
LAB_00340118:
    if (*(uint *)(param_1 + 5) < *(uint *)(param_2 + -1)) {
      uVar12 = *puVar8;
      uVar10 = param_1[5];
      uVar2 = param_2[-1];
      *puVar8 = param_2[-2];
      param_1[5] = uVar2;
      param_2[-2] = uVar12;
      param_2[-1] = uVar10;
      if (*(uint *)(param_1 + 3) < *(uint *)(param_1 + 5)) {
        uVar12 = *puVar7;
        uVar10 = param_1[3];
        *puVar7 = *puVar8;
        param_1[3] = param_1[5];
        *puVar8 = uVar12;
        param_1[5] = uVar10;
        if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
LAB_0034016c:
          uVar12 = *param_1;
          uVar10 = param_1[1];
          *param_1 = param_1[2];
          param_1[1] = param_1[3];
          param_1[2] = uVar12;
          param_1[3] = uVar10;
          return true;
        }
      }
    }
    break;
  case 5:
    FUN_003401c0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
    return true;
  default:
    uVar3 = *(uint *)(param_1 + 3);
    puVar7 = param_1 + 4;
    puVar8 = param_1 + 2;
    uVar4 = *(uint *)(param_1 + 5);
    if (*(uint *)(param_1 + 1) < uVar3) {
      if (uVar3 < uVar4) {
        uVar12 = *param_1;
        uVar10 = param_1[1];
        *param_1 = *puVar7;
        param_1[1] = param_1[5];
        *puVar7 = uVar12;
        param_1[5] = uVar10;
      }
      else {
        uVar12 = *puVar8;
        uVar10 = param_1[3];
        *puVar8 = *param_1;
        param_1[3] = param_1[1];
        *param_1 = uVar12;
        param_1[1] = uVar10;
        if (*(uint *)(param_1 + 3) < uVar4) {
          uVar12 = *puVar8;
          uVar10 = param_1[3];
          *puVar8 = *puVar7;
          param_1[3] = param_1[5];
          *puVar7 = uVar12;
          param_1[5] = uVar10;
        }
      }
    }
    else if (uVar3 < uVar4) {
      uVar12 = *puVar8;
      uVar10 = param_1[3];
      *puVar8 = *puVar7;
      param_1[3] = param_1[5];
      *puVar7 = uVar12;
      param_1[5] = uVar10;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_1 + 3)) {
        uVar12 = *param_1;
        uVar10 = param_1[1];
        *param_1 = *puVar8;
        param_1[1] = param_1[3];
        *puVar8 = uVar12;
        param_1[3] = uVar10;
      }
    }
    if (param_1 + 6 != param_2) {
      lVar9 = 0;
      iVar11 = 0;
      puVar8 = param_1 + 6;
      do {
        uVar3 = *(uint *)(puVar8 + 1);
        if (*(uint *)(puVar7 + 1) < uVar3) {
          uVar12 = *puVar8;
          uVar5 = *(undefined4 *)((long)puVar8 + 0xc);
          lVar6 = lVar9;
          do {
            lVar13 = lVar6;
            *(undefined8 *)((long)param_1 + lVar13 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x20);
            *(undefined8 *)((long)param_1 + lVar13 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x28);
            if (lVar13 == -0x20) {
              *param_1 = uVar12;
              *(uint *)(param_1 + 1) = uVar3;
              *(undefined4 *)((long)param_1 + 0xc) = uVar5;
              goto joined_r0x00340028;
            }
            lVar6 = lVar13 + -0x10;
          } while (*(uint *)((long)param_1 + lVar13 + 0x18) < uVar3);
          *(undefined8 *)((long)param_1 + lVar13 + 0x20) = uVar12;
          *(uint *)((long)param_1 + lVar13 + 0x28) = uVar3;
          *(undefined4 *)((long)param_1 + lVar13 + 0x2c) = uVar5;
joined_r0x00340028:
          iVar11 = iVar11 + 1;
          if (iVar11 == 8) {
            return puVar8 + 2 == param_2;
          }
        }
        puVar1 = puVar8 + 2;
        lVar9 = lVar9 + 0x10;
        puVar7 = puVar8;
        puVar8 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}

