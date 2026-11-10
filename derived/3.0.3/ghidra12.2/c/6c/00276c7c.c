
void FUN_00276c7c(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  int local_528 [4];
  undefined1 auStack_518 [1072];
  undefined1 auStack_e8 [128];
  undefined4 local_68;
  char local_64 [4];
  
  puVar1 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if (*(long *)(lVar2 + 0x98) == 0 || *(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  lVar2 = FUN_0026c850(DAT_04c603c8);
  if (*(char *)(lVar2 + 0x84) != '\0') {
    return;
  }
  FUN_002b3fa8(auStack_e8);
  uVar3 = FUN_00232ac4(auStack_518);
  uVar3 = FUN_00275620(local_528,uVar3,param_2,local_64,auStack_e8,auStack_518,&local_68);
  if (local_528[0] != 0) {
    local_5b8 = local_5b8 & 0xffffffff00000000;
    local_5a8 = CONCAT44(local_5a8._4_4_,0x2c18);
    uVar3 = nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((long)&local_5a8 + 4),(Result *)&local_5b8);
    if (local_528[0] == (int)local_5a8) goto LAB_0027704c;
  }
  FUN_00276654(&local_5a8,uVar3,param_2,auStack_e8,param_3 & 1);
  FUN_00229780(local_528,&local_5a8);
  if (local_528[0] != 0) goto LAB_0027704c;
  plVar4 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
  plVar8 = (long *)(param_2 + 0x18);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,plVar8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_2 + 0x10));
    if ((param_3 & 1) == 0) {
      if (plVar4 != (long *)0x0) {
        local_5a0 = 0;
        local_5a8 = 0x200000000000;
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_5a8);
        uVar5 = FUN_0021ff1c(plVar4 + 3);
        if ((((uVar5 & 1) != 0) && (uVar5 = FUN_0021ff1c(param_2 + 0x20), (uVar5 & 1) == 0)) ||
           ((uVar5 = FUN_0021ff1c(plVar4 + 3), (uVar5 & 1) == 0 &&
            (uVar5 = FUN_0021ff1c(param_2 + 0x20), (uVar5 & 1) != 0)))) {
          FUN_002b3fa8(&local_5a8);
          plVar6 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
          (**(code **)(*plVar6 + 0x20))(&local_5b8,plVar6,plVar4,&local_5a8);
          if ((int)local_5b8 == 0) {
            local_5b0 = 0;
            local_5b8 = 0x200000000000;
            FUN_002b493c(&local_5a8,&local_5b8);
            local_5b8 = 0x200000000000;
            local_5b0 = 0;
            (**(code **)(*(long *)(param_2 + 0x18) + 0x28))(plVar8,&local_5b8);
            uVar3 = FUN_002b4368(&local_5a8);
            uVar5 = FUN_0021fe7c(uVar3,param_2 + 0x20);
            if ((uVar5 & 1) == 0) {
              uVar3 = FUN_002b4370(&local_5a8);
              uVar5 = FUN_0021fe7c(uVar3,param_2 + 0x20);
              if ((uVar5 & 1) == 0) goto LAB_00276e4c;
            }
            plVar6 = plVar4 + 2;
            local_5b8 = 0x200000000000;
            local_5b0 = 0;
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_5b8);
            FUN_00227418(plVar6,plVar8);
            local_5b8 = 0x200000000000;
            local_5b0 = 0;
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_5b8);
          }
          else {
LAB_00276e4c:
            plVar4 = (long *)0x0;
          }
          FUN_002b4104(&local_5a8);
          goto LAB_00277008;
        }
      }
    }
    else {
LAB_00277008:
      if (plVar4 != (long *)0x0) goto LAB_00276d94;
    }
    local_5a8 = 0x200000000000;
    local_5a0 = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_5a8);
    plVar8 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    local_5a8 = 0x200000000000;
    local_5a0 = 0;
    (**(code **)(*plVar8 + 0x90))(plVar8,&local_5a8);
  }
  else {
LAB_00276d94:
    if (local_64[0] == '\0') {
      if (*(int *)((long)plVar4 + 0x4c) < 6) {
        plVar8 = *(long **)puVar1;
        plVar4[0x10] = *plVar8;
        plVar4[0xf] = *plVar8;
        if ((param_3 & 1) == 0) {
          FUN_00276be4(param_1,local_68,plVar4 + 2);
        }
        else if ((char)plVar4[7] != -3) {
          FUN_00276b44(param_1,local_68);
        }
        if (*(int *)((long)plVar4 + 0x4c) != 5) {
          uVar3 = FUN_0026c8a4(DAT_04c603c8);
          FUN_002622a0(&local_5a8,uVar3,plVar4,auStack_518);
          if ((int)local_5a8 == 0) {
            if (((((param_3 & 1) == 0) && (lVar2 = FUN_0026c88c(DAT_04c603c8), lVar2 != 0)) &&
                (*(byte *)(plVar4 + 7) < 0x20)) &&
               (lVar7 = FUN_002ba790(*(undefined8 *)puVar1),
               *(byte *)(*(long *)(lVar7 + 0x98) + 0x38) < 0x20)) {
              lVar7 = FUN_002ba790(*(undefined8 *)puVar1);
              FUN_00282b98(&local_5a8,lVar2,*(undefined1 *)(*(long *)(lVar7 + 0x98) + 0x38),
                           (char)plVar4[7],(char)plVar4[7]);
            }
            *(undefined4 *)((long)plVar4 + 0x4c) = 5;
          }
          else {
            uVar3 = FUN_0026c8a4(DAT_04c603c8);
            local_5a0 = 0;
            local_5a8 = 0x200000000000;
            FUN_00262e78(uVar3,&local_5a8);
          }
        }
      }
    }
    else {
      *(char *)(plVar4[0x13] + 0x78) = local_64[0];
    }
  }
LAB_0027704c:
  FUN_002b4104(auStack_e8);
  return;
}

