
undefined8 FUN_014b5714(long param_1,uint param_2,long param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  puVar2 = (uint *)(param_1 + 0x18) + (ulong)param_2 * 4;
  if (5 < param_2) {
    puVar2 = (uint *)(param_1 + 0x18);
  }
  lVar5 = *(long *)(puVar2 + 2);
  if (-1 < *(int *)(lVar5 + 8)) {
    uVar4 = *puVar2;
    lVar1 = lVar5 + (ulong)(1 < uVar4) * 0x10;
    if ((-1 < *(int *)(lVar1 + 8)) &&
       (lVar1 = lVar5 + (ulong)(2 < uVar4) * 0x20, -1 < *(int *)(lVar1 + 8))) {
      lVar3 = 0x30;
      if (uVar4 < 4) {
        lVar3 = 0;
      }
      lVar1 = lVar5 + lVar3;
      if ((-1 < *(int *)(lVar5 + lVar3 + 8)) &&
         (lVar1 = lVar5 + (ulong)(4 < uVar4) * 0x40, -1 < *(int *)(lVar1 + 8))) {
        lVar3 = 0x50;
        if (uVar4 < 6) {
          lVar3 = 0;
        }
        lVar1 = lVar5 + lVar3;
        if (-1 < *(int *)(lVar5 + lVar3 + 8)) {
          lVar3 = 0x60;
          if (uVar4 < 7) {
            lVar3 = 0;
          }
          lVar1 = lVar5 + lVar3;
          if (-1 < *(int *)(lVar5 + lVar3 + 8)) {
            lVar3 = 0x70;
            if (uVar4 < 8) {
              lVar3 = 0;
            }
            lVar1 = lVar5 + lVar3;
            if ((-1 < *(int *)(lVar5 + lVar3 + 8)) &&
               (lVar1 = lVar5 + (ulong)(8 < uVar4) * 0x80, -1 < *(int *)(lVar1 + 8))) {
              lVar1 = 0x90;
              if (uVar4 < 10) {
                lVar1 = 0;
              }
              lVar5 = lVar5 + lVar1;
              if (-1 < *(int *)(lVar5 + 8)) {
                return 0;
              }
              goto LAB_014b5808;
            }
          }
        }
      }
    }
    lVar5 = lVar1;
  }
LAB_014b5808:
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  return 1;
}

