
ulong FUN_020f0020(void)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_020f00bc:
    uVar12 = 0xffffffff;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 == 0) goto LAB_020f00bc;
      lVar9 = lVar9 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 == 0)) goto LAB_020f00bc;
    if ((*(long *)(lVar9 + 0xd0) == 0) ||
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xd0) + 0x10), puVar10 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      uVar6 = uVar6 ^ 1;
    }
    puVar5 = PTR_DAT_04bc2a20;
    puVar4 = PTR_DAT_04bc27f0;
    lVar14 = 0;
    uVar13 = 0;
    uVar12 = 0xffffffff;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((*(long *)(lVar9 + 0xd0) != 0) &&
         (plVar8 = *(long **)(*(long *)(lVar9 + 0xd0) + 0x20), plVar8 != (long *)0x0)) {
        local_78 = *(undefined **)(lVar9 + 0xb0);
        pcStack_70 = *(char **)(lVar9 + 0xb8);
        local_68 = 0x1e3388;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
      }
      lVar2 = *(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0);
      uVar11 = (ulong)*(byte *)(lVar2 + lVar14);
      if (uVar11 < 0x23) {
        lVar2 = lVar2 + lVar14;
        bVar3 = *(byte *)(lVar2 + 1);
        if ((bVar3 <= (byte)puVar4[uVar11]) &&
           ((*(uint *)(puVar5 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
          lVar2 = lVar2 + 0x1267c;
          pcStack_70 = "AbandonedHouse";
          local_78 = puVar1;
          iVar7 = FUN_02749340(lVar2,&local_78);
          if (iVar7 == 1) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            pcStack_70 = "AbandonedHouse";
            FUN_02749650(lVar2,uVar13 & 0xffffffff,&local_78,2,0);
            uVar12 = uVar13 & 0xffffffff;
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x13230;
    } while (uVar13 != 10);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0xd0) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xd0) + 0x18), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  return uVar12;
}

