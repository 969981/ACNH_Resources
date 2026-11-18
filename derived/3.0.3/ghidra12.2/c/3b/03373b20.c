
undefined8 FUN_03373b20(long *param_1,ulong param_2,int param_3,undefined8 *param_4)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *local_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_04bc1118;
  lVar8 = *(long *)PTR_DAT_04bc1118;
  if (lVar8 != 0) {
    if ((*(long *)(lVar8 + 0xc00) == 0) || (*(char *)(*(long *)(lVar8 + 0xc00) + 8) == '\0')) {
      if (((param_2 & 1) != 0) &&
         (((-1 < (int)param_1[0x44] && ((int)param_1[0x44] == param_3)) &&
          (plVar3 = (long *)(**(code **)(*param_1 + 0x230))(param_1), plVar3 != (long *)0x0)))) {
        local_50 = PTR_DAT_04bc4f00 + 0x10;
        local_48 = 3;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
        uVar4 = (**(code **)(plVar3[3] + 0x50))(plVar3[1]);
        if ((uVar4 & 1) == 0) {
          local_50 = PTR_DAT_04bc4e68 + 0x10;
          local_48 = 1;
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
          (**(code **)(plVar3[3] + 400))(0x3f800000,plVar3[1]);
        }
      }
    }
    else {
      plVar3 = (long *)(**(code **)(*param_1 + 0x230))(param_1);
      if (plVar3 != (long *)0x0) {
        local_50 = PTR_DAT_04bc4f00 + 0x10;
        local_48 = 3;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
        uVar4 = (**(code **)(plVar3[3] + 0x50))(plVar3[1]);
        if ((uVar4 & 1) == 0) {
          local_50 = PTR_DAT_04bc4e68 + 0x10;
          local_48 = 1;
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
          (**(code **)(plVar3[3] + 400))(0x3f800000,plVar3[1]);
        }
      }
      if (*(long *)(lVar8 + 0xc00) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0xc00) + 8) = 0;
      }
    }
  }
  if (((param_1[0x42] == 0) || (lVar8 = *(long *)puVar1, lVar8 == 0)) ||
     ((lVar7 = *(long *)(*(long *)(lVar8 + 0x20) + 0x528), *(long *)(lVar7 + 0x20) != lVar7 + 0x38
      || (lVar7 = *(long *)(*(long *)(lVar8 + 0x20) + 0x6e0), lVar7 == 0)))) {
    uVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar7 + 8);
    uVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      if (*(char *)(puVar6 + 0x2be) == '\0') {
        uVar4 = (**(code **)*puVar6)();
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        uVar4 = 1;
      }
      uVar5 = 0;
      if (((uVar4 & 1) != 0) && (*(char *)(lVar8 + 0x498) != '\0')) {
        lVar8 = *(long *)puVar1;
        if ((lVar8 == 0) ||
           ((((lVar7 = *(long *)(*(long *)(lVar8 + 0x20) + 0x528),
              *(long *)(lVar7 + 0x20) != lVar7 + 0x38 ||
              (lVar7 = *(long *)(*(long *)(lVar8 + 0x20) + 0x6e0), lVar7 == 0)) ||
             (puVar6 = *(undefined8 **)(lVar7 + 8), puVar6 == (undefined8 *)0x0)) ||
            ((uVar4 = (**(code **)*puVar6)(), (uVar4 & 1) == 0 || (*(char *)(lVar8 + 0x498) == '\0')
             ))))) {
          bVar2 = (**(code **)*param_4)(param_4);
        }
        else {
          bVar2 = 1;
        }
        uVar5 = 1;
        *(byte *)((long)param_1 + 0x21c) = bVar2 & 1;
      }
    }
  }
  *(int *)(param_1 + 0x44) = param_3;
  return uVar5;
}

