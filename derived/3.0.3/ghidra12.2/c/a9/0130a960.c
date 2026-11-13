
/* WARNING: Removing unreachable block (ram,0x0130ab54) */
/* WARNING: Removing unreachable block (ram,0x0130ab64) */
/* WARNING: Removing unreachable block (ram,0x0130ab9c) */
/* WARNING: Removing unreachable block (ram,0x0130abac) */

void FUN_0130a960(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  undefined2 local_72;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 local_68;
  undefined1 local_66;
  undefined4 local_64;
  
  if (param_2 != 0) {
    sVar4 = *(short *)(param_2 + 4);
    sVar5 = *(short *)(param_2 + 8);
    sVar6 = *(short *)(param_2 + 6);
    sVar7 = *(short *)(param_2 + 10);
    iVar1 = (int)sVar4;
    if (sVar5 <= sVar4) {
      iVar1 = (int)sVar5;
    }
    iVar2 = (int)sVar4;
    if (sVar4 <= sVar5) {
      iVar2 = (int)sVar5;
    }
    iVar3 = (int)sVar6;
    if (sVar6 <= sVar7) {
      iVar3 = (int)sVar7;
    }
    iVar18 = (int)sVar6;
    if (sVar7 <= sVar6) {
      iVar18 = (int)sVar7;
    }
    if (iVar3 + 1 != iVar18) {
      iVar17 = iVar1;
      do {
        uVar9 = iVar17 - *(int *)(param_1 + 0x18);
        if (((*(int *)(param_1 + 0x18) <= iVar17 && iVar17 <= *(int *)(param_1 + 0x28)) &&
            *(int *)(param_1 + 0x1c) <= iVar18) && iVar18 <= *(int *)(param_1 + 0x2c)) {
          uVar8 = iVar18 - *(int *)(param_1 + 0x1c);
          plVar12 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x38))();
          uVar10 = (**(code **)(*plVar12 + 0x18))();
          uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12);
          if (uVar10 <= uVar9) {
            uVar9 = 0;
          }
          if (uVar11 <= uVar8) {
            uVar8 = 0;
          }
          if (((long *)plVar12[5] == (long *)0x0) ||
             (puVar13 = *(undefined8 **)plVar12[5], puVar13 == (undefined8 *)0x0)) {
            lVar15 = (**(code **)(*plVar12 + 0x28))(plVar12,uVar9,uVar8);
            FUN_0130d468(&local_72,lVar15 + plVar12[1]);
          }
          else {
            uVar14 = (**(code **)*puVar13)();
            lVar15 = (**(code **)(*plVar12 + 0x28))(plVar12,uVar9,uVar8);
            FUN_0130d468(&local_72,lVar15 + plVar12[1]);
            if ((((uVar14 & 1) != 0) && (plVar12[5] != 0)) &&
               (puVar13 = *(undefined8 **)(plVar12[5] + 8), puVar13 != (undefined8 *)0x0)) {
              (**(code **)*puVar13)();
            }
          }
          sVar4 = *(short *)(param_2 + 4);
          if (*(short *)(param_2 + 8) <= *(short *)(param_2 + 4)) {
            sVar4 = *(short *)(param_2 + 8);
          }
          sVar5 = *(short *)(param_2 + 6);
          if (*(short *)(param_2 + 10) <= *(short *)(param_2 + 6)) {
            sVar5 = *(short *)(param_2 + 10);
          }
          if (((uint)(iVar17 - sVar4) < 3) && ((uint)(iVar18 - sVar5) < 3)) {
            local_64 = 1;
            puVar16 = (undefined2 *)
                      (param_2 + 0xc + (ulong)(uint)((iVar18 - sVar5) * 3 + (iVar17 - sVar4)) * 0xe)
            ;
            *puVar16 = local_72;
            puVar16[1] = local_70;
            *(undefined1 *)(puVar16 + 2) = local_6e;
            puVar16[4] = local_6a;
            puVar16[3] = local_6c;
            *(undefined1 *)(puVar16 + 5) = local_68;
            *(undefined1 *)(puVar16 + 6) = local_66;
          }
        }
        if (iVar17 < iVar2) {
          iVar17 = iVar17 + 1;
        }
        else {
          iVar18 = iVar18 + 1;
          iVar17 = iVar1;
        }
      } while ((iVar1 != iVar17) || (iVar3 + 1 != iVar18));
    }
  }
  return;
}

