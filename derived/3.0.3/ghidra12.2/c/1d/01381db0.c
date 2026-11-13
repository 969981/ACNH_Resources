
void FUN_01381db0(long param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined8 local_50;
  byte local_48;
  byte local_47;
  byte local_46;
  
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 != 0) {
    iVar7 = 0;
    do {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x68) <= iVar7 + *(int *)(param_1 + 0x6c)) {
        iVar2 = *(int *)(param_1 + 0x68);
      }
      psVar1 = (short *)(*(long *)(param_1 + 0x60) +
                        (long)(iVar7 + (*(int *)(param_1 + 0x6c) - iVar2)) * 4);
      uVar5 = (int)*psVar1 + *(int *)(param_1 + 0x18) * (int)psVar1[1];
      local_50 = *(undefined8 *)(param_1 + 0x10);
      bVar4 = *(byte *)(param_1 + 8);
      local_48 = bVar4 & 1;
      local_47 = bVar4 >> 1 & 1;
      local_46 = bVar4 >> 2 & 1;
      if (*(uint *)(param_1 + 0x30) <= uVar5) {
        uVar5 = 0;
      }
      FUN_0137dbc0(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 0x68,&local_50);
      lVar6 = *(long *)(param_1 + 0x80);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 8) & 1) != 0)) {
        FUN_0138367c(lVar6 + 0x28,*psVar1,psVar1[1]);
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    iVar7 = *(int *)(param_1 + 0x58);
    iVar3 = iVar7 + 0x1e;
    if (0 < iVar7) {
      iVar3 = iVar7 + -1;
    }
    uVar5 = (iVar3 >> 5) + 1;
    memset(*(void **)(param_1 + 0x50),0,
           -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
  }
  bVar4 = *(byte *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x6c) = 0;
  local_47 = bVar4 >> 1 & 1;
  local_50 = *(undefined8 *)(param_1 + 0x10);
  local_48 = bVar4 & 1;
  local_46 = bVar4 >> 2 & 1;
  if (*(char *)(param_1 + 0x88) != '\0') {
    iVar3 = *(int *)(param_1 + 0xd8);
    if (iVar3 != 0) {
      iVar7 = 0;
      do {
        iVar2 = 0;
        if (*(int *)(param_1 + 0xd0) <= iVar7 + *(int *)(param_1 + 0xd4)) {
          iVar2 = *(int *)(param_1 + 0xd0);
        }
        psVar1 = (short *)(*(long *)(param_1 + 200) +
                          (long)(iVar7 + (*(int *)(param_1 + 0xd4) - iVar2)) * 4);
        uVar5 = (int)*psVar1 + *(int *)(param_1 + 0xa0) * (int)psVar1[1] + *(int *)(param_1 + 0x8c);
        if (*(uint *)(param_1 + 0x30) <= uVar5) {
          uVar5 = 0;
        }
        FUN_0137dbc0(*(long *)(param_1 + 0x38) + (long)(int)uVar5 * 0x68,&local_50);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
      iVar7 = *(int *)(param_1 + 0xc0);
      iVar3 = iVar7 + 0x1e;
      if (0 < iVar7) {
        iVar3 = iVar7 + -1;
      }
      uVar5 = (iVar3 >> 5) + 1;
      memset(*(void **)(param_1 + 0xb8),0,
             -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
    }
    *(undefined8 *)(param_1 + 0xd4) = 0;
  }
  return;
}

