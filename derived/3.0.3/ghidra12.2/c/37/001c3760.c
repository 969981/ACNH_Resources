
void FUN_001c3760(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  lVar4 = *(long *)(param_2 + 0x30);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_2 + 0x28);
    do {
      lVar8 = *(long *)(param_2 + 8);
      puVar10 = *(undefined8 **)(lVar8 + lVar6 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        plVar9 = (long *)*puVar10;
        if (plVar9 != (long *)0x0) {
          plVar11 = *(long **)(param_1 + 0xe0);
          if (plVar11 == (long *)0x0) {
            pcVar5 = *(code **)(*plVar9 + 8);
            plVar3 = plVar9;
          }
          else {
            plVar3 = plVar11 + 1;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            lVar4 = *plVar11;
            lVar6 = *(long *)(lVar4 + 0x20);
            *(long **)(*(long *)(lVar4 + 8) + lVar6 * 8) = plVar9;
            uVar7 = *(ulong *)(lVar4 + 0x38);
            uVar1 = lVar6 + 1;
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar1 / uVar7;
            }
            *(ulong *)(lVar4 + 0x20) = uVar1 - uVar2 * uVar7;
            *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + 1;
            pcVar5 = *(code **)(*plVar3 + 0x20);
          }
          (*pcVar5)(plVar3);
        }
        uVar1 = *(long *)(param_1 + 0x68) + 1;
        lVar4 = *(long *)(param_1 + 0x78);
        uVar7 = *(ulong *)(param_1 + 0x80);
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar1 / uVar7;
        }
        *(undefined8 **)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x68) * 8) = puVar10;
        *(long *)(param_1 + 0x78) = lVar4 + 1;
        lVar8 = *(long *)(param_2 + 8);
        *(ulong *)(param_1 + 0x68) = uVar1 - uVar2 * uVar7;
        lVar6 = *(long *)(param_2 + 0x28);
        lVar4 = *(long *)(param_2 + 0x30);
      }
      *(undefined8 *)(lVar8 + lVar6 * 8) = 0;
      uVar7 = *(ulong *)(param_2 + 0x38);
      lVar4 = lVar4 + -1;
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = (lVar6 + 1U) / uVar7;
      }
      lVar6 = (lVar6 + 1U) - uVar1 * uVar7;
      *(long *)(param_2 + 0x28) = lVar6;
      *(long *)(param_2 + 0x30) = lVar4;
    } while (lVar4 != 0);
  }
  return;
}

