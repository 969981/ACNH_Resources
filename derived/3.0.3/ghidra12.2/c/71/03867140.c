
void FUN_03867140(long param_1,char *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined *local_40;
  undefined4 local_38;
  
  plVar3 = *(long **)(param_1 + 0x200);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x1b8))(plVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x218);
  if (lVar4 != 0) {
    uVar1 = (uint)(*param_2 == '\0');
    local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar1);
    *(uint *)(lVar4 + 0x2c) = uVar1;
    while (uVar1 != 0x80000000) {
      if (*(char *)(lVar4 + 0x20) == '\0') {
        FUN_03c83a50(lVar4,1);
      }
      FUN_03c835a0(lVar4);
      uVar1 = *(uint *)(lVar4 + 0x2c);
    }
  }
  plVar3 = *(long **)(param_1 + 0x210);
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    if (param_2[1] == '\0') {
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      local_38 = 6;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      puVar2 = (undefined8 *)(plVar3[3] + 0x1b8);
    }
    else {
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      local_38 = 7;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      puVar2 = (undefined8 *)(plVar3[3] + 0x1c0);
    }
    (*(code *)*puVar2)(plVar3[1]);
  }
  return;
}

