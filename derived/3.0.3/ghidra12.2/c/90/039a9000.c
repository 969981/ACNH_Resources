
void FUN_039a9000(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_03a03cf0(*(long *)(param_1 + 0x70),param_1);
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((uint)*(ushort *)(param_1 + 0x284) <= *(uint *)(param_1 + 0x20)) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x284);
    }
    if (uVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      uVar4 = 0;
      do {
        plVar2 = *(long **)(lVar3 + (long)(int)uVar4 * 0x38);
        (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(param_1 + 0x70));
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
  }
  return;
}

