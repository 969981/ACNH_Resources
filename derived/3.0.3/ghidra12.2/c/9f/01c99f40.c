
void FUN_01c99f40(long param_1,uint *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  long lVar7;
  void *__dest;
  void *__src_00;
  int iVar8;
  ulong uVar9;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0 < (int)param_3) {
    lVar6 = *(long *)(param_1 + 8);
    uVar9 = 0;
    iVar8 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1 + 0x18);
      __src = (void *)(*(long *)(param_2 + 2) + uVar9 * 0x238);
      if (*param_2 <= uVar9) {
        __src = (void *)0x0;
      }
      if ((puVar4 == (undefined8 *)0x0) ||
         (uVar5 = (**(code **)*puVar4)(puVar4,__src), (uVar5 & 1) != 0)) {
        lVar7 = lVar6 + (long)iVar8 * 0x1040;
        memcpy((void *)(lVar7 + 0xe00),__src,0x200);
        __dest = *(void **)(lVar7 + 0x1008);
        (**(code **)(*(long *)((long)__src + 0x200) + 0x18))((long)__src + 0x200);
        __src_00 = *(void **)((long)__src + 0x208);
        if (__dest != __src_00) {
          (**(code **)(*(long *)((long)__src + 0x200) + 0x18))((long)__src + 0x200);
          lVar7 = 0;
          do {
            if (*(short *)(*(long *)((long)__src + 0x208) + lVar7 * 2) == 0) goto LAB_01c99f9c;
            lVar1 = *(long *)((long)__src + 0x208) + lVar7 * 2;
            if (*(short *)(lVar1 + 2) == 0) {
              lVar7 = lVar7 + 1;
              goto LAB_01c99f9c;
            }
            if (*(short *)(lVar1 + 4) == 0) {
              lVar7 = lVar7 + 2;
              goto LAB_01c99f9c;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_01c99f9c:
          iVar3 = *(int *)(lVar6 + (long)iVar8 * 0x1040 + 0x1010);
          uVar2 = (uint)lVar7;
          if (iVar3 <= (int)(uint)lVar7) {
            uVar2 = iVar3 - 1;
          }
          uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          memcpy(__dest,__src_00,uVar5);
          *(undefined2 *)((long)__dest + uVar5) = 0;
        }
        lVar7 = lVar6 + (long)iVar8 * 0x1040;
        *(int *)(lVar7 + 0x1038) = (int)uVar9;
        iVar8 = iVar8 + 1;
        *(undefined1 *)(lVar7 + 0x103c) = 2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_3);
  }
  return;
}

