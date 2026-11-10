
void FUN_00276108(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_550;
  undefined4 local_548 [8];
  int local_528 [4];
  undefined1 auStack_518 [1072];
  undefined1 auStack_e8 [132];
  undefined4 local_64;
  undefined1 uStack_55;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bc1510;
  plVar4 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  plVar5 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
  if (plVar4[0x13] == 0 || *(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  FUN_002b3fa8(auStack_e8);
  uVar6 = FUN_00232ac4(auStack_518);
  FUN_00275620(local_528,uVar6,param_2,&uStack_55,auStack_e8,auStack_518,&local_64);
  if (local_528[0] == 0) {
    local_548[0] = 0;
    local_550 = (undefined *)0x200000000000;
    uVar6 = FUN_002b493c(auStack_e8,&local_550);
    FUN_00276654(&local_550,uVar6,param_2,auStack_e8,param_3 & 1);
    FUN_00229780(local_528,&local_550);
    if (local_528[0] == 0) {
      lVar7 = FUN_0026c850(DAT_04c603c8);
      if (*(char *)(lVar7 + 0x84) == '\0') {
        plVar8 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,auStack_e8);
        if (plVar8 == (long *)0x0) {
          uVar6 = FUN_002b43ec(auStack_e8);
          uVar2 = FUN_002b43f4(auStack_e8);
          plVar8 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,uVar6,uVar2);
          if ((param_3 & 1) == 0) {
            (**(code **)(*plVar8 + 0x18))(plVar8,0xfd,param_2 + 0x18);
          }
          else {
            FUN_002b4378(&local_550,auStack_e8);
            (**(code **)(*plVar8 + 0x18))(plVar8,0xfd,&local_550);
            local_550 = PTR_DAT_04bcba18 + 0x10;
            FUN_0021f584(local_548);
          }
          plVar4 = (long *)plVar8[0x13];
          iVar3 = FUN_002212bc(plVar4);
          if ((iVar3 != 0) && (iVar3 = FUN_002212bc(plVar4), iVar3 != 5)) {
            FUN_002609c8(plVar4);
            (**(code **)(*plVar4 + 0x10))(plVar4,1);
          }
        }
        else if ((*(int *)((long)plVar8 + 0x4c) == 5) || (*(int *)((long)plVar8 + 0x4c) == 3)) {
          if ((param_3 & 1) == 0) {
            FUN_00276be4(param_1,local_64,plVar8 + 2);
          }
          else if ((char)plVar8[7] != -3) {
            FUN_00276b44(param_1,local_64);
          }
          if (0x1f < *(byte *)(plVar8 + 7)) {
            plVar8[0x10] = **(long **)puVar1;
          }
          goto LAB_0027635c;
        }
        (**(code **)(*plVar5 + 0x70))(&local_550,plVar5,plVar8,auStack_e8);
        FUN_00229780(local_528,&local_550);
        if (local_528[0] == 0) {
          uVar6 = FUN_0026c8a4(DAT_04c603c8);
          FUN_002622a0(&local_550,uVar6,plVar8,auStack_518);
          FUN_00229780(local_528,&local_550);
          if (local_528[0] == 0) {
            lVar7 = plVar8[0x15];
            if ((param_3 & 1) == 0) {
              uVar9 = FUN_00277fa8(lVar7,plVar8,*(undefined4 *)(param_1 + 0x50));
            }
            else {
              uVar9 = FUN_00278434();
            }
            local_548[0] = 0;
            local_550 = (undefined *)0x200000000000;
            (**(code **)(*plVar8 + 0x28))(plVar8,&local_550);
            if ((uVar9 & 1) == 0) {
              (**(code **)(*plVar5 + 0x78))(plVar5,plVar8);
              uVar6 = FUN_0026c8a4(DAT_04c603c8);
              FUN_00262da0(uVar6,plVar8);
            }
            else {
              FUN_002211bc(lVar7,0);
              if ((param_3 & 1) == 0) {
                FUN_00276be4(param_1,local_64,plVar8 + 2);
              }
              else if (*(byte *)(plVar8 + 7) < 0x20) {
                FUN_00276b44(param_1,local_64);
              }
              if (0x1f < *(byte *)(plVar8 + 7)) {
                plVar4 = *(long **)puVar1;
                plVar8[0x10] = *plVar4;
                plVar8[0xf] = *plVar4;
              }
            }
          }
          else {
            uVar6 = FUN_0026c8a4(DAT_04c603c8);
            local_548[0] = 0;
            local_550 = (undefined *)0x200000000000;
            FUN_00262e78(uVar6,&local_550);
            (**(code **)(*plVar5 + 0x78))(plVar5,plVar8);
          }
        }
        else {
          plVar4 = (long *)FUN_002ba788(*(undefined8 *)puVar1);
          local_548[0] = 0;
          local_550 = (undefined *)0x200000000000;
          (**(code **)(*plVar4 + 0x50))(plVar4,&local_550);
        }
        goto LAB_0027635c;
      }
      uVar6 = FUN_002b43ec(auStack_e8);
      uVar2 = FUN_002b43f4(auStack_e8);
      uVar10 = 5;
    }
    else {
      local_54 = 0;
      local_550 = (undefined *)CONCAT44(local_550._4_4_,0xc24);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_550 + 4),(Result *)&local_54);
      if (local_528[0] == (int)local_550) {
        uVar6 = FUN_002b43ec(auStack_e8);
        uVar2 = FUN_002b43f4(auStack_e8);
        uVar10 = 4;
      }
      else {
        local_54 = 0;
        local_550 = (undefined *)CONCAT44(local_550._4_4_,0xc25);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_550 + 4),(Result *)&local_54);
        if (local_528[0] != (int)local_550) goto LAB_0027635c;
        uVar6 = FUN_002b43ec(auStack_e8);
        uVar2 = FUN_002b43f4(auStack_e8);
        uVar10 = 1;
      }
    }
  }
  else {
    local_54 = 0;
    local_550 = (undefined *)CONCAT44(local_550._4_4_,0x6470);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_550 + 4),(Result *)&local_54);
    if (local_528[0] == (int)local_550) {
      uVar10 = 3;
    }
    else {
      local_54 = 0;
      local_550 = (undefined *)CONCAT44(local_550._4_4_,0x646f);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_550 + 4),(Result *)&local_54);
      if (local_528[0] != (int)local_550) goto LAB_0027635c;
      uVar10 = 2;
    }
    uVar6 = 0;
    uVar2 = 0;
  }
  FUN_00276a0c(param_1,param_2,uVar10,uVar6,uVar2,param_3 & 1);
LAB_0027635c:
  FUN_002b4104(auStack_e8);
  return;
}

