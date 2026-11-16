
undefined8 FUN_02917d90(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_055c9188 & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x18))();
  iVar8 = FUN_006bd550(param_1[1],0);
  puVar11 = DAT_055c1b60;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    do {
      if (*(int *)(puVar11 + -1) == iVar8) {
        uVar9 = FUN_02930ce0(&DAT_055c10d0,param_1,param_2);
        lVar7 = DAT_05694df8;
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        if (DAT_05694df8 != 0) {
          (**(code **)(*param_1 + 0x18))(param_1);
          iVar8 = FUN_006bd550(param_1[1],0);
          uVar2 = param_3[1];
          if (iVar8 == 0x55b5d9de) {
            uVar2 = 1;
          }
          lVar10 = *(long *)(lVar7 + 8);
          if ((lVar10 != 0) && (*(int *)(lVar7 + 0x10) == 0)) {
            uVar12 = param_3[3];
            uVar13 = param_3[4];
            uVar3 = *param_3;
            uVar4 = param_3[2];
            uVar5 = *(undefined1 *)(param_3 + 5);
            uVar6 = *(undefined1 *)((long)param_3 + 0x15);
            *(undefined4 *)(lVar10 + 0x33c) = uVar2;
            *(undefined4 *)(lVar10 + 0x338) = uVar3;
            *(undefined4 *)(lVar10 + 0x340) = uVar4;
            *(undefined4 *)(lVar10 + 0x348) = uVar13;
            *(undefined1 *)(lVar10 + 0x34c) = uVar5;
            *(undefined1 *)(lVar10 + 0x34d) = uVar6;
            *(undefined4 *)(lVar10 + 0x344) = uVar12;
            return 1;
          }
        }
        return 1;
      }
      puVar1 = puVar11 + 1;
      puVar11 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
  }
  return 0;
}

