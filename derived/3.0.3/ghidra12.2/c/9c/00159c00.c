
long FUN_00159c00(long *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x1e8);
  lVar3 = FUN_00159a1c();
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  plVar1 = param_1 + 0xae;
  param_1[0xbb] = param_1[0x4e];
  param_1[0xba] = param_1[0x50];
  param_1[0x4e] = (long)FUN_00159e8c;
  param_1[0x50] = (long)&LAB_0015a1a8;
  if (*(int *)(*param_1 + 0x19c) == 2) {
    *(undefined4 *)(lVar8 + 0x218) = 1;
    uVar4 = FUN_00171cb4(param_1[0xae],param_1 + 0xaf,param_1[0xb9],0);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001686c8();
      pcVar6 = "nghttp2_session_upgrade() failed: %s(%d)";
      goto LAB_00159d78;
    }
    iVar2 = FUN_00171b38(*plVar1,*(undefined4 *)(lVar8 + 0x218),lVar7);
    if (iVar2 != 0) {
      FUN_0014d430(lVar7,"http/2: failed to set user_data for stream %d!\n",
                   *(undefined4 *)(lVar8 + 0x218));
    }
  }
  else {
    param_1[0xc2] = 0x6400000003;
    param_1[0xc3] = 0x4000000000000004;
    *(undefined4 *)(param_1 + 0xc4) = 2;
    *(uint *)((long)param_1 + 0x624) = (uint)(*(long *)(*(long *)(*param_1 + 0xd8) + 0x70) != 0);
    param_1[0xc5] = 3;
    *(undefined4 *)(lVar8 + 0x218) = 0xffffffff;
    uVar4 = FUN_001671b4(param_1[0xae],0,param_1 + 0xc2,param_1[0xc5]);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001686c8();
      pcVar6 = "nghttp2_submit_settings() failed: %s(%d)";
      goto LAB_00159d78;
    }
  }
  uVar4 = FUN_001671bc(*plVar1,0,0,0x40000000);
  if ((int)uVar4 == 0) {
    if (0x8000 < param_3) {
      FUN_0014d5f8(lVar7,
                   "connection buffer size is too small to store data following HTTP Upgrade response header: buflen=%zu, datalen=%zu"
                   ,0x8000,param_3);
      return 0x10;
    }
    FUN_0014d430(*param_1,
                 "Copying HTTP/2 data in stream buffer to connection buffer after upgrade: len=%zu\n"
                 ,param_3);
    if (param_3 != 0) {
      memcpy((void *)param_1[0xbc],param_2,param_3);
    }
    param_1[0xbd] = param_3;
    uVar4 = FUN_0016f5e4(param_1[0xae],param_1[0xbc],param_3);
    iVar2 = FUN_0016bcc8();
    if (iVar2 == 0) {
      if (uVar4 == param_3) {
        param_1[0xbd] = 0;
        param_1[0xbe] = 0;
      }
      else {
        param_1[0xbe] = param_1[0xbe] + uVar4;
      }
      uVar4 = FUN_0015a79c(lVar7,*plVar1);
      if ((int)uVar4 == 0) {
        iVar2 = FUN_0015a82c(plVar1);
        return (ulong)(iVar2 != 0) << 4;
      }
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001686c8();
      pcVar6 = "nghttp2_session_send() failed: %s(%d)";
    }
    else {
      uVar5 = FUN_001686c8(uVar4 & 0xffffffff);
      pcVar6 = "nghttp2_session_mem_recv() failed: %s(%d)";
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  else {
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = FUN_001686c8();
    pcVar6 = "nghttp2_session_set_local_window_size() failed: %s(%d)";
  }
LAB_00159d78:
  FUN_0014d5f8(lVar7,pcVar6,uVar5,uVar4);
  return 0x10;
}

