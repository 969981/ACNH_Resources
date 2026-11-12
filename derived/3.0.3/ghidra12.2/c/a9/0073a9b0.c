
void FUN_0073a9b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = param_1[0x22a];
  if (lVar5 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
    lVar3 = *(long *)(lVar5 + 0x70);
    if (lVar3 != 0 && lVar3 != lVar2) {
      FUN_03a03df0(lVar3,lVar5);
    }
    *(long *)(lVar5 + 0x70) = lVar2;
    if (lVar2 != 0) {
      FUN_03a03cf0(lVar2,lVar5);
      uVar1 = *(uint *)(lVar5 + 0x20);
      if ((uint)*(ushort *)(lVar5 + 0x284) <= *(uint *)(lVar5 + 0x20)) {
        uVar1 = (uint)*(ushort *)(lVar5 + 0x284);
      }
      if (uVar1 != 0) {
        lVar2 = *(long *)(lVar5 + 0x28);
        uVar6 = 0;
        do {
          plVar4 = *(long **)(lVar2 + (long)(int)uVar6 * 0x38);
          (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined8 *)(lVar5 + 0x70));
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0073aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1);
  return;
}

