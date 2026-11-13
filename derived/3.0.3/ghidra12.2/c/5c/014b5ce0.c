
void FUN_014b5ce0(long param_1,uint param_2,long param_3,long param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = (uint *)(param_1 + 0x18) + (ulong)param_2 * 4;
  if (5 < param_2) {
    puVar1 = (uint *)(param_1 + 0x18);
  }
  iVar2 = *(int *)(param_3 + 8);
  iVar3 = *(int *)(param_3 + 0xc);
  lVar5 = *(long *)(puVar1 + 2);
  lVar6 = lVar5;
  if (*(int *)(lVar5 + 8) != iVar2 || *(int *)(lVar5 + 0xc) != iVar3) {
    uVar4 = *puVar1;
    lVar6 = lVar5 + (ulong)(1 < uVar4) * 0x10;
    if ((*(int *)(lVar6 + 8) != iVar2 || *(int *)(lVar6 + 0xc) != iVar3) &&
       (lVar6 = lVar5 + (ulong)(2 < uVar4) * 0x20,
       *(int *)(lVar6 + 8) != iVar2 || *(int *)(lVar6 + 0xc) != iVar3)) {
      lVar6 = 0x30;
      if (uVar4 < 4) {
        lVar6 = 0;
      }
      lVar6 = lVar5 + lVar6;
      if ((*(int *)(lVar6 + 8) != iVar2 || *(int *)(lVar6 + 0xc) != iVar3) &&
         (lVar6 = lVar5 + (ulong)(4 < uVar4) * 0x40,
         *(int *)(lVar6 + 8) != iVar2 || *(int *)(lVar6 + 0xc) != iVar3)) {
        lVar6 = 0x50;
        if (uVar4 < 6) {
          lVar6 = 0;
        }
        lVar6 = lVar5 + lVar6;
        if ((*(int *)(lVar6 + 8) != iVar2) || (*(int *)(lVar6 + 0xc) != iVar3)) {
          lVar6 = 0x60;
          if (uVar4 < 7) {
            lVar6 = 0;
          }
          lVar6 = lVar5 + lVar6;
          if ((*(int *)(lVar6 + 8) != iVar2) || (*(int *)(lVar6 + 0xc) != iVar3)) {
            lVar6 = 0x70;
            if (uVar4 < 8) {
              lVar6 = 0;
            }
            lVar6 = lVar5 + lVar6;
            if (((*(int *)(lVar6 + 8) != iVar2) || (*(int *)(lVar6 + 0xc) != iVar3)) &&
               ((lVar6 = lVar5 + (ulong)(8 < uVar4) * 0x80, *(int *)(lVar6 + 8) != iVar2 ||
                (*(int *)(lVar6 + 0xc) != iVar3)))) {
              lVar6 = 0x90;
              if (uVar4 < 10) {
                lVar6 = 0;
              }
              lVar6 = lVar5 + lVar6;
              if (*(int *)(lVar6 + 8) != iVar2) {
                return;
              }
              if (*(int *)(lVar6 + 0xc) != iVar3) {
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  return;
}

