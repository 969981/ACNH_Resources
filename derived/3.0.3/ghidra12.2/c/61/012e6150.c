
void FUN_012e6150(long param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  uint uVar19;
  undefined *local_70;
  int local_68;
  int iStack_64;
  undefined4 local_48;
  undefined4 local_44;
  
  plVar18 = (long *)(param_1 + 0x28);
  uVar14 = (**(code **)(*plVar18 + 0x10))(plVar18);
  if (((uVar14 & 1) != 0) && (lVar15 = (**(code **)*plVar18)(plVar18), lVar15 != 0)) {
    plVar16 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar18);
    iVar12 = (**(code **)(*plVar16 + 0x18))();
    plVar18 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar18);
    iVar13 = (**(code **)(*plVar18 + 0x20))();
    iVar5 = *(int *)(param_3 + 0x14);
    iVar6 = *(int *)(param_1 + 0x14);
    iVar7 = *(int *)(param_3 + 0x24);
    uVar19 = *(int *)(param_3 + 0x10) - *(int *)(param_1 + 0x10);
    uVar10 = *(int *)(param_3 + 0x20) - *(int *)(param_1 + 0x10);
    uVar9 = iVar12 - 1;
    uVar3 = uVar19;
    if ((int)uVar9 <= (int)uVar19) {
      uVar3 = uVar9;
    }
    uVar4 = 0;
    if (-1 < (int)uVar19) {
      uVar4 = uVar3;
    }
    uVar3 = uVar10;
    if ((int)uVar9 <= (int)uVar10) {
      uVar3 = uVar9;
    }
    uVar9 = 0;
    if (-1 < (int)uVar10) {
      uVar9 = uVar3;
    }
    uVar3 = uVar4;
    if ((int)uVar9 <= (int)uVar4) {
      uVar3 = uVar9;
    }
    if ((int)uVar4 <= (int)uVar9) {
      uVar4 = uVar9;
    }
    uVar14 = FUN_012e4b00(param_1,param_1 + 0xd8);
    puVar11 = PTR_DAT_04bb37e0;
    if ((uVar14 & 1) != 0) {
      uVar10 = iVar5 - iVar6;
      uVar19 = iVar13 - 1;
      uVar9 = uVar10;
      if ((int)uVar19 <= (int)uVar10) {
        uVar9 = uVar19;
      }
      uVar17 = 0;
      if (-1 < (int)uVar10) {
        uVar17 = uVar9;
      }
      uVar10 = iVar7 - iVar6;
      uVar9 = uVar10;
      if ((int)uVar19 <= (int)uVar10) {
        uVar9 = uVar19;
      }
      uVar19 = 0;
      if (-1 < (int)uVar10) {
        uVar19 = uVar9;
      }
      uVar9 = uVar17;
      if ((int)uVar17 <= (int)uVar19) {
        uVar9 = uVar19;
      }
      if ((int)uVar19 <= (int)uVar17) {
        uVar17 = uVar19;
      }
      if (uVar9 + 1 != uVar17) {
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        uVar19 = uVar3;
        do {
          local_48 = *(undefined4 *)puVar11;
          local_44 = *(undefined4 *)(puVar11 + 4);
          if (((*(long *)(param_1 + 0x1b8) == 0) || (*(uint *)(param_1 + 0x1c8) <= uVar19)) ||
             (*(uint *)(param_1 + 0x1cc) <= uVar17)) {
LAB_012e6304:
            uVar10 = uVar17 + *(int *)(param_1 + 0xe4) * uVar19;
            if (*(uint *)(param_1 + 0xe8) <= uVar10) {
              uVar10 = 0;
            }
            puVar1 = (undefined4 *)(*(long *)(param_1 + 0xf0) + (long)(int)uVar10 * 8);
            local_48 = *puVar1;
            local_44 = puVar1[1];
          }
          else {
            iVar5 = *(int *)(param_1 + 0x1c4);
            uVar10 = uVar19 + *(uint *)(param_1 + 0x1c8) * uVar17;
            *(int *)(param_1 + 0x1c4) = iVar5 + 1;
            if (((int)uVar10 < 0) || (*(int *)(param_1 + 0x1c0) <= (int)uVar10)) {
              *(int *)(param_1 + 0x1c4) = iVar5;
              goto LAB_012e6304;
            }
            uVar8 = *(uint *)(*(long *)(param_1 + 0x1b8) + (ulong)(uVar10 >> 5) * 4);
            *(int *)(param_1 + 0x1c4) = iVar5;
            if ((uVar8 >> (ulong)(uVar10 & 0x1f) & 1) == 0) goto LAB_012e6304;
          }
          local_68 = *(int *)(param_1 + 0x10) + uVar19;
          iStack_64 = *(int *)(param_1 + 0x14) + uVar17;
          local_70 = puVar2;
          uVar14 = (**(code **)*param_2)(param_2,&local_48,&local_70);
          if ((uVar14 & 1) == 0) {
            return;
          }
          if ((int)uVar19 < (int)uVar4) {
            uVar19 = uVar19 + 1;
          }
          else {
            uVar17 = uVar17 + 1;
            uVar19 = uVar3;
          }
        } while ((uVar3 != uVar19) || (uVar9 + 1 != uVar17));
      }
    }
  }
  return;
}

