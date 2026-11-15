
/* WARNING: Removing unreachable block (ram,0x01eca050) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */

uint FUN_01ec9ff0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_60;
  long lStack_58;
  
  puVar4 = PTR_DAT_04bb27c8;
  puVar3 = PTR_DAT_04bb27a8;
  iVar8 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != iVar8) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar9 = iVar2;
    do {
      local_60 = *(undefined8 *)(*(long *)puVar3 + 0x1f8);
      lStack_58 = *(long *)puVar4 + 0x28;
      uVar6 = FUN_035aa210(iVar9,iVar8,&local_60);
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        goto LAB_01eca0ec;
      }
      if (iVar9 < *(int *)(param_1 + 0x20)) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar9 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar2 != iVar9) || (iVar1 != iVar8));
  }
  lVar7 = *(long *)puVar4;
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xa8), lVar7 == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_009721a0(lVar7,param_1,0);
    uVar5 = uVar5 ^ 1;
  }
LAB_01eca0ec:
  return uVar5 & 1;
}

