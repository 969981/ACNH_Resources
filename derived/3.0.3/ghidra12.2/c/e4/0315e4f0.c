
/* WARNING: Removing unreachable block (ram,0x0315e580) */
/* WARNING: Removing unreachable block (ram,0x0315e58c) */

void FUN_0315e4f0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if ((lVar1 != 0) && (0 < (int)*(uint *)(lVar1 + 0x2f8))) {
    uVar2 = 0;
    lVar4 = *(long *)(param_2 + 8);
    do {
      lVar3 = 0;
      if (((long)uVar2 < (long)(int)*(uint *)(lVar1 + 0x208)) && (uVar2 < *(uint *)(lVar1 + 0x208)))
      {
        lVar3 = *(long *)(*(long *)(lVar1 + 0x210) + uVar2 * 8);
      }
      if (lVar4 == lVar3) {
        uVar2 = (**(code **)(*(long *)(*(long *)(lVar4 + 0x218) + 0x150) + 0x10))();
        if ((uVar2 & 1) == 0) {
          return;
        }
        FUN_03d49da4(*(undefined8 *)(lVar4 + 0x218),0,6);
        FUN_03d49da4(*(undefined8 *)(lVar4 + 0x218),1,6);
        FUN_03d49da4(*(undefined8 *)(lVar4 + 0x218),2,6);
        FUN_03d49da4(*(undefined8 *)(lVar4 + 0x218),3,6);
        return;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(lVar1 + 0x2f8) != uVar2);
  }
  return;
}

