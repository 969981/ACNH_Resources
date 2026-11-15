
undefined8 FUN_01df33d0(long *param_1,long *param_2,int param_3)

{
  uint uVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  undefined2 *puVar6;
  long lVar7;
  uint uVar8;
  short *psVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_64 [4];
  
  if (-1 < param_3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar10 = param_1[1];
    lVar7 = param_1[2];
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar5 = FUN_038d4d80(auStack_64,lVar10,(int)lVar7,param_2[1],param_3);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      puVar4 = PTR_DAT_04bb2da0;
      lVar7 = 0;
      do {
        if (*(short *)(param_1[1] + lVar7 * 2) == 0) {
LAB_01df34d4:
          iVar5 = (int)lVar7 + 1;
          if ((int)lVar7 == -1) {
            return 1;
          }
          goto LAB_01df34ec;
        }
        lVar10 = param_1[1] + lVar7 * 2;
        if (*(short *)(lVar10 + 2) == 0) {
          lVar7 = lVar7 + 1;
          goto LAB_01df34d4;
        }
        if (*(short *)(lVar10 + 4) == 0) {
          iVar5 = (int)lVar7 + 3;
          if ((int)lVar7 == -3) {
            return 1;
          }
          goto LAB_01df34ec;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      iVar5 = 1;
LAB_01df34ec:
      uVar12 = 0;
      uVar11 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1);
        puVar6 = (undefined2 *)param_1[1];
        lVar7 = 0;
        psVar9 = puVar6 + 1;
        do {
          if (psVar9[-1] == 0) goto LAB_01df3574;
          if (*psVar9 == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_01df3574;
          }
          if (psVar9[1] == 0) {
            lVar7 = lVar7 + 2;
            goto LAB_01df3574;
          }
          lVar7 = lVar7 + 3;
          psVar9 = psVar9 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_01df3574:
        puVar2 = (ushort *)puVar4;
        if ((int)uVar12 <= (int)lVar7 && -1 < (int)uVar12) {
          puVar2 = puVar6 + uVar11;
        }
        uVar3 = *puVar2;
        uVar1 = uVar3 & 0xfffe;
        if (uVar1 == 0xe) goto LAB_01df3450;
        uVar8 = (uint)uVar3;
        if ((((uVar1 == 0xfe0e || (uVar8 & 0xf800) == 0xd800) || (uVar8 == 0x7f)) ||
            (uVar3 - 1 < 0x1f && uVar8 - 0xb < 0xfffffffe)) ||
           ((uVar8 == 0xfeff || (uVar3 == 0xfffe)))) goto LAB_01df3450;
        uVar12 = uVar11 + 1;
        uVar11 = uVar12 & 0xffffffff;
        if (iVar5 == (int)uVar12) {
          return 1;
        }
      } while( true );
    }
  }
  puVar6 = (undefined2 *)param_1[1];
LAB_01df3450:
  *puVar6 = 0;
  return 0;
}

