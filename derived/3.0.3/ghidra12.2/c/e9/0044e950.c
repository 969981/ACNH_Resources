
long FUN_0044e950(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  uint *puVar8;
  int local_34;
  
  lVar5 = *param_1;
  local_34 = param_3;
  lVar3 = FUN_00450de0((long *)(lVar5 + 0xa0),&local_34);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar5 + 0xa0);
    if (lVar5 + (long)*(int *)(lVar3 + 4) * 0x18 != 0) {
      lVar5 = lVar5 + (long)*(int *)(lVar3 + 4) * 0x18;
      iVar1 = *(int *)(lVar5 + 0x10);
      if (iVar1 != 0) {
        plVar7 = *(long **)(lVar5 + 8);
        lVar3 = (long)iVar1 << 3;
        do {
          iVar1 = FUN_00428eb0(*plVar7,param_2);
          if (iVar1 == 0) {
            return *plVar7;
          }
          plVar7 = plVar7 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
  }
  lVar3 = FUN_00446eb0(param_2);
  if (lVar3 != 0) {
    iVar1 = FUN_004514d0(*param_1 + 0x58,lVar3);
    if (iVar1 == local_34) {
      lVar5 = *param_1;
      plVar7 = (long *)(lVar5 + 0xa0);
      uVar2 = FUN_00450e60(plVar7,&local_34);
      if (*(uint *)(lVar5 + 0xa8) == uVar2) {
        uVar4 = uVar2;
        if ((*(uint *)(lVar5 + 0xac) & 0x3fffffff) == uVar2) {
          FUN_00426990(PTR_DAT_048607b8,plVar7,0x18);
          uVar4 = *(uint *)(lVar5 + 0xa8);
        }
        piVar6 = (int *)(*(long *)(lVar5 + 0xa0) + (long)(int)uVar4 * 0x18);
        *piVar6 = local_34;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = -0x80000000;
        *(uint *)(lVar5 + 0xa8) = uVar4 + 1;
      }
      lVar5 = *plVar7 + (long)(int)uVar2 * 0x18;
      puVar8 = (uint *)(lVar5 + 0x10);
      uVar2 = *puVar8;
      if (uVar2 == (*(uint *)(lVar5 + 0x14) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,(long *)(lVar5 + 8),8);
        uVar2 = *puVar8;
      }
      *(long *)(*(long *)(lVar5 + 8) + (long)(int)uVar2 * 8) = lVar3;
      *puVar8 = uVar2 + 1;
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}

