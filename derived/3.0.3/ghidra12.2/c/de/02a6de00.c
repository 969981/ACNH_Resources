
/* WARNING: Removing unreachable block (ram,0x02a6dfd8) */
/* WARNING: Removing unreachable block (ram,0x02a6dfa4) */
/* WARNING: Removing unreachable block (ram,0x02a6dfb8) */
/* WARNING: Removing unreachable block (ram,0x02a6dfe8) */

uint FUN_02a6de00(undefined8 param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 local_34;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    local_34 = 0;
    uVar6 = FUN_02b67620(&local_34,*param_3);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_2 + 8) = *param_3;
      *(undefined4 *)(param_2 + 0xc) = param_3[0xc];
      uVar5 = FUN_02b59580(local_34);
      *(undefined2 *)(param_2 + 0x10) = uVar5;
      uVar5 = FUN_02b59c00(local_34);
      *(undefined2 *)(param_2 + 0x12) = uVar5;
      uVar5 = FUN_02b59e20(local_34);
      *(undefined2 *)(param_2 + 0x14) = uVar5;
      FUN_02b5a310((long)&local_40 + 4,local_34);
      puVar3 = PTR_DAT_04bb37e0;
      uVar2 = local_40._4_4_;
      local_40 = local_40 & 0xffffffff;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uStack_38;
      uVar2 = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)puVar3;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      bVar4 = FUN_02b5e1b0(local_34,(long)&local_40 + 4);
      *(byte *)(param_2 + 0x30) = bVar4 & 1;
      uVar2 = local_40._4_4_;
      if ((bVar4 & 1) == 0) {
        uVar2 = 0;
      }
      *(undefined4 *)(param_2 + 0x34) = uVar2;
      piVar10 = (int *)(param_2 + 0x28);
      piVar10[0] = -1;
      piVar10[1] = -1;
      local_40 = CONCAT44(local_34,(undefined4)local_40);
      if (DAT_05574040 != 0) {
        puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar8 == 0) goto LAB_02a6df00;
          lVar8 = lVar8 + 0x70;
        }
        else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
                (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 == 0))
        goto LAB_02a6df00;
        if (local_40._4_4_ < 10) {
          lVar1 = lVar8 + 0x1962d8 + (ulong)local_40._4_4_ * 0x10d8;
          if (9 < local_40._4_4_) {
            lVar1 = lVar8 + 0x1962d8;
          }
          if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
             (puVar9 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar9 == (undefined8 *)0x0)) {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)*puVar9)();
            uVar7 = uVar7 ^ 1;
          }
          local_40 = 0x100000001;
          *piVar10 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c4);
          *(int *)(param_2 + 0x2c) =
               (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c5);
          if ((((uVar7 & 1) == 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar9 != (undefined8 *)0x0))
          {
            (**(code **)*puVar9)();
          }
        }
      }
    }
  }
LAB_02a6df00:
  return uVar6 & 1;
}

