
void FUN_004c4d10(long param_1,long *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_d0 [144];
  
  FUN_004225b0(auStack_d0);
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x58) + lVar5 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        uVar2 = FUN_00427570(*puVar4,auStack_d0,0,0);
        uVar3 = FUN_0043a700(*param_2,param_2[1] - *param_2,uVar2);
        if (((uVar3 & 1) != 0) &&
           (iVar1 = FUN_00427340(**(undefined8 **)(*(long *)(param_1 + 0x58) + lVar5 * 8)),
           iVar1 == param_3)) {
          FUN_004c4de0(*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar5 * 8),param_4);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x60));
  }
  FUN_00422550(auStack_d0);
  return;
}

