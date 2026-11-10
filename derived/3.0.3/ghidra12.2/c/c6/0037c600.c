
void FUN_0037c600(long param_1,long param_2)

{
  long lVar1;
  int *__src;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 local_74;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  
  lVar5 = *(long *)(param_2 + 200);
  if (lVar5 != 0) {
    puVar6 = (uint *)(lVar5 + 0x10);
    uVar7 = (ulong)*(ushort *)(lVar5 + 0xc + (ulong)*puVar6 + 2);
    if (uVar7 != 0) {
      puVar8 = puVar6;
      do {
        __src = (int *)(lVar5 + 0xc + (ulong)(*(int *)((long)puVar8 + (ulong)*puVar6) + *puVar6));
        if (*__src == 6) {
          if (*(uint *)(param_1 + 0x60) == 0) {
LAB_0037c660:
            local_74 = 0x15;
            local_70 = 0xffffffffff;
            uStack_6b = 0xffffff;
            uStack_68 = 0xffffffffff;
            FUN_0037db40(param_1,0x15,&local_74,0x14,1);
          }
          else {
            lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
            uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
            piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
            if ((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 10), -1 < (char)bVar4)) {
              memcpy((void *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4)
                                             + uVar3)),__src,0xfc);
              goto LAB_0037c69c;
            }
            if ((*(uint *)(param_1 + 0x60) >> 0x15 & 1) == 0) goto LAB_0037c660;
          }
          FUN_0037db40(param_1,6,__src,0xfc,0);
        }
LAB_0037c69c:
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

