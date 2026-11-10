
undefined8 FUN_00333430(long param_1,undefined8 param_2,long *param_3,long param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_4;
  lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x10);
  *(long *)(param_1 + 0x20) = lVar6;
  uVar3 = *(ushort *)(lVar6 + 0xe8);
  *(uint *)(param_1 + 0x30) = (uint)uVar3;
  lVar6 = (**(code **)(*param_3 + 0x10))(param_3,(ulong)uVar3 * 0x90,0x80);
  uVar5 = 0;
  if (lVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 == 0) {
      *(long *)(param_1 + 0x28) = lVar6;
    }
    else {
      lVar7 = 0;
      do {
        FUN_003341ac(lVar6 + lVar7 + 0x10);
        FUN_003341ac(lVar6 + lVar7 + 0x4d);
        lVar7 = lVar7 + 0x90;
      } while ((long)iVar4 * 0x90 != lVar7);
      *(long *)(param_1 + 0x28) = lVar6;
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar7 = 0;
        lVar6 = 0;
        do {
          FUN_003352d4(*(long *)(param_1 + 0x28) + lVar7);
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x90;
        } while (lVar6 < *(int *)(param_1 + 0x30));
        if ((0 < *(int *)(param_1 + 0x30)) && ((param_5 & 1) == 0)) {
          lVar8 = 0;
          lVar7 = 0;
          lVar6 = 0;
          do {
            lVar2 = *(long *)(param_1 + 0x28);
            lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x88) + lVar8;
            FUN_0039fb88(lVar1,*(undefined8 *)(param_1 + 0x10));
            uVar5 = FUN_0039fc8c(lVar1);
            FUN_003352dc(lVar2 + lVar7,uVar5);
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 0x90;
            lVar8 = lVar8 + 0x40;
          } while (lVar6 < *(int *)(param_1 + 0x30));
        }
      }
    }
    uVar5 = 1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return uVar5;
}

