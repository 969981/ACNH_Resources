
void FUN_028f6d80(undefined2 *param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  short *psVar7;
  short sVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined4 local_2010;
  short local_200c;
  undefined8 local_2008;
  undefined8 *local_2000;
  short *local_1ff8;
  short *local_1ff0;
  short local_1fe8 [4];
  long local_1fe0;
  undefined1 auStack_1fd8 [4032];
  undefined8 local_1018;
  undefined8 local_1010 [507];
  int local_34;
  
  local_2008 = 0;
  local_2000 = (undefined8 *)0x0;
  local_1ff8 = local_1fe8;
  lVar9 = 0;
  do {
    lVar2 = lVar9 + 0x10;
    plVar11 = (long *)((long)local_1fe8 + lVar9 + 8);
    *plVar11 = (long)(auStack_1fd8 + lVar9);
    *(long **)((long)local_1fe8 + lVar9) = plVar11;
    lVar9 = lVar2;
  } while (lVar2 != 0xfd0);
  local_1018 = 0;
  if (local_1010 != (undefined8 *)0x0) {
    local_2008 = 0x1fb00000000;
    local_2000 = local_1010;
  }
  local_2010 = 0xffffffff;
  local_34 = *param_2;
  if ((local_34 == 5) || (local_34 == 6)) {
    local_200c = -1;
  }
  else {
    local_200c = (short)local_34 * 0x400 + 0x400;
  }
  local_1ff0 = local_1ff8;
  FUN_028f6c40(param_1,&local_2008,&local_2010);
  psVar7 = local_1ff8;
  local_34 = *param_2;
  if ((local_34 == 5) || (local_34 == 6)) {
    sVar8 = -1;
  }
  else {
    sVar8 = (short)local_34 * 0x400 + 0x400;
  }
  iVar13 = (int)local_2008;
  if ((int)local_2008 < local_2008._4_4_) {
    if (local_1ff8 != (short *)0x0) {
      local_1ff8 = *(short **)local_1ff8;
    }
    *psVar7 = sVar8;
    if ((-1 < (int)local_2008) && ((int)local_2008 < local_2008._4_4_)) {
      if ((int)local_2008 != 0) {
        memmove(local_2000 + 1,local_2000,(long)(int)local_2008 << 3);
      }
      *local_2000 = psVar7;
      iVar13 = (int)local_2008 + 1;
      local_2008 = CONCAT44(local_2008._4_4_,iVar13);
    }
  }
  memset(param_1,0xff,0x3f6);
  if (iVar13 != 0) {
    uVar4 = (long)iVar13 - 1U & 0x1fffffffffffffff;
    uVar3 = uVar4 + 1;
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = 0;
      puVar12 = param_1;
      do {
        puVar6 = puVar12 + 1;
        puVar5 = puVar12;
        if (0x1fa < uVar10) {
          puVar5 = param_1;
        }
        puVar12 = puVar12 + 2;
        *puVar5 = *(undefined2 *)*local_2000;
        uVar4 = uVar10 + 1;
        uVar10 = uVar10 + 2;
        puVar1 = local_2000 + 1;
        local_2000 = local_2000 + 2;
        if (0x1fa < uVar4) {
          puVar6 = param_1;
        }
        *puVar6 = *(undefined2 *)*puVar1;
      } while (uVar10 != (uVar3 & 0x3ffffffffffffffe));
    }
    if ((uVar3 & 1) != 0) {
      if (0x1fa < uVar10) {
        uVar10 = 0;
      }
      param_1[uVar10] = *(undefined2 *)*local_2000;
    }
  }
  return;
}

