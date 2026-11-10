
undefined8 FUN_001618e8(long *param_1,char *param_2,long param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_68;
  
  plVar9 = param_1 + 4;
  lVar10 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar10 + 0xf64) < '\0') && ((*(ushort *)(lVar10 + 0x660) >> 3 & 1) == 0)) &&
     (iVar4 = FUN_0014d948(param_1,1,param_2,param_3), iVar4 != 0)) {
LAB_0016194c:
    uVar5 = 4;
  }
  else {
    if (param_3 != 0) {
      plVar1 = param_1 + 8;
LAB_00161968:
      do {
        switch((int)param_1[7]) {
        case 0:
          iVar4 = FUN_00146594(*param_2);
          if (iVar4 == 0) {
            local_68 = 0;
            if (*(int *)((long)param_1 + 0x34) == 0) {
              return 2;
            }
            *(undefined1 *)((long)plVar9 + (long)*(int *)((long)param_1 + 0x34)) = 0;
            iVar4 = FUN_0014e1e4(plVar9,&local_68,0x10,plVar1);
            if (iVar4 != 0) {
              return 2;
            }
            *(undefined4 *)(param_1 + 7) = 1;
          }
          else {
            if (0xf < *(int *)((long)param_1 + 0x34)) {
              return 1;
            }
            param_3 = param_3 + -1;
            *(char *)((long)plVar9 + (long)*(int *)((long)param_1 + 0x34)) = *param_2;
            *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
            param_2 = param_2 + 1;
          }
          goto joined_r0x00161bd8;
        case 1:
          if (*param_2 == '\n') {
            if (*plVar1 == 0) {
              uVar7 = 5;
              *(undefined4 *)((long)param_1 + 0x56c) = 0;
            }
            else {
              uVar7 = 2;
            }
            *(undefined4 *)(param_1 + 7) = uVar7;
          }
          break;
        case 2:
          lVar6 = param_1[8];
          if (param_3 <= param_1[8]) {
            lVar6 = param_3;
          }
          lVar6 = FUN_00146674(lVar6);
          if (((*(ulong *)(*param_1 + 0xf60) >> 0x27 & 1) == 0) &&
             ((*(ushort *)(lVar10 + 0x660) >> 3 & 1) == 0)) {
            if (((*(ulong *)(*param_1 + 0xf60) >> 0x28 & 1) == 0) &&
               (*(long *)(lVar10 + 0x1a0) != 0)) {
              iVar4 = FUN_00161dbc(param_1,*(long *)(lVar10 + 0x1a0),param_2,lVar6);
            }
            else {
              iVar4 = FUN_0014d948(param_1,1,param_2,lVar6);
            }
            if (iVar4 != 0) goto LAB_0016194c;
          }
          param_3 = param_3 - lVar6;
          param_2 = param_2 + lVar6;
          *param_4 = *param_4 + lVar6;
          lVar8 = *plVar1;
          *plVar1 = lVar8 - lVar6;
          if (lVar8 - lVar6 == 0) {
            *(undefined4 *)(param_1 + 7) = 3;
          }
          goto switchD_00161980_default;
        case 3:
          if (*param_2 != '\r') {
            if (*param_2 != '\n') {
              return 3;
            }
            *(undefined8 *)((long)param_1 + 0x34) = 0;
            param_1[9] = 0;
          }
          break;
        case 4:
          if (*param_2 == '\n') {
            lVar10 = FUN_00146674(param_3 + -1);
            param_1[9] = lVar10;
            return 0xffffffff;
          }
          return 3;
        case 5:
          cVar2 = *param_2;
          if ((cVar2 == '\r') || (cVar2 == '\n')) {
            iVar4 = *(int *)((long)param_1 + 0x56c);
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 7) = 7;
              goto joined_r0x00161b10;
            }
            *(int *)((long)param_1 + 0x56c) = iVar4 + 1;
            *(undefined1 *)(param_1[0xac] + (long)iVar4) = 0xd;
            iVar4 = *(int *)((long)param_1 + 0x56c);
            *(int *)((long)param_1 + 0x56c) = iVar4 + 1;
            *(undefined1 *)(param_1[0xac] + (long)iVar4) = 10;
            *(undefined1 *)(param_1[0xac] + (long)*(int *)((long)param_1 + 0x56c)) = 0;
            if ((-1 < *(char *)(lVar10 + 0xf64)) &&
               (iVar4 = FUN_0014d948(param_1,2,param_1[0xac],(long)*(int *)((long)param_1 + 0x56c)),
               iVar4 != 0)) goto LAB_0016194c;
            *(undefined4 *)((long)param_1 + 0x56c) = 0;
            *(undefined4 *)(param_1 + 7) = 6;
            if (*param_2 == '\n') goto switchD_00161980_default;
          }
          else {
            iVar4 = *(int *)((long)param_1 + 0x56c);
            iVar3 = (int)param_1[0xad];
            if (iVar4 < iVar3) {
              lVar6 = param_1[0xac];
            }
            else {
              if (iVar3 == 0) {
                *(undefined4 *)(param_1 + 0xad) = 0x80;
                lVar6 = FUN_001432f0(0x83);
              }
              else {
                *(int *)(param_1 + 0xad) = (int)((long)iVar3 * 2);
                lVar6 = FUN_00143310(param_1[0xac],(long)iVar3 * 2 + 3);
              }
              if (lVar6 == 0) {
                return 6;
              }
              param_1[0xac] = lVar6;
              iVar4 = *(int *)((long)param_1 + 0x56c);
              cVar2 = *param_2;
            }
            *(int *)((long)param_1 + 0x56c) = iVar4 + 1;
            *(char *)(lVar6 + iVar4) = cVar2;
          }
          break;
        case 6:
          if (*param_2 != '\n') {
            return 3;
          }
          *(undefined4 *)(param_1 + 7) = 7;
          break;
        case 7:
          cVar2 = *param_2;
          if ((cVar2 == '\n') || (cVar2 == '\r')) {
            if (cVar2 == '\r') {
              param_2 = param_2 + 1;
            }
            param_3 = param_3 - (ulong)(cVar2 == '\r');
            *(undefined4 *)(param_1 + 7) = 4;
          }
          else {
            *(undefined4 *)(param_1 + 7) = 5;
          }
          goto joined_r0x00161b10;
        default:
switchD_00161980_default:
joined_r0x00161bd8:
          if (param_3 == 0) goto LAB_00161c38;
          goto LAB_00161968;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
joined_r0x00161b10:
      } while (param_3 != 0);
    }
LAB_00161c38:
    uVar5 = 0;
  }
  return uVar5;
}

