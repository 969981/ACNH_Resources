
void FUN_00269b00(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
  lVar4 = *(long *)puVar1;
  plVar2 = (long *)FUN_002ba790();
  lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9b));
  if (lVar5 == 0) {
    uStack_40 = 0;
  }
  else {
    plVar2 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9b));
    uStack_40 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_50 = 1;
  local_48 = *(undefined8 *)(lVar3 + 0x40);
  FUN_002ab680(lVar4 + 0x10,&local_50);
  FUN_002677c8(*(undefined8 *)(param_1 + 0x50),param_2);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_002ba324(&local_50,*(undefined8 *)puVar1,&local_38,param_2);
    (**(code **)(param_1 + 0x58))(1,local_38);
  }
  plVar2 = *(long **)(param_1 + 0x110);
  if (plVar2 != (long *)0x0) {
    local_4c = (undefined1)param_2;
    local_50 = 1;
    local_48 = 0;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
  }
  if ((param_2 & 0xff) < 0x20) {
    if ((param_2 & 0xff) == 0) {
      uVar6 = 0xfffffffe;
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
      lVar3 = *(long *)(param_1 + 0x48);
    }
    else {
      if ((param_2 & 0xff) < 4) {
        uVar6 = 1;
      }
      else {
        uVar7 = 0;
        uVar6 = 1;
        do {
          uVar7 = uVar7 + 4;
          uVar6 = uVar6 << 4;
        } while ((param_2 & 0xfc) != (uVar7 & 0xffff));
      }
      if ((param_2 & 3) != 0) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 << 1;
        } while ((param_2 & 3) != (uVar7 & 0xffff));
      }
      uVar6 = ~uVar6;
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & uVar6;
      lVar3 = *(long *)(param_1 + 0x48);
    }
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x78) = *(uint *)(lVar3 + 0x78) & uVar6;
    }
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & uVar6;
    FUN_00260ea0(*(undefined8 *)(param_1 + 0x360),param_2,0);
  }
  return;
}

