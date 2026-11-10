
void FUN_00159670(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x1e8);
  if (*(long *)(lVar5 + 0x220) != 0) {
    FUN_0015e0d0(lVar5 + 0x220);
    FUN_0015e0d0(lVar5 + 0x230);
    lVar2 = *(long *)(lVar5 + 0x288);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar5 + 0x290);
      if (lVar3 != 0) {
        do {
          FUN_00143300(*(undefined8 *)(*(long *)(lVar5 + 0x288) + lVar3 * 8 + -8));
          lVar3 = *(long *)(lVar5 + 0x290) + -1;
          *(long *)(lVar5 + 0x290) = lVar3;
        } while (lVar3 != 0);
        lVar2 = *(long *)(lVar5 + 0x288);
      }
      FUN_00143300(lVar2);
      *(undefined8 *)(lVar5 + 0x288) = 0;
    }
  }
  if (param_1[0xae] != 0) {
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_0016719c(param_1[0xae],0,*(undefined4 *)(lVar5 + 0x218),5);
      if (iVar1 == 0) {
        FUN_0016defc(param_1[0xae]);
      }
      if (*(int *)(lVar5 + 0x218) == (int)param_1[0xbf]) {
        FUN_0014d430(lVar4,"stopped the pause stream!\n");
        *(undefined4 *)(param_1 + 0xbf) = 0;
      }
    }
    if (*(long *)(lVar4 + 0x1540) != 0) {
      param_1[0xc0] = param_1[0xc0] - *(long *)(lVar4 + 0x1540);
      *(undefined8 *)(lVar4 + 0x1540) = 0;
    }
    if (0 < *(int *)(lVar5 + 0x218)) {
      iVar1 = FUN_00171b38(param_1[0xae],*(int *)(lVar5 + 0x218),0);
      if (iVar1 != 0) {
        FUN_0014d430(lVar4,"http/2: failed to clear user_data for stream %d!\n",
                     *(undefined4 *)(lVar5 + 0x218));
      }
      *(undefined4 *)(lVar5 + 0x218) = 0;
    }
  }
  return;
}

