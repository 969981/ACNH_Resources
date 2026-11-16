
/* WARNING: Removing unreachable block (ram,0x028f6af0) */
/* WARNING: Removing unreachable block (ram,0x028f6b04) */

void FUN_028f6a60(undefined2 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 local_2018;
  undefined2 local_2014;
  undefined8 local_2010;
  undefined8 *local_2008;
  long *local_2000;
  long *local_1ff8;
  long local_1ff0 [2];
  undefined1 auStack_1fe0 [4032];
  undefined8 local_1020;
  undefined8 local_1018 [507];
  
  local_2010 = 0;
  local_2008 = (undefined8 *)0x0;
  local_2000 = local_1ff0;
  lVar7 = 0;
  do {
    lVar2 = lVar7 + 0x10;
    plVar9 = (long *)((long)local_1ff0 + lVar7 + 8);
    *plVar9 = (long)(auStack_1fe0 + lVar7);
    *(long **)((long)local_1ff0 + lVar7) = plVar9;
    lVar7 = lVar2;
  } while (lVar2 != 0xfd0);
  local_1020 = 0;
  if (local_1018 != (undefined8 *)0x0) {
    local_2010 = 0x1fb00000000;
    local_2008 = local_1018;
  }
  local_2018 = *param_2;
  local_2014 = 0xffff;
  local_1ff8 = local_2000;
  FUN_028f6c40(param_1,&local_2010,&local_2018);
  plVar9 = local_2000;
  iVar11 = (int)local_2010;
  if ((int)local_2010 < local_2010._4_4_) {
    if (local_2000 != (long *)0x0) {
      local_2000 = (long *)*local_2000;
    }
    *(undefined2 *)plVar9 = *(undefined2 *)param_2;
    if ((-1 < (int)local_2010) && ((int)local_2010 < local_2010._4_4_)) {
      if ((int)local_2010 != 0) {
        memmove(local_2008 + 1,local_2008,(long)(int)local_2010 << 3);
      }
      *local_2008 = plVar9;
      iVar11 = (int)local_2010 + 1;
      local_2010 = CONCAT44(local_2010._4_4_,iVar11);
    }
  }
  memset(param_1,0xff,0x3f6);
  if (iVar11 != 0) {
    uVar4 = (long)iVar11 - 1U & 0x1fffffffffffffff;
    uVar3 = uVar4 + 1;
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = 0;
      puVar10 = param_1;
      do {
        puVar6 = puVar10 + 1;
        puVar5 = puVar10;
        if (0x1fa < uVar8) {
          puVar5 = param_1;
        }
        puVar10 = puVar10 + 2;
        *puVar5 = *(undefined2 *)*local_2008;
        uVar4 = uVar8 + 1;
        uVar8 = uVar8 + 2;
        puVar1 = local_2008 + 1;
        local_2008 = local_2008 + 2;
        if (0x1fa < uVar4) {
          puVar6 = param_1;
        }
        *puVar6 = *(undefined2 *)*puVar1;
      } while (uVar8 != (uVar3 & 0x3ffffffffffffffe));
    }
    if ((uVar3 & 1) != 0) {
      if (0x1fa < uVar8) {
        uVar8 = 0;
      }
      param_1[uVar8] = *(undefined2 *)*local_2008;
    }
  }
  return;
}

