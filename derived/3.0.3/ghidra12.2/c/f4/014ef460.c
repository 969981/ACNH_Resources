
void FUN_014ef460(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(int *)(param_1 + 0x18) == 1) && (0 < (int)*(uint *)(param_1 + 0xe8))) {
    iVar3 = *param_2;
    if (iVar3 < param_2[1]) {
      plVar1 = *(long **)(param_1 + 0xf0);
      lVar2 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
      do {
        if (iVar3 < param_2[1]) {
          lVar4 = *plVar1;
          puVar5 = *(undefined8 **)(param_2 + 4);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar5;
          }
          *(undefined4 *)puVar5 = *(undefined4 *)(lVar4 + 0x14);
          iVar3 = *param_2;
          if (iVar3 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar3 * 8) = puVar5;
            iVar3 = *param_2 + 1;
            *param_2 = iVar3;
          }
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  else if ((*(int *)(param_1 + 0x98) != 0) &&
          ((lVar2 = FUN_014ba988(param_1 + 0x90), lVar2 != 0 && (0 < (int)*(uint *)(param_1 + 0xe8))
           ))) {
    iVar3 = *param_2;
    if (iVar3 < param_2[1]) {
      plVar1 = *(long **)(param_1 + 0xf0);
      lVar2 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
      do {
        if (iVar3 < param_2[1]) {
          lVar4 = *plVar1;
          puVar5 = *(undefined8 **)(param_2 + 4);
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_2 + 4) = *puVar5;
          }
          *(undefined4 *)puVar5 = *(undefined4 *)(lVar4 + 0x14);
          iVar3 = *param_2;
          if (iVar3 < param_2[1]) {
            *(undefined8 **)(*(long *)(param_2 + 2) + (long)iVar3 * 8) = puVar5;
            iVar3 = *param_2 + 1;
            *param_2 = iVar3;
          }
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
  }
  return;
}

