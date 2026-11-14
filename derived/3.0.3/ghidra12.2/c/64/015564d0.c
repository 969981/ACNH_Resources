
void FUN_015564d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *local_78;
  char *local_70;
  undefined8 local_68;
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) {
        return;
      }
      lVar11 = lVar11 + 0x70;
    }
    else {
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar12[0x26] == (long *)0x0) {
        return;
      }
      lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      if (lVar11 == 0) {
        return;
      }
    }
    if ((*(long *)(lVar11 + 0xd0) == 0) ||
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 0x10), puVar12 == (undefined8 *)0x0))
    {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar12)();
      uVar7 = uVar7 ^ 1;
    }
    puVar6 = PTR_DAT_04bc2a20;
    puVar5 = PTR_DAT_04bc27f0;
    puVar4 = PTR_DAT_04bb2020;
    lVar14 = 0;
    lVar15 = 10;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((*(long *)(lVar11 + 0xd0) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar11 + 0xd0) + 0x20), plVar9 != (long *)0x0)) {
        local_78 = *(undefined **)(lVar11 + 0xb0);
        local_70 = *(char **)(lVar11 + 0xb8);
        local_68 = 0x1e3388;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
      lVar2 = *(long *)(lVar11 + 0xb8) + *(long *)(lVar11 + 0xb0);
      uVar13 = (ulong)*(byte *)(lVar2 + lVar14);
      if (uVar13 < 0x23) {
        lVar2 = lVar2 + lVar14;
        bVar3 = *(byte *)(lVar2 + 1);
        if ((bVar3 <= (byte)puVar5[uVar13]) &&
           ((*(uint *)(puVar6 + uVar13 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
          lVar2 = lVar2 + 0x1267c;
          local_70 = "MoveInCompletion";
          local_78 = puVar1;
          iVar8 = FUN_02749340(lVar2,&local_78);
          local_78 = puVar4 + 0x10;
          if (iVar8 == 0) {
            uVar10 = 6;
          }
          else {
            local_70 = "EnableConvTalkDaysCount";
            iVar8 = FUN_02749340(lVar2,&local_78);
            if ((iVar8 < 1) || (*param_1 < 1)) goto LAB_015565d4;
            uVar10 = iVar8 - (int)*param_1;
            uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          }
          local_78 = puVar4 + 0x10;
          local_70 = "EnableConvTalkDaysCount";
          FUN_0274a060(lVar2,&local_78,uVar10);
        }
      }
LAB_015565d4:
      lVar15 = lVar15 + -1;
      lVar14 = lVar14 + 0x13230;
    } while (lVar15 != 0);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0xd0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xd0) + 0x18), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
  }
  return;
}

