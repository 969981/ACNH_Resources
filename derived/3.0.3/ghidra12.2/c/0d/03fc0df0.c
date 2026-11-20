
void FUN_03fc0df0(long param_1,undefined8 param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  ushort uVar4;
  long *plVar5;
  void *__src;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined1 auStack_268 [520];
  
  puVar1 = (ushort *)(&LAB_00316ac0 + param_1);
  if (0x1ff < param_3) {
    param_3 = 0x200;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x45e68) + 0x78);
  __src = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,auStack_268,param_1,param_2,param_3);
  if (__src != (void *)0x0) {
    uVar4 = *puVar1;
    uVar2 = (uint)uVar4 + param_3;
    __dest = (void *)(param_1 + 0x316ac2 + (ulong)uVar4);
    uVar8 = (ulong)(uVar4 >> 1);
    uVar3 = uVar2 & 0xffff;
    *puVar1 = (ushort)uVar2;
    uVar2 = uVar3 - 0x200;
    if (uVar3 < 0x200 || uVar2 == 0) {
      uVar2 = uVar3 + 1 >> 1;
      memcpy(__dest,__src,(long)param_3);
      if (uVar4 >> 1 < uVar2) {
        lVar6 = uVar2 - uVar8;
        puVar7 = (ushort *)(param_1 + uVar8 * 2 + 0x316ac2);
        do {
          lVar6 = lVar6 + -1;
          puVar7[0x101] = *puVar7 & 0x7fff;
          puVar7[0x202] = *puVar7 | 0x8000;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
    }
    else {
      memcpy(__dest,__src,(long)(int)(param_3 - uVar2));
      if (uVar4 < 0x200) {
        lVar6 = uVar8 << 1;
        do {
          puVar7 = (ushort *)(param_1 + 0x316ac2 + lVar6);
          lVar6 = lVar6 + 2;
          puVar7[0x101] = *puVar7 & 0x7fff;
          puVar7[0x202] = *puVar7 | 0x8000;
        } while (lVar6 != 0x200);
      }
      memcpy((void *)(param_1 + 0x316ac2),(void *)((long)__src + (long)(int)(param_3 - uVar2)),
             (ulong)uVar2);
      if (1 < uVar3 - 0x1ff) {
        uVar8 = (ulong)(uVar3 - 0x1ff >> 1);
        puVar7 = (ushort *)(param_1 + 0x316ac2);
        do {
          uVar8 = uVar8 - 1;
          puVar7[0x101] = *puVar7 & 0x7fff;
          puVar7[0x202] = *puVar7 | 0x8000;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  *puVar1 = *puVar1 & 0x1ff;
  *(ushort *)(param_1 + 0x3170cc) =
       *(ushort *)(param_1 + 0x3170ca) | *(ushort *)(&LAB_00316cc4 + param_1);
  return;
}

