
void FUN_0305a9fc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long *plStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x248);
  if ((lVar4 != 0) && (lVar5 = *(long *)(param_1 + 0x228), lVar5 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x28);
    uVar2 = (ulong)(uVar1 - 1);
    if (0 < (int)uVar1) {
      if (5 < uVar1) {
        uVar2 = 0;
      }
      plVar3 = *(long **)(lVar4 + uVar2 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x140))(plVar3,1,0);
        local_38 = 0;
        local_48 = lVar5;
        plStack_40 = plVar3;
        uVar2 = (**(code **)(*plVar3 + 0xf0))(plVar3);
        if ((uVar2 & 1) == 0) {
          if (DAT_05739190 != 0) {
            *(byte *)(DAT_05739190 + 0x429) = *(byte *)(DAT_05739190 + 0x429) | 2;
          }
          FUN_032017e0(&local_48);
        }
        *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x238);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x1f8);
  }
  if ((*(long *)(param_1 + 0x228) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x210), lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x54) = 0;
  }
  return;
}

