
void FUN_03af94d0(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = param_2;
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar2 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x10) + (long)(int)uVar2 * 0x23c0;
  if (*(long *)(lVar5 + 0x1ef8) != 0) {
    *(undefined4 *)(lVar5 + 0x708) = *(undefined4 *)(lVar5 + 0x378);
    *(undefined4 *)(lVar5 + 0x70c) = *(undefined4 *)(lVar5 + 0x37c);
    *(undefined8 *)(lVar5 + 0x710) = *(undefined8 *)(lVar5 + 0x380);
    *(undefined8 *)(lVar5 + 0x718) = *(undefined8 *)(lVar5 + 0x388);
    *(undefined4 *)(lVar5 + 0x720) = *(undefined4 *)(lVar5 + 0x390);
    *(undefined4 *)(lVar5 + 0x724) = *(undefined4 *)(lVar5 + 0x394);
    *(undefined8 *)(lVar5 + 0x728) = *(undefined8 *)(lVar5 + 0x398);
    *(undefined8 *)(lVar5 + 0x730) = *(undefined8 *)(lVar5 + 0x3a0);
    *(undefined8 *)(lVar5 + 0x74f) = *(undefined8 *)(lVar5 + 0x3bf);
    *(undefined8 *)(lVar5 + 0x748) = *(undefined8 *)(lVar5 + 0x3b8);
    *(undefined8 *)(lVar5 + 0x740) = *(undefined8 *)(lVar5 + 0x3b0);
    *(undefined8 *)(lVar5 + 0x738) = *(undefined8 *)(lVar5 + 0x3a8);
    FUN_038fd1e0(lVar5 + 0x758);
    FUN_038fd2f0(lVar5 + 0x758,lVar5 + 0x3c8);
    *(undefined8 *)(lVar5 + 0x798) = *(undefined8 *)(lVar5 + 0x408);
    *(undefined4 *)(lVar5 + 0x7a0) = *(undefined4 *)(lVar5 + 0x410);
    puVar1 = (uint *)(lVar5 + 0x7dc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*(uint *)(param_1 + 8) <= param_2) {
      param_2 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x23c0) >> 1 & 1) != 0) {
      if (*(long *)(lVar5 + 0x6f0) != 0) {
        FUN_039499cc(DAT_05ae90c0);
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x1ef8);
      *(undefined8 *)(lVar5 + 0x1ef8) = 0;
      *(undefined8 *)(lVar5 + 0x6f0) = uVar6;
    }
  }
  return;
}

