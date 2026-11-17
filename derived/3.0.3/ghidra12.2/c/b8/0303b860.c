
bool FUN_0303b860(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(char *)(param_1 + 8) == '\0') {
      uVar7 = *(ulong *)(param_1 + 0x10);
      do {
        if (*(char *)(lVar5 + 0x20) == '\0') {
          uVar8 = *(ulong *)(lVar5 + 0x28);
          if (uVar7 == uVar8) {
            iVar2 = *(int *)(lVar5 + 0x30);
            if (iVar1 == iVar2) {
              iVar3 = *(int *)(lVar5 + 0x34);
              bVar4 = SBORROW4(iVar3,param_2);
              iVar2 = iVar3 - param_2;
              if (param_2 < iVar3) goto LAB_0303b880;
            }
            else {
              if (iVar1 < iVar2) goto LAB_0303b880;
              bVar4 = SBORROW4(iVar2,iVar1);
              iVar2 = iVar2 - iVar1;
            }
            if (iVar2 < 0 == bVar4) goto LAB_0303b928;
          }
          else {
            if (uVar7 < uVar8) goto LAB_0303b880;
            if (uVar7 <= uVar8) {
LAB_0303b928:
              iVar1 = *(int *)(lVar5 + 200);
              if (iVar1 == 1) {
                return true;
              }
              if (iVar1 == 3) {
                return (bool)2;
              }
              if (iVar1 == 4) {
                return (bool)3;
              }
              return iVar1 == 2;
            }
          }
          plVar6 = (long *)(lVar5 + 0x10);
        }
        else {
LAB_0303b880:
          plVar6 = (long *)(lVar5 + 8);
        }
        lVar5 = *plVar6;
      } while (lVar5 != 0);
    }
    else {
      do {
        if (*(char *)(lVar5 + 0x20) == '\0') {
LAB_0303b8e4:
          plVar6 = (long *)(lVar5 + 0x10);
        }
        else {
          iVar2 = *(int *)(lVar5 + 0x30);
          if (iVar1 == iVar2) {
            if (*(int *)(lVar5 + 0x34) <= param_2) {
              if (*(int *)(lVar5 + 0x34) < param_2) goto LAB_0303b8e4;
              goto LAB_0303b928;
            }
          }
          else if (iVar2 <= iVar1) {
            if (iVar2 < iVar1) goto LAB_0303b8e4;
            goto LAB_0303b928;
          }
          plVar6 = (long *)(lVar5 + 8);
        }
        lVar5 = *plVar6;
      } while (lVar5 != 0);
    }
  }
  return false;
}

