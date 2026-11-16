
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02917ecc(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,byte *param_5
            ,undefined4 *param_6)

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
  if ((*DAT_055cdb40 == '\0') &&
     (uVar8 = FUN_02930ce0(&DAT_055c10d0,param_1,param_5), lVar6 = DAT_05694df8, (uVar8 & 1) != 0))
  {
    DAT_055c1174._0_4_ = *param_2;
    DAT_055c1174._4_4_ = param_2[1];
    DAT_055c117c = param_2[2];
    DAT_055c1180 = *param_3;
    DAT_055c1184 = *param_4;
    DAT_055c1188 = *param_5;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    if (DAT_05694df8 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      iVar7 = FUN_006bd550(param_1[1],0);
      uVar1 = param_6[1];
      if (iVar7 == 0x55b5d9de) {
        uVar1 = 1;
      }
      lVar10 = *(long *)(lVar6 + 8);
      if ((lVar10 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
        uVar11 = param_6[3];
        uVar12 = param_6[4];
        uVar2 = *param_6;
        uVar3 = param_6[2];
        uVar4 = *(undefined1 *)(param_6 + 5);
        uVar5 = *(undefined1 *)((long)param_6 + 0x15);
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
  else {
    uVar9 = 0;
  }
  return uVar9;
}

