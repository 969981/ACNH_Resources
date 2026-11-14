
void FUN_01554fe0(long param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = (uint *)(param_1 + 0x18) + (ulong)param_2 * 0x18;
  if (7 < param_2) {
    puVar1 = (uint *)(param_1 + 0x18);
  }
  puVar2 = puVar1 + (ulong)param_3 * 4;
  if (5 < param_3) {
    puVar2 = puVar1;
  }
  lVar6 = *(long *)(puVar2 + 2);
  iVar3 = *(int *)(param_4 + 8);
  iVar4 = *(int *)(param_4 + 0xc);
  lVar7 = lVar6;
  if (*(int *)(lVar6 + 8) != iVar3 || *(int *)(lVar6 + 0xc) != iVar4) {
    uVar5 = *puVar2;
    lVar7 = lVar6 + (ulong)(1 < uVar5) * 0x10;
    if ((*(int *)(lVar7 + 8) != iVar3 || *(int *)(lVar7 + 0xc) != iVar4) &&
       (lVar7 = lVar6 + (ulong)(2 < uVar5) * 0x20,
       *(int *)(lVar7 + 8) != iVar3 || *(int *)(lVar7 + 0xc) != iVar4)) {
      lVar7 = 0x30;
      if (uVar5 < 4) {
        lVar7 = 0;
      }
      lVar7 = lVar6 + lVar7;
      if ((*(int *)(lVar7 + 8) != iVar3 || *(int *)(lVar7 + 0xc) != iVar4) &&
         (lVar7 = lVar6 + (ulong)(4 < uVar5) * 0x40,
         *(int *)(lVar7 + 8) != iVar3 || *(int *)(lVar7 + 0xc) != iVar4)) {
        lVar7 = 0x50;
        if (uVar5 < 6) {
          lVar7 = 0;
        }
        lVar7 = lVar6 + lVar7;
        if ((*(int *)(lVar7 + 8) != iVar3) || (*(int *)(lVar7 + 0xc) != iVar4)) {
          lVar7 = 0x60;
          if (uVar5 < 7) {
            lVar7 = 0;
          }
          lVar7 = lVar6 + lVar7;
          if ((*(int *)(lVar7 + 8) != iVar3) || (*(int *)(lVar7 + 0xc) != iVar4)) {
            lVar7 = 0x70;
            if (uVar5 < 8) {
              lVar7 = 0;
            }
            lVar7 = lVar6 + lVar7;
            if (((*(int *)(lVar7 + 8) != iVar3) || (*(int *)(lVar7 + 0xc) != iVar4)) &&
               ((lVar7 = lVar6 + (ulong)(8 < uVar5) * 0x80, *(int *)(lVar7 + 8) != iVar3 ||
                (*(int *)(lVar7 + 0xc) != iVar4)))) {
              lVar7 = 0x90;
              if (uVar5 < 10) {
                lVar7 = 0;
              }
              lVar7 = lVar6 + lVar7;
              if (*(int *)(lVar7 + 8) != iVar3) {
                return;
              }
              if (*(int *)(lVar7 + 0xc) != iVar4) {
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(param_5 + 0xc);
  return;
}

