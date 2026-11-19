
void FUN_03855cf0(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [48];
  
  if (((*(char *)(param_1 + 0x171) != '\0') && (*(long *)(param_1 + 0x160) != 0)) &&
     (uVar2 = *(uint *)(*(long *)(param_1 + 0x160) + 0x30), 0 < (int)uVar2)) {
    uVar10 = 0;
    do {
      plVar6 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x160) + 0x38) + uVar10 * 8);
      if (plVar6 != (long *)0x0) {
        uVar4 = uVar10;
        if (*(uint *)(param_1 + 8) <= uVar10) {
          uVar4 = 0;
        }
        piVar1 = (int *)(*(long *)(param_1 + 0x10) + uVar4 * 0x10);
        iVar3 = *piVar1;
        if (iVar3 != 0) {
          lVar5 = *(long *)(piVar1 + 2);
          iVar7 = 0;
          iVar9 = 0;
          do {
            plVar8 = (long *)(lVar5 + (long)iVar9 * 0x60);
            uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
            if ((uVar4 & 1) != 0) {
              local_a8 = 0xffffffff;
              local_b0 = auStack_90;
              (**(code **)(*plVar6 + 0x60))(plVar6,auStack_90,auStack_9c,iVar7);
              (**(code **)*plVar8)(plVar8,&local_b0);
              (**(code **)(*plVar6 + 0x48))(plVar6,auStack_90,auStack_9c,iVar7);
            }
            iVar9 = iVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar3 != iVar9);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  return;
}

