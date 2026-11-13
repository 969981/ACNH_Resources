
void FUN_01486ef4(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint local_5c;
  undefined **local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_58 = (undefined **)CONCAT44(local_58._4_4_,2);
  if ((*(uint *)(param_1 + 0x1418) >> 2 & 1) == 0) {
    return;
  }
  if (DAT_05231900 == 0) {
    return;
  }
  lVar8 = *(long *)(DAT_05231900 + 0x110);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x1420);
  if (lVar9 != 0) goto LAB_01487128;
  local_48 = (uint *)0x0;
  local_4e = *(undefined2 *)(param_1 + 0x1412);
  local_58 = &PTR_FUN_04a36b50;
  local_50 = *(undefined2 *)(param_1 + 0x1410);
  local_4c = *(undefined4 *)(param_1 + 0x1414);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  lVar9 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_1 + 0x1410);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 != (uint *)0x0)) {
        local_48 = puVar7;
      }
    }
  }
  if (((DAT_051e0558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_051e0558), iVar5 != 0)) {
    DAT_051e0550 = 0;
    __cxa_guard_release(&DAT_051e0558);
  }
  if (local_48 == (uint *)0x0) {
LAB_014870cc:
    local_5c = 0;
  }
  else {
    uVar3 = *local_48;
    local_5c = 0;
    if ((uVar3 != 0) && (local_48 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)local_48 - (long)(ulong)uVar3);
      local_5c = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)local_48 - lVar9) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ea0) &&
               (local_5c = (uint)*(ushort *)(DAT_05326ea8 + (long)(int)uVar1 * 2), local_5c < 7))
            goto LAB_014870d0;
          }
        }
        goto LAB_014870cc;
      }
    }
  }
LAB_014870d0:
  uVar11 = *(undefined8 *)(param_1 + 0x1150);
  uVar12 = 0xffffffff;
  if ((*(long *)(param_1 + 0x1170) != 0) && (*(long *)(param_1 + 0x1160) != 0)) {
    uVar3 = DAT_051e0550;
    if (*(uint *)(param_1 + 0x1168) <= DAT_051e0550) {
      uVar3 = 0;
    }
    uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x1170) + (long)(int)uVar3 * 4);
  }
  uVar4 = FUN_01ae43f4(&local_58);
  lVar9 = FUN_01570738(lVar8,&local_5c,uVar11,uVar12,uVar4);
  *(long *)(param_1 + 0x1420) = lVar9;
LAB_01487128:
  if ((lVar9 != 0) && ((param_2 & 1) == 0)) {
    lVar8 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x250) + 0xf0))(lVar8 + 0x250);
    lVar8 = *(long *)(lVar9 + 0x10);
    uVar12 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x250) + 0xf0))(lVar8 + 0x250);
    *puVar6 = uVar12;
    *(uint *)(lVar8 + 0x270) = *(uint *)(lVar8 + 0x270) | 0x1000000;
  }
  return;
}

