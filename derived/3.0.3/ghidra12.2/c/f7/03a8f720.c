
void FUN_03a8f720(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_4 + 0x44);
    *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_4 + 0x48);
    *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_4 + 0x4c);
  }
  uVar4 = 3;
  if (*(char *)(param_1 + 0xb) != '\x01') {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x8b0) = uVar4;
  if (((*(ushort *)(param_1 + 8) >> 2 & 1) != 0) && (iVar1 = *(int *)(param_1 + 0xd80), iVar1 != 0))
  {
    lVar10 = *(long *)(param_1 + 0xd88);
    iVar6 = 0;
    iVar11 = 0;
    do {
      lVar7 = lVar10 + (long)iVar11 * 0x1b8;
      if (*(long *)(lVar7 + 0x160) != 0) {
        lVar12 = lVar10 + (long)iVar11 * 0x1b8;
        cVar2 = *(char *)(lVar12 + 0x1b0);
        iVar8 = (int)cVar2;
        if (cVar2 < '\x06') {
          cVar3 = *(char *)(lVar10 + (long)iVar11 * 0x1b8 + 0x1b1);
          iVar5 = (int)cVar3;
          if ('\x05' < cVar3) {
            iVar5 = 6;
          }
          if (cVar2 < iVar5) {
            do {
              FUN_03a8f890(param_1,param_2,lVar7,iVar6,iVar8);
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar5 != iVar8);
          }
        }
        lVar9 = lVar10 + (long)iVar11 * 0x1b8;
        if ((*(char *)(lVar9 + 0x1b1) < '\a') || (*(char *)(lVar7 + 0x199) != '\0')) {
          cVar2 = *(char *)(lVar7 + 0x199);
        }
        else {
          FUN_0390f4d0(lVar7,param_2);
          cVar2 = *(char *)(lVar7 + 0x199);
        }
        if (cVar2 != '\0') {
          FUN_0390edb0(lVar7);
        }
        *(undefined1 *)(lVar12 + 0x1b0) = *(undefined1 *)(lVar9 + 0x1b1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar1 != iVar11);
  }
  return;
}

