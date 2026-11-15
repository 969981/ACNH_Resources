
void FUN_02133484(long param_1,int param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 == 3) || (param_2 == 0x29)) {
    return;
  }
  if (1 < *(uint *)(param_1 + 0x10) - 2) {
    if (1 < *(uint *)(param_1 + 0x10)) goto LAB_02133528;
    sVar2 = *(short *)(*(long *)(param_1 + 8) + 0x284);
    if (sVar2 == -1) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar2 * 0x10;
      if (999 < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bb6258;
      }
      uVar3 = *(undefined8 *)(puVar1 + 8);
    }
    FUN_022f17b4(uVar3);
  }
  sVar2 = *(short *)(*(long *)(param_1 + 8) + 0x284);
  if (sVar2 == -1) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    puVar1 = PTR_DAT_04bb6258 + (ulong)(uint)(int)sVar2 * 0x10;
    if (999 < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bb6258;
    }
    uVar3 = *(undefined8 *)(puVar1 + 8);
  }
  FUN_022f1af4(uVar3);
LAB_02133528:
  lVar4 = *(long *)(param_1 + 8);
  plVar5 = *(long **)(lVar4 + 0x3b8);
  *(uint *)(lVar4 + 0x69c) = *(uint *)(lVar4 + 0x69c) & 0xffffffef;
  *(undefined4 *)(*(long *)(lVar4 + 0x3b0) + 0x56c) = 0;
  (**(code **)(*plVar5 + 0x328))(plVar5,0);
  plVar5[0x15ab] = plVar5[0x15ab] & 0xffffffffffffefff;
  FUN_0212eca8(plVar5 + 0x154a,0,0);
  return;
}

