
undefined8 FUN_033016f0(long param_1,int param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  undefined8 uVar13;
  int local_34;
  
  uVar3 = *(uint *)(param_1 + 0x1050);
  uVar4 = (ulong)uVar3;
  iVar9 = 0x12;
  switch(uVar4) {
  case 0:
  case 3:
    local_34 = *(int *)(param_1 + 0x1020);
    puVar7 = (undefined8 *)&DAT_05731f10;
    break;
  case 1:
    goto switchD_03301738_caseD_1;
  case 2:
    iVar9 = *(int *)(param_1 + 0x1024) + 0x12;
    if (2 < *(int *)(param_1 + 0x1024) - 2U) {
      iVar9 = 0x13;
    }
    goto switchD_03301738_caseD_1;
  case 4:
    local_34 = *(int *)(param_1 + 0x1028);
    puVar7 = &DAT_05731fb4;
    break;
  case 5:
    bVar1 = *(int *)(param_1 + 0x102c) == 2;
    iVar6 = 0x17;
    goto LAB_033017dc;
  case 6:
    bVar1 = *(int *)(param_1 + 0x1030) == 2;
    iVar6 = 0x18;
    goto LAB_033017dc;
  case 7:
    bVar1 = *(int *)(param_1 + 0x1034) == 2;
    iVar6 = 0x19;
LAB_033017dc:
    iVar9 = 0x11;
    if (!bVar1) {
      iVar9 = iVar6;
    }
    goto switchD_03301738_caseD_1;
  case 8:
  case 9:
    local_34 = *(int *)(param_1 + 0x1038);
    puVar7 = &DAT_05731f5c;
    break;
  default:
    iVar9 = DAT_05731f54;
    goto switchD_03301738_caseD_1;
  }
  iVar9 = *(int *)((long)puVar7 + (long)local_34 * 4);
switchD_03301738_caseD_1:
  if (param_2 == iVar9) {
    uVar13 = 0;
  }
  else {
    if ((((*(long *)(param_1 + 0x6e0) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x6e0) + 8), lVar8 == 0)) ||
        (lVar8 = *(long *)(lVar8 + 0x310), lVar8 == 0)) ||
       (*(char *)(lVar8 + 0x177c) == '\0' && *(long *)(lVar8 + 0xdf8) == 0)) {
      uVar13 = 0;
    }
    else {
      bVar5 = 0;
      lVar10 = 0x300;
      do {
        if (*(long *)(*(long *)(lVar8 + lVar10) + 0x428) ==
            *(long *)(*(long *)(*(long *)(lVar8 + 0x3a8) + 0x18) + 0x18)) {
          lVar12 = *(long *)(*(long *)(lVar8 + lVar10) + 0x420);
          bVar11 = 0;
          if (lVar12 != 0) {
            bVar11 = *(byte *)(lVar12 + 0x148) & 1;
          }
          bVar5 = bVar11 | bVar5;
        }
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x398);
      if (bVar5 != 0) {
        FUN_03360ed0();
        uVar4 = (ulong)*(uint *)(param_1 + 0x1050);
      }
      uVar13 = 1;
      uVar3 = (uint)uVar4;
    }
    if (uVar3 < 10) {
                    /* WARNING: Could not recover jumptable at 0x033018a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)(&UNK_033018ac + (ulong)(byte)(&DAT_0418d1e7)[uVar4] * 4))();
      return uVar13;
    }
    if (*(long *)(*(long *)(param_1 + 0x6e0) + 8) != 0) {
      FUN_0332065c();
    }
    FUN_033014cc(param_1);
    if (*(long *)(param_1 + 0x17f8) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x17f8) + 0x16d9) = 0;
    }
  }
  FUN_033008cc(param_1,param_2,1,0);
  lVar8 = DAT_05355a60;
  if (*(long *)(DAT_05355a60 + 0xbf8) != 0) {
    FUN_033489f0();
  }
  if (*(long *)(lVar8 + 0x30) != 0) {
    FUN_03351c40();
  }
  FUN_032fbc30(lVar8);
  if ((*(long *)(param_1 + 0x6e0) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x6e0) + 8), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0xc0))(plVar2,param_3 & 1);
  }
  return uVar13;
}

