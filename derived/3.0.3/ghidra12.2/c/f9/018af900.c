
void FUN_018af900(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  
  if (DAT_052d2598 != 0) {
    uVar3 = *(uint *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (0 < (int)uVar3) {
      uVar6 = (ulong)uVar3 & 3;
      uVar7 = 0;
      if (3 < uVar3) {
        do {
          lVar8 = uVar7 * 4;
          uVar7 = uVar7 + 4;
          *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar8) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar8 + 4) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar8 + 8) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar8 + 0xc) = 0xffffffff;
        } while (((ulong)uVar3 & 0xfffffffc) != uVar7);
      }
      if ((uVar3 & 3) != 0) {
        lVar8 = uVar7 << 2;
        do {
          uVar6 = uVar6 - 1;
          *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar8) = 0xffffffff;
          lVar8 = lVar8 + 4;
        } while (uVar6 != 0);
      }
    }
    if (0 < *(int *)(param_3 + 0x78)) {
      lVar8 = 0;
      do {
        puVar5 = (undefined2 *)
                 (**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x60) + lVar8 * 8) + 0x30) +
                             0xf0))();
        uVar4 = *puVar5;
        uVar7 = FUN_01a12390(DAT_052d2598,3,uVar4);
        if ((uVar7 & 1) != 0) {
          local_46 = 0;
          lVar1 = *(long *)(*(long *)(param_2 + 8) + 8);
          lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x10);
          local_44 = 0;
          local_48 = uVar4;
          FUN_0277d4ac(&local_48);
          uVar7 = FUN_027bf130(lVar2 + lVar1,&local_48);
          if ((uVar7 & 1) != 0) {
            uVar3 = *(uint *)(param_1 + 0x310);
            if (*(uint *)(param_1 + 0x300) <= uVar3) {
              uVar3 = 0;
            }
            *(int *)(*(long *)(param_1 + 0x308) + (long)(int)uVar3 * 4) = (int)lVar8;
            *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_3 + 0x78));
    }
  }
  return;
}

