
void FUN_03c5bcd4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_50;
  undefined4 local_48;
  
  uVar3 = (**(code **)(*param_1 + 0x80))();
  plVar2 = (long *)param_1[0x10];
  puVar1 = (undefined8 *)(param_1[0xf] + (long)(int)uVar3 * 0x10);
  if (*(uint *)(param_1 + 0xe) <= uVar3) {
    puVar1 = (undefined8 *)0x0;
  }
  plVar6 = (long *)*puVar1;
  if (plVar6 == (long *)0x0) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 2;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x38))(plVar2[1],0);
    param_1[0x10] = 0;
    return;
  }
  if (plVar6 != plVar2) {
    if (plVar2 != (long *)0x0) {
      if (plVar6[1] == 0) {
        local_50 = PTR_DAT_04bc4e68 + 0x10;
        local_48 = 5;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
        (**(code **)(plVar2[3] + 0x1b0))(plVar2[1]);
      }
      else {
        local_50 = PTR_DAT_04bc4f00 + 0x10;
        local_48 = 2;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
        (**(code **)(plVar2[3] + 0x38))(plVar2[1],0);
      }
    }
    param_1[0x10] = (long)plVar6;
  }
  switch(*(undefined4 *)(puVar1 + 1)) {
  case 0:
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 6;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x1b8))(plVar6[1]);
    break;
  case 1:
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x1c0))(plVar6[1]);
    break;
  case 2:
    uVar7 = *(undefined4 *)((long)puVar1 + 0xc);
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    lVar4 = plVar6[1];
    pcVar5 = *(code **)(plVar6[3] + 0x158);
    goto LAB_03c5bf1c;
  case 3:
    uVar7 = *(undefined4 *)((long)puVar1 + 0xc);
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x15;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    lVar4 = plVar6[1];
    pcVar5 = *(code **)(plVar6[3] + 0x168);
LAB_03c5bf1c:
    (*pcVar5)(uVar7,lVar4);
    break;
  case 4:
    local_48 = 0;
    uVar7 = *(undefined4 *)((long)puVar1 + 0xc);
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    (**(code **)(plVar6[3] + 0x188))(uVar7,plVar6[1],1);
  }
  return;
}

