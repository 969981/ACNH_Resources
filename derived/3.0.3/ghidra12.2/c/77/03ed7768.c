
void FUN_03ed7768(long param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = **(uint **)(param_1 + 0x18);
  if ((uVar6 >> 0x1c & (int)uVar6 >> 0x1f & 3) != 0) {
    uVar6 = FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(uint **)(param_1 + 0x18) + 1,
                         *(undefined8 *)(param_4 + 0x70),1,0,0);
    param_2[3] = uVar6;
  }
  uVar6 = *param_2;
  if ((uVar6 >> 6 & 1) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x20);
    if ((int)uVar1 < 0) {
      lVar5 = *(long *)(param_3 + 8);
      plVar3 = *(long **)(lVar5 + 0x18);
      uVar2 = (**(code **)(*plVar3 + 0x128))
                        (plVar3,*(undefined8 *)(*(long *)(param_4 + 0x70) + 0x10),uVar1 & 0xffff);
      plVar3 = *(long **)(lVar5 + 0x20);
      uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3,uVar2);
      if ((uVar4 & 1) == 0) goto LAB_03ed7830;
      uVar6 = *param_2;
    }
    else if (*(int *)(*(long *)(param_1 + 0x18) + 0x24) == 0) goto LAB_03ed7830;
    *param_2 = uVar6 & 0xfffffffd;
  }
LAB_03ed7830:
  FUN_03ebf3f0(*(undefined8 *)(param_3 + 8),*(long *)(param_1 + 0x18) + 0x44,
               *(undefined8 *)(param_4 + 0x70),1,0,0);
  return;
}

