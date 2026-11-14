
undefined8 FUN_01dbdbec(long *param_1,byte *param_2,byte param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  byte local_44 [4];
  int local_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  if ((((*param_1 != 0) && (param_1[2] != 0)) && (local_44[0] = *param_2, local_44[0] < 8)) &&
     ((uVar4 = FUN_007b36c8(&local_40,local_44), (uVar4 & 1) != 0 &&
      (**(long **)(DAT_053719b8 + 8) == CONCAT44(uStack_3c,local_40) &&
       (*(long **)(DAT_053719b8 + 8))[1] == lStack_38)))) {
    iVar2 = *(int *)(*param_1 + 0x508);
    cVar3 = *(char *)(*param_1 + 0x55d);
    if ((param_3 & 1) == 0) {
      if ((iVar2 == 0) || (cVar3 == '\0')) goto LAB_01dbdcb8;
    }
    else if ((iVar2 == 0) || (cVar3 != '\0')) {
LAB_01dbdcb8:
      if (iVar2 != 0) {
        uVar5 = 1;
        if (param_4 == (undefined8 *)0x0) {
          return 1;
        }
        param_4[1] = 1;
        goto LAB_01dbdc74;
      }
      lVar10 = param_1[2];
      if (*(int *)(lVar10 + 0x380) == 0) {
        if (*(int *)(*DAT_0537d558 + 0x508) == 0) {
          *(byte *)(*DAT_0537d558 + 0x55d) = param_3 & 1;
        }
        plVar1 = (long *)(lVar10 + 0x3f0);
        *(undefined4 *)(lVar10 + 0xaa0) = 0;
        if (param_4 != (undefined8 *)0x0) {
          *plVar1 = (long)param_4;
          *param_4 = plVar1;
          lVar6 = *plVar1;
          *(undefined8 *)(lVar6 + 8) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
        }
        *(undefined4 *)(lVar10 + 0x3e0) = 3;
        local_40 = 1;
        FUN_03ebb160(lVar10 + 0x378,1);
        if (local_40 == *(int *)(lVar10 + 0x3e0)) {
          lVar6 = *(long *)(lVar10 + 0x3f0);
          if (*(int *)(lVar10 + 1000) == 0) {
            if (lVar6 == 0) goto LAB_01dbdd84;
            uVar7 = 0;
            uVar8 = 0;
            uVar9 = 1;
          }
          else {
            if (lVar6 == 0) goto LAB_01dbdd84;
            uVar7 = *(undefined4 *)(lVar10 + 1000);
            uVar9 = 0xffffffff;
            uVar8 = *(undefined4 *)(lVar10 + 0x3ec);
          }
          *(undefined4 *)(lVar6 + 8) = uVar9;
          *(undefined4 *)(lVar6 + 0xc) = uVar7;
          *(undefined4 *)(lVar6 + 0x10) = uVar8;
          *(undefined4 *)(lVar6 + 0x14) = 0;
          if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
            *(undefined8 *)*plVar1 = 0;
            *plVar1 = 0;
          }
        }
LAB_01dbdd84:
        *(undefined1 *)(param_1 + 0x12) = 0;
        return 1;
      }
    }
  }
  if (param_4 == (undefined8 *)0x0) {
    return 0;
  }
  uVar5 = 0;
  param_4[1] = 0x32ffffffff;
LAB_01dbdc74:
  param_4[2] = 0;
  return uVar5;
}

