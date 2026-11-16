
undefined8 FUN_0291818c(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_055c9188 & 1) != 0) {
    return 0;
  }
  uVar8 = FUN_02931ca0(&DAT_055c10d0,param_1,param_2,param_3,0);
  lVar6 = DAT_05694df8;
  uVar9 = 0;
  if ((uVar8 & 1) != 0) {
    if (DAT_05694df8 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      iVar7 = FUN_006bd550(param_1[1],0);
      uVar1 = param_4[1];
      if (iVar7 == 0x55b5d9de) {
        uVar1 = 1;
      }
      lVar10 = *(long *)(lVar6 + 8);
      if ((lVar10 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
        uVar11 = param_4[3];
        uVar12 = param_4[4];
        uVar2 = *param_4;
        uVar3 = param_4[2];
        uVar4 = *(undefined1 *)(param_4 + 5);
        uVar5 = *(undefined1 *)((long)param_4 + 0x15);
        *(undefined4 *)(lVar10 + 0x33c) = uVar1;
        *(undefined4 *)(lVar10 + 0x338) = uVar2;
        *(undefined4 *)(lVar10 + 0x340) = uVar3;
        *(undefined4 *)(lVar10 + 0x348) = uVar12;
        *(undefined1 *)(lVar10 + 0x34c) = uVar4;
        *(undefined1 *)(lVar10 + 0x34d) = uVar5;
        *(undefined4 *)(lVar10 + 0x344) = uVar11;
        return 1;
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}

