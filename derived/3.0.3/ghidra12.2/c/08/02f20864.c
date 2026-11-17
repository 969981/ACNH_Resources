
void FUN_02f20864(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined1 *local_38;
  
  uVar2 = (**(code **)(*param_1 + 0x50))();
  if (((uVar2 & 1) != 0) && (lVar4 = param_1[3], lVar4 != 0)) {
    plVar3 = *(long **)(lVar4 + 0x1d0);
    local_38 = &DAT_3f8000003f800000;
    local_58 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_60 = puVar1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
    (**(code **)(plVar3[3] + 0x98))(plVar3[1],param_2);
    plVar3 = *(long **)(lVar4 + 0x1d0);
    local_58 = 10;
    local_60 = puVar1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
    (**(code **)(plVar3[3] + 0xb8))(plVar3[1],&local_38);
    lVar4 = param_1[8];
    if (lVar4 != 0) {
      plVar3 = *(long **)(lVar4 + 0x1d0);
      local_38 = &DAT_3f8000003f800000;
      local_58 = 8;
      local_60 = puVar1;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
      (**(code **)(plVar3[3] + 0x98))(plVar3[1],param_1 + 6);
      plVar3 = *(long **)(lVar4 + 0x1d0);
      local_58 = 10;
      local_60 = puVar1;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
      (**(code **)(plVar3[3] + 0xb8))(plVar3[1],&local_38);
    }
  }
  return;
}

