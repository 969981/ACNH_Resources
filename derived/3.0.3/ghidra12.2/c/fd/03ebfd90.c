
void FUN_03ebfd90(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                      (*(long **)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x10));
    lVar3 = **(long **)(param_1 + 0xb8);
    if (lVar3 != 0) {
      uVar6 = (uint)*(ushort *)(param_2 + 10) | iVar2 << 0x10;
      do {
        if (uVar6 < *(uint *)(lVar3 + 0x20)) {
          plVar4 = (long *)(lVar3 + 8);
        }
        else {
          if (uVar6 <= *(uint *)(lVar3 + 0x20)) {
            if ((*(long *)(lVar3 + 0x30) != 0) && (uVar6 = *(uint *)(lVar3 + 0x28), 0 < (int)uVar6))
            {
              uVar5 = 0;
              do {
                uVar1 = uVar5;
                if (uVar6 <= uVar5) {
                  uVar1 = 0;
                }
                uVar5 = uVar5 + 1;
                *(undefined4 *)(*(long *)(lVar3 + 0x30) + (ulong)uVar1 * 4) = 0x7f800000;
                uVar6 = *(uint *)(lVar3 + 0x28);
              } while ((int)uVar5 < (int)uVar6);
            }
            if (*(long *)(lVar3 + 0x48) == 0) {
              return;
            }
            uVar6 = *(uint *)(lVar3 + 0x40);
            if ((int)uVar6 < 1) {
              return;
            }
            uVar5 = 0;
            do {
              uVar1 = uVar5;
              if (uVar6 <= uVar5) {
                uVar1 = 0;
              }
              uVar5 = uVar5 + 1;
              *(undefined4 *)(*(long *)(lVar3 + 0x48) + (ulong)uVar1 * 4) = 0x7f800000;
              uVar6 = *(uint *)(lVar3 + 0x40);
            } while ((int)uVar5 < (int)uVar6);
            return;
          }
          plVar4 = (long *)(lVar3 + 0x10);
        }
        lVar3 = *plVar4;
      } while (lVar3 != 0);
    }
  }
  return;
}

