
void FUN_0364e4ac(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  param_2 = param_2 & 0xf;
  uVar6 = (ulong)param_2;
  bVar3 = (byte)param_3;
  switch(uVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    if ((int)param_1[3] != 0) {
      lVar1 = *param_1 + 0x2a8;
      lVar7 = lVar1 + uVar6 * 0x10;
      FUN_03653cb0(lVar1,param_2 << 10,*(undefined8 *)(lVar7 + 0x18),0x400,
                   *(int *)(lVar1 + uVar6 * 4 + 0x410) - 1U & param_3 << 10 & 0x3fc00,
                   *(char *)(lVar7 + 0x10) == '\0');
      return;
    }
    if (param_2 < 4) {
      uVar10 = (param_3 & 1) * 0x10;
      if (uVar10 != *(uint *)((long)param_1 + 0xc)) {
        uVar8 = *(uint *)(param_1 + 1) & 0xf | uVar10;
        lVar7 = *param_1;
        FUN_03653cb0(lVar7 + 0x2a8,0x8000,*(undefined8 *)(lVar7 + 0x4c0),0x4000,
                     *(int *)(lVar7 + 0x738) - 1U & uVar8 << 0xe,*(char *)(lVar7 + 0x4b8) == '\0');
        lVar7 = *param_1;
        FUN_03653cb0(lVar7 + 0x2a8,0xc000,*(undefined8 *)(lVar7 + 0x5c0),0x4000,
                     *(int *)(lVar7 + 0x778) - 1U & ((param_3 & 1) << 0x12 | 0x3c000),
                     *(char *)(lVar7 + 0x5b8) == '\0');
        *(uint *)(param_1 + 1) = uVar8;
        *(uint *)((long)param_1 + 0xc) = uVar10;
      }
    }
    break;
  case 8:
    iVar2 = *(int *)((long)param_1 + 0xc) + (param_3 & 0xf);
    if ((int)param_1[1] != iVar2) {
      lVar7 = *param_1;
      FUN_03653cb0(lVar7 + 0x2a8,0x8000,*(undefined8 *)(lVar7 + 0x4c0),0x4000,
                   *(int *)(lVar7 + 0x738) - 1U & iVar2 * 0x4000,*(char *)(lVar7 + 0x4b8) == '\0');
      if ((int)param_1[3] == 0) {
        FUN_03657fcc(*param_1,0xc000,0x4000,*(uint *)((long)param_1 + 0xc) | 0xf);
      }
      *(int *)(param_1 + 1) = iVar2;
    }
    break;
  case 9:
    switch(param_3 & 3) {
    case 0:
      lVar7 = *param_1;
      uVar4 = 2;
      break;
    case 1:
      lVar7 = *param_1;
      uVar4 = 3;
      break;
    case 2:
      lVar7 = *param_1;
      uVar4 = 0;
      break;
    case 3:
      lVar7 = *param_1;
      uVar4 = 1;
    }
    FUN_03657d08(lVar7,uVar4);
    return;
  case 10:
    *(byte *)((long)param_1 + 0x14) = bVar3 & 1;
    **(uint **)(*param_1 + 0x1c08) = **(uint **)(*param_1 + 0x1c08) & 0xfffffdff;
    *(short *)((long)param_1 + 0x12) = (short)param_1[2];
    *(undefined1 *)(*param_1 + 0x1f69) = 1;
    break;
  case 0xb:
    *(byte *)(param_1 + 2) = bVar3;
    break;
  case 0xc:
    *(byte *)((long)param_1 + 0x11) = bVar3;
    break;
  case 0xd:
    if ((int)param_1[3] == 2) {
      uVar8 = *(uint *)((long)param_1 + 0x1c);
      uVar5 = *(uint *)(param_1 + 4);
      uVar10 = uVar8 & 3;
      if ((uVar10 == 3) && ((uVar5 & 3) == 2)) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(undefined4 *)((long)param_1 + 0x34) = 0;
        *(undefined4 *)((long)param_1 + 0x24) = 1;
        goto switchD_0364e77c_default;
      }
      if ((uVar10 == 3) && ((uVar5 & 3) == 1)) goto LAB_0364e7b4;
      switch(*(undefined4 *)((long)param_1 + 0x34)) {
      case 0:
        uVar11 = *(uint *)((long)param_1 + 0x2c);
        if ((uVar10 == 1) && (uVar11 < 8)) goto LAB_0364e9a8;
        if ((uVar10 == 2) && (uVar11 == 8)) {
          uVar9 = 1;
          if ((*(byte *)(param_1 + 6) & 1) != 0) {
            uVar9 = 2;
          }
          *(undefined4 *)((long)param_1 + 0x34) = 4;
          *(undefined4 *)(param_1 + 7) = uVar9;
        }
        break;
      case 1:
        uVar11 = *(uint *)((long)param_1 + 0x2c);
        if ((uVar10 == 1) && (uVar11 < 8)) {
          *(uint *)(param_1 + 5) =
               *(uint *)(param_1 + 5) & (1 << (ulong)(7 - uVar11 & 0x1f) ^ 0xffffffffU) |
               (uVar5 & 1) << (ulong)(7 - uVar11 & 0x1f);
          *(uint *)((long)param_1 + 0x2c) = uVar11 + 1;
        }
        else if ((uVar10 == 2) && (uVar11 == 8)) {
          *(undefined8 *)((long)param_1 + 0x34) = 0x300000004;
        }
        break;
      case 2:
        uVar11 = *(uint *)((long)param_1 + 0x2c);
        if ((uVar10 != 1) || (7 < uVar11)) goto LAB_0364e960;
        bVar3 = *(byte *)((long)param_1 + (ulong)*(uint *)(param_1 + 5) + 0x40) >>
                (ulong)(7 - uVar11 & 0x1f);
LAB_0364e954:
        *(uint *)((long)param_1 + 0x24) = bVar3 & 1;
        goto LAB_0364ea90;
      case 3:
        uVar11 = *(uint *)((long)param_1 + 0x2c);
        if ((uVar10 != 1) || (7 < uVar11)) goto LAB_0364e9d4;
LAB_0364e9a8:
        *(byte *)(param_1 + 6) =
             *(byte *)(param_1 + 6) & ((byte)(1 << (ulong)(7 - uVar11 & 0x1f)) ^ 0xff) |
             (byte)((uVar5 & 1) << (ulong)(7 - uVar11 & 0x1f));
LAB_0364ea90:
        *(uint *)((long)param_1 + 0x2c) = uVar11 + 1;
        break;
      case 4:
        goto switchD_0364e77c_caseD_4;
      case 5:
        if ((uVar10 == 1) && ((uVar5 & 1) != 0)) {
          uVar9 = 2;
          *(undefined4 *)((long)param_1 + 0x2c) = 0;
          goto LAB_0364e7c4;
        }
      }
    }
    else {
      if ((int)param_1[3] != 1) {
        return;
      }
      uVar8 = *(uint *)((long)param_1 + 0x1c);
      uVar5 = *(uint *)(param_1 + 4);
      uVar10 = uVar8 & 3;
      if ((uVar10 == 3) && ((uVar5 & 3) == 2)) {
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        *(undefined8 *)((long)param_1 + 0x24) = 1;
        *(undefined4 *)((long)param_1 + 0x34) = 1;
      }
      else if ((uVar10 == 3) && ((uVar5 & 3) == 1)) {
LAB_0364e7b4:
        *(undefined4 *)((long)param_1 + 0x24) = 1;
LAB_0364e7bc:
        *(undefined4 *)((long)param_1 + 0x2c) = 0;
        uVar9 = 6;
LAB_0364e7c4:
        *(undefined4 *)((long)param_1 + 0x34) = uVar9;
      }
      else {
        switch(*(undefined4 *)((long)param_1 + 0x34)) {
        case 1:
          uVar11 = *(uint *)((long)param_1 + 0x2c);
          if (uVar10 == 1) {
            if (uVar11 < 7) {
              *(uint *)(param_1 + 5) =
                   *(uint *)(param_1 + 5) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU) |
                   (uVar5 & 1) << (ulong)(uVar11 & 0x1f);
            }
            else {
              if ((uVar5 & 1) == 0) {
                uVar9 = 3;
              }
              else {
                uVar9 = 2;
              }
              *(undefined4 *)(param_1 + 7) = uVar9;
            }
            goto LAB_0364ea90;
          }
          if ((uVar10 == 2) && (7 < uVar11)) {
            uVar9 = 4;
            goto LAB_0364e7c4;
          }
          break;
        case 2:
          uVar11 = *(uint *)((long)param_1 + 0x2c);
          if ((uVar10 == 1) && (uVar11 < 8)) {
            bVar3 = *(byte *)((long)param_1 + (ulong)*(uint *)(param_1 + 5) + 0x40) >>
                    (ulong)(uVar11 & 0x1f);
            goto LAB_0364e954;
          }
LAB_0364e960:
          if ((uVar10 == 2) && (uVar11 == 8)) {
            *(undefined4 *)((long)param_1 + 0x34) = 5;
            *(uint *)(param_1 + 5) = *(int *)((long)param_1 + 0x3c) - 1U & (int)param_1[5] + 1U;
          }
          break;
        case 3:
          uVar11 = *(uint *)((long)param_1 + 0x2c);
          if ((uVar10 == 1) && (uVar11 < 8)) {
            *(byte *)(param_1 + 6) =
                 *(byte *)(param_1 + 6) & ((byte)(1 << (ulong)(uVar11 & 0x1f)) ^ 0xff) |
                 (byte)((uVar5 & 1) << (ulong)(uVar11 & 0x1f));
            goto LAB_0364ea90;
          }
LAB_0364e9d4:
          if ((uVar10 == 2) && (uVar11 == 8)) {
            uVar10 = *(uint *)(param_1 + 5);
            lVar7 = param_1[6];
            *(undefined1 *)(param_1 + 6) = 0;
            *(char *)((long)param_1 + (ulong)uVar10 + 0x40) = (char)lVar7;
            *(uint *)(param_1 + 5) = uVar10 & 0xfc | uVar10 + 1 & 3;
            *(undefined8 *)((long)param_1 + 0x34) = 0x600000004;
          }
          break;
        case 4:
switchD_0364e77c_caseD_4:
          if (uVar10 == 1) {
            *(undefined4 *)((long)param_1 + 0x24) = 0;
          }
          else if (uVar10 == 2) {
            uVar9 = (undefined4)param_1[7];
            *(undefined4 *)((long)param_1 + 0x2c) = 0;
            goto LAB_0364e7c4;
          }
          break;
        case 5:
          if ((uVar10 == 1) && ((uVar5 & 1) != 0)) goto LAB_0364e7bc;
        }
      }
    }
switchD_0364e77c_default:
    *(uint *)((long)param_1 + 0x1c) = param_3 >> 5 & 1 | uVar8 << 1;
    *(uint *)(param_1 + 4) = param_3 >> 6 & 1 | uVar5 << 1;
  }
  return;
}

