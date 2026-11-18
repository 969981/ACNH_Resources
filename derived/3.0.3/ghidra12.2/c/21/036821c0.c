
/* WARNING: Removing unreachable block (ram,0x036821dc) */
/* WARNING: Removing unreachable block (ram,0x036821ec) */
/* WARNING: Removing unreachable block (ram,0x036821f8) */

undefined8 FUN_036821c0(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  if (param_1[3] != 0) {
    lVar8 = *(long *)(DAT_0519d040 + 0x1f8);
    iVar6 = 0;
    iVar7 = 0;
    iVar1 = *param_1;
    do {
      if (((((*(ushort *)
               (*(long *)(param_1 + 4) + (long)(iVar7 + iVar6 * param_1[2]) * 0x23c + 0x238) & 6) ==
             2) && (iVar4 = iVar1 * iVar7, *(int *)(lVar8 + 0x20) <= iVar4)) &&
          (iVar2 = *(int *)(lVar8 + 0x30), iVar4 <= iVar2)) &&
         ((iVar5 = iVar1 * iVar6, *(int *)(lVar8 + 0x24) <= iVar5 &&
          (iVar3 = *(int *)(lVar8 + 0x34), iVar5 <= iVar3)))) {
        iVar6 = iVar1 + -1 + iVar4;
        iVar1 = iVar1 + -1 + iVar5;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
        if (iVar3 <= iVar1) {
          iVar1 = iVar3;
        }
        iVar7 = iVar4;
        if (iVar6 <= iVar4) {
          iVar7 = iVar6;
        }
        if (iVar4 <= iVar6) {
          iVar4 = iVar6;
        }
        iVar6 = iVar5;
        if (iVar1 <= iVar5) {
          iVar6 = iVar1;
        }
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        *(int *)(param_2 + 0x10) = iVar7;
        *(int *)(param_2 + 0x14) = iVar6;
        *(int *)(param_2 + 0x20) = iVar4;
        *(int *)(param_2 + 0x24) = iVar5;
        return 1;
      }
      if (iVar7 + 1 < param_1[2]) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = 0;
      }
    } while ((iVar7 != 0) || (iVar6 != param_1[3]));
  }
  return 0;
}

