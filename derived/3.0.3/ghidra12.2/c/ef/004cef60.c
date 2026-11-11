
void FUN_004cef60(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined1 local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 4) == '\0') {
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7[1] - *plVar7 < 4) {
      FUN_0049e700(plVar7,&local_24,4);
      cVar1 = *(char *)(param_1 + 0x10);
      uVar2 = local_24;
    }
    else {
      memcpy(&local_24,(void *)*plVar7,4);
      *plVar7 = *plVar7 + 4;
      cVar1 = *(char *)(param_1 + 0x10);
      uVar2 = local_24;
    }
    local_24 = uVar2;
    if (cVar1 != '\0') {
      local_24 = CONCAT13((char)uVar2,
                          CONCAT12((char)((uint)uVar2 >> 8),
                                   CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))
                                  ));
    }
    *(undefined4 *)param_2 = local_24;
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7[1] - *plVar7 < 8) {
      FUN_0049e700(plVar7,&local_38,8);
      cVar1 = *(char *)(param_1 + 0x10);
      uVar3 = local_38;
      uVar4 = uStack_37;
      uVar5 = uStack_36;
      uVar6 = uStack_35;
    }
    else {
      memcpy(&local_38,(void *)*plVar7,8);
      *plVar7 = *plVar7 + 8;
      cVar1 = *(char *)(param_1 + 0x10);
      uVar3 = local_38;
      uVar4 = uStack_37;
      uVar5 = uStack_36;
      uVar6 = uStack_35;
    }
    local_38 = uVar3;
    uStack_37 = uVar4;
    uStack_36 = uVar5;
    uStack_35 = uVar6;
    if (cVar1 != '\0') {
      local_38 = uStack_31;
      uStack_37 = uStack_32;
      uStack_36 = uStack_33;
      uStack_35 = uStack_34;
      uStack_34 = uVar6;
      uStack_33 = uVar5;
      uStack_32 = uVar4;
      uStack_31 = uVar3;
    }
    *param_2 = CONCAT17(uStack_31,
                        CONCAT16(uStack_32,
                                 CONCAT15(uStack_33,
                                          CONCAT14(uStack_34,
                                                   CONCAT13(uStack_35,
                                                            CONCAT12(uStack_36,
                                                                     CONCAT11(uStack_37,local_38))))
                                         )));
  }
  return;
}

