
undefined8 FUN_00159a1c(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 local_38;
  
  lVar6 = *(long *)(*param_1 + 0x1e8);
  *(undefined4 *)(lVar6 + 0x218) = 0xffffffff;
  if (*(long *)(lVar6 + 0x220) == 0) {
    lVar3 = FUN_0015e0c4();
    *(long *)(lVar6 + 0x220) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
  }
  ppuVar5 = (undefined **)param_1[0x88];
  if (ppuVar5 == &PTR_s_HTTPS_048364f8) {
    return 0;
  }
  if (ppuVar5 == &PTR_DAT_04836580) {
    return 0;
  }
  ppuVar1 = &PTR_DAT_04836580;
  if ((*(uint *)((long)ppuVar5 + 0x84) & 1) != 0) {
    ppuVar1 = &PTR_s_HTTPS_048364f8;
  }
  param_1[0x88] = (long)ppuVar1;
  if (param_1[0xae] != 0) {
LAB_00159a9c:
    FUN_0014d430(*param_1,"Using HTTP2, server supports multi-use\n");
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    param_1[0xc0] = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    *(undefined4 *)(param_1 + 0xbf) = 0;
    *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x4000000;
    *(undefined4 *)(param_1 + 0x46) = 0x14;
    *(undefined4 *)param_1[0xd0] = 2;
    FUN_0014d430(*param_1,"Connection state changed (HTTP/2 confirmed)\n");
    *(undefined1 *)(*(long *)(*param_1 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  local_38 = 0;
  lVar3 = FUN_001432f0(0x8000);
  param_1[0xbc] = lVar3;
  if (lVar3 != 0) {
    iVar2 = FUN_00173f78(&local_38);
    if (iVar2 == 0) {
      FUN_00173fb4(local_38,FUN_0015ac8c);
      FUN_00173fbc(local_38,FUN_0015ad00);
      FUN_00173fc4(local_38,FUN_0015b0cc);
      FUN_00173fcc(local_38,FUN_0015b1d4);
      FUN_00173fd4(local_38,FUN_0015b298);
      FUN_00173fdc(local_38,&LAB_0015b2fc);
      FUN_00173fe4(local_38,FUN_0015b660);
      iVar2 = FUN_0016bd90(param_1 + 0xae,local_38,param_1);
      thunk_FUN_00143300(local_38);
      if (iVar2 == 0) goto LAB_00159a9c;
      pcVar4 = "Couldn\'t initialize nghttp2!";
    }
    else {
      pcVar4 = "Couldn\'t initialize nghttp2 callbacks!";
    }
    FUN_0014d5f8(*param_1,pcVar4);
  }
  FUN_0015e0d0((long *)(lVar6 + 0x220));
  return 0x1b;
}

