
undefined8 FUN_03302ac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 0x17f8) != 0) && (uVar6 = FUN_032e65e0(), (uVar6 & 1) != 0)) {
    lVar7 = *(long *)(param_1 + 0x20);
    if ((lVar7 == param_1 + 0x38) || ((lVar7 == param_1 + 0xe0 || (lVar7 == param_1 + 0x230)))) {
      lVar8 = *(long *)(param_1 + 0x17f8);
      lVar7 = 0;
      do {
        lVar1 = lVar8 + lVar7;
        lVar7 = lVar7 + 0x40;
        *(undefined1 *)(lVar1 + 0x6dc) = 0;
        *(undefined4 *)(lVar1 + 0x6e0) = 0;
        *(undefined8 *)(lVar1 + 0x6d4) = 0;
        *(undefined1 *)(lVar1 + 0x6ec) = 0;
        *(undefined8 *)(lVar1 + 0x6e4) = 0;
        *(undefined4 *)(lVar1 + 0x6f0) = 0;
        *(undefined8 *)(lVar1 + 0x6f4) = 0;
        *(undefined1 *)(lVar1 + 0x6fc) = 0;
        *(undefined4 *)(lVar1 + 0x700) = 0;
        *(undefined1 *)(lVar1 + 0x70c) = 0;
        *(undefined8 *)(lVar1 + 0x704) = 0;
        *(undefined4 *)(lVar1 + 0x710) = 0;
      } while (lVar7 != 0x1000);
    }
    else {
      if (*(char *)(param_1 + 0x16431) == '\0') {
        uVar5 = 0;
        switch(*(undefined4 *)(param_1 + 0x1050)) {
        case 0:
        case 3:
          iVar4 = FUN_03301290(param_1);
          uVar5 = FUN_033016f0(param_1,(&DAT_05731f10)[iVar4],1);
          *(int *)(param_1 + 0x1020) = iVar4;
          break;
        case 2:
          iVar4 = (**(code **)(*DAT_0572d470 + 0x18))();
          uVar3 = 3;
          if (iVar4 != 7) {
            uVar3 = 1;
          }
          uVar2 = 2;
          if (iVar4 != 4) {
            uVar2 = uVar3;
          }
          uVar5 = FUN_0330198c(param_1,uVar2);
          break;
        case 4:
          iVar4 = FUN_03301348(param_1);
          uVar5 = FUN_033016f0(param_1,*(undefined4 *)((long)&DAT_05731fb4 + (long)iVar4 * 4),1);
          *(int *)(param_1 + 0x1028) = iVar4;
          break;
        case 5:
          uVar5 = FUN_033016f0(param_1,0x17,1);
          *(undefined4 *)(param_1 + 0x102c) = 1;
          break;
        case 6:
          uVar5 = FUN_033016f0(param_1,0x18,1);
          *(undefined4 *)(param_1 + 0x1030) = 1;
          break;
        case 7:
          uVar5 = FUN_033016f0(param_1,0x19,1);
          *(undefined4 *)(param_1 + 0x1034) = 1;
          break;
        case 8:
        case 9:
          iVar4 = FUN_033013f8(param_1);
          uVar5 = FUN_033016f0(param_1,*(undefined4 *)((long)&DAT_05731f5c + (long)iVar4 * 4),1);
          *(int *)(param_1 + 0x1038) = iVar4;
        }
        FUN_032e6374(*(undefined8 *)(param_1 + 0x17f8));
        FUN_032e6c50(*(undefined8 *)(param_1 + 0x17f8),uVar5 & 1);
        *(undefined1 *)(*(long *)(param_1 + 0x17f8) + 0x16d9) = 1;
        return 1;
      }
      lVar8 = *(long *)(param_1 + 0x17f8);
      lVar7 = 0;
      do {
        lVar1 = lVar8 + lVar7;
        lVar7 = lVar7 + 0x40;
        *(undefined1 *)(lVar1 + 0x6dc) = 0;
        *(undefined4 *)(lVar1 + 0x6e0) = 0;
        *(undefined8 *)(lVar1 + 0x6d4) = 0;
        *(undefined1 *)(lVar1 + 0x6ec) = 0;
        *(undefined8 *)(lVar1 + 0x6e4) = 0;
        *(undefined4 *)(lVar1 + 0x6f0) = 0;
        *(undefined8 *)(lVar1 + 0x6f4) = 0;
        *(undefined1 *)(lVar1 + 0x6fc) = 0;
        *(undefined4 *)(lVar1 + 0x700) = 0;
        *(undefined1 *)(lVar1 + 0x70c) = 0;
        *(undefined8 *)(lVar1 + 0x704) = 0;
        *(undefined4 *)(lVar1 + 0x710) = 0;
      } while (lVar7 != 0x1000);
    }
  }
  return 0;
}

