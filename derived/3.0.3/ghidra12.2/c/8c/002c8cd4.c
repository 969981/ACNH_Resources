
void FUN_002c8cd4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_d0 [24];
  undefined2 local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined2 local_98;
  
  plVar1 = (long *)(param_3 + 8);
  uVar3 = FUN_002b44c4(plVar1);
  FUN_002b4554(param_2,(uVar3 ^ 0xffffffff) & 1);
  if (*(char *)(param_3 + 0x89) != '\0') {
    if ((uVar3 & 1) == 0) {
      uVar5 = FUN_002c3ac4(*(undefined8 *)(param_1 + 0x1868));
    }
    else {
      uVar5 = FUN_002b4460(plVar1);
    }
    FUN_002b44f4(param_2,uVar5);
  }
  local_a8 = 0;
  local_b0 = 0x40000;
  FUN_002b493c(param_2,&local_b0);
  local_a8 = 0;
  local_b0 = 0x40000;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_b0);
  uVar6 = FUN_002b440c(param_1 + 0x50);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_002b44d4(param_2), (uVar6 & 1) == 0)) {
    FUN_002b4468(param_2);
    uVar6 = FUN_0021fea0();
    if ((uVar6 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_002b43fc(plVar1);
        *(undefined4 *)(param_1 + 0x17d0) = uVar4;
        *(undefined2 *)(param_1 + 0x17c8) = 0x101;
      }
      else {
        *(undefined1 *)(param_1 + 0x17ca) = 1;
        *(undefined1 *)(param_1 + 0x17c8) = 1;
        uVar4 = FUN_002b43fc(plVar1);
        *(undefined4 *)(param_1 + 0x17d0) = uVar4;
      }
      plVar8 = (long *)FUN_00228380();
      lVar7 = *plVar8;
      local_b0 = 0;
      FUN_002282f0(&local_b0);
      *(long *)(param_1 + 0x17c0) = local_b0 + lVar7 * 15000;
      lVar7 = FUN_002c3aa4(*(undefined8 *)(param_1 + 0x1868));
      if (*(char *)(lVar7 + 0x3d) != '\0') {
        FUN_002b4018(&local_b0,plVar1);
        FUN_0021f4e0(auStack_d0);
        uVar6 = FUN_002b44d4(&local_b0);
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_002b4368(&local_b0);
          FUN_0021f54c(auStack_d0,uVar5);
          local_b8 = 0x8237;
          FUN_002b44e4(&local_b0,auStack_d0);
        }
        else {
          uVar5 = FUN_002b4370(&local_b0);
          FUN_0021f54c(auStack_d0,uVar5);
          local_b8 = 0x8237;
          FUN_002b44ec(&local_b0,auStack_d0);
        }
        FUN_002c7a50(param_1,&local_b0,4,5);
        FUN_0021f584(auStack_d0);
        FUN_002b4104(&local_b0);
      }
      if ((DAT_04c603c8 == 0) || (uVar6 = FUN_0026c550(), (uVar6 & 1) == 0)) {
        DAT_04c5fc37 = DAT_04c5fc37 + '\x01';
      }
      FUN_00220f70(param_1 + 0x150,&LAB_002c94b0,param_1);
      FUN_002c3530(*(undefined8 *)(param_1 + 0x1868),param_1 + 0x150,plVar1,param_2);
      FUN_002b415c(param_1 + 0x17d8,plVar1);
      return;
    }
  }
  FUN_002b4468(param_2);
  uVar6 = FUN_0021fea0();
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_002b44d4(param_2);
    if ((uVar6 & 1) == 0) {
      lVar7 = FUN_002c3aa4();
      uVar2 = *(undefined2 *)(lVar7 + 0x20);
      uVar5 = FUN_002b4368(param_2);
      FUN_0021f508(&local_b0,uVar5);
      local_98 = uVar2;
      FUN_002b44e4(param_2,&local_b0);
      uVar5 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x1868) == 0) goto LAB_002c8e38;
      uVar2 = FUN_002c3aac();
      uVar5 = FUN_002b4370(param_2);
      FUN_0021f508(&local_b0,uVar5);
      local_98 = uVar2;
      FUN_002b44ec(param_2,&local_b0);
      uVar5 = 1;
    }
    FUN_002b455c(param_2,uVar5);
    FUN_0021f584(&local_b0);
  }
LAB_002c8e38:
  FUN_002c90e8(param_1,plVar1,param_2);
  return;
}

