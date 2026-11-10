
void FUN_00269780(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined **local_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [128];
  undefined4 local_48;
  byte local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar7 = 0;
  do {
    if ((uint)*(byte *)(param_1 + 0x9c) != (uVar7 & 0xff)) {
      if ((uVar7 & 0xff) == 0) {
        uVar5 = 1;
      }
      else {
        if ((uVar7 - 1 & 0xffff) < 7) {
          uVar5 = 1;
        }
        else {
          uVar6 = 0;
          uVar5 = 1;
          do {
            uVar6 = uVar6 + 8;
            uVar5 = uVar5 << 8;
          } while ((uVar7 & 0x7ff8) != (uVar6 & 0xffff));
        }
        if ((uVar7 & 7) != 0) {
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 << 1;
          } while ((uVar7 & 7) != (uVar6 & 0xffff));
        }
      }
      if ((*(uint *)(param_1 + 0xb8) & uVar5) != 0) {
        FUN_00269b00(param_1,uVar7);
      }
    }
    uVar5 = uVar7 & 0xffff;
    uVar7 = uVar7 + 1;
  } while (uVar5 < 0x1f);
  *(undefined8 *)(param_1 + 0xb4) = 0;
  FUN_002ab430(DAT_04c61168 + 0x10);
  plVar2 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar2 + 0x80))();
  FUN_002b3fa8(auStack_c8);
  (**(code **)(*plVar2 + 0x60))(plVar2,auStack_c8);
  FUN_00227258(&local_f0);
  (**(code **)(*plVar2 + 0x68))(plVar2,&local_f0);
  FUN_00262e20(*(undefined8 *)(param_1 + 0x368));
  FUN_00262290(*(undefined8 *)(param_1 + 0x368));
  lVar4 = DAT_04c61168;
  *(undefined2 *)(param_1 + 0x11a) = 0x101;
  plVar3 = (long *)FUN_002ba790(lVar4);
  plVar2 = (long *)plVar3[4];
  while (plVar2 != plVar3 + 3) {
    plVar2 = (long *)plVar2[2];
    (**(code **)(*plVar2 + 0x20))(plVar2);
    FUN_00273c40(plVar2);
    (**(code **)(*plVar3 + 0x28))(plVar3,plVar2);
    plVar2 = (long *)plVar3[4];
  }
  FUN_002ba5a4(DAT_04c61168);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  if (*(int *)(param_1 + 0xa0) != 0) {
    plVar2 = *(long **)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (plVar2 != (long *)0x0) {
      local_40 = 0;
      local_48 = 0x12;
      local_44 = 0xfd;
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_48);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x9c);
  if (bVar1 < 0x20) {
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_002ba324(&local_48,DAT_04c61168,&local_38,bVar1);
      (**(code **)(param_1 + 0x58))(1,local_38);
    }
    plVar2 = *(long **)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      local_48 = 1;
      local_40 = 0;
      local_44 = bVar1;
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_48);
    }
  }
  *(undefined2 *)(param_1 + 0x9b) = 0xfdfd;
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_002841d8(*(long *)(param_1 + 0x90) + 0x50);
  }
  *(undefined1 *)(param_1 + 0xad) = 1;
  if (*(char *)(param_1 + 0x119) == '\0') {
    FUN_00223ee0(&DAT_04c5fbd8);
    FUN_00225804(&DAT_04c5ff68);
    lVar4 = FUN_0022033c();
    if (lVar4 != 0) {
      FUN_0022033c();
      FUN_00220450();
    }
  }
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x123) = 0;
  *(undefined2 *)(param_1 + 0x121) = 0;
  local_f0 = &PTR_LAB_04840580;
  FUN_0021f584(auStack_e8);
  FUN_002b4104(auStack_c8);
  return;
}

