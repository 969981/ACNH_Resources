
long FUN_03ecfff0(long param_1,long param_2,long param_3,uint param_4,undefined1 *param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar9 = 0;
  lVar7 = 0;
  do {
    plVar2 = *(long **)(param_3 + uVar9 * 8);
    if (plVar2 != (long *)0x0) {
      uVar3 = uVar9;
      if ((uVar9 & 0xfffffffc) != 0) {
        uVar3 = 0;
      }
      lVar8 = *(long *)(param_3 + 0x28 + uVar3 * 8);
      *(undefined4 *)(lVar8 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
      if ((param_4 & 1) != 0) {
        *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(param_3 + 0x48);
      }
      if ((*(ushort *)(param_3 + 0x7a) >> 3 & 1) != 0) {
        *(ushort *)(lVar8 + 0x7a) = *(ushort *)(lVar8 + 0x7a) | 8;
      }
      *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(param_3 + 0x68);
      lVar5 = *(long *)(param_1 + 0x10);
      iVar6 = *(int *)(*(long *)(lVar5 + 8) + 0x10);
      uVar4 = (uint)*(ushort *)((long)plVar2 + 10);
      if (*(int *)(lVar5 + 0x38) + -1 <= iVar6 || iVar6 + 1U != uVar4) {
        uVar3 = (ulong)*(byte *)(*(long *)(lVar5 + 0x18) + (ulong)uVar4 * 0x24 + 2);
        if (uVar3 != 0) {
          iVar6 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)uVar4 * 0x24 + 0x10);
          do {
            iVar1 = *(int *)(*(long *)(lVar5 + 0x48) + (long)iVar6 * 4);
            if (*(short *)(*(long *)(lVar5 + 0x50) + (long)iVar1 * 0x18) == 1) {
              *(long *)(lVar8 + 0x68) =
                   *(long *)(lVar5 + 8) +
                   (long)*(int *)(*(long *)(lVar5 + 0x50) + (long)iVar1 * 0x18 + 4);
              break;
            }
            iVar6 = iVar6 + 1;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,lVar8);
      if ((*(ushort *)(lVar8 + 0x7a) >> 5 & 1) == 0) {
        if ((param_5 != (undefined1 *)0x0) && ((*(ushort *)(lVar8 + 0x7a) & 1) == 0)) {
          *param_5 = 0;
        }
        lVar7 = lVar8;
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 4) {
      return lVar7;
    }
  } while( true );
}

