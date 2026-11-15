
void FUN_01dffa40(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ushort *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined *local_70;
  char *pcStack_68;
  
  lVar12 = param_1 + 8;
  FUN_03ebac90(lVar12,0x16,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "State::cIdle";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0,&local_70);
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar9[2] = &LAB_01e0059c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e005a0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cCreateAuthorId";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,1,&local_70);
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar9[2] = &LAB_01e005a4;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e00718;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cWaitBackground";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,2,&local_70);
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar9[2] = &LAB_01e007cc;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e007d0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cWaitRequest";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,3,&local_70);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e0084c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e00850;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cDataAnalyze";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,4,&local_70);
  puVar9 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(4 < *(uint *)(param_1 + 0x30)) * 0x100);
  puVar9[2] = &LAB_01e008dc;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e008e0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cSaveConvert";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,5,&local_70);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x30) < 6) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e017a8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e017b0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cJpegLoader";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,6,&local_70);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x30) < 7) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e01b7c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e01b80;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cUploadInspect";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,7,&local_70);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x30) < 8) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e01fe0;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e02cc4;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cUploadMeta";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,8,&local_70);
  puVar9 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  puVar9[2] = &LAB_01e02d90;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e03214;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cGetUploadedNum";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,9,&local_70);
  lVar4 = 0x240;
  if (*(uint *)(param_1 + 0x30) < 10) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e032bc;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e032c0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cDownloadMyself";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,10,&local_70);
  lVar4 = 0x280;
  if (*(uint *)(param_1 + 0x30) < 0xb) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e032d0;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e03584;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cRemoveMyself";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0xb,&local_70);
  lVar4 = 0x2c0;
  if (*(uint *)(param_1 + 0x30) < 0xc) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e0366c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e0381c;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cGetPickup";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0xc,&local_70);
  lVar4 = 0x300;
  if (*(uint *)(param_1 + 0x30) < 0xd) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e038d0;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e03b30;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cGetTimeline";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0xd,&local_70);
  lVar4 = 0x340;
  if (*(uint *)(param_1 + 0x30) < 0xe) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e03c50;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e03e80;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cDownloadAuthor";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0xe,&local_70);
  lVar4 = 0x380;
  if (*(uint *)(param_1 + 0x30) < 0xf) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e03f60;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e04208;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cDownloadFollowList";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0xf,&local_70);
  lVar4 = 0x3c0;
  if (*(uint *)(param_1 + 0x30) < 0x10) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e042e8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e04494;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cAddFollowAuthor";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x10,&local_70);
  puVar9 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(0x10 < *(uint *)(param_1 + 0x30)) * 0x400);
  puVar9[2] = &LAB_01e04554;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e04700;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cRemoveFollowAuthor";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x11,&local_70);
  lVar4 = 0x440;
  if (*(uint *)(param_1 + 0x30) < 0x12) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e047e8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e04a34;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cGetProfile";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x12,&local_70);
  lVar4 = 0x480;
  if (*(uint *)(param_1 + 0x30) < 0x13) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e04b2c;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e04d10;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cUpdateSlot";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x13,&local_70);
  lVar4 = 0x4c0;
  if (*(uint *)(param_1 + 0x30) < 0x14) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e050d8;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e0533c;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cDownloadInspectBody";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x14,&local_70);
  lVar4 = 0x500;
  if (*(uint *)(param_1 + 0x30) < 0x15) {
    lVar4 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar9[2] = &LAB_01e053e4;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_01e0568c;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  pcStack_68 = "State::cSendFeedback";
  local_70 = puVar1;
  FUN_03ebaf40(lVar12,0x15,&local_70);
  lVar12 = 0x540;
  if (*(uint *)(param_1 + 0x30) < 0x16) {
    lVar12 = 0;
  }
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar12);
  puVar9[2] = &LAB_01e05720;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04a5ca58;
  puVar9[1] = param_1;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &LAB_01e05728;
  puVar9[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar3 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar3 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar3) {
      uVar3 = 0;
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x40);
    if (puVar9 != (undefined8 *)0x0) {
      (*(code *)*puVar9)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar9 = malloc(0x10);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
  }
  *(undefined2 *)((long)puVar9 + 0xc) = 0;
  *(undefined1 *)((long)puVar9 + 0xe) = 0;
  *puVar9 = 0xffffffffffffffff;
  lVar12 = *(long *)puVar1;
  *(undefined8 **)(param_1 + 0x2a8) = puVar9;
  if (lVar12 == 0) {
    pvVar6 = malloc(0x558);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar12 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_01e002c4;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x558,8);
  }
LAB_01e002c4:
  *(undefined4 *)((long)pvVar6 + 0xb5) = 0;
  *(undefined8 *)((long)pvVar6 + 0xad) = 0;
  *(undefined8 *)((long)pvVar6 + 0xa5) = 0;
  *(undefined8 *)((long)pvVar6 + 0x9d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x95) = 0;
  *(undefined8 *)((long)pvVar6 + 0x8d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x85) = 0;
  *(undefined8 *)((long)pvVar6 + 0x7d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x75) = 0;
  *(undefined8 *)((long)pvVar6 + 0x6d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x65) = 0;
  *(undefined8 *)((long)pvVar6 + 0x5d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x55) = 0;
  *(undefined8 *)((long)pvVar6 + 0x4d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x45) = 0;
  *(undefined8 *)((long)pvVar6 + 0x3d) = 0;
  *(undefined8 *)((long)pvVar6 + 0x35) = 0;
  *(undefined8 *)((long)pvVar6 + 0x2d) = 0;
  memset((void *)((long)pvVar6 + 0x141),0,0x408);
  *(void **)(param_1 + 0x2b8) = pvVar6;
  if (param_2 == (long *)0x0) {
    lVar12 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar4 + 0xa8);
    *(long **)(lVar4 + 0xa8) = param_2;
  }
  local_70 = (undefined *)0x0;
  FUN_03515944(&local_70);
  puVar2 = (undefined *)0x0;
  if (local_70 != (undefined *)0x0) {
    puVar2 = local_70 + 0xc0;
  }
  uVar3 = *(uint *)(puVar2 + 0x38);
  if ((int)uVar3 < 1) {
LAB_01e00430:
    uVar13 = (ulong)*(uint *)(param_1 + 0xa8);
    if ((int)*(uint *)(param_1 + 0xa8) < 1) goto LAB_01e004c8;
  }
  else {
    uVar13 = 0;
    uVar14 = 0xffffffff;
    do {
      puVar7 = (ushort *)(**(code **)(**(long **)(*(long *)(puVar2 + 0x40) + uVar13 * 8) + 0xf0))();
      if ((int)uVar14 < (int)(uint)*puVar7) {
        puVar7 = (ushort *)
                 (**(code **)(**(long **)(*(long *)(puVar2 + 0x40) + uVar13 * 8) + 0xf0))();
        uVar14 = (uint)*puVar7;
      }
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
    lVar4 = *(long *)puVar1;
    uVar13 = (ulong)(uVar14 + 1);
    if (lVar4 == 0) {
      pvVar6 = malloc(uVar13 << 2);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar9 = (undefined8 *)(lVar4 + 8);
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)(lVar8 + 0xa8);
        }
        param_2 = (long *)*puVar9;
        if (param_2 == (long *)0x0) goto LAB_01e00430;
      }
      pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,uVar13 << 2,0xfffffffc);
    }
    if (pvVar6 == (void *)0x0) goto LAB_01e00430;
    *(uint *)(param_1 + 0xa8) = uVar14 + 1;
    *(void **)(param_1 + 0xb0) = pvVar6;
  }
  uVar10 = uVar13 & 3;
  uVar11 = 0;
  if (2 < uVar13 - 1) {
    do {
      lVar4 = uVar11 * 4;
      uVar11 = uVar11 + 4;
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar4) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar4 + 4) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar4 + 8) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar4 + 0xc) = 0xffffffff;
    } while ((uVar13 & 0xfffffffc) != uVar11);
  }
  if (uVar10 != 0) {
    lVar4 = uVar11 << 2;
    do {
      uVar10 = uVar10 - 1;
      *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar4) = 0xffffffff;
      lVar4 = lVar4 + 4;
    } while (uVar10 != 0);
  }
LAB_01e004c8:
  uVar3 = *(uint *)(puVar2 + 0x38);
  if (0 < (int)uVar3) {
    uVar13 = 0;
    do {
      puVar7 = (ushort *)(**(code **)(**(long **)(*(long *)(puVar2 + 0x40) + uVar13 * 8) + 0xf0))();
      uVar14 = (uint)*puVar7;
      if (*(uint *)(param_1 + 0xa8) <= (uint)*puVar7) {
        uVar14 = 0;
      }
      *(int *)(*(long *)(param_1 + 0xb0) + (ulong)uVar14 * 4) = (int)uVar13;
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
  }
  FUN_03515820(&local_70);
  if (lVar12 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar12;
  }
  local_70._0_4_ = 0xf;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0x10) {
    local_70._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)local_70 * 0x38 + 0x30) =
       0;
  return;
}

