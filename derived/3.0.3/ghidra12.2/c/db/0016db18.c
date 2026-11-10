
ulong FUN_0016db18(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  
  piVar11 = *(int **)(param_1 + 0x150);
  cVar3 = (char)piVar11[3];
  if (cVar3 != '\x05' && cVar3 != '\x01') {
    if (cVar3 != '\0') goto LAB_0016dbb4;
    lVar6 = FUN_001726f0(param_1,piVar11[2]);
    if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar6 + 0xdc) == 5)
       ) {
      *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) - *piVar11;
    }
    else {
      *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) - *piVar11;
      *(int *)(lVar6 + 0xbc) = *(int *)(lVar6 + 0xbc) - *piVar11;
      if (*(char *)((long)piVar11 + 0x71) != '\0') {
        uVar7 = FUN_00172a6c(lVar6);
        if ((int)uVar7 < -900) {
          return uVar7;
        }
        if ((*(code **)(param_1 + 0x808) != (code *)0x0) &&
           (iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar11,*(undefined8 *)(param_1 + 0x8b8))
           , iVar4 != 0)) {
          return 0xfffffc7a;
        }
        if (((*(byte *)((long)piVar11 + 0xd) & 1) == 0) ||
           (FUN_001728a4(lVar6,2), ((*(byte *)(lVar6 + 0xe5) ^ 0xff) & 3) != 0))
        goto switchD_0016dc4c_default;
        uVar7 = FUN_0016cc94(param_1,*(undefined4 *)(lVar6 + 0xb8),0);
        goto LAB_0016dcd4;
      }
    }
    if (*(code **)(param_1 + 0x808) != (code *)0x0) {
      iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar11,*(undefined8 *)(param_1 + 0x8b8));
      uVar5 = 0;
      if (iVar4 != 0) {
        uVar5 = 0xfffffc7a;
      }
      return (ulong)uVar5;
    }
    goto switchD_0016dc4c_default;
  }
  iVar4 = FUN_0016b77c(param_1 + 0x158);
  if (iVar4 != 0) goto switchD_0016dc4c_default;
LAB_0016dbb4:
  if ((*(code **)(param_1 + 0x808) != (code *)0x0) &&
     (iVar4 = (**(code **)(param_1 + 0x808))(param_1,piVar11,*(undefined8 *)(param_1 + 0x8b8)),
     iVar4 != 0)) {
    return 0xfffffc7a;
  }
  uVar7 = 0;
  switch((char)piVar11[3]) {
  case '\x01':
    lVar6 = FUN_001726f0(param_1,piVar11[2]);
    if (lVar6 == 0) {
      return 0;
    }
    if (((*(byte *)(lVar6 + 0xe4) >> 1 & 1) != 0) || (*(int *)(lVar6 + 0xdc) == 5))
    goto switchD_0016dc4c_default;
    switch(piVar11[0xe]) {
    case 0:
      uVar10 = 1;
      goto LAB_0016de88;
    case 1:
      goto switchD_0016dc4c_caseD_1;
    case 2:
      *(byte *)(lVar6 + 0xe4) = *(byte *)(lVar6 + 0xe4) & 0xfe;
      *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
      goto switchD_0016dc4c_caseD_1;
    case 3:
      goto switchD_0016dc4c_caseD_3;
    default:
      goto switchD_0016dc4c_default;
    }
  case '\x02':
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      lVar6 = FUN_001726f0(param_1,piVar11[2]);
      if (lVar6 != 0) {
        uVar7 = FUN_0016c5c4(param_1,lVar6,piVar11 + 4);
        if ((int)uVar7 < -900) {
          return uVar7;
        }
LAB_0016dc88:
        uVar5 = FUN_0016cf28(param_1);
        goto LAB_0016de34;
      }
      uVar5 = piVar11[2];
      if (uVar5 != 0) {
        if ((uVar5 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
          iVar4 = *(int *)(param_1 + 0x934);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x938);
        }
        if (iVar4 < (int)uVar5) {
          lVar6 = FUN_0016c73c(param_1,uVar5,0,piVar11 + 4,5,0);
          if (lVar6 == 0) {
            return 0xfffffc7b;
          }
          goto LAB_0016dc88;
        }
      }
    }
    goto switchD_0016dc4c_default;
  case '\x03':
    uVar5 = FUN_0016cc94(param_1,piVar11[2],piVar11[4]);
    goto LAB_0016de34;
  default:
    goto switchD_0016dc00_caseD_4;
  case '\a':
    if ((*(byte *)(piVar11 + 0x18) >> 1 & 1) != 0) goto switchD_0016dc4c_default;
    *(byte *)(param_1 + 0x9ab) =
         (*(byte *)(piVar11 + 0x18) & 1) << 1 | *(byte *)(param_1 + 0x9ab) | 4;
    uVar7 = FUN_0016f1fc(param_1,piVar11[4],1);
    break;
  case '\b':
    if (piVar11[2] == 0) {
      *(undefined1 *)(param_1 + 0x9ac) = 0;
      if ((*(byte *)(param_1 + 0x99c) & 1) != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x95c);
        lVar6 = param_1 + 0x954;
        lVar9 = param_1 + 0x950;
        uVar10 = 0;
        goto LAB_0016de2c;
      }
      uVar5 = FUN_00171428(param_1,0);
    }
    else {
      lVar8 = FUN_0016bd5c(param_1);
      if (lVar8 == 0) {
        return 0;
      }
      *(undefined1 *)(lVar8 + 0xe7) = 0;
      if ((*(byte *)(lVar8 + 0xe5) & 1) != 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
        uVar5 = FUN_00171584(param_1,lVar8,0,1);
      }
      else {
        uVar10 = *(undefined4 *)(lVar8 + 0xb8);
        lVar6 = lVar8 + 0xc4;
        lVar9 = lVar8 + 0xc0;
        uVar2 = *(undefined4 *)(lVar8 + 0xcc);
LAB_0016de2c:
        uVar5 = FUN_00172374(param_1,lVar6,lVar9,0,uVar10,0,uVar2);
      }
    }
LAB_0016de34:
    uVar1 = 0;
    if ((int)uVar5 < -900) {
      uVar1 = uVar5;
    }
    uVar7 = (ulong)uVar1;
    goto switchD_0016dc00_caseD_4;
  }
LAB_0016dcd4:
  if (-0x385 < (int)uVar7) {
switchD_0016dc4c_default:
    uVar7 = 0;
  }
switchD_0016dc00_caseD_4:
  return uVar7;
switchD_0016dc4c_caseD_1:
  uVar10 = 2;
LAB_0016de88:
  *(undefined4 *)(lVar6 + 0xdc) = uVar10;
switchD_0016dc4c_caseD_3:
  if ((*(byte *)((long)piVar11 + 0xd) & 1) != 0) {
    FUN_001728a4(lVar6,2);
  }
  if ((((*(byte *)(lVar6 + 0xe5) ^ 0xff) & 3) == 0) &&
     (uVar7 = FUN_0016cc94(param_1,*(undefined4 *)(lVar6 + 0xb8),0), (int)uVar7 < -900)) {
    return uVar7;
  }
  if (*(long *)(piVar11 + 0x1a) == 0) goto switchD_0016dc4c_default;
  uVar7 = FUN_00167354(param_1,1,piVar11[2],piVar11 + 0x18);
  goto LAB_0016dcd4;
}

