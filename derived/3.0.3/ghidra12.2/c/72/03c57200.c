
undefined8 FUN_03c57200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  uint *puVar6;
  undefined **local_50;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    piVar4 = *(int **)(*(long *)(param_1 + 0x18) + 8);
    if ((((piVar4 == (int *)0x0) || (*piVar4 != 0x4c535241)) ||
        ((0xfe < (byte)(*(ushort *)(piVar4 + 1) >> 8) && ((*(ushort *)(piVar4 + 1) & 0xff) == 0xfe))
        )) || ((*(short *)((long)piVar4 + 6) != 1 || (uVar5 = (ulong)(uint)piVar4[3], piVar4[3] < 1)
               ))) {
      uVar2 = 1;
    }
    else {
      lVar1 = uVar5 * 4;
      puVar6 = (uint *)(piVar4 + 4);
      do {
        lStack_48 = (long)(piVar4 + 4) + (ulong)*puVar6 + lVar1;
        local_50 = &PTR_LAB_048f9770;
        lVar3 = FUN_03c4c110(DAT_05aed8a8,&local_50);
        if ((lVar3 != 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
          *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = lVar3;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
        uVar5 = uVar5 - 1;
        uVar2 = 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0);
    }
  }
  return uVar2;
}

