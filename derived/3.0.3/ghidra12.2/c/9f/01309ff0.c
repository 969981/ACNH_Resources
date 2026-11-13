
/* WARNING: Removing unreachable block (ram,0x0130a508) */
/* WARNING: Removing unreachable block (ram,0x0130a3f0) */
/* WARNING: Removing unreachable block (ram,0x0130a338) */
/* WARNING: Removing unreachable block (ram,0x0130a2a8) */
/* WARNING: Removing unreachable block (ram,0x0130a3cc) */
/* WARNING: Removing unreachable block (ram,0x0130a478) */
/* WARNING: Removing unreachable block (ram,0x0130a598) */
/* WARNING: Removing unreachable block (ram,0x0130a224) */
/* WARNING: Removing unreachable block (ram,0x0130a1d8) */
/* WARNING: Removing unreachable block (ram,0x0130a204) */

void FUN_01309ff0(long param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_76 [14];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar11 = (undefined8 *)(param_1 + 0x38);
  uVar3 = *(int *)(param_3 + 8) - *(int *)(param_1 + 0x18);
  uVar6 = *(int *)(param_3 + 0xc) - *(int *)(param_1 + 0x1c);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  uVar4 = (**(code **)(*plVar7 + 0x18))();
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
  if (uVar4 <= uVar3) {
    uVar3 = 0;
  }
  if (uVar5 <= uVar6) {
    uVar6 = 0;
  }
  if (((long *)plVar7[5] == (long *)0x0) ||
     (puVar8 = *(undefined8 **)plVar7[5], puVar8 == (undefined8 *)0x0)) {
    lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    FUN_0130d468(auStack_76,lVar10 + plVar7[1]);
  }
  else {
    uVar9 = (**(code **)*puVar8)();
    lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    FUN_0130d468(auStack_76,lVar10 + plVar7[1]);
    if ((((uVar9 & 1) != 0) && (plVar7[5] != 0)) &&
       (puVar8 = *(undefined8 **)(plVar7[5] + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar3 = *(int *)(param_3 + 8) - *(int *)(param_1 + 0x18);
  plVar7 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x38))(puVar11);
  uVar6 = (**(code **)(*plVar7 + 0x18))();
  if (uVar6 <= uVar3) {
    return;
  }
  uVar6 = iVar1 - iVar2;
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  uVar4 = (**(code **)(*plVar7 + 0x20))();
  if (uVar4 <= uVar6) {
    return;
  }
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  uVar4 = (**(code **)(*plVar7 + 0x18))();
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
  lVar10 = plVar7[5];
  if (uVar4 <= uVar3) {
    uVar3 = 0;
  }
  if (uVar5 <= uVar6) {
    uVar6 = 0;
  }
  if (lVar10 == 0) {
    local_68 = (ulong)local_68._4_4_ << 0x20;
    uVar4 = 1;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      local_68 = (ulong)local_68._4_4_ << 0x20;
      uVar4 = 1;
      lVar10 = *(long *)(lVar10 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      local_68 = (ulong)local_68._4_4_ << 0x20;
      uVar4 = uVar4 ^ 1;
      if (plVar7[5] == 0) goto LAB_0130a270;
      lVar10 = *(long *)(plVar7[5] + 0x20);
    }
    if (lVar10 != 0) {
      local_68 = plVar7[1];
      local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
      uStack_58 = 0xe;
      (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
    }
  }
LAB_0130a270:
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = local_68 & 0xffffffff00000000;
  *(undefined2 *)(lVar10 + plVar7[1]) = *param_2;
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = local_68 & 0xffffffff00000000;
  *(undefined2 *)(lVar10 + plVar7[1] + 2) = param_2[1];
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = CONCAT44((int)(local_68 >> 0x20),1);
  *(undefined1 *)(lVar10 + plVar7[1] + 4) = *(undefined1 *)(param_2 + 2);
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = CONCAT44(local_68._4_4_,1);
  *(undefined2 *)(lVar10 + plVar7[1] + 6) = param_2[3];
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = CONCAT44(local_68._4_4_,1);
  *(undefined2 *)(lVar10 + plVar7[1] + 8) = param_2[4];
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = CONCAT44(local_68._4_4_,(uint)*(byte *)(param_2 + 5));
  *(byte *)(lVar10 + plVar7[1] + 10) = *(byte *)(param_2 + 5);
  if ((plVar7[5] != 0) && (*(long *)(plVar7[5] + 0x20) != 0)) {
    local_68 = plVar7[1];
    local_60 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
    uStack_58 = 0xe;
    (**(code **)(**(long **)(plVar7[5] + 0x20) + 0x20))(*(long **)(plVar7[5] + 0x20),&local_68);
  }
  lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar6);
  local_68 = CONCAT44(local_68._4_4_,(uint)*(byte *)(param_2 + 6));
  *(byte *)(lVar10 + plVar7[1] + 0xc) = *(byte *)(param_2 + 6);
  if ((((uVar4 & 1) == 0) && (plVar7[5] != 0)) &&
     (puVar11 = *(undefined8 **)(plVar7[5] + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

