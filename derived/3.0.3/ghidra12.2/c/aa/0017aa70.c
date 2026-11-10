
undefined8
FUN_0017aa70(long param_1,ulong param_2,short param_3,short param_4,uint param_5,long param_6)

{
  uint uVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  uVar8 = (ulong)param_5;
  if (param_4 == 0x1c) {
    if (param_3 != 0x10) {
      return 6;
    }
    if (*(int *)(param_6 + 4) < 0x18) {
      lVar7 = param_6 + (long)*(int *)(param_6 + 4) * 0x14;
      *(undefined4 *)(lVar7 + 8) = 0x1c;
      uVar5 = *(undefined8 *)(param_1 + (int)param_5);
      *(undefined8 *)(lVar7 + 0x14) = ((undefined8 *)(param_1 + (int)param_5))[1];
      *(undefined8 *)(lVar7 + 0xc) = uVar5;
      iVar6 = *(int *)(param_6 + 4);
LAB_0017ab28:
      *(int *)(param_6 + 4) = iVar6 + 1;
      return 0;
    }
  }
  else if (param_4 == 5) {
    iVar6 = *(int *)(param_6 + 0x1e8);
    if (iVar6 != 4) {
      iVar10 = -0x80;
      *(int *)(param_6 + 0x1e8) = iVar6 + 1;
      plVar2 = (long *)(param_6 + (long)iVar6 * 0x18 + 0x1f0);
      do {
        if (param_2 <= uVar8) {
          return 2;
        }
        bVar3 = *(byte *)(param_1 + uVar8);
        uVar9 = (uint)bVar3;
        if ((bVar3 & 0xc0) == 0) {
          if (bVar3 == 0) {
            return 0;
          }
          if ((*plVar2 != 0) && (uVar5 = FUN_0017ac2c(plVar2,&DAT_0407ec0b,1), (int)uVar5 != 0)) {
            return uVar5;
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)(uVar1 + uVar9);
          if (param_2 < uVar8) {
            return 1;
          }
          uVar5 = FUN_0017ac2c(plVar2,param_1 + (ulong)uVar1,bVar3);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        else {
          if ((bVar3 & 0xc0) != 0xc0) {
            return 1;
          }
          uVar8 = (ulong)((int)uVar8 + 1);
          if (param_2 <= uVar8) {
            return 2;
          }
          if (uVar9 == 0) {
            return 0;
          }
          uVar8 = (ulong)((uint)*(byte *)(param_1 + uVar8) | (uVar9 & 0x3f) << 8);
        }
        bVar4 = iVar10 == -1;
        iVar10 = iVar10 + 1;
        if (bVar4) {
          return 3;
        }
      } while( true );
    }
  }
  else if (param_4 == 1) {
    if (param_3 != 4) {
      return 6;
    }
    iVar6 = *(int *)(param_6 + 4);
    if (iVar6 < 0x18) {
      lVar7 = param_6 + (long)iVar6 * 0x14;
      *(undefined4 *)(lVar7 + 8) = 1;
      *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(param_1 + (int)param_5);
      goto LAB_0017ab28;
    }
  }
  return 0;
}

