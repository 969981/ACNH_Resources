
void FUN_025a5b70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_98 [56];
  undefined *local_60;
  char *pcStack_58;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "HotelMannequinCoordinate";
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_025a5c08:
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_025a5c08;
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(&LAB_00205768 + lVar5) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(&LAB_00205768 + lVar5), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 & 0xffffffff;
  }
  puVar1 = PTR_DAT_04bb2268;
  lVar2 = *(long *)PTR_DAT_04bb2268;
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar5 + 0x205750) + *(long *)(lVar5 + 0x205748);
    if (((*(char *)(lVar2 + 0xb1) == '\0') && (*(long *)(param_1 + 8) != 0)) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 8), lVar4 != 0)) {
      lVar2 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar7 = (ulong)*(uint *)(lVar4 + 0x20), 0 < (int)*(uint *)(lVar4 + 0x20))
         ) {
        plVar9 = *(long **)(lVar4 + 0x28);
        do {
          if (*plVar9 == 0) {
            *plVar9 = lVar2;
            lVar4 = lVar8 + 0x37f48;
            FUN_02603350(lVar2,lVar4);
            FUN_006d8678(auStack_98,"%s[%d].","HotelMannequinCoordinate",0);
            FUN_02603d40(param_1,lVar4,auStack_98);
            lVar4 = *(long *)(param_1 + 0x38);
            lVar2 = nn::prepo::Array::GetBuffer();
            if (lVar2 != 0) {
              nn::prepo::Array::Add((Struct *)(lVar4 + 8));
            }
            lVar2 = *(long *)puVar1;
            if (lVar2 == 0) goto LAB_025a5d2c;
            goto LAB_025a5c5c;
          }
          plVar9 = plVar9 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
LAB_025a5c5c:
      if (((*(char *)(lVar2 + 0xb1) != '\0') || (*(long *)(param_1 + 8) == 0)) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 8) + 8), lVar2 == 0)) goto LAB_025a5d2c;
      lVar4 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar4 != 0) && (uVar7 = (ulong)*(uint *)(lVar2 + 0x20), 0 < (int)*(uint *)(lVar2 + 0x20))
         ) {
        plVar9 = *(long **)(lVar2 + 0x28);
        do {
          if (*plVar9 == 0) {
            *plVar9 = lVar4;
            lVar8 = lVar8 + 0x390d8;
            FUN_02603350(lVar4,lVar8);
            FUN_006d8678(auStack_98,"%s[%d].","HotelMannequinCoordinate",1);
            FUN_02603d40(param_1,lVar8,auStack_98);
            lVar8 = *(long *)(param_1 + 0x38);
            lVar2 = nn::prepo::Array::GetBuffer();
            if (lVar2 != 0) {
              nn::prepo::Array::Add((Struct *)(lVar8 + 8));
            }
            goto LAB_025a5d2c;
          }
          plVar9 = plVar9 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
  }
LAB_025a5d2c:
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605b30(*(long *)(param_1 + 8),&local_60,*(undefined8 *)(param_1 + 0x38));
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(&LAB_00205768 + lVar5) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(&LAB_00205768 + lVar5) + 8), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  return;
}

