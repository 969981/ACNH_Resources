
void FUN_026083d0(long param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  short *psVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar7 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *puVar10 = puVar5;
      *(undefined8 **)(param_1 + 0x18) = puVar10;
      puVar5 = puVar10;
    } while (lVar7 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  puVar2 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar7 = FUN_026eec4c();
  if (lVar7 == 0) {
    return;
  }
  lVar11 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar2 + 0x20);
    plVar8 = *(long **)(lVar11 + 0x178);
  }
  else {
    plVar8 = *(long **)(lVar7 + 0x19628);
  }
  if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*(code *)**(undefined8 **)*plVar8)();
    uVar4 = uVar4 ^ 1;
  }
  uVar12 = *(uint *)(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158) + 72000);
  if (8999 < uVar12) {
    uVar12 = 9000;
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  puVar2 = PTR_DAT_04bb37e0;
  if (uVar12 != 0) {
    lVar7 = 0;
    uVar13 = 0;
    do {
      if ((*(long **)(lVar11 + 0x178) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar11 + 0x178), puVar5 == (undefined8 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        uVar6 = uVar6 & 0xffffffff;
      }
      puVar3 = PTR_DAT_04bb43c0;
      lVar14 = *(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158);
      uVar4 = *(uint *)(lVar14 + 72000);
      if (8999 < uVar4) {
        uVar4 = 9000;
      }
      psVar9 = (short *)puVar2;
      if (uVar13 < uVar4) {
        psVar1 = (short *)(lVar14 + lVar7);
        if (*psVar1 == -2) {
          psVar9 = psVar1;
        }
        else {
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar4 = FUN_0277d6c4(psVar1);
          if (*(long *)puVar3 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
                psVar9 = psVar1;
              }
            }
          }
        }
      }
      local_68 = *psVar9;
      local_66 = (undefined1)psVar9[1];
      local_65 = *(undefined1 *)((long)psVar9 + 3);
      local_64 = *(undefined4 *)(psVar9 + 2);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      FUN_0260a240(param_1,&local_68);
      lVar7 = lVar7 + 8;
      uVar13 = uVar13 + 1;
    } while ((ulong)uVar12 << 3 != lVar7);
  }
  return;
}

