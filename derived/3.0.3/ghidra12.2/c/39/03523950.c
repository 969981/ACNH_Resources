
void FUN_03523950(long param_1,uint param_2,long param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_38;
  
  if (1 < param_2) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)param_2 * 8 + 0x570);
  if (lVar4 == 0) {
    return;
  }
  plVar3 = (long *)**(undefined8 **)(lVar4 + 0x230);
  if (plVar3 != (long *)0x0) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      local_40 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_38 = 6;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      lVar1 = plVar3[1];
      pcVar2 = *(code **)(plVar3[3] + 0x1b8);
    }
    else {
      if ((param_4 & 1) == 0) {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 1;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        (**(code **)(plVar3[3] + 400))(0x3f800000,plVar3[1]);
        goto LAB_03523a48;
      }
      local_40 = &PTR_FUN_04aa77b8;
      local_38 = 7;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      lVar1 = plVar3[1];
      pcVar2 = *(code **)(plVar3[3] + 0x1c0);
    }
    (*pcVar2)(lVar1);
  }
LAB_03523a48:
  plVar3 = (long *)**(undefined8 **)(lVar4 + 0x210);
  if (plVar3 != (long *)0x0) {
    local_4c = *(undefined4 *)(param_3 + 0x28);
    uStack_48 = *(undefined4 *)(param_3 + 0x2c);
    local_44 = 0;
    local_40 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
    local_38 = 8;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x98))(plVar3[1],&local_4c);
  }
  return;
}

