
void FUN_02471f38(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  byte local_64 [4];
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_44;
  
  lVar11 = FUN_02547c90();
  if (*(char *)(lVar11 + 9) != '\0') {
    uVar6 = *(undefined2 *)param_2;
    uVar3 = *(undefined1 *)((long)param_2 + 2);
    uVar4 = *(undefined1 *)((long)param_2 + 3);
    uVar9 = *(undefined4 *)((long)param_2 + 4);
    lVar11 = FUN_02547c90(param_1);
    if (DAT_054f5738 == 0) {
      return;
    }
    if ((ulong)*param_1 < 8) {
      bVar5 = *(byte *)(lVar11 + 8);
      lVar11 = DAT_054f5738 + (ulong)*param_1 * 0xc;
      *(undefined2 *)(lVar11 + 0x284) = uVar6;
      *(undefined1 *)(lVar11 + 0x286) = uVar3;
      *(undefined1 *)(lVar11 + 0x287) = uVar4;
      *(undefined4 *)(lVar11 + 0x288) = uVar9;
      *(ushort *)(lVar11 + 0x28c) = bVar5 | 0x100;
      return;
    }
    return;
  }
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar11 = FUN_02583354(DAT_055021a0,local_64,1);
  if (lVar11 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar11 + 0x1aa0);
  if (lVar15 == 0) {
    uVar12 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar12 = 0;
      plVar13 = *(long **)(lVar15 + 0x20);
    }
    else {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      uVar12 = uVar12 & 0xffffffff;
      if (*(long *)(lVar11 + 0x1aa0) == 0) goto LAB_02472068;
      plVar13 = *(long **)(*(long *)(lVar11 + 0x1aa0) + 0x20);
    }
    if (plVar13 != (long *)0x0) {
      local_60 = *(undefined **)(lVar11 + 0x1a80);
      local_58 = *(undefined8 *)(lVar11 + 0x1a88);
      local_50 = 0x8b8;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_60);
    }
  }
LAB_02472068:
  FUN_028166e0(*(long *)(lVar11 + 0x1a88) + *(long *)(lVar11 + 0x1a80),param_2,param_3,param_4);
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x1aa0) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x1aa0) + 0x18), puVar14 != (undefined8 *)0x0))
  {
    (**(code **)*puVar14)();
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      if ((((*param_1 < 8) &&
           ((uVar8 = FUN_02582d8c(param_1,1), puVar7 = PTR_DAT_04bb4fb8, uVar8 < 8 &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')))) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) &&
         ((uVar8 = FUN_02582d8c(param_1,1), uVar8 < 8 &&
          (*(char *)(*(long *)puVar7 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')))) {
        puVar1 = (undefined4 *)(*(long *)puVar7 + (ulong)uVar8 * 0x13f0 + 0x10);
        if ((*(long **)(lVar11 + 0x1aa0) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x1aa0), puVar14 == (undefined8 *)0x0)) {
          uVar9 = FUN_028169a0(*(long *)(lVar11 + 0x1a88) + *(long *)(lVar11 + 0x1a80));
          *puVar1 = uVar9;
        }
        else {
          uVar12 = (**(code **)*puVar14)();
          uVar9 = FUN_028169a0(*(long *)(lVar11 + 0x1a88) + *(long *)(lVar11 + 0x1a80));
          *puVar1 = uVar9;
          if ((((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x1aa0) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x1aa0) + 8),
             puVar14 != (undefined8 *)0x0)) {
            (**(code **)*puVar14)();
          }
        }
      }
      local_58 = *param_2;
      lVar15 = *(long *)puVar2;
      local_50 = 0;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      uVar8 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_2);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
             (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8), lVar15 != 0)) {
            local_50 = lVar15;
          }
        }
      }
      if (DAT_04c487d4 != -1) {
        local_44 = 0x20;
        puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar2 = PTR_DAT_04bc39f8;
        }
        if ((((*(uint *)(puVar2 + 4) & 1) != 0) &&
            (iVar10 = FUN_01ad78cc(&local_60), iVar10 == 0x43)) &&
           ((*param_1 < 8 &&
            ((((uVar8 = FUN_02582d8c(param_1,1), puVar2 = PTR_DAT_04bb4fb8, uVar8 < 8 &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
              (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) &&
             ((uVar8 = FUN_02582d8c(param_1,1), uVar8 < 8 &&
              (lVar15 = *(long *)puVar2, *(char *)(lVar15 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')
              ))))))) {
          if ((*(long **)(lVar11 + 0x1aa0) == (long *)0x0) ||
             (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x1aa0), puVar14 == (undefined8 *)0x0)) {
            uVar9 = FUN_028169a0(*(long *)(lVar11 + 0x1a88) + *(long *)(lVar11 + 0x1a80));
            *(undefined4 *)(lVar15 + (ulong)uVar8 * 0x13f0 + 0x13bc) = uVar9;
          }
          else {
            uVar12 = (**(code **)*puVar14)();
            uVar9 = FUN_028169a0(*(long *)(lVar11 + 0x1a88) + *(long *)(lVar11 + 0x1a80));
            *(undefined4 *)(lVar15 + (ulong)uVar8 * 0x13f0 + 0x13bc) = uVar9;
            if ((((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x1aa0) != 0)) &&
               (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x1aa0) + 8),
               puVar14 != (undefined8 *)0x0)) {
              (**(code **)*puVar14)();
            }
          }
        }
      }
    }
  }
  return;
}

