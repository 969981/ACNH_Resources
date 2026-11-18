
void FUN_0328d0f0(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x50);
  if (lVar5 != param_3 + 0x48) {
    do {
      lVar4 = (**(code **)(*param_1 + 0x10))
                        (param_1,param_1 + 1,param_2,*(undefined8 *)(lVar5 + 0x10));
      if (lVar4 == 0) {
        FUN_0328d0f0(param_1,param_2,*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        iVar1 = (int)param_1[6];
        iVar3 = (int)param_1[5];
        if (iVar1 < iVar3) {
          *(int *)(param_1 + 6) = iVar1 + 1;
          iVar1 = *(int *)((long)param_1 + 0x2c) + iVar1;
          iVar2 = 0;
          if (iVar3 <= iVar1) {
            iVar2 = iVar3;
          }
          *(long *)(param_1[4] + (long)(iVar1 - iVar2) * 8) = lVar4;
        }
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_3 + 0x48);
  }
  return;
}

