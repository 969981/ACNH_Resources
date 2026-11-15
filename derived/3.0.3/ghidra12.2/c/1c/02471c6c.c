
void FUN_02471c6c(byte *param_1,undefined2 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar9 = FUN_02547c90();
  if (*(char *)(lVar9 + 9) != '\0') {
    uVar5 = *param_2;
    uVar2 = *(undefined1 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((long)param_2 + 3);
    uVar8 = *(undefined4 *)(param_2 + 2);
    lVar9 = FUN_02547c90(param_1);
    if (DAT_054f5738 == 0) {
      return;
    }
    if ((ulong)*param_1 < 8) {
      bVar4 = *(byte *)(lVar9 + 8);
      lVar9 = DAT_054f5738 + (ulong)*param_1 * 0xc;
      *(undefined2 *)(lVar9 + 0x284) = uVar5;
      *(undefined1 *)(lVar9 + 0x286) = uVar2;
      *(undefined1 *)(lVar9 + 0x287) = uVar3;
      *(undefined4 *)(lVar9 + 0x288) = uVar8;
      *(ushort *)(lVar9 + 0x28c) = bVar4 | 0x100;
      return;
    }
    return;
  }
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar9 = FUN_02583354(DAT_055021a0,local_5c,1);
  if (lVar9 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar9 + 0x1aa0);
  if (lVar13 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
      plVar11 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar10 = uVar10 & 0xffffffff;
      if (*(long *)(lVar9 + 0x1aa0) == 0) goto LAB_02471d9c;
      plVar11 = *(long **)(*(long *)(lVar9 + 0x1aa0) + 0x20);
    }
    if (plVar11 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar9 + 0x1a80);
      uStack_50 = *(undefined8 *)(lVar9 + 0x1a88);
      local_48 = 0x8b8;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_58);
    }
  }
LAB_02471d9c:
  FUN_02816c30(*(long *)(lVar9 + 0x1a88) + *(long *)(lVar9 + 0x1a80),param_2,param_3,param_4 & 1);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1aa0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x1aa0) + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  puVar6 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  if (*(long *)puVar6 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (((((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0 && *param_1 < 8)) &&
         ((uVar7 = FUN_02582d8c(param_1,1), puVar6 = PTR_DAT_04bb4fb8, uVar7 < 8 &&
          ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0' &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0')))))) &&
        (uVar7 = FUN_02582d8c(param_1,1), uVar7 < 8)) &&
       (*(char *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
      puVar1 = (undefined4 *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x10);
      if ((*(long **)(lVar9 + 0x1aa0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar9 + 0x1aa0), puVar12 == (undefined8 *)0x0)) {
        uVar8 = FUN_028169a0(*(long *)(lVar9 + 0x1a88) + *(long *)(lVar9 + 0x1a80));
        *puVar1 = uVar8;
      }
      else {
        uVar10 = (**(code **)*puVar12)();
        uVar8 = FUN_028169a0(*(long *)(lVar9 + 0x1a88) + *(long *)(lVar9 + 0x1a80));
        *puVar1 = uVar8;
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1aa0) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x1aa0) + 8), puVar12 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar12)();
        }
      }
    }
  }
  return;
}

