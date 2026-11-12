
void FUN_007f1dd4(undefined8 param_1,byte param_2,uint param_3,byte param_4)

{
  long *plVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 uStack_71;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 uStack_58;
  
  if (DAT_0537d558 == (long *)0x0) {
    return;
  }
  cVar8 = (char)param_3;
  if ((param_3 >> 7 & 1) != 0) {
    return;
  }
  if ((int)DAT_0537d558[0x10] != 3) {
    return;
  }
  uVar7 = (uint)(char)param_2;
  if (99 < (int)uVar7) {
    return;
  }
  if ((-1 >= (int)uVar7 && 0x62 < (param_3 & 0xff)) && (-1 < (int)uVar7 || (param_3 & 0xff) != 99))
  {
    return;
  }
  lVar14 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar14 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar2 = (byte *)(lVar14 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar6)) {
      local_70._0_2_ = CONCAT11(cVar8,param_2);
      uVar11 = CONCAT62(CONCAT51(local_70._3_5_,param_4),(undefined2)local_70);
      local_68._6_2_ = local_68._6_2_ & 0xff00;
      local_68._0_6_ = 0xff0100000000;
      goto joined_r0x007f2044;
    }
  }
  local_68 = FUN_02642d30();
  uVar11 = local_68._8_8_ & 0xffffffff;
  if (uVar11 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_70 = &uStack_71;
  lVar14 = (*(code *)(&PTR_LAB_04a88330)[uVar11])(&local_70,local_68);
  if (lVar14 == 0) {
    return;
  }
  plVar1 = (long *)(lVar14 + 0x956f8);
  lVar12 = *(long *)(lVar14 + 0x95718);
  if ((param_4 & 1) == 0) {
    if (lVar12 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        lVar12 = *(long *)(lVar14 + 0x95718);
        uVar11 = uVar11 & 0xffffffff;
        if (lVar12 == 0) goto LAB_007f1fc8;
      }
      plVar9 = *(long **)(lVar12 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_68._0_8_ = *plVar1;
        local_68._8_8_ = *(undefined8 *)(lVar14 + 0x95700);
        uStack_58 = 200;
        (**(code **)(*plVar9 + 0x20))(plVar9,local_68);
      }
    }
LAB_007f1fc8:
    puVar13 = (undefined1 *)(*(long *)(lVar14 + 0x95700) + *plVar1);
  }
  else {
    if (lVar12 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        lVar12 = *(long *)(lVar14 + 0x95718);
        uVar11 = uVar11 & 0xffffffff;
        if (lVar12 == 0) goto LAB_007f1f88;
      }
      plVar9 = *(long **)(lVar12 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_68._0_8_ = *plVar1;
        local_68._8_8_ = *(undefined8 *)(lVar14 + 0x95700);
        uStack_58 = 200;
        (**(code **)(*plVar9 + 0x20))(plVar9,local_68);
      }
    }
LAB_007f1f88:
    puVar13 = (undefined1 *)(*(long *)(lVar14 + 0x95700) + *plVar1 + 100);
  }
  puVar3 = puVar13 + uVar7;
  if (99 < param_2) {
    puVar3 = puVar13;
  }
  puVar4 = puVar13 + (uint)(int)cVar8;
  if (99 < (param_3 & 0xff)) {
    puVar4 = puVar13;
  }
  uVar5 = *puVar3;
  *puVar3 = *puVar4;
  *puVar4 = uVar5;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x95718) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x95718) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  local_70._0_2_ = CONCAT11(cVar8,param_2);
  uVar11 = CONCAT62(CONCAT51(local_70._3_5_,param_4),(undefined2)local_70);
  local_68._6_2_ = local_68._6_2_ & 0xff00;
  local_68._0_6_ = 0xff0000000000;
joined_r0x007f2044:
  if (-1 < DAT_04cca0d0) {
    local_70 = (undefined1 *)(uVar11 & 0xffffffffff01ffff);
    FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cca0d0,local_68,&local_70,3,0);
  }
  return;
}

