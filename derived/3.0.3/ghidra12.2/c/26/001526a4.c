
byte FUN_001526a4(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if (((*(byte *)(*(long *)(param_2 + 0x440) + 0x80) & 3) == 0) ||
     (((*(uint *)(param_2 + 0x41c) ^ 0xffffffff) & 0x1001) == 0)) {
    bVar2 = 0;
  }
  else {
    uVar3 = FUN_00148068(*(undefined8 *)(param_1 + 0xd8),1);
    if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0xa40) == 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(param_1 + 0xa38) == 1 || *(int *)(param_1 + 0xa38) == 6;
    }
    uVar3 = FUN_00148068(*(undefined8 *)(param_1 + 0xd8),2);
    if ((uVar3 & 1) != 0) {
      bVar1 = bVar2 | 2;
      if (*(long *)(param_1 + 0xa40) < 3) {
        bVar1 = bVar2;
      }
      bVar2 = bVar1;
    }
  }
  return bVar2;
}

