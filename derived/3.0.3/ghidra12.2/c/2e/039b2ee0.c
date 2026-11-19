
void FUN_039b2ee0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(long *)(param_1 + 0x28) != param_1 + 0x20) {
      lVar4 = (long)*(int *)(param_1 + 0x34);
      lVar3 = *(long *)(param_1 + 0x28) - lVar4;
      lVar7 = lVar3 + lVar4;
      do {
        lVar5 = *(long *)(lVar3 + 0x20);
        lVar6 = *(long *)(param_1 + 0x18);
        lVar7 = *(long *)(lVar7 + 8);
        lVar3 = *(long *)(lVar5 + 0x70);
        if (lVar3 != 0 && lVar3 != lVar6) {
          FUN_03a03df0(lVar3,lVar5);
        }
        *(long *)(lVar5 + 0x70) = lVar6;
        if (lVar6 != 0) {
          FUN_03a03cf0(lVar6,lVar5);
          uVar1 = *(uint *)(lVar5 + 0x20);
          if ((uint)*(ushort *)(lVar5 + 0x284) <= *(uint *)(lVar5 + 0x20)) {
            uVar1 = (uint)*(ushort *)(lVar5 + 0x284);
          }
          if (uVar1 != 0) {
            lVar3 = *(long *)(lVar5 + 0x28);
            uVar8 = 0;
            do {
              plVar2 = *(long **)(lVar3 + (long)(int)uVar8 * 0x38);
              (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(lVar5 + 0x70));
              uVar8 = uVar8 + 1;
            } while (uVar1 != uVar8);
          }
        }
        lVar3 = lVar7 - lVar4;
      } while (lVar3 != (param_1 + 0x20) - lVar4);
    }
  }
  return;
}

