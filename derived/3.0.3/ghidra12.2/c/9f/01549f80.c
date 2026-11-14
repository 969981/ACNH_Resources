
void FUN_01549f80(uint param_1,uint *param_2,long param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_1 != 0) {
    plVar7 = (long *)(DAT_0520f098 + 0x24e0) + param_1;
    if (10 < param_1) {
      plVar7 = (long *)(DAT_0520f098 + 0x24e0);
    }
    if (*plVar7 != 0) {
      uVar3 = *param_2;
      plVar7 = (long *)(*plVar7 + 8);
      plVar1 = plVar7 + uVar3;
      if (7 < uVar3) {
        plVar1 = plVar7;
      }
      if (*plVar1 != 0) {
        uVar8 = (ulong)uVar3;
        if (7 < uVar3) {
          uVar8 = 0;
        }
        lVar9 = plVar7[uVar8];
        iVar6 = *(int *)(param_3 + 0xc);
        iVar2 = *(int *)(lVar9 + 0x14);
        uVar3 = *(int *)(param_3 + 8) - *(int *)(lVar9 + 0x10);
        puVar10 = (undefined8 *)(lVar9 + 0x28);
        plVar7 = (long *)(**(code **)*puVar10)(puVar10);
        uVar4 = (**(code **)(*plVar7 + 0x18))();
        if (uVar3 < uVar4) {
          uVar4 = iVar6 - iVar2;
          plVar7 = (long *)(**(code **)*puVar10)(puVar10);
          uVar5 = (**(code **)(*plVar7 + 0x20))();
          if (uVar4 < uVar5) {
            plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))(puVar10);
            iVar6 = (**(code **)(*plVar7 + 0x18))();
            plVar7 = (long *)(lVar9 + 0x70);
            uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
            if ((uVar8 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0154a0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)*plVar7)(plVar7,uVar3 + iVar6 * uVar4,param_4 & 1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}

