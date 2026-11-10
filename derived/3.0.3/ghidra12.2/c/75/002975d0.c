
uint FUN_002975d0(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  uVar3 = FUN_002977cc();
  lVar7 = DAT_04c60f48;
  if ((uVar3 & 1) != 0) {
    uVar2 = 0;
    uVar5 = 0;
    uVar8 = 0;
    param_1[6] = (long)PTR_FUN_04bcd370;
    param_1[7] = 0;
    param_1[8] = (long)"RandomMatchmakeJob::ProcessFailure";
    goto LAB_00297708;
  }
  if (*(char *)((long)param_1 + 0x7f) == '\0') {
    if (((char)param_1[0x10] == '\0') || (*(char *)((long)param_1 + 0x82) != '\0')) {
      *(undefined2 *)((long)param_1 + 0x7d) = 0;
      *(undefined2 *)(param_1 + 0x10) = 0;
      (**(code **)(**(long **)(lVar7 + 8) + 0x20))
                (&local_44,*(long **)(lVar7 + 8),
                 *(undefined8 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 8 + 0x168));
      if (local_44 == 0) {
        *(undefined1 *)(lVar7 + 0x15d) = 1;
        (**(code **)(*param_1 + 0x60))(param_1);
        uVar2 = 0;
        uVar5 = 0;
        uVar8 = 0;
        goto LAB_00297708;
      }
      lVar1 = param_1[0xd];
      (**(code **)(**(long **)(lVar7 + 8) + 0x28))();
      if ((char)lVar1 != '\0') {
        FUN_002296c4(auStack_74,&local_44);
        puVar4 = auStack_74;
        pcVar6 = *(code **)(*param_1 + 0x78);
        goto LAB_002976f8;
      }
      FUN_002296c4(auStack_84,&local_44);
      lVar7 = *param_1;
      puVar4 = auStack_84;
    }
    else {
      (**(code **)(**(long **)(DAT_04c60f48 + 8) + 0x28))();
      local_24 = 0;
      local_44 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(auStack_64,&local_44);
      lVar7 = *param_1;
      puVar4 = auStack_64;
    }
LAB_002976f4:
    pcVar6 = *(code **)(lVar7 + 0x80);
  }
  else {
    lVar7 = param_1[0xd];
    (**(code **)(**(long **)(DAT_04c60f48 + 8) + 0x28))();
    if ((char)lVar7 == '\0') {
      local_44 = 0x6439;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(auStack_54,&local_44);
      lVar7 = *param_1;
      puVar4 = auStack_54;
      goto LAB_002976f4;
    }
    local_44 = 0x6439;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_44);
    puVar4 = auStack_34;
    pcVar6 = *(code **)(*param_1 + 0x78);
  }
LAB_002976f8:
  uVar2 = (*pcVar6)(param_1,puVar4);
  uVar5 = uVar2 & 0xffffff00;
  uVar8 = uVar2 & 0xffff0000;
LAB_00297708:
  return uVar5 & 0xff00 | uVar2 & 0xff | uVar8;
}

