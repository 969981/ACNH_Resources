
void FUN_003ae6c0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong local_70;
  ulong uStack_68;
  
  if (param_1[9] != 0) {
    lVar4 = *(long *)(*param_1 + 0x10);
    local_70 = 0;
    uStack_68 = 0;
    uVar5 = (ulong)*(byte *)(lVar4 + 0x4d);
    if (uVar5 != 0) {
      uVar10 = 0;
      do {
        if (*(long *)(param_1[9] + uVar10 * 8) != 0) {
          puVar1 = (ulong *)(*(long *)(lVar4 + 0x30) + uVar10 * 0x10);
          uVar9 = *puVar1;
          uStack_68 = puVar1[1];
          local_70 = uVar9 | 0x4000000000;
          lVar3 = FUN_00347a58(param_2,&local_70);
          if (*(char *)((long)param_1 + 0xf) != '\0') {
            lVar11 = 0;
            uVar12 = 0;
            uVar9 = uVar9 & 0xffffffff;
            do {
              uVar7 = lVar3 + -1 + param_4 & -lVar3;
              FUN_00347b9c(*(long *)(param_1[9] + uVar10 * 8) + lVar11,param_2,&local_70,param_3,
                           uVar7,uVar9);
              uVar12 = uVar12 + 1;
              param_4 = uVar7 + uVar9;
              lVar11 = lVar11 + 0x48;
            } while (uVar12 < *(byte *)((long)param_1 + 0xf));
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
    }
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 4;
    uVar5 = (ulong)*(byte *)((long)param_1 + 0xf);
    if ((*(byte *)((long)param_1 + 0xf) != 0) &&
       (*(char *)(*(long *)(*param_1 + 0x10) + 0x4d) != '\0')) {
      uVar10 = 0;
      do {
        lVar4 = *(long *)(*param_1 + 0x10);
        bVar2 = *(byte *)(lVar4 + 0x4d);
        if ((ulong)bVar2 != 0) {
          lVar11 = 0;
          lVar3 = 0;
          do {
            if (*(long *)(param_1[9] + lVar11) != 0) {
              uVar5 = (ulong)*(uint *)(*(long *)(lVar4 + 0x30) + lVar3);
              uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x28) + lVar11);
              lVar8 = *(long *)(param_1[9] + lVar11) + uVar10 * 0x48;
              __dest = (void *)FUN_00347cc4(lVar8);
              __src = (void *)FUN_00347cc4(uVar6);
              memcpy(__dest,__src,uVar5);
              FUN_00347cd8(uVar6);
              FUN_00347cdc(lVar8,0,uVar5);
              FUN_00347cd8(lVar8);
            }
            lVar3 = lVar3 + 0x10;
            lVar11 = lVar11 + 8;
          } while ((ulong)bVar2 * 0x10 != lVar3);
          uVar5 = (ulong)*(byte *)((long)param_1 + 0xf);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
    }
  }
  return;
}

