
void FUN_0303ba80(undefined2 *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_007ef010(param_1,&DAT_04cb6038);
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(char *)(param_2 + 8) != '\0') {
    do {
      if (*(char *)(lVar5 + 0x20) == '\0') {
LAB_0303bb3c:
        plVar6 = (long *)(lVar5 + 0x10);
      }
      else {
        iVar2 = *(int *)(lVar5 + 0x30);
        if (iVar1 == iVar2) {
          if (*(int *)(lVar5 + 0x34) <= param_3) {
            if (*(int *)(lVar5 + 0x34) < param_3) goto LAB_0303bb3c;
            goto LAB_0303bb84;
          }
        }
        else if (iVar2 <= iVar1) {
          if (iVar2 < iVar1) goto LAB_0303bb3c;
          goto LAB_0303bb84;
        }
        plVar6 = (long *)(lVar5 + 8);
      }
      lVar5 = *plVar6;
      if (lVar5 == 0) {
        return;
      }
    } while( true );
  }
  uVar7 = *(ulong *)(param_2 + 0x10);
LAB_0303badc:
  if (*(char *)(lVar5 + 0x20) == '\0') {
    uVar8 = *(ulong *)(lVar5 + 0x28);
    if (uVar7 != uVar8) {
      if (uVar7 < uVar8) goto LAB_0303bad0;
      if (uVar7 <= uVar8) {
LAB_0303bb84:
        *param_1 = *(undefined2 *)(lVar5 + 0x68);
        return;
      }
LAB_0303bb28:
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        return;
      }
      goto LAB_0303badc;
    }
    iVar2 = *(int *)(lVar5 + 0x30);
    if (iVar1 != iVar2) {
      if (iVar1 < iVar2) goto LAB_0303bad0;
      bVar4 = SBORROW4(iVar2,iVar1);
      iVar2 = iVar2 - iVar1;
LAB_0303bb24:
      if (iVar2 < 0 != bVar4) goto LAB_0303bb28;
      goto LAB_0303bb84;
    }
    iVar3 = *(int *)(lVar5 + 0x34);
    bVar4 = SBORROW4(iVar3,param_3);
    iVar2 = iVar3 - param_3;
    if (iVar3 <= param_3) goto LAB_0303bb24;
  }
LAB_0303bad0:
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 == 0) {
    return;
  }
  goto LAB_0303badc;
}

