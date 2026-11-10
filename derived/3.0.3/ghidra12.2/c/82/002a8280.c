
void FUN_002a8280(long *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  
  uVar7 = (**(code **)(*param_1 + 0x80))();
  puVar5 = PTR_DAT_04bc1510;
  if ((uVar7 & 1) != 0) {
    FUN_002abe30(param_1 + 7);
    return;
  }
  plVar1 = param_1 + 7;
LAB_002a82f4:
  do {
    lVar8 = FUN_002a925c(param_1[6],*(undefined4 *)((long)param_1 + 0xc4));
    if (*(char *)(lVar8 + 0x658) == '\0') {
      FUN_002abe30(plVar1);
      if (*plVar1 != 0) {
        uVar7 = (**(code **)(*param_1 + 0x90))(param_1);
        if ((uVar7 & 1) != 0) goto LAB_002a83e4;
        goto LAB_002a82f4;
      }
LAB_002a82d4:
      *(int *)((long)param_1 + 0xc4) = *(int *)((long)param_1 + 0xc4) + 1;
      *(undefined4 *)(param_1 + 0x19) = 0;
      uVar7 = (**(code **)(*param_1 + 0x80))(param_1);
    }
    else {
      uVar2 = *(uint *)(lVar8 + 0x5f8);
      uVar4 = (uVar2 - *(byte *)(lVar8 + 0x1a)) - 0x20;
      bVar6 = uVar2 < *(byte *)(lVar8 + 0x1a) + 0x20;
      if ((!bVar6 && *(uint *)(param_1 + 0x19) <= uVar4) &&
          (bVar6 || uVar4 != *(uint *)(param_1 + 0x19))) {
        FUN_002abaa0(plVar1,lVar8);
        lVar10 = *plVar1;
      }
      else {
        FUN_002abe30();
        lVar10 = *plVar1;
      }
      if (lVar10 == 0) goto LAB_002a82d4;
      bVar3 = *(byte *)(param_1 + 0xc);
      iVar11 = 1;
      if ((bVar3 & 1) != 0) {
        iVar11 = 2;
      }
      if ((bVar3 & 2) != 0) {
        iVar11 = iVar11 + 2;
      }
      if ((bVar3 & 4) != 0) {
        iVar11 = iVar11 + 4;
      }
      if ((bVar3 & 8) != 0) {
        iVar11 = iVar11 + 8;
      }
      *(uint *)(param_1 + 0x19) =
           (int)param_1[0x19] +
           (((uint)*(ushort *)((long)param_1 + 0x62) + iVar11) - 1 & 0xfffffffc) + 4;
      uVar7 = (**(code **)(*param_1 + 0x90))(param_1);
      if ((uVar7 & 1) == 0) goto LAB_002a82f4;
LAB_002a83e4:
      if (*(long *)puVar5 == 0) goto LAB_002a82f4;
      if ((*(int *)(lVar8 + 0x10) != 0) || (*(char *)(lVar8 + 0x1a) != '\0')) {
        if ((*(byte *)((long)param_1 + 0x61) >> 3 & 1) == 0) {
          uVar7 = (**(code **)(*param_1 + 0xb0))(param_1,param_1 + 0xf);
          if ((uVar7 & 1) == 0) goto LAB_002a82f4;
          uVar7 = FUN_002abe54(plVar1);
        }
        else {
          uVar9 = FUN_002abe54(plVar1);
          uVar7 = (**(code **)(*param_1 + 0xb8))(param_1,uVar9);
          uVar7 = uVar7 & 1;
        }
        if (uVar7 == 0) goto LAB_002a82f4;
      }
      uVar7 = (**(code **)(*param_1 + 0xa8))(param_1,plVar1);
    }
    if ((uVar7 & 1) != 0) {
      return;
    }
  } while( true );
}

