
undefined8 * FUN_02260c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(0x5c0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5c0,8);
    }
  }
  FUN_006f94c0(puVar6,param_1,param_2);
  *(undefined1 *)((long)puVar6 + 0x286) = 0;
  *(undefined8 *)((long)puVar6 + 0x274) = 0x40a0000043610000;
  *(undefined8 *)((long)puVar6 + 0x27c) = 0x2aaaaac0;
  *(undefined2 *)((long)puVar6 + 0x284) = 0xffff;
  *puVar6 = &PTR_LAB_04a7d4b0;
  *(undefined4 *)(puVar6 + 0x52) = 0;
  puVar6[0x51] = &PTR_LAB_04983720;
  FUN_01184f54(puVar6 + 0x53);
  *(undefined1 *)((long)puVar6 + 0x3fb) = 0;
  pcVar7 = (char *)((long)puVar6 + 0x37c);
  *pcVar7 = '\0';
  *(undefined1 *)((long)puVar6 + 0x414) = 0;
  *(undefined4 *)(puVar6 + 0x6f) = 0x80;
  puVar6[0x81] = (undefined1 *)((long)puVar6 + 0x414);
  puVar6[0x6e] = pcVar7;
  *(undefined4 *)(puVar6 + 0x82) = 0x40;
  puVar6[0x6d] = &DAT_048fc708;
  *(undefined4 *)(puVar6 + 0x8d) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x46c) = 0;
  puVar6[0x8c] = (undefined1 *)((long)puVar6 + 0x46c);
  *(undefined4 *)(puVar6 + 0x98) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x4c4) = 0;
  puVar6[0x97] = (undefined1 *)((long)puVar6 + 0x4c4);
  *(undefined4 *)(puVar6 + 0xa3) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x51c) = 0;
  puVar6[0x80] = &PTR_LAB_048fb9f8;
  puVar6[0x8b] = &PTR_LAB_048fb9f8;
  puVar6[0x96] = &PTR_LAB_048fb9f8;
  puVar6[0xa2] = (undefined1 *)((long)puVar6 + 0x51c);
  puVar6[0xa1] = &PTR_LAB_048fb9f8;
  puVar6[0xac] = &PTR_LAB_048fb9f8;
  *(undefined4 *)(puVar6 + 0xae) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x453) = 0;
  *(undefined1 *)((long)puVar6 + 0x4ab) = 0;
  *(undefined1 *)((long)puVar6 + 0x574) = 0;
  *(undefined1 *)((long)puVar6 + 0x503) = 0;
  *(undefined1 *)((long)puVar6 + 0x55b) = 0;
  puVar6[0xad] = (undefined1 *)((long)puVar6 + 0x574);
  *(undefined1 *)((long)puVar6 + 0x5b3) = 0;
  puVar6[0xb7] = 0;
  *puVar6 = &PTR_LAB_04a7b1c8;
  uVar1 = s_IdrObjCardStand___Obj_MessageCar_040f545d._32_8_;
  if (pcVar7 != "IdrObjCardStand///Obj_MessageCardRack/Root") {
    *(undefined1 *)((long)puVar6 + 0x3a6) = 0;
    *(undefined2 *)((long)puVar6 + 0x3a4) = 0x746f;
    uVar3 = s_IdrObjCardStand___Obj_MessageCar_040f545d._24_8_;
    uVar2 = s_IdrObjCardStand___Obj_MessageCar_040f545d._16_8_;
    *(undefined8 *)((long)puVar6 + 0x39c) = uVar1;
    *(undefined8 *)((long)puVar6 + 0x38c) = uVar2;
    *(undefined8 *)((long)puVar6 + 0x394) = uVar3;
    uVar1 = s_IdrObjCardStand___Obj_MessageCar_040f545d._8_8_;
    *(undefined8 *)pcVar7 = s_IdrObjCardStand___Obj_MessageCar_040f545d._0_8_;
    *(undefined8 *)((long)puVar6 + 900) = uVar1;
  }
  return puVar6;
}

