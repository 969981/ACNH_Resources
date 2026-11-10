
undefined4 FUN_0015ad00(undefined8 param_1,long param_2,long *param_3)

{
  size_t __n;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long local_60;
  long lStack_58;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    if (*(char *)(param_2 + 0xc) != '\x04') {
      return 0;
    }
    lVar4 = param_3[0xc1];
    uVar3 = FUN_00171c48(param_1,3);
    *(undefined4 *)(param_3 + 0xc1) = uVar3;
    iVar2 = FUN_00171c48(param_1,2);
    *(bool *)((long)param_3 + 0x60c) = iVar2 != 0;
    if ((int)lVar4 == (int)param_3[0xc1]) {
      return 0;
    }
    FUN_0014d430(*param_3,"Connection state changed (MAX_CONCURRENT_STREAMS == %u)!\n");
    *(undefined1 *)(*(long *)(*param_3 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  lVar4 = FUN_00171b00(param_1,iVar2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar4 + 0x1e8);
  if (lVar9 == 0) {
    return 0xfffffc7a;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 != '\x05') {
    if (cVar1 == '\x01') {
      if (*(char *)(lVar9 + 0x21c) != '\0') {
        return 0;
      }
      if (*(int *)(lVar9 + 0x238) != -1) {
        if (99 < *(int *)(lVar9 + 0x238) - 100U) {
          *(undefined1 *)(lVar9 + 0x21c) = 1;
          *(undefined4 *)(lVar9 + 0x238) = 0xffffffff;
        }
        iVar2 = FUN_0015e4a4(lVar9 + 0x220,&DAT_040a395c,2);
        if (iVar2 == 0) {
          uVar8 = (*(long **)(lVar9 + 0x220))[2] - *(long *)(lVar9 + 0x228);
          __n = *(ulong *)(lVar9 + 0x260);
          if (uVar8 <= *(ulong *)(lVar9 + 0x260)) {
            __n = uVar8;
          }
          memcpy((void *)(*(long *)(lVar9 + 600) + *(long *)(lVar9 + 0x268)),
                 (void *)(**(long **)(lVar9 + 0x220) + *(long *)(lVar9 + 0x228)),__n);
          *(size_t *)(lVar9 + 0x228) = *(long *)(lVar9 + 0x228) + __n;
          *(size_t *)(lVar9 + 0x260) = *(long *)(lVar9 + 0x260) - __n;
          *(size_t *)(lVar9 + 0x268) = *(long *)(lVar9 + 0x268) + __n;
          *(long *)(lVar4 + 0x1540) = *(long *)(lVar4 + 0x1540) + 1;
          param_3[0xc0] = param_3[0xc0] + 1;
          if (*param_3 == lVar4) {
            return 0;
          }
          FUN_00147570(lVar4,0,6);
          return 0;
        }
      }
      return 0xfffffc7a;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    if (*(char *)(lVar9 + 0x21c) != '\0') {
      return 0;
    }
    FUN_0016719c(param_1,0,iVar2,1);
    iVar2 = FUN_0016bcc8();
    if (iVar2 == 0) {
      return 0;
    }
    return 0xfffffc7a;
  }
  if (*(long *)(*(long *)(lVar4 + 0xd8) + 0x70) != 0) {
    lVar9 = FUN_00142c80(lVar4);
    if (lVar9 != 0) {
      lVar5 = FUN_00143330(1,0x2a0);
      if (lVar5 != 0) {
        *(long *)(lVar9 + 0x1e8) = lVar5;
        lVar6 = FUN_0015e0c4();
        *(long *)(lVar5 + 0x220) = lVar6;
        if (lVar6 != 0) {
          lVar5 = *(long *)(lVar9 + 0x1e8);
          *(undefined8 *)(lVar5 + 0x228) = 0;
          *(undefined1 *)(lVar5 + 0x21c) = 0;
          *(undefined4 *)(lVar5 + 0x238) = 0xffffffff;
          *(undefined8 *)(lVar5 + 0x240) = 0;
          *(undefined8 *)(lVar5 + 0x248) = 0;
          *(undefined2 *)(lVar5 + 0x250) = 0;
          *(undefined8 *)(lVar5 + 600) = *(undefined8 *)(lVar9 + 0x1150);
          uVar7 = *(undefined8 *)(lVar9 + 0xc30);
          *(undefined8 *)(lVar5 + 0x268) = 0;
          *(undefined8 *)(lVar5 + 0x260) = uVar7;
          *(undefined4 *)(lVar9 + 0x1560) = *(undefined4 *)(lVar4 + 0x1560);
          lVar5 = *(long *)(lVar4 + 0x1e8);
          local_60 = lVar4;
          lStack_58 = param_2;
          if (lVar5 == 0) {
            FUN_0014d5f8(lVar4,"Internal NULL stream!\n");
          }
          else {
            FUN_00149fe4(lVar4,1);
            iVar2 = (**(code **)(*(long *)(lVar4 + 0xd8) + 0x70))
                              (lVar4,lVar9,*(undefined8 *)(lVar5 + 0x290),&local_60,
                               *(undefined8 *)(*(long *)(lVar4 + 0xd8) + 0x78));
            FUN_00149fe4(lVar4,0);
            if (*(long *)(lVar5 + 0x290) != 0) {
              uVar8 = 0;
              do {
                FUN_00143300(*(undefined8 *)(*(long *)(lVar5 + 0x288) + uVar8 * 8));
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ulong *)(lVar5 + 0x290));
            }
            FUN_00143300(*(undefined8 *)(lVar5 + 0x288));
            *(undefined8 *)(lVar5 + 0x290) = 0;
            *(undefined8 *)(lVar5 + 0x288) = 0;
            if (iVar2 == 0) {
              *(undefined4 *)(*(long *)(lVar9 + 0x1e8) + 0x218) = *(undefined4 *)(param_2 + 0x28);
              *(undefined8 *)(lVar9 + 0xf0) = 0xffffffffffffffff;
              *(undefined8 *)(lVar9 + 0xf8) = 0xffffffffffffffff;
              iVar2 = FUN_00148568(*(undefined8 *)(lVar4 + 0xd8),lVar9,param_3);
              if (iVar2 == 0) {
                iVar2 = FUN_00171b38(param_3[0xae],*(undefined4 *)(param_2 + 0x28),lVar9);
                if (iVar2 == 0) {
                  return 0;
                }
                FUN_0014d430(lVar4,"failed to set user_data for stream %d\n",
                             *(undefined4 *)(param_2 + 0x28));
                goto LAB_0015b05c;
              }
              FUN_0014d430(lVar4,"failed to add handle to multi\n");
            }
            FUN_0015b68c(*(undefined8 *)(lVar9 + 0x1e8));
            *(undefined8 *)(lVar9 + 0x1e8) = 0;
          }
          FUN_0014f260(lVar9);
          goto LAB_0015b05c;
        }
        FUN_00143300(lVar5);
      }
      FUN_0014f260(lVar9);
    }
    FUN_0014d430(lVar4,"failed to duplicate handle\n");
  }
LAB_0015b05c:
  uVar3 = FUN_0016719c(param_1,0,*(undefined4 *)(param_2 + 0x28),8);
  iVar2 = FUN_0016bcc8();
  if (iVar2 == 0) {
    return 0;
  }
  return uVar3;
}

