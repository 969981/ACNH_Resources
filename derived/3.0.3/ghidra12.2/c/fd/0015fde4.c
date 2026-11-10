
int FUN_0015fde4(long *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  size_t __n;
  undefined1 *__src;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  char *pcVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined7 local_68;
  undefined4 uStack_61;
  undefined8 local_58;
  
  lVar8 = *param_1;
  local_58 = 0;
  iVar3 = *(int *)(lVar8 + 0x15c0);
  if (iVar3 == 1) {
    FUN_0014d430(lVar8,"Moving trailers state machine from initialized to sending.\n");
    *(undefined4 *)(lVar8 + 0x15c0) = 2;
    lVar5 = FUN_0015e0c4();
    *(long *)(lVar8 + 0x15b8) = lVar5;
    if (lVar5 == 0) {
      FUN_0014d5f8(lVar8,"Unable to allocate trailing headers buffer !");
      return 0x1b;
    }
    *(undefined8 *)(lVar8 + 0x15b0) = 0;
    FUN_00149fe4(lVar8,1);
    iVar3 = (**(code **)(lVar8 + 0xf58))(&local_58,*(undefined8 *)(lVar8 + 0xf50));
    FUN_00149fe4(lVar8,0);
    if (iVar3 != 0) {
      FUN_0014d5f8(lVar8,"operation aborted by trailing headers callback");
      *param_3 = 0;
      iVar3 = 0x2a;
LAB_0015fec4:
      FUN_0015e0d0(lVar8 + 0x15b8);
      FUN_0014e11c(local_58);
      return iVar3;
    }
    iVar3 = FUN_0015e688(local_58,*(undefined8 *)(lVar8 + 0x15b8),lVar8);
    if (iVar3 != 0) goto LAB_0015fec4;
    FUN_0014d430(lVar8,"Successfully compiled trailers.\r\n");
    FUN_0014e11c(local_58);
    iVar3 = *(int *)(lVar8 + 0x15c0);
  }
  if (((*(ushort *)(lVar8 + 0x660) >> 6 & 1) == 0) || (iVar3 != 0)) {
    if (iVar3 != 2) goto LAB_0015ff30;
    pcVar9 = FUN_00160198;
    lVar5 = lVar8;
  }
  else {
    param_2 = param_2 - 0xc;
    *(long *)(lVar8 + 0x1e0) = *(long *)(lVar8 + 0x1e0) + 10;
LAB_0015ff30:
    pcVar9 = *(code **)(lVar8 + 0x1548);
    lVar5 = *(long *)(lVar8 + 0x1550);
  }
  FUN_00149fe4(lVar8,1);
  uVar6 = (*pcVar9)(*(undefined8 *)(lVar8 + 0x1e0),1,param_2,lVar5);
  FUN_00149fe4(lVar8,0);
  if (uVar6 == 0x10000001) {
    if ((*(byte *)(param_1[0x88] + 0x84) >> 4 & 1) == 0) {
      *(uint *)(lVar8 + 0x1c0) = *(uint *)(lVar8 + 0x1c0) | 0x20;
      if ((*(ushort *)(lVar8 + 0x660) >> 6 & 1) != 0) {
        *(long *)(lVar8 + 0x1e0) = *(long *)(lVar8 + 0x1e0) + -10;
      }
      *param_3 = 0;
      return 0;
    }
    pcVar7 = "Read callback asked for PAUSE when not supported!";
LAB_0015fff8:
    FUN_0014d5f8(lVar8,pcVar7);
    return 0x1a;
  }
  if (uVar6 == 0x10000000) {
    FUN_0014d5f8(lVar8,"operation aborted by callback");
    *param_3 = 0;
    return 0x2a;
  }
  if (param_2 < uVar6) {
    *param_3 = 0;
    pcVar7 = "read function returned funny value";
    goto LAB_0015fff8;
  }
  if ((*(ushort *)(lVar8 + 0x660) & 0x140) != 0x40) goto LAB_00160154;
  iVar3 = *(int *)(lVar8 + 0x15c0);
  local_68 = 0;
  uStack_61 = 0;
  uVar1 = *(ulong *)(lVar8 + 0xf60) & 0x840;
  __src = &DAT_040a395c;
  if (uVar1 != 0) {
    __src = &DAT_040c2970;
  }
  if (iVar3 == 2) {
    iVar4 = 0;
    uVar10 = uVar6;
LAB_001600c4:
    if (*(long *)(*(long *)(lVar8 + 0x15b8) + 0x10) == *(long *)(lVar8 + 0x15b0)) {
      FUN_0015e0d0(lVar8 + 0x15b8);
      *(undefined8 *)(lVar8 + 0xf50) = 0;
      pcVar7 = "Signaling end of chunked upload after trailers.\n";
      *(undefined4 *)(lVar8 + 0x15c0) = 3;
      uVar2 = *(ushort *)(lVar8 + 0x660);
      *(undefined8 *)(lVar8 + 0xf58) = 0;
LAB_00160128:
      *(ushort *)(lVar8 + 0x660) = uVar2 | 4;
      FUN_0014d430(lVar8,pcVar7);
    }
    else if (uVar10 == (long)iVar4) {
LAB_0016011c:
      uVar2 = *(ushort *)(lVar8 + 0x660);
      pcVar7 = "Signaling end of chunked upload via terminating chunk.\n";
      goto LAB_00160128;
    }
    uVar6 = uVar10;
    if (iVar3 == 2) goto LAB_00160154;
  }
  else {
    iVar4 = FUN_001460b8(&local_68,0xb,"%zx%s",uVar6,__src);
    uVar10 = uVar6 + (long)iVar4;
    __dest = (void *)(*(long *)(lVar8 + 0x1e0) - (long)iVar4);
    *(void **)(lVar8 + 0x1e0) = __dest;
    memcpy(__dest,&local_68,(long)iVar4);
    if (((uVar6 == 0) && (*(long *)(lVar8 + 0xf58) != 0)) && (*(int *)(lVar8 + 0x15c0) == 0)) {
      *(undefined4 *)(lVar8 + 0x15c0) = 1;
      uVar6 = uVar10;
      goto LAB_00160154;
    }
    __n = 1;
    if (uVar1 == 0) {
      __n = 2;
    }
    memcpy((void *)(*(long *)(lVar8 + 0x1e0) + uVar10),__src,__n);
    if (*(int *)(lVar8 + 0x15c0) == 2) goto LAB_001600c4;
    if ((uVar6 == 0) && (*(int *)(lVar8 + 0x15c0) != 1)) goto LAB_0016011c;
  }
  lVar8 = 1;
  if (uVar1 == 0) {
    lVar8 = 2;
  }
  uVar6 = uVar10 + lVar8;
LAB_00160154:
  *param_3 = uVar6;
  return 0;
}

