
void FUN_003b13d0(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  void *__dest;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_a0 [64];
  
  uVar4 = (ulong)*(ushort *)(*param_1 + 0x9e);
  if (uVar4 != 0) {
    lVar5 = *(long *)(*param_1 + 0x78);
    uVar6 = 0;
    do {
      uVar7 = *(uint *)(lVar5 + uVar6 * 4) | *(uint *)(param_3 + uVar6 * 4);
      if (uVar7 != 0) {
        do {
          while( true ) {
            uVar2 = uVar7 | uVar7 >> 1;
            uVar2 = uVar2 | uVar2 >> 2;
            uVar2 = uVar2 | uVar2 >> 4;
            uVar2 = uVar2 | uVar2 >> 8;
            uVar2 = uVar2 | uVar2 >> 0x10;
            uVar2 = (~uVar2 >> 1 & 0x55555555) + ((uVar2 ^ 0xffffffff) & 0x55555555);
            uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
            uVar2 = (uVar2 >> 4 & 0x7070707) + (uVar2 & 0x7070707);
            uVar2 = (uVar2 >> 8 & 0xf000f) + (uVar2 & 0xf000f);
            uVar2 = (uVar2 & 0x1f) + (uVar2 >> 0x10);
            puVar1 = (undefined8 *)
                     (*(long *)(*param_1 + 0x50) +
                     (long)(int)(((int)uVar6 << 5 | 0x1fU) - uVar2) * 0x20);
            __dest = (void *)(param_2 + *(int *)((long)puVar1 + 0x14));
            lVar3 = param_1[9] + (ulong)*(ushort *)((long)puVar1 + 0x12);
            if ((code *)*puVar1 == (code *)0x0) break;
            lVar3 = (*(code *)*puVar1)(auStack_a0,lVar3,puVar1,param_1[0xd]);
            memcpy(__dest,auStack_a0,lVar3 * 0x40000000 + 0xc0000000 >> 0x1e & 0xfffffffffffffffc);
            uVar7 = 0x80000000U >> (ulong)(uVar2 & 0x1f) ^ uVar7;
            if (uVar7 == 0) goto LAB_003b1430;
          }
          FUN_0039e390(puVar1,__dest,lVar3);
          uVar7 = 0x80000000U >> (ulong)(uVar2 & 0x1f) ^ uVar7;
        } while (uVar7 != 0);
      }
LAB_003b1430:
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4 + 0x1f >> 5);
  }
  return;
}

