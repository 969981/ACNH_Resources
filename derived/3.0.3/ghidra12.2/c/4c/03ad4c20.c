
void FUN_03ad4c20(undefined4 param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *param_2;
  if (param_4 == -1) {
    if (param_3 == -1) {
      uVar2 = (**(code **)(lVar5 + 0xb8))(param_2);
      if (0 < (int)uVar2) {
        uVar3 = 0;
        do {
          iVar1 = (**(code **)(*param_2 + 0x218))(param_2);
          if (0 < iVar1) {
            iVar6 = 0;
            do {
              uVar4 = (**(code **)(*param_2 + 0x198))(param_1,param_2,uVar3 & 0xffffffff,iVar6);
              if ((uVar4 & 1) != 0) {
                *(byte *)((long)param_2 + 0xae) = *(byte *)((long)param_2 + 0xae) | 1;
                lVar5 = param_2[10] + uVar3 * 0xc;
                *(ushort *)(lVar5 + 6) = *(ushort *)(lVar5 + 6) | 2;
              }
              iVar6 = iVar6 + 1;
            } while (iVar1 != iVar6);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar2);
      }
    }
    else {
      iVar1 = (**(code **)(lVar5 + 0x218))(param_2);
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          uVar3 = (**(code **)(*param_2 + 0x198))(param_1,param_2,param_3,iVar6);
          if ((uVar3 & 1) != 0) {
            *(byte *)((long)param_2 + 0xae) = *(byte *)((long)param_2 + 0xae) | 1;
            lVar5 = param_2[10] + (long)param_3 * 0xc;
            *(ushort *)(lVar5 + 6) = *(ushort *)(lVar5 + 6) | 2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
    }
  }
  else if (param_3 == -1) {
    uVar2 = (**(code **)(lVar5 + 0xb8))(param_2);
    if (0 < (int)uVar2) {
      uVar3 = 0;
      lVar5 = 6;
      do {
        uVar4 = (**(code **)(*param_2 + 0x198))(param_1,param_2,uVar3 & 0xffffffff,param_4);
        if ((uVar4 & 1) != 0) {
          *(byte *)((long)param_2 + 0xae) = *(byte *)((long)param_2 + 0xae) | 1;
          *(ushort *)(param_2[10] + lVar5) = *(ushort *)(param_2[10] + lVar5) | 2;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0xc;
      } while (uVar2 != uVar3);
    }
  }
  else {
    uVar3 = (**(code **)(lVar5 + 0x198))(param_1,param_2,param_3,param_4);
    if ((uVar3 & 1) != 0) {
      *(byte *)((long)param_2 + 0xae) = *(byte *)((long)param_2 + 0xae) | 1;
      lVar5 = param_2[10] + (long)param_3 * 0xc;
      *(ushort *)(lVar5 + 6) = *(ushort *)(lVar5 + 6) | 2;
    }
  }
  return;
}

