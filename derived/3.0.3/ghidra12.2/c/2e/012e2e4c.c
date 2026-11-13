
/* WARNING: Removing unreachable block (ram,0x012e2ee8) */
/* WARNING: Removing unreachable block (ram,0x012e2ea0) */
/* WARNING: Removing unreachable block (ram,0x012e2ec4) */
/* WARNING: Removing unreachable block (ram,0x012e2f0c) */

void FUN_012e2e4c(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  short *psVar8;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  psVar8 = (short *)(param_1 + 2);
  *psVar8 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar7 = FUN_013871c0(psVar8,param_1 + 8,param_1 + 0xc);
  if ((uVar7 & 1) != 0) {
    sVar5 = *psVar8;
    local_48._0_4_ = 0;
    if ((((DAT_0517bca8 == sVar5) || (local_48._0_4_ = 1, DAT_0517bcc8 == sVar5)) ||
        (local_48._0_4_ = 2, DAT_0517bce8 == sVar5)) || (local_48._0_4_ = 3, DAT_0517bd08 == sVar5))
    {
      *(undefined4 *)(param_1 + 4) = local_48._0_4_;
      local_48 = PTR_DAT_04bbc1a0;
      puStack_40 = PTR_DAT_04bb2010;
      local_28 = 0;
      *param_1 = 1;
      local_48 = local_48 + 0x10;
      puStack_40 = puStack_40 + 0x10;
      local_38 = 0;
      puStack_30 = puStack_40;
      uVar7 = FUN_0125f884(param_1 + 0x10,&local_48);
      if ((uVar7 & 1) != 0) {
        iVar3 = *(int *)(param_1 + 0x20);
        iVar6 = *(int *)(param_1 + 0x24) + -2;
        iVar4 = *(int *)(param_1 + 0x30);
        iVar1 = *(int *)(param_1 + 0x34) + 2;
        iVar2 = iVar3;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = iVar6;
        if (iVar1 <= iVar6) {
          iVar4 = iVar1;
        }
        if (iVar6 <= iVar1) {
          iVar6 = iVar1;
        }
        *(int *)(param_1 + 0x20) = iVar2;
        *(int *)(param_1 + 0x24) = iVar4;
        *(int *)(param_1 + 0x30) = iVar3;
        *(int *)(param_1 + 0x34) = iVar6;
      }
    }
  }
  return;
}

