
int FUN_02206660(void)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 == 0) {
LAB_022066fc:
    iVar11 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar8 == 0) goto LAB_022066fc;
      lVar8 = lVar8 + 0x70;
    }
    else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
            (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 == 0)) goto LAB_022066fc;
    if ((*(long **)(lVar8 + 0xd0) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0xd0), puVar9 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar9)();
      uVar7 = uVar7 ^ 1;
    }
    puVar5 = PTR_DAT_04bc2a20;
    puVar4 = PTR_DAT_04bc27f0;
    lVar12 = 0;
    lVar14 = 0;
    iVar11 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar13 = (undefined4)lVar14;
      lVar2 = *(long *)(lVar8 + 0xb8) + *(long *)(lVar8 + 0xb0);
      uVar10 = (ulong)*(byte *)(lVar2 + lVar12);
      local_64 = uVar13;
      if (uVar10 < 0x23) {
        lVar2 = lVar2 + lVar12;
        bVar3 = *(byte *)(lVar2 + 1);
        if (((bVar3 <= (byte)puVar4[uVar10]) &&
            ((*(uint *)(puVar5 + uVar10 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) &&
           (*(int *)(lVar2 + 0x10764) == 0)) {
          pcStack_70 = "SeasonEventPlace";
          local_78 = puVar1;
          sVar6 = FUN_02196ed0(&local_64,&local_78);
          if (sVar6 != 1) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            pcStack_70 = "HalloweenReactionEventPlaza";
            local_7c = uVar13;
            sVar6 = FUN_02196ed0(&local_7c,&local_78);
            if (sVar6 != 0) {
              iVar11 = iVar11 + 1;
            }
          }
        }
      }
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x13230;
    } while (lVar14 != 10);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0xd0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0xd0) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return iVar11;
}

