
void FUN_039d8430(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 == 0) || (*(long *)(param_1[0x1b] + 0x60) == param_2)) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
    uVar4 = *(undefined8 *)(DAT_05ae92f0 + 0x58);
    iVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        FUN_03ad4e60(param_1,iVar1,uVar4);
        iVar1 = iVar1 + 1;
        iVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
      } while (iVar1 < iVar2);
    }
    (**(code **)(*param_1 + 0x278))(param_1);
    *(byte *)((long)param_1 + 0x2e1) =
         *(byte *)((long)param_1 + 0x2e1) & 0xf |
         (byte)(~(-1 << (ulong)(*(byte *)((long)param_1 + 0x2e2) & 0x1f)) << 4);
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x68) = *(byte *)(lVar3 + 0x68) & 0xf7;
      iVar1 = (**(code **)(**(long **)(lVar3 + 8) + 0xb8))();
      if (0 < iVar1) {
        lVar5 = 0;
        lVar6 = 10;
        do {
          if ((*(byte *)((*(long **)(lVar3 + 8))[10] + lVar6) & 7) - 2 < 3) {
            *(byte *)(lVar3 + 0x68) = *(byte *)(lVar3 + 0x68) | 8;
            return;
          }
          lVar5 = lVar5 + 1;
          iVar1 = (**(code **)(**(long **)(lVar3 + 8) + 0xb8))();
          lVar6 = lVar6 + 0xc;
        } while (lVar5 < iVar1);
      }
    }
  }
  return;
}

