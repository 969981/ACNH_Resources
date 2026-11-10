
undefined8 FUN_002c9c20(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_6c;
  undefined4 local_64;
  
  plVar8 = param_2 + 1;
  lVar1 = param_1 + 8;
  if (param_2[0x11] == 0) {
    FUN_002ca0a0(param_1,plVar8);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != lVar1) {
      do {
        uVar5 = FUN_002c9978(lVar4 + 0x18,plVar8);
        if ((uVar5 & 1) != 0) {
          uVar6 = FUN_002b4460(lVar4 + 0x18);
          uVar7 = FUN_002b4460(plVar8);
          uVar5 = FUN_002200e4(uVar6,uVar7);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != lVar1) {
            do {
              uVar5 = FUN_002c9978(lVar4 + 0x18,plVar8);
              if ((uVar5 & 1) == 0) {
                lVar4 = *(long *)(lVar4 + 8);
              }
              else {
                local_64 = 0;
                plVar9 = (long *)(lVar4 + 0x10);
                local_6c = 0x40000;
                (**(code **)(*plVar9 + 0x10))(plVar9,&local_6c);
                lVar10 = *(long *)(lVar4 + 8);
                (**(code **)*plVar9)(plVar9);
                FUN_00223704(lVar1,lVar4);
                FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar4 + *(int *)(param_1 + 0x34));
                lVar4 = lVar10;
              }
            } while (lVar4 != lVar1);
          }
          goto LAB_002c9d10;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
      for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != lVar1; lVar4 = *(long *)(lVar4 + 8)) {
        uVar5 = FUN_002c98cc(lVar4 + 0x18,plVar8);
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != lVar1) {
            do {
              uVar5 = FUN_002c98cc(lVar4 + 0x18,plVar8);
              if ((uVar5 & 1) == 0) {
                lVar4 = *(long *)(lVar4 + 8);
              }
              else {
                local_64 = 0;
                plVar9 = (long *)(lVar4 + 0x10);
                local_6c = 0x40000;
                (**(code **)(*plVar9 + 0x10))(plVar9,&local_6c);
                lVar10 = *(long *)(lVar4 + 8);
                (**(code **)*plVar9)(plVar9);
                FUN_00223704(lVar1,lVar4);
                FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar4 + *(int *)(param_1 + 0x34));
                lVar4 = lVar10;
              }
            } while (lVar4 != lVar1);
          }
          goto LAB_002c9d10;
        }
      }
    }
    iVar2 = FUN_002b43fc(plVar8);
    for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != lVar1; lVar4 = *(long *)(lVar4 + 8)) {
      iVar3 = FUN_002b43fc(lVar4 + 0x18);
      if (iVar3 == iVar2) {
        if ((*(int *)(lVar4 + 0xac) != -1) && (uVar5 = FUN_002b44d4(lVar4 + 0x18), (uVar5 & 1) != 0)
           ) {
          return 1;
        }
        break;
      }
    }
  }
  else {
    iVar2 = FUN_002b43fc(plVar8);
    if (*(long *)(param_1 + 0x10) != lVar1) {
      lVar4 = *(long *)(param_1 + 0x10);
      do {
        while ((*(long *)(lVar4 + 0x98) == 0 && (iVar3 = FUN_002b43fc(lVar4 + 0x18), iVar3 == iVar2)
               )) {
          local_64 = 0;
          local_6c = 0x40000;
          (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(lVar4 + 0x10,&local_6c);
          lVar10 = *(long *)(lVar4 + 8);
          (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10);
          FUN_00223704(lVar1,lVar4);
          FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar4 + *(int *)(param_1 + 0x34));
          lVar4 = lVar10;
          if (lVar10 == lVar1) goto LAB_002c9d04;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != lVar1);
    }
LAB_002c9d04:
    FUN_002ca0a0(param_1,plVar8);
  }
LAB_002c9d10:
  local_64 = 0;
  local_6c = 0x40000;
  (**(code **)(*param_2 + 0x10))(param_2,&local_6c);
  if ((char)param_2[0x13] == '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    lVar4 = FUN_002237a8(param_1 + 0x20);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 - *(int *)(param_1 + 0x34);
    }
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = (long)(PTR_DAT_04bce240 + 0x10);
    FUN_002b3fa8(lVar1 + 0x18);
    *(undefined2 *)(lVar1 + 0xa8) = 0;
    *(undefined1 *)(lVar1 + 0xaa) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xb4) = 0;
    *(undefined4 *)(lVar1 + 0xbc) = 0;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    FUN_002236bc(param_1 + 8,param_1 + 8,lVar1);
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    lVar4 = FUN_002237a8(param_1 + 0x20);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 - *(int *)(param_1 + 0x34);
    }
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = (long)(PTR_DAT_04bce240 + 0x10);
    FUN_002b3fa8(lVar1 + 0x18);
    *(undefined2 *)(lVar1 + 0xa8) = 0;
    *(undefined1 *)(lVar1 + 0xaa) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0xac) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xb4) = 0;
    *(undefined4 *)(lVar1 + 0xbc) = 0;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    FUN_002236e0(param_1 + 8,param_1 + 8,lVar1);
  }
  FUN_002b415c(plVar8 + 1,param_2 + 1);
  plVar8[0x11] = param_2[0x11];
  plVar8[0x12] = param_2[0x12];
  lVar1 = param_2[0x13];
  lVar4 = param_2[0x15];
  plVar8[0x14] = param_2[0x14];
  plVar8[0x15] = lVar4;
  plVar8[0x13] = lVar1;
  plVar8[0x16] = param_2[0x16];
  return 1;
}

