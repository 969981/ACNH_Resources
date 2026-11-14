
undefined8 FUN_015546d4(long param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  puVar2 = (uint *)(param_1 + 0x18) + (ulong)param_2 * 0x18;
  if (7 < param_2) {
    puVar2 = (uint *)(param_1 + 0x18);
  }
  puVar3 = puVar2 + (ulong)param_3 * 4;
  if (5 < param_3) {
    puVar3 = puVar2;
  }
  lVar6 = *(long *)(puVar3 + 2);
  if (-1 < *(int *)(lVar6 + 8)) {
    uVar5 = *puVar3;
    lVar1 = lVar6 + (ulong)(1 < uVar5) * 0x10;
    if ((-1 < *(int *)(lVar1 + 8)) &&
       (lVar1 = lVar6 + (ulong)(2 < uVar5) * 0x20, -1 < *(int *)(lVar1 + 8))) {
      lVar4 = 0x30;
      if (uVar5 < 4) {
        lVar4 = 0;
      }
      lVar1 = lVar6 + lVar4;
      if ((-1 < *(int *)(lVar6 + lVar4 + 8)) &&
         (lVar1 = lVar6 + (ulong)(4 < uVar5) * 0x40, -1 < *(int *)(lVar1 + 8))) {
        lVar4 = 0x50;
        if (uVar5 < 6) {
          lVar4 = 0;
        }
        lVar1 = lVar6 + lVar4;
        if (-1 < *(int *)(lVar6 + lVar4 + 8)) {
          lVar4 = 0x60;
          if (uVar5 < 7) {
            lVar4 = 0;
          }
          lVar1 = lVar6 + lVar4;
          if (-1 < *(int *)(lVar6 + lVar4 + 8)) {
            lVar4 = 0x70;
            if (uVar5 < 8) {
              lVar4 = 0;
            }
            lVar1 = lVar6 + lVar4;
            if ((-1 < *(int *)(lVar6 + lVar4 + 8)) &&
               (lVar1 = lVar6 + (ulong)(8 < uVar5) * 0x80, -1 < *(int *)(lVar1 + 8))) {
              lVar1 = 0x90;
              if (uVar5 < 10) {
                lVar1 = 0;
              }
              lVar6 = lVar6 + lVar1;
              if (-1 < *(int *)(lVar6 + 8)) {
                return 0;
              }
              goto LAB_015547d8;
            }
          }
        }
      }
    }
    lVar6 = lVar1;
  }
LAB_015547d8:
  *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  return 1;
}

