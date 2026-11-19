
void FUN_03a64b24(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x290);
  if (((lVar2 != 0) && (lVar5 = *(long *)(param_1 + 8), *(char *)(lVar5 + 0x610) != '\0')) &&
     (*(char *)(lVar2 + 0x468) != '\0')) {
    if (((*(long *)(param_1 + 0x2a8) != 0) && (*(char *)(lVar5 + 0x14a0) != '\0')) &&
       ((*(char *)(lVar5 + 0x5f0) != '\0' &&
        (lVar6 = *(long *)(param_5 + 0x430), *(char *)(lVar6 + 0x568) != '\0')))) {
      bVar1 = *(byte *)(param_3 + 8);
      uVar3 = (uint)bVar1;
      uVar4 = uVar3;
      if (*(uint *)(lVar6 + 0x1d0) <= (uint)bVar1) {
        uVar4 = 0;
      }
      if (*(uint *)(param_4 + 8) <= uVar3) {
        uVar3 = 0;
      }
      FUN_03a6a0d0(lVar2,param_2,bVar1,
                   *(long *)(param_4 + 0x10) + (ulong)uVar3 * 0x23c0 +
                   (ulong)(*(int *)(lVar6 + 0x488) == 1) * 0x7c0 + 0x610,
                   *(long *)(lVar6 + 0x1d8) + (ulong)uVar4 * 0x1340 + 0xf00);
      uVar4 = (uint)*(byte *)(param_3 + 8);
      if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
        uVar4 = 0;
      }
      uVar3 = *(uint *)(*(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0 + 8);
      *(undefined4 *)(*(long *)(param_1 + 0x2a8) + 0x1070) = 1;
      bVar1 = *(byte *)(param_3 + 8);
      uVar4 = (uint)bVar1;
      if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0 +
              (ulong)(*(int *)(*(long *)(param_1 + 0x290) + 0x488) == 1) * 0x7c0;
      FUN_03a6a390(*(long *)(param_1 + 0x290),param_2,bVar1,lVar2 + 0x610,lVar2 + 0x7e8,
                   lVar2 + 0x8c8,*(long *)(param_1 + 0x2a8) + 0x410,uVar3 & 1);
      (**(code **)(**(long **)(param_1 + 0x2a8) + 0x68))
                (*(long **)(param_1 + 0x2a8),param_2,*(undefined1 *)(param_3 + 8));
      lVar5 = *(long *)(param_1 + 8);
    }
    if (*(char *)(lVar5 + 0x1560) != '\0') {
      bVar1 = *(byte *)(param_3 + 8);
      uVar4 = (uint)bVar1;
      if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
        uVar4 = 0;
      }
      FUN_03a69a80(*(long *)(param_1 + 0x290),param_2,bVar1,
                   *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0 +
                   (ulong)(*(int *)(*(long *)(param_1 + 0x290) + 0x488) == 1) * 0x7c0 + 0x610);
      bVar1 = *(byte *)(param_3 + 8);
      uVar4 = (uint)bVar1;
      if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(param_4 + 0x10) + (ulong)uVar4 * 0x23c0;
      lVar5 = lVar2 + (ulong)(*(int *)(*(long *)(param_1 + 0x290) + 0x488) == 1) * 0x7c0;
      FUN_03a6a390(*(long *)(param_1 + 0x290),param_2,bVar1,lVar5 + 0x610,lVar5 + 0x7e8,
                   lVar5 + 0x8c8,*(undefined8 *)(param_1 + 0x298),*(uint *)(lVar2 + 8) & 1);
      lVar2 = *(long *)(*(long *)(param_1 + 0x290) + 0x1d8);
      uVar4 = (uint)*(byte *)(param_3 + 8);
      if (*(uint *)(*(long *)(param_1 + 0x290) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
        uVar4 = 0;
      }
      lVar5 = lVar2 + (ulong)uVar4 * 0x3f8;
      if (*(long *)(lVar5 + 0x1c0) != 0) {
        FUN_039499cc(DAT_05ae90c0);
        *(undefined8 *)(lVar5 + 0x1c0) = 0;
        *(undefined1 *)(lVar2 + (ulong)uVar4 * 0x3f8 + 0x3f1) = 1;
      }
      *(undefined1 *)(lVar2 + (ulong)uVar4 * 0x3f8 + 0x3f0) = 0;
    }
  }
  return;
}

