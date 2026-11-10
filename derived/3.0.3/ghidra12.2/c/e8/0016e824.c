
ulong FUN_0016e824(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_70;
  int local_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_2 + 8) == 0) {
    if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
      if (*(char *)(param_1 + 0x960) == '\0') {
        *(undefined4 *)(param_1 + 0x96c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x960) = 1;
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar8 = 0;
        uVar3 = 0;
        do {
          lVar6 = *(long *)(param_2 + 0x18);
          switch(*(undefined4 *)(lVar6 + lVar8)) {
          case 1:
            uVar2 = FUN_00168ccc(param_1 + 0x290,*(undefined4 *)(lVar6 + lVar8 + 4));
            if (uVar2 != 0) {
              if ((int)uVar2 < -900) {
                return (ulong)uVar2;
              }
              uVar4 = 0xfffffdf5;
              goto LAB_0016eb4c;
            }
            *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(lVar6 + lVar8 + 4);
            break;
          case 2:
            uVar2 = *(uint *)(lVar6 + lVar8 + 4);
            if (uVar2 < 2) {
              if (uVar2 == 0 || *(char *)(param_1 + 0x9aa) != '\0') {
                *(uint *)(param_1 + 0x968) = uVar2;
                break;
              }
              pcVar5 = "SETTINGS: server attempted to enable push";
            }
            else {
              pcVar5 = "SETTINGS: invalid SETTINGS_ENBLE_PUSH";
            }
            goto LAB_0016eb64;
          case 3:
            *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(lVar6 + lVar8 + 4);
            break;
          case 4:
            iVar1 = *(int *)(lVar6 + lVar8 + 4);
            if (iVar1 < 0) {
              pcVar5 = "SETTINGS: too large SETTINGS_INITIAL_WINDOW_SIZE";
              uVar4 = 0xfffffdf4;
              goto LAB_0016eb70;
            }
            uStack_64 = *(undefined4 *)(param_1 + 0x970);
            local_70 = param_1;
            local_68 = iVar1;
            uVar2 = FUN_0017251c(param_1,FUN_00172290,&local_70);
            if ((int)uVar2 < -900) {
              return (ulong)uVar2;
            }
            if (uVar2 != 0) {
              uVar4 = 0xfffffdf4;
              goto LAB_0016eb4c;
            }
            *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(lVar6 + lVar8 + 4);
            break;
          case 5:
            iVar1 = *(int *)(lVar6 + lVar8 + 4);
            if (iVar1 - 0x1000000U < 0xff004000) {
              pcVar5 = "SETTINGS: invalid SETTINGS_MAX_FRAME_SIZE";
              goto LAB_0016eb64;
            }
            *(int *)(param_1 + 0x974) = iVar1;
            break;
          case 6:
            *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(lVar6 + lVar8 + 4);
            break;
          case 8:
            uVar2 = *(uint *)(lVar6 + lVar8 + 4);
            if (uVar2 < 2) {
              if (((*(char *)(param_1 + 0x9aa) != '\0') || (uVar2 != 0)) ||
                 (*(int *)(param_1 + 0x97c) == 0)) {
                *(uint *)(param_1 + 0x97c) = uVar2;
                break;
              }
              pcVar5 = "SETTINGS: server attempted to disable SETTINGS_ENABLE_CONNECT_PROTOCOL";
            }
            else {
              pcVar5 = "SETTINGS: invalid SETTINGS_ENABLE_CONNECT_PROTOCOL";
            }
LAB_0016eb64:
            uVar4 = 0xfffffe07;
            goto LAB_0016eb70;
          }
          uVar3 = uVar3 + 1;
          lVar8 = lVar8 + 8;
        } while (uVar3 < *(ulong *)(param_2 + 0x10));
      }
      if (((param_3 == 0) && (iVar1 = FUN_0016cfc4(param_1), iVar1 == 0)) &&
         (uVar2 = FUN_0016eb9c(param_1,1,0,0), uVar2 != 0)) {
        if ((int)uVar2 < -900) {
          return (ulong)uVar2;
        }
        uVar4 = 0xfffffdea;
LAB_0016eb4c:
        pcVar5 = (char *)0x0;
LAB_0016eb70:
        uVar3 = FUN_0016e544(param_1,param_2,uVar4,pcVar5);
        return uVar3 & 0xffffffff;
      }
LAB_0016eab4:
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar1 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0xfffffc7a;
      }
      return uVar3;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      pcVar5 = "SETTINGS: ACK and payload != 0";
      uVar2 = 0xfffffdf6;
      goto LAB_0016e868;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x8e0);
    if (puVar7 != (undefined8 *)0x0) {
      uVar2 = FUN_0016e69c(param_1,puVar7[1],puVar7[2]);
      *(undefined8 *)(param_1 + 0x8e0) = *puVar7;
      FUN_001689f8(param_1 + 0x890,puVar7[1]);
      FUN_001689f8(param_1 + 0x890,puVar7);
      if (uVar2 == 0) goto LAB_0016eab4;
      if ((int)uVar2 < -900) {
        return (ulong)uVar2;
      }
      pcVar5 = (char *)0x0;
      goto LAB_0016e868;
    }
    pcVar5 = "SETTINGS: unexpected ACK";
  }
  else {
    pcVar5 = "SETTINGS: stream_id != 0";
  }
  uVar2 = 0xfffffe07;
LAB_0016e868:
  uVar3 = FUN_0016e544(param_1,param_2,uVar2,pcVar5);
  return uVar3;
}

