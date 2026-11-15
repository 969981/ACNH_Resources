
void FUN_01e93a58(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  
  lVar6 = DAT_053e0208;
  piVar1 = (int *)(param_1 + 0x13400);
  iVar5 = *(int *)(param_1 + 0xb01c);
  if ((((iVar5 == 0) && (*piVar1 != 7)) && (*piVar1 != 8)) &&
     (uVar7 = FUN_01e94c70(param_1), (uVar7 & 1) != 0)) {
    FUN_01e953f4(param_1);
    iVar10 = 8;
    goto LAB_01e93bac;
  }
  if (*piVar1 == 2) goto LAB_01e93b98;
  if (*piVar1 == 0) {
    lVar9 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar9 + 0x288);
    *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
    uVar2 = uVar2 ^ uVar2 << 0xb;
    *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
    uVar3 = *(uint *)(lVar9 + 0x294);
    *(uint *)(lVar9 + 0x290) = uVar3;
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    *(uint *)(lVar9 + 0x294) = uVar2;
    iVar10 = (int)((ulong)uVar2 * 100 >> 0x20);
    if (iVar5 == 0) {
      piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x2a18) + 0xf0))(lVar6 + 0x2a18);
      if (iVar10 < *piVar8) goto LAB_01e93b98;
      goto LAB_01e93bc4;
    }
    piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x2b68) + 0xf0))(lVar6 + 0x2b68);
    iVar4 = *piVar8;
    piVar8 = (int *)(**(code **)(*(long *)(lVar6 + 0x2b98) + 0xf0))(lVar6 + 0x2b98);
    if (iVar4 <= iVar10) {
      if (*piVar8 + iVar4 <= iVar10) {
        FUN_01e95554(param_1);
        return;
      }
      goto LAB_01e93bc4;
    }
LAB_01e93b98:
    iVar10 = 1;
    FUN_01e950d0(param_1,1);
  }
  else {
LAB_01e93bc4:
    FUN_01e95a50(param_1);
    iVar10 = 2;
  }
  if (iVar5 != 0) {
    return;
  }
LAB_01e93bac:
  *piVar1 = iVar10;
  return;
}

