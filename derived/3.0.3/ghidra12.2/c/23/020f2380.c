
void FUN_020f2380(char *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  byte bVar11;
  ushort uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  
  uVar6 = FUN_016d1b60();
  if ((int)uVar6 == -1) {
    return;
  }
  lVar7 = FUN_021c9770(uVar6,1);
  if (lVar7 == 0) {
    return;
  }
  local_80 = (undefined **)((ulong)local_80._4_4_ << 0x20);
  if (*param_1 == '\x01') {
    bVar11 = *(byte *)(lVar7 + 0x118) | 1;
  }
  else {
    bVar11 = *(byte *)(lVar7 + 0x118) & 0xfe;
  }
  *(byte *)(lVar7 + 0x118) = bVar11;
  if (DAT_05574040 == 0) goto LAB_020f2784;
  puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar7 == 0) goto LAB_020f2784;
    lVar7 = lVar7 + 0x70;
  }
  else if (((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) ||
          (lVar7 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar7 == 0)) goto LAB_020f2784;
  if ((*(long *)(lVar7 + 0x271c58) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x271c58) + 0x10), puVar13 == (undefined8 *)0x0))
  {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar13)();
    uVar8 = uVar8 & 0xffffffff;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_1 + 4);
  if (*(long *)puVar3 == 0) {
LAB_020f24d0:
    bVar4 = false;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if (*(uint *)(lVar16 + 0x1d8) <= uVar5) goto LAB_020f24d0;
    bVar4 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0;
  }
  if ((*(long *)(lVar7 + 0x271c58) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x271c58) + 0x20), plVar9 != (long *)0x0)) {
    local_80 = *(undefined ***)(lVar7 + 0x271c38);
    local_78 = *(char **)(lVar7 + 0x271c40);
    local_70 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_80);
  }
  puVar1 = (undefined2 *)(*(long *)(lVar7 + 0x271c40) + *(long *)(lVar7 + 0x271c38));
  pcVar17 = param_1 + 4;
  if (!bVar4) {
    pcVar17 = PTR_DAT_04bb37e0;
  }
  *puVar1 = *(undefined2 *)pcVar17;
  *(char *)(puVar1 + 1) = pcVar17[2];
  *(char *)((long)puVar1 + 3) = pcVar17[3];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(pcVar17 + 4);
  if ((*(long *)(lVar7 + 0x271c90) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x271c90) + 0x10), puVar13 == (undefined8 *)0x0))
  {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)*puVar13)();
    uVar10 = uVar10 & 0xffffffff;
  }
  lVar18 = *(long *)puVar3;
  pcVar17 = param_1 + 0xc;
  uVar5 = FUN_0277d6c4(pcVar17);
  lVar16 = *(long *)puVar3;
  if (lVar16 == 0) {
LAB_020f26e0:
    pcVar17 = (char *)&DAT_05586008;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((*(uint *)(lVar18 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_020f26e0;
    local_70 = 0;
    local_78 = *(char **)(param_1 + 0xc);
    local_80 = &PTR_FUN_04a36b50;
    uVar5 = FUN_0277d6c4(&local_78);
    uVar12 = 0;
    if (*(long *)puVar3 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar5 < *(uint *)(lVar16 + 0x1d8)) {
        uVar12 = 0;
        if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(pcVar17);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar5) ||
             (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar14 == (uint *)0x0)) goto LAB_020f26d0;
          uVar5 = *puVar14;
          uVar12 = 0;
          if ((uVar5 != 0) && (puVar14 != (uint *)(ulong)uVar5)) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar5);
            uVar12 = 0;
            if (*puVar15 != 0) {
              uVar5 = puVar15[1];
              if ((uVar5 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar16 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar5 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar5);
                  }
                  if (*puVar15 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326c20) &&
                     (uVar12 = *(ushort *)(DAT_05326c28 + (long)(int)uVar2 * 2), uVar12 < 0x15))
                  goto LAB_020f26d4;
                }
              }
              goto LAB_020f26d0;
            }
          }
        }
      }
      else {
LAB_020f26d0:
        uVar12 = 0;
      }
    }
LAB_020f26d4:
    if (uVar12 == 0) goto LAB_020f26e0;
  }
  if ((*(long *)(lVar7 + 0x271c90) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar7 + 0x271c90) + 0x20), plVar9 != (long *)0x0)) {
    local_80 = *(undefined ***)(FUN_00271c6c + lVar7 + 4);
    local_78 = *(char **)(lVar7 + 0x271c78);
    local_70 = 8;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_80);
  }
  puVar1 = (undefined2 *)(*(long *)(lVar7 + 0x271c78) + *(long *)(FUN_00271c6c + lVar7 + 4));
  *puVar1 = *(undefined2 *)pcVar17;
  *(char *)(puVar1 + 1) = pcVar17[2];
  *(char *)((long)puVar1 + 3) = pcVar17[3];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(pcVar17 + 4);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x271c90) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x271c90) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x271c58) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x271c58) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
LAB_020f2784:
  if (DAT_053e0208 != 0) {
    local_70 = CONCAT44(local_70._4_4_,(int)uVar6);
    local_80 = &PTR_FUN_04a74160;
    if (*(int *)(DAT_053e0208 + 0xb88) != 0) {
      lVar7 = (long)*(int *)(DAT_053e0208 + 0xb88) << 3;
      puVar13 = *(undefined8 **)(DAT_053e0208 + 0xb90);
      local_78 = param_1;
      do {
        (*(code *)*local_80)(&local_80,*puVar13);
        lVar7 = lVar7 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar7 != 0);
    }
  }
  return;
}

