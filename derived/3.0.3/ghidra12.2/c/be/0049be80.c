
void FUN_0049be80(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 local_70;
  undefined1 local_68;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  FUN_0043d3a0(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  FUN_0043d3a0(param_1 + 6);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00450fe0(param_1 + 0xd,0xffffffffffffffff);
  local_70 = 0;
  uVar3 = FUN_0049cc10(param_1,&local_70);
  if (*(uint *)(param_1 + 1) == uVar3) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar3) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar3 * 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(uint *)(param_1 + 1) = uVar3 + 1;
  }
  uVar7 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  iVar6 = (int)uVar7;
  iVar8 = iVar6;
  if (iVar6 < 2) {
    iVar8 = 1;
  }
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) < iVar8) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,iVar8,8,param_1[8],(int)param_1[9],
                         (uint *)((long)param_1 + 0x4c));
    param_1[8] = lVar4;
  }
  uVar3 = *(uint *)(param_1 + 9);
  puVar2 = (uint *)((long)param_1 + 0x2c);
  if ((int)uVar3 < iVar8) {
    *(int *)(param_1 + 9) = iVar8;
    memset((void *)(param_1[8] + (long)(int)uVar3 * 8),0,(ulong)(iVar8 + ~uVar3) * 8 + 8);
    uVar3 = *puVar2;
  }
  else {
    if (iVar8 < (int)uVar3) {
      *(int *)(param_1 + 9) = iVar8;
    }
    uVar3 = *puVar2;
  }
  if ((int)(uVar3 & 0x3fffffff) < iVar6) {
    lVar4 = FUN_00426720(PTR_DAT_048607b8,uVar7 & 0xffffffff,0x20,param_1[4],(int)param_1[5],puVar2)
    ;
    param_1[4] = lVar4;
  }
  if ((int)param_1[7] * 2 < (iVar6 + 1) * 3) {
    FUN_0043d3c0(param_1 + 6);
  }
  if (1 < uVar7) {
    uVar9 = 1;
    do {
      while( true ) {
        iVar8 = (int)uVar9;
        plVar5 = (long *)(param_2 + (long)iVar8 * 0x18);
        if (*plVar5 != 0) break;
LAB_0049c0ac:
        uVar9 = (ulong)(iVar8 + 1);
        if (uVar7 <= uVar9) {
          return;
        }
      }
      lVar4 = (long)iVar8;
      pcVar10 = (char *)(param_2 + lVar4 * 0x18 + 0x14);
      local_68 = *pcVar10 != '\0';
      if ((bool)local_68) {
        local_70._4_4_ = *(undefined4 *)(param_2 + lVar4 * 0x18 + 0x10);
      }
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      FUN_0049cab0(param_1 + 4,plVar5,&local_70);
      if (*pcVar10 != '\0') goto LAB_0049c0ac;
      *(undefined1 **)(param_1[8] + lVar4 * 8) = &DAT_04c161d0;
      uVar9 = (ulong)(iVar8 + 1);
    } while (uVar9 < uVar7);
  }
  return;
}

