
undefined8 * FUN_0229f2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(0x5c8);
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
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5c8,8);
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
  *(undefined4 *)(puVar6 + 0x6f) = 0x80;
  pcVar7 = (char *)((long)puVar6 + 0x37c);
  *pcVar7 = '\0';
  *(undefined1 *)((long)puVar6 + 0x414) = 0;
  puVar3 = PTR_DAT_04bb2d88;
  puVar6[0x81] = (undefined1 *)((long)puVar6 + 0x414);
  puVar6[0x6e] = pcVar7;
  *(undefined4 *)(puVar6 + 0x82) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x453) = 0;
  puVar6[0x6d] = puVar3 + 0x10;
  *(undefined1 *)((long)puVar6 + 0x46c) = 0;
  puVar6[0x8c] = (undefined1 *)((long)puVar6 + 0x46c);
  *(undefined4 *)(puVar6 + 0x8d) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x4c4) = 0;
  puVar6[0x97] = (undefined1 *)((long)puVar6 + 0x4c4);
  *(undefined1 *)((long)puVar6 + 0x4ab) = 0;
  *(undefined1 *)((long)puVar6 + 0x51c) = 0;
  puVar6[0xa2] = (undefined1 *)((long)puVar6 + 0x51c);
  puVar6[0x80] = &PTR_LAB_048fb9f8;
  puVar6[0x8b] = &PTR_LAB_048fb9f8;
  puVar6[0x96] = &PTR_LAB_048fb9f8;
  puVar6[0xa1] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)puVar6 + 0x574) = 0;
  puVar6[0xac] = &PTR_LAB_048fb9f8;
  puVar6[0xad] = (undefined1 *)((long)puVar6 + 0x574);
  *(undefined4 *)(puVar6 + 0x98) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x503) = 0;
  *(undefined4 *)(puVar6 + 0xa3) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x55b) = 0;
  *(undefined4 *)(puVar6 + 0xae) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x5b3) = 0;
  puVar6[0xb7] = 0;
  *puVar6 = &PTR_LAB_04a7e308;
  puVar6[0xb8] = 0;
  uVar2 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._56_8_;
  uVar1 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._48_8_;
  if (pcVar7 != "IdrObjWherearenOfficeShelf/IdrObjCommon//Obj_WherearenOfficeStorage/Root") {
    *(undefined1 *)((long)puVar6 + 0x3c4) = 0;
    *(undefined8 *)((long)puVar6 + 0x3ac) = uVar1;
    *(undefined8 *)((long)puVar6 + 0x3b4) = uVar2;
    *(undefined8 *)((long)puVar6 + 0x3bc) = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._64_8_;
    uVar1 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._24_8_;
    *(undefined8 *)((long)puVar6 + 0x38c) = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._16_8_;
    *(undefined8 *)((long)puVar6 + 0x394) = uVar1;
    uVar1 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._40_8_;
    *(undefined8 *)((long)puVar6 + 0x39c) = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._32_8_;
    *(undefined8 *)((long)puVar6 + 0x3a4) = uVar1;
    uVar1 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._8_8_;
    *(undefined8 *)pcVar7 = s_IdrObjWherearenOfficeShelf_IdrOb_0405d699._0_8_;
    *(undefined8 *)((long)puVar6 + 900) = uVar1;
  }
  return puVar6;
}

