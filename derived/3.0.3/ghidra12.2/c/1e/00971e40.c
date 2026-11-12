
void FUN_00971e40(long param_1,uint param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(int *)(param_3 + 0x24) + 1;
  uVar3 = *(uint *)(param_3 + 0x10);
  uVar4 = *(uint *)(param_3 + 0x14);
  if ((param_2 & 1) == 0) {
    if (uVar2 != uVar4) {
      uVar6 = uVar3;
      uVar5 = uVar3;
      do {
        if ((((-1 < (int)uVar5) && (-1 < (int)uVar4)) && (uVar5 < *(uint *)(param_1 + 0x38))) &&
           (uVar4 < *(uint *)(param_1 + 0x3c))) {
          uVar6 = uVar5 + *(uint *)(param_1 + 0x38) * uVar4;
          puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar6 * 4);
          if (*(uint *)(param_1 + 0x68) <= uVar6) {
            puVar1 = (uint *)0x0;
          }
          *puVar1 = *puVar1 & 0xffffffbf;
          uVar6 = *(uint *)(param_3 + 0x10);
        }
        if ((int)uVar5 < *(int *)(param_3 + 0x20)) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar4 = uVar4 + 1;
          uVar5 = uVar6;
        }
      } while (uVar3 != uVar5 || uVar2 != uVar4);
    }
  }
  else if (uVar2 != uVar4) {
    uVar6 = uVar3;
    uVar5 = uVar3;
    do {
      if (((-1 < (int)uVar5) && (-1 < (int)uVar4)) &&
         ((uVar5 < *(uint *)(param_1 + 0x38) && (uVar4 < *(uint *)(param_1 + 0x3c))))) {
        uVar6 = uVar5 + *(uint *)(param_1 + 0x38) * uVar4;
        puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar6 * 4);
        if (*(uint *)(param_1 + 0x68) <= uVar6) {
          puVar1 = (uint *)0x0;
        }
        *puVar1 = *puVar1 | 0x40;
        uVar6 = *(uint *)(param_3 + 0x10);
      }
      if ((int)uVar5 < *(int *)(param_3 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
    } while (uVar3 != uVar5 || uVar2 != uVar4);
  }
  return;
}

