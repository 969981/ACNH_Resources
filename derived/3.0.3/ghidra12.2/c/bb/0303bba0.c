
void FUN_0303bba0(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[1] = 0;
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(char *)(param_2 + 8) != '\0') {
    do {
      if (*(char *)(lVar5 + 0x20) == '\0') {
LAB_0303bc3c:
        plVar6 = (long *)(lVar5 + 0x10);
      }
      else {
        iVar2 = *(int *)(lVar5 + 0x30);
        if (iVar1 == iVar2) {
          if (*(int *)(lVar5 + 0x34) <= param_3) {
            if (*(int *)(lVar5 + 0x34) < param_3) goto LAB_0303bc3c;
            goto LAB_0303bc84;
          }
        }
        else if (iVar2 <= iVar1) {
          if (iVar2 < iVar1) goto LAB_0303bc3c;
          goto LAB_0303bc84;
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
LAB_0303bbdc:
  if (*(char *)(lVar5 + 0x20) == '\0') {
    uVar8 = *(ulong *)(lVar5 + 0x28);
    if (uVar7 != uVar8) {
      if (uVar7 < uVar8) goto LAB_0303bbd0;
      if (uVar7 <= uVar8) {
LAB_0303bc84:
        *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + 0x38);
        *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(lVar5 + 0x3c);
        param_1[1] = *(undefined8 *)(lVar5 + 0x40);
        param_1[2] = *(undefined8 *)(lVar5 + 0x48);
        param_1[3] = *(undefined8 *)(lVar5 + 0x50);
        param_1[4] = *(undefined8 *)(lVar5 + 0x58);
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar5 + 0x60);
        return;
      }
LAB_0303bc28:
      lVar5 = *(long *)(lVar5 + 0x10);
      goto joined_r0x0303bc30;
    }
    iVar2 = *(int *)(lVar5 + 0x30);
    if (iVar1 == iVar2) {
      iVar3 = *(int *)(lVar5 + 0x34);
      bVar4 = SBORROW4(iVar3,param_3);
      iVar2 = iVar3 - param_3;
      if (param_3 < iVar3) goto LAB_0303bbd0;
LAB_0303bc24:
      if (iVar2 < 0 != bVar4) goto LAB_0303bc28;
      goto LAB_0303bc84;
    }
    if (iVar2 <= iVar1) {
      bVar4 = SBORROW4(iVar2,iVar1);
      iVar2 = iVar2 - iVar1;
      goto LAB_0303bc24;
    }
  }
LAB_0303bbd0:
  lVar5 = *(long *)(lVar5 + 8);
joined_r0x0303bc30:
  if (lVar5 == 0) {
    return;
  }
  goto LAB_0303bbdc;
}

