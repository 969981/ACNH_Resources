
void FUN_004449c0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *local_468;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined1 auStack_450 [1024];
  undefined1 auStack_48 [8];
  
  lVar2 = FUN_0043c4e0(DAT_04c6f438);
  plVar3 = (long *)FUN_0043c4e0(DAT_04c6f440);
  if (((*(int *)((long)param_1 + 0xc) != 0) && (lVar4 = FUN_00445c70(&DAT_04c6f470), lVar4 != 0)) &&
     (-1 < (int)(*(uint *)(lVar4 + 4) | ((int)lVar4 - (int)DAT_04c6f480) * 0x20000000))) {
    return;
  }
  FUN_0043a050(auStack_48);
  local_460 = (undefined1 *)0x0;
  local_458 = (undefined1 *)0x0;
  local_468 = (undefined1 *)0x0;
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    iVar1 = FUN_00439fd0(auStack_48,auStack_450,0x80,1,0);
    local_460 = auStack_450 + (long)iVar1 * 8;
    param_1[7] = &local_468;
    local_468 = auStack_450;
    local_458 = auStack_48;
  }
  if (plVar3 != (long *)0x0) {
    if (lVar2 != 0) {
      FUN_00444dd0(lVar2,plVar3,*(undefined1 *)(param_1 + 1));
    }
    iVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    if (iVar1 == 1) goto LAB_00444b94;
  }
  plVar3 = (long *)*param_1;
  if ((int)plVar3[1] != 0) {
    uVar5 = (ulong)((int)plVar3[1] + -1);
    if (lVar2 == 0) {
      uVar7 = ~uVar5;
      lVar2 = uVar5 << 4;
      do {
        plVar6 = *(long **)(*plVar3 + lVar2);
        if (((plVar6 != (long *)0x0) && (*(byte *)(param_1 + 1) <= *(byte *)(*plVar3 + lVar2 + 8)))
           && (iVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1), iVar1 == 1)) break;
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + -0x10;
      } while (uVar7 != 0);
    }
    else {
      uVar7 = ~uVar5;
      lVar4 = uVar5 << 4;
      do {
        plVar6 = *(long **)(*plVar3 + lVar4);
        if ((plVar6 != (long *)0x0) && (*(byte *)(param_1 + 1) <= *(byte *)(*plVar3 + lVar4 + 8))) {
          FUN_00444dd0(lVar2,plVar6);
          iVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
          if (iVar1 == 1) break;
        }
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + -0x10;
      } while (uVar7 != 0);
    }
  }
LAB_00444b94:
  FUN_0043a070(auStack_48);
  return;
}

