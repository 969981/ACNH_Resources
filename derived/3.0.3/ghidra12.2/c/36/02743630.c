
void FUN_02743630(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte local_94 [12];
  undefined *local_88;
  char *pcStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04bb46b0;
  puVar1 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "FesBoxNotEmpty";
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
LAB_027436c0:
    lVar11 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar6 != 0) {
        lVar11 = lVar6 + 0x70;
      }
    }
    else {
      if (puVar12 == (undefined8 *)0x0) goto LAB_027436c0;
      lVar11 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
    }
  }
  plVar9 = (long *)(lVar11 + 0x205208);
  lVar6 = *(long *)(lVar11 + 0x205228);
  if (lVar6 == 0) {
    FUN_02742300(*(long *)(lVar11 + 0x205210) + *plVar9,&local_88,0);
    goto LAB_0274376c;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar7 = 0;
    plVar8 = *(long **)(lVar6 + 0x20);
joined_r0x02743a1c:
    if (plVar8 != (long *)0x0) {
      local_78 = *plVar9;
      local_70 = *(undefined8 *)(lVar11 + 0x205210);
      uStack_68 = 0x100;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
    }
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar7 = uVar7 & 0xffffffff;
    if (*(long *)(lVar11 + 0x205228) != 0) {
      plVar8 = *(long **)(*(long *)(lVar11 + 0x205228) + 0x20);
      goto joined_r0x02743a1c;
    }
  }
  FUN_02742300(*(long *)(lVar11 + 0x205210) + *plVar9,&local_88,0);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x205228) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x205228) + 0x18), puVar12 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar12)();
  }
LAB_0274376c:
  FUN_02507c6c(local_94,1,1,0,0);
  puVar4 = PTR_DAT_04bb5038;
  if (7 < local_94[0]) {
    return;
  }
  puVar1 = puVar1 + 0x10;
  do {
    uVar5 = FUN_0267e980(local_94);
    lVar11 = *(long *)puVar3;
    pcStack_80 = "FesBoxNotEmpty";
    local_88 = puVar1;
    if (lVar11 == 0) {
LAB_02743830:
      lVar11 = 0;
    }
    else {
      puVar12 = *(undefined8 **)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
        lVar6 = (**(code **)(*(long *)*puVar12 + 0x38))();
        lVar11 = 0;
        if (lVar6 != 0) {
          lVar11 = lVar6 + 0x70;
        }
      }
      else {
        if (puVar12 == (undefined8 *)0x0) goto LAB_02743830;
        lVar11 = 0;
        if ((long *)puVar12[0x26] != (long *)0x0) {
          lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
        }
      }
    }
    lVar6 = *(long *)(lVar11 + 0x205228);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
        plVar9 = *(long **)(lVar6 + 0x20);
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        uVar7 = uVar7 & 0xffffffff;
        if (*(long *)(lVar11 + 0x205228) == 0) goto LAB_027438ac;
        plVar9 = *(long **)(*(long *)(lVar11 + 0x205228) + 0x20);
      }
      if (plVar9 != (long *)0x0) {
        local_78 = *(long *)(lVar11 + 0x205208);
        local_70 = *(undefined8 *)(lVar11 + 0x205210);
        uStack_68 = 0x100;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
    }
LAB_027438ac:
    bVar2 = local_94[0];
    if (7 < local_94[0]) {
      bVar2 = 0xff;
    }
    FUN_02743b80(*(long *)(lVar11 + 0x205210) + *(long *)(lVar11 + 0x205208),&local_88,
                 (int)(char)bVar2,(uVar5 ^ 1) & 1);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x205228) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x205228) + 0x18),
       puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    bVar2 = local_94[0];
    uVar7 = (ulong)local_94[0];
    if (7 < local_94[0]) {
      return;
    }
    if (uVar7 + 1 == 8) {
      return;
    }
    pbVar13 = puVar4 + uVar7 + 1;
    uVar10 = FUN_02507924(local_94,pbVar13);
    if ((uVar10 & 1) == 0) {
      if (uVar7 + 2 == 8) {
        return;
      }
      pbVar13 = puVar4 + uVar7 + 2;
      uVar10 = FUN_02507924(local_94,pbVar13);
      if ((uVar10 & 1) == 0) {
        if (uVar7 + 3 == 8) {
          return;
        }
        pbVar13 = puVar4 + uVar7 + 3;
        uVar10 = FUN_02507924(local_94,pbVar13);
        if ((uVar10 & 1) == 0) {
          if (uVar7 + 4 == 8) {
            return;
          }
          pbVar13 = puVar4 + uVar7 + 4;
          uVar10 = FUN_02507924(local_94,pbVar13);
          if ((uVar10 & 1) == 0) {
            if (uVar7 + 5 == 8) {
              return;
            }
            pbVar13 = puVar4 + uVar7 + 5;
            uVar10 = FUN_02507924(local_94,pbVar13);
            if ((uVar10 & 1) == 0) {
              if (uVar7 + 6 == 8) {
                return;
              }
              pbVar13 = puVar4 + uVar7 + 6;
              uVar10 = FUN_02507924(local_94,pbVar13);
              if ((uVar10 & 1) == 0) {
                if (uVar7 + 7 == 8) {
                  return;
                }
                pbVar13 = puVar4 + uVar7 + 7;
                uVar10 = FUN_02507924(local_94,pbVar13);
                if ((uVar10 & 1) == 0) {
                  if (bVar2 == 0) {
                    return;
                  }
                  pbVar13 = puVar4 + uVar7 + 8;
                  FUN_02507924(local_94,pbVar13);
                }
              }
            }
          }
        }
      }
    }
    local_94[0] = *pbVar13;
    if (7 < local_94[0]) {
      return;
    }
  } while( true );
}

