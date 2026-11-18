
void FUN_035a5020(ushort *param_1,int param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = -1;
  iVar5 = -1;
  do {
    uVar1 = iVar5 + param_2;
    if (((uint)*param_1 <= (uVar1 & 0xffff)) &&
       ((uVar1 & 0xffff) <= (((uint)*param_1 + (uint)param_1[6]) - 1 & 0xffff))) {
      uVar2 = iVar4 + param_3;
      if ((((uint)param_1[1] <= (uVar2 & 0xffff)) &&
          ((uVar2 & 0xffff) <= (((uint)param_1[1] + (uint)param_1[8]) - 1 & 0xffff))) &&
         (((uint)*param_4 != (uVar1 & 0xffff) || ((uint)param_4[1] != (uVar2 & 0xffff))))) {
        if (iVar5 == 2) {
          if (iVar4 == -1) {
            lVar3 = 3;
          }
          else {
            lVar3 = (ulong)(iVar4 == 2) << 2;
          }
        }
        else if (iVar5 == -1) {
          if (iVar4 == -1) {
            lVar3 = 1;
          }
          else {
            lVar3 = (ulong)(iVar4 == 2) << 1;
          }
        }
        else {
          lVar3 = 0;
        }
        FUN_035a4360(param_1,uVar1 & 0xffff,uVar2 & 0xffff,lVar3);
      }
    }
    if (iVar5 < 2) {
      iVar5 = iVar5 + 1;
    }
    else {
      iVar4 = iVar4 + 1;
      iVar5 = -1;
    }
  } while ((iVar5 != -1) || (iVar4 != 3));
  return;
}

