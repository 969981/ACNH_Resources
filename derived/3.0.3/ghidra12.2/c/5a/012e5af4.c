
void FUN_012e5af4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  long *plVar12;
  undefined *local_80;
  long *local_78;
  undefined1 local_70;
  byte local_6f;
  uint local_6c;
  uint uStack_68;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  plVar12 = (long *)(param_1 + 0x28);
  uVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
  if (((uVar7 & 1) != 0) && (lVar8 = (**(code **)*plVar12)(plVar12), lVar8 != 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar11 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x10);
    plVar9 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar12);
    uVar3 = (**(code **)(*plVar9 + 0x18))();
    if (uVar11 < uVar3) {
      uVar3 = iVar1 - iVar2;
      plVar9 = (long *)(**(code **)*plVar12)(plVar12);
      uVar4 = (**(code **)(*plVar9 + 0x20))();
      if (uVar3 < uVar4) {
        plVar9 = (long *)(**(code **)*plVar12)(plVar12);
        uVar4 = (**(code **)(*plVar9 + 0x18))();
        uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9);
        if (uVar4 <= uVar11) {
          uVar11 = 0;
        }
        if (uVar5 <= uVar3) {
          uVar3 = 0;
        }
        if (((long *)plVar9[5] == (long *)0x0) ||
           (puVar10 = *(undefined8 **)plVar9[5], puVar10 == (undefined8 *)0x0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)*puVar10)();
          uVar4 = uVar4 ^ 1;
        }
        lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar11,uVar3);
        if (*(short *)(lVar8 + plVar9[1]) != -2) {
          lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar11,uVar3);
          uVar7 = FUN_0277da10(lVar8 + plVar9[1]);
          lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar11,uVar3);
          if ((uVar7 & 1) == 0) {
            if (*(short *)(lVar8 + plVar9[1]) == -3) {
              lVar8 = (**(code **)(*plVar9 + 0x28))(plVar9,uVar11,uVar3);
              if (*(short *)(lVar8 + plVar9[1]) == -3) {
                uVar11 = *(uint *)((short *)(lVar8 + plVar9[1]) + 2);
                uVar3 = uVar11 >> 0x10 & 0xff;
                uVar11 = uVar11 >> 0x18;
              }
              else {
                uVar11 = 0;
                uVar3 = 0;
              }
              local_58 = *(int *)(param_2 + 8) - uVar3;
              iStack_54 = *(int *)(param_2 + 0xc) - uVar11;
              local_60 = PTR_DAT_04bb2010 + 0x10;
              uVar11 = local_58 - *(int *)(param_1 + 0x10);
              uVar3 = iStack_54 - *(int *)(param_1 + 0x14);
              plVar12 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))(plVar12);
              uVar5 = (**(code **)(*plVar12 + 0x18))();
              uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12);
              local_70 = 1;
              if (uVar5 <= uVar11) {
                uVar11 = 0;
              }
              if (uVar6 <= uVar3) {
                uVar3 = 0;
              }
              local_78 = plVar12;
              if ((long *)plVar12[5] == (long *)0x0) {
                local_6f = 0;
              }
              else {
                puVar10 = *(undefined8 **)plVar12[5];
                local_6f = 0;
                if (puVar10 != (undefined8 *)0x0) {
                  local_6f = (**(code **)*puVar10)();
                }
              }
              local_6f = local_6f & 1;
              local_80 = PTR_DAT_04bb4c28 + 0x10;
              local_6c = uVar11;
              uStack_68 = uVar3;
              lVar8 = (**(code **)(*plVar12 + 0x28))(plVar12,uVar11,uVar3);
              FUN_012e5e20(param_1,lVar8 + plVar12[1],&local_60);
              FUN_02640184(&local_80);
            }
          }
          else {
            FUN_012e5e20(param_1,(short *)(lVar8 + plVar9[1]),param_2);
          }
        }
        if ((((uVar4 & 1) == 0) && (plVar9[5] != 0)) &&
           (puVar10 = *(undefined8 **)(plVar9[5] + 8), puVar10 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x012e5e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar10)();
          return;
        }
      }
    }
  }
  return;
}

