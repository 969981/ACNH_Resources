
/* WARNING: Removing unreachable block (ram,0x0130a78c) */
/* WARNING: Removing unreachable block (ram,0x0130a794) */
/* WARNING: Removing unreachable block (ram,0x0130a7a8) */
/* WARNING: Removing unreachable block (ram,0x0130a7bc) */
/* WARNING: Removing unreachable block (ram,0x0130a7f0) */
/* WARNING: Removing unreachable block (ram,0x0130a808) */
/* WARNING: Removing unreachable block (ram,0x0130a81c) */

void FUN_0130a670(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 local_96 [12];
  undefined1 local_8a;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined1 local_6c;
  undefined4 local_64;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_3 + 0x24) + 1;
    iVar14 = *(int *)(param_3 + 0x14);
    if (iVar1 != iVar14) {
      iVar3 = *(int *)(param_3 + 0x10);
      puVar2 = PTR_DAT_04bb2018 + 0x10;
      iVar12 = iVar3;
      iVar13 = iVar3;
      do {
        uVar5 = iVar13 - *(int *)(param_1 + 0x18);
        if (((*(int *)(param_1 + 0x18) <= iVar13 && iVar13 <= *(int *)(param_1 + 0x28)) &&
            *(int *)(param_1 + 0x1c) <= iVar14) && iVar14 <= *(int *)(param_1 + 0x2c)) {
          local_6c = 0;
          uVar4 = iVar14 - *(int *)(param_1 + 0x1c);
          local_74 = 0xffff0000;
          local_78 = 0xffff;
          local_88 = puVar2;
          local_80 = iVar13;
          local_7c = iVar14;
          plVar8 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x38))();
          uVar6 = (**(code **)(*plVar8 + 0x18))();
          uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8);
          if (uVar6 <= uVar5) {
            uVar5 = 0;
          }
          if (uVar7 <= uVar4) {
            uVar4 = 0;
          }
          if (((long *)plVar8[5] == (long *)0x0) ||
             (puVar9 = *(undefined8 **)plVar8[5], puVar9 == (undefined8 *)0x0)) {
            lVar11 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar5,uVar4);
            FUN_0130d468(local_96,lVar11 + plVar8[1]);
          }
          else {
            uVar10 = (**(code **)*puVar9)();
            lVar11 = (**(code **)(*plVar8 + 0x28))(plVar8,uVar5,uVar4);
            FUN_0130d468(local_96,lVar11 + plVar8[1]);
            if ((((uVar10 & 1) != 0) && (plVar8[5] != 0)) &&
               (puVar9 = *(undefined8 **)(plVar8[5] + 8), puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)();
            }
          }
          local_64 = 0;
          local_64 = 1;
          local_6c = local_8a;
          FUN_012f1210(param_2,&local_88);
          iVar12 = *(int *)(param_3 + 0x10);
        }
        if (iVar13 < *(int *)(param_3 + 0x20)) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar14 = iVar14 + 1;
          iVar13 = iVar12;
        }
      } while (iVar3 != iVar13 || iVar1 != iVar14);
    }
  }
  return;
}

