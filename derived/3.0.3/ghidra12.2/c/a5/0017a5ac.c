
int FUN_0017a5ac(char *param_1,ulong param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  uint local_64;
  
  if (param_2 < 0xc) {
    iVar3 = 4;
  }
  else if (((param_1 == (char *)0x0) || (*param_1 != '\0')) || (param_1[1] != '\0')) {
    iVar3 = 0xc;
  }
  else if ((param_1[3] & 0xfU) == 0) {
    uVar5 = 0xc;
    for (uVar6 = *(ushort *)(param_1 + 4) >> 8 | *(ushort *)(param_1 + 4) << 8; uVar6 != 0;
        uVar6 = uVar6 - 1) {
      do {
        uVar4 = (int)uVar5 + 1;
        if (param_2 < uVar4) {
          return 2;
        }
        bVar1 = param_1[uVar5];
        if ((bVar1 & 0xc0) != 0) {
          if ((bVar1 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar4 = (int)uVar5 + 2;
          if (param_2 < uVar4) {
            return 2;
          }
          break;
        }
        uVar4 = uVar4 + bVar1;
        uVar5 = (ulong)uVar4;
        if (param_2 < uVar5) {
          return 2;
        }
      } while (bVar1 != 0);
      uVar5 = (ulong)(uVar4 + 4);
      if (param_2 < uVar5) {
        return 2;
      }
    }
    uVar6 = *(ushort *)(param_1 + 6) >> 8 | *(ushort *)(param_1 + 6) << 8;
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
LAB_0017a6c4:
      do {
        uVar7 = (int)uVar5 + 1;
        if (param_2 < uVar7) {
          return 2;
        }
        bVar1 = param_1[uVar5];
        if ((bVar1 & 0xc0) == 0) {
          uVar7 = uVar7 + bVar1;
          uVar5 = (ulong)uVar7;
          if (param_2 < uVar5) {
            return 2;
          }
          if (bVar1 != 0) goto LAB_0017a6c4;
        }
        else {
          if ((bVar1 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar7 = (int)uVar5 + 2;
          if (param_2 < uVar7) {
            return 2;
          }
        }
        if (param_2 < uVar7 + 2) {
          return 2;
        }
        uVar4 = (uint)(*(ushort *)(param_1 + (int)uVar7) >> 8) |
                (*(ushort *)(param_1 + (int)uVar7) & 0xff00ff) << 8;
        if ((uVar4 != 5) && (uVar4 != param_3)) {
          return 9;
        }
        if (param_2 < uVar7 + 4) {
          return 2;
        }
        if (CONCAT11(param_1[(int)(uVar7 + 2)],param_1[(int)(uVar7 + 3)]) != 1) {
          return 10;
        }
        if (param_2 < uVar7 + 8) {
          return 2;
        }
        uVar2 = FUN_0017aa64(param_1);
        if (uVar2 < *param_4) {
          *param_4 = uVar2;
        }
        uVar2 = uVar7 + 10;
        if (param_2 < uVar2) {
          return 2;
        }
        uVar5 = (ulong)(uVar2 + CONCAT11(param_1[(int)(uVar7 + 8)],param_1[(int)(uVar7 + 9)]));
        if (param_2 < uVar5) {
          return 2;
        }
        iVar3 = FUN_0017aa70(param_1,param_2,
                             (uint)CONCAT11(param_1[(int)(uVar7 + 8)],param_1[(int)(uVar7 + 9)]),
                             uVar4,(ulong)uVar2,param_4);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    local_64 = (uint)uVar5;
    for (uVar6 = *(ushort *)(param_1 + 8) >> 8 | *(ushort *)(param_1 + 8) << 8; uVar6 != 0;
        uVar6 = uVar6 - 1) {
      iVar3 = FUN_0017a9fc(param_1,param_2,&local_64);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_2 < local_64 + 8) {
        return 2;
      }
      if (param_2 < local_64 + 10) {
        return 2;
      }
      local_64 = (uint)CONCAT11(param_1[(int)(local_64 + 8)],param_1[(int)(local_64 + 9)]) +
                 local_64 + 10;
      uVar5 = (ulong)local_64;
      if (param_2 < uVar5) {
        return 2;
      }
    }
    for (uVar6 = *(ushort *)(param_1 + 10) >> 8 | *(ushort *)(param_1 + 10) << 8; uVar6 != 0;
        uVar6 = uVar6 - 1) {
      iVar3 = FUN_0017a9fc(param_1,param_2,&local_64);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((param_2 < local_64 + 8) || (param_2 < local_64 + 10)) {
        return 2;
      }
      local_64 = (uint)CONCAT11(param_1[(int)(local_64 + 8)],param_1[(int)(local_64 + 9)]) +
                 local_64 + 10;
      uVar5 = (ulong)local_64;
      if (param_2 < uVar5) {
        return 2;
      }
    }
    if (uVar5 == param_2) {
      if (((uVar4 == 2) || (param_4[0x7a] != 0)) || (param_4[1] != 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0xb;
      }
    }
    else {
      iVar3 = 7;
    }
  }
  else {
    iVar3 = 8;
  }
  return iVar3;
}

