
void FUN_01bd3dc0(long param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  int iVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  undefined3 uStack_87;
  undefined4 local_84;
  uint uStack_80;
  undefined8 local_7c;
  uint local_74;
  
  if (*(char *)(param_1 + 0x282) != '\0') {
    iVar2 = *(int *)(param_1 + 0x288);
    iVar8 = *(int *)(param_1 + 0x298);
    while (iVar8 != iVar2) {
      puVar7 = (ulong *)(*(long *)(param_1 + 0x2a0) + (long)iVar8 * 0x14);
      iVar4 = (int)*puVar7;
      if ((iVar4 == 0xda) || (iVar4 == 0xdd)) {
        *(int *)(param_1 + 0x298) = iVar8 + 1;
        return;
      }
      if (1 < iVar4 - 0xdbU) {
        local_98 = *puVar7;
        uVar1 = puVar7[1];
        _local_88 = CONCAT31((int3)(puVar7[2] >> 8),*(char *)(param_1 + 0x250));
        if (*(char *)(param_1 + 0x252) != '\0') {
          if ((((0x34 < (int)local_98 - 0xdaU) ||
               ((1L << ((ulong)((int)local_98 - 0xdaU) & 0x3f) & 0x1000000000001fU) == 0)) &&
              (1 < (int)local_98 - 0xa6U)) && ((int)local_98 != 0)) {
            uVar5 = local_98 >> 0x20;
            local_98 = CONCAT44((int)uVar5,0x9f);
          }
        }
        if (*(char *)(param_1 + 0x250) != '\0') {
          local_98 = (ulong)CONCAT24(*(undefined2 *)(param_1 + 0x280),(int)local_98);
        }
        uStack_90._4_4_ = (float)(uVar1 >> 0x20);
        iVar8 = (int)(uStack_90._4_4_ + 0.5);
        uStack_90 = uVar1;
        if (0 < iVar8) {
          do {
            lVar6 = *(long *)(param_1 + 0x260);
            *(undefined1 *)(lVar6 + 0x18) = 0;
            uVar3 = *(uint *)(lVar6 + 0x14);
            if (-1 < (int)uVar3) {
              if ((uVar3 < 0x40) &&
                 (iVar4 = *(int *)(*(long *)(lVar6 + 8) + (ulong)uVar3 * 4 + 0x204), -1 < iVar4)) {
                if (*(int *)(lVar6 + 0x10) == iVar4) {
                  *(undefined1 *)(lVar6 + 0x18) = 1;
                  *(uint *)(lVar6 + 0x14) = uVar3 + 1;
                }
                *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
              }
              else {
                *(undefined4 *)(lVar6 + 0x14) = 0xffffffff;
              }
            }
            if (*(char *)(*(long *)(param_1 + 0x260) + 0x18) != '\0') {
              local_7c = 0x3f80000000000000;
              uStack_80 = (uint)*(ushort *)(param_1 + 0x280);
              local_84 = 0xa6;
              local_74 = (uint)*(byte *)(param_1 + 0x250);
              (**(code **)(**(long **)(param_1 + 0x268) + 0x288))
                        (*(long **)(param_1 + 0x268),&local_84);
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        (**(code **)(**(long **)(param_1 + 0x268) + 0x288))(*(long **)(param_1 + 0x268),&local_98);
        iVar8 = *(int *)(param_1 + 0x298);
      }
      iVar8 = iVar8 + 1;
      *(int *)(param_1 + 0x298) = iVar8;
    }
  }
  return;
}

