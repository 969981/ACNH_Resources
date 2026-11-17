
void FUN_02db6d90(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x240) == 2) {
    plVar1 = (long *)(param_1 + 0x218);
    plVar2 = plVar1 + *(uint *)(param_1 + 0x244);
    if (4 < *(uint *)(param_1 + 0x244)) {
      plVar2 = plVar1;
    }
    if ((*(uint *)(*plVar2 + 0x48) < 7) &&
       ((1 << (ulong)(*(uint *)(*plVar2 + 0x48) & 0x1f) & 0x58U) != 0)) goto LAB_02db6e40;
    plVar2 = plVar1 + *(uint *)(param_1 + 0x244);
    if (4 < *(uint *)(param_1 + 0x244)) {
      plVar2 = plVar1;
    }
    lVar3 = *plVar2;
  }
  else {
    if (*(int *)(param_1 + 0x240) != 1) goto LAB_02db6e40;
    lVar3 = *(long *)(param_1 + 0x210);
    if ((*(uint *)(lVar3 + 0x48) < 7) &&
       ((1 << (ulong)(*(uint *)(lVar3 + 0x48) & 0x1f) & 0x58U) != 0)) goto LAB_02db6e40;
  }
  FUN_03d5c660(lVar3,0);
LAB_02db6e40:
  *(undefined1 *)(param_1 + 0x24c) = 0;
  return;
}

