
void FUN_03837a70(float param_1,byte *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar7 = DAT_05ae0928;
  if ((param_1 < 40000.0 && param_3 != 0) && (0.0 <= param_1)) {
    lVar8 = 1;
    param_2[4] = 1;
    puVar2 = PTR_DAT_04bb3350;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    lVar7 = *(long *)(lVar7 + 0x18);
    if (lVar7 != 0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)(lVar4 + 0xa8);
      *(long *)(lVar4 + 0xa8) = lVar7;
    }
    puVar1 = PTR_DAT_04bb2020;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ObjectInstance";
    uVar5 = FUN_038c6ffc(param_2 + 0x20,0x1400,&local_80,0);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    if (lVar8 != 1) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      *(long *)(lVar7 + 0xa8) = lVar8;
      uVar5 = *(undefined8 *)(param_2 + 0x18);
    }
    lVar7 = *(long *)(DAT_05ae0928 + 0x10);
    (**(code **)(*(long *)(param_3 + 0x148) + 0x18))(param_3 + 0x148);
    uVar3 = FUN_006bd550(*(undefined8 *)(param_3 + 0x150),0);
    plVar6 = (long *)(lVar7 + 0x10);
    while( true ) {
      while( true ) {
        lVar7 = *plVar6;
        if (*(uint *)(lVar7 + 0x20) <= uVar3) break;
        plVar6 = (long *)(lVar7 + 8);
      }
      if (uVar3 <= *(uint *)(lVar7 + 0x20)) break;
      plVar6 = (long *)(lVar7 + 0x10);
    }
    plVar6 = (long *)(**(code **)(**(long **)(lVar7 + 0x28) + 0x10))(*(long **)(lVar7 + 0x28),uVar5)
    ;
    *(long **)(param_2 + 0x10) = plVar6;
    if (plVar6 == (long *)0x0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *param_2 = *param_2 | 8;
    }
    else {
      local_80 = *(undefined **)(param_2 + 0x18);
      local_70 = puVar1 + 0x10;
      pcStack_78 = *(char **)(param_3 + 0x10);
      uStack_68 = *(undefined8 *)(param_3 + 0x20);
      uStack_58 = *(undefined8 *)(param_3 + 0xb8);
      local_60 = local_70;
      (**(code **)(*plVar6 + 0x148))(plVar6,&local_80);
    }
  }
  return;
}

