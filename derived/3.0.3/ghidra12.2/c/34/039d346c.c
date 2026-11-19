
void FUN_039d346c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_1 + (long)(int)param_2 * 0xe8;
  if (*(long *)(lVar5 + 0x1a08) != 0) {
    FUN_039499cc(DAT_05ae90c0);
    *(undefined8 *)(lVar5 + 0x1a08) = 0;
  }
  if ((param_2 == 0) && (lVar5 = *(long *)(param_1 + 0x2058), lVar5 != 0)) {
    lVar7 = *(long *)(lVar5 + 0x20);
    cVar3 = *(char *)(param_1 + 0x2060);
    iVar4 = (int)cVar3;
    if (*(uint *)(lVar5 + 0x18) <= (uint)(int)cVar3) {
      iVar4 = 0;
    }
    lVar6 = lVar7 + (long)iVar4 * 0x970;
    if (*(long *)(lVar6 + 0x550) != 0) {
      FUN_039499cc(DAT_05ae90c0);
      *(undefined8 *)(lVar6 + 0x550) = 0;
      if ((*(uint *)(lVar5 + 0xc) & 1) != 0) {
        *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 2;
      }
    }
    lVar7 = lVar7 + (long)iVar4 * 0x970;
    uVar2 = *(uint *)(lVar7 + 0x8d8);
    uVar1 = uVar2 | 2;
    if ((uVar2 & 4) != 0) {
      uVar1 = uVar2 & 0xfffffff8;
    }
    *(uint *)(lVar7 + 0x8d8) = uVar1;
    *(undefined8 *)(param_1 + 0x2058) = 0;
    *(char *)(param_1 + 0x2060) = -1;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & ((byte)(1 << (ulong)(param_2 & 0x1f)) ^ 0xff);
  return;
}

