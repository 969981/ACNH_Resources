
void FUN_03be4980(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 == 0) {
    return;
  }
  plVar4 = *(long **)PTR_DAT_04bd23e0;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((param_1[3] != 0) && (DataMemoryBarrier(2,1), *(char *)(param_1[3] + 0xb0) != '\0')) {
    DataMemoryBarrier(2,1);
    lVar5 = param_1[3];
    lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_03be4b40(lVar1,lVar5,*(long *)(lVar1 + 8) + 0x530,param_2);
    lVar1 = param_1[3];
    lVar5 = *(long *)(lVar1 + 8);
    uVar3 = (ulong)*(uint *)(lVar5 + 8);
    if (*(uint *)(lVar5 + 8) != 0) {
      lVar8 = *(long *)(lVar1 + 0x28);
      uVar7 = 0;
      lVar6 = lVar8;
      do {
        if (((int)*(uint *)(lVar6 + 0xc) < 0) ||
           ((*(ushort *)(lVar8 + (ulong)*(uint *)(lVar6 + 0xc) * 0x20 + 6) & 1) == 0)) {
          FUN_03bf60c0(uVar7 & 0xffffffff,lVar6,lVar1,lVar5);
          uVar3 = (ulong)*(uint *)(lVar5 + 8);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar7 < uVar3);
    }
  }
  if ((param_1[4] != 0) && (DataMemoryBarrier(2,1), *(char *)(param_1[4] + 0xb0) != '\0')) {
    DataMemoryBarrier(2,1);
    lVar5 = param_1[4];
    lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (*(long *)(lVar1 + 200) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 200) + 0xd8);
    }
    FUN_03be4b40(lVar1,lVar5,uVar2,param_2);
    lVar1 = param_1[4];
    lVar5 = *(long *)(lVar1 + 8);
    uVar3 = (ulong)*(uint *)(lVar5 + 8);
    if (*(uint *)(lVar5 + 8) != 0) {
      lVar8 = *(long *)(lVar1 + 0x28);
      uVar7 = 0;
      lVar6 = lVar8;
      do {
        if (((int)*(uint *)(lVar6 + 0xc) < 0) ||
           ((*(ushort *)(lVar8 + (ulong)*(uint *)(lVar6 + 0xc) * 0x20 + 6) & 1) == 0)) {
          FUN_03bf60c0(uVar7 & 0xffffffff,lVar6,lVar1,lVar5);
          uVar3 = (ulong)*(uint *)(lVar5 + 8);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar7 < uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03be4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}

