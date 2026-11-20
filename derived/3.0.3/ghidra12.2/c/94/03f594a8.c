
bool FUN_03f594a8(long param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 1) goto LAB_03f59634;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34e0b4) = 0xfff4;
  sVar3 = FUN_03f5914c(*(long *)(param_1 + 0x30),
                       *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34e0b4));
  lVar4 = *(long *)(param_1 + 0x30);
  bVar2 = *(byte *)(lVar4 + 0x3cbcf9);
  if (bVar2 == 0x23) {
    lVar6 = 0x7ff4;
  }
  else {
    lVar6 = 0x7ff4;
    if ((bVar2 & 1) != 0 || bVar2 == 0x32) {
      lVar6 = 0xfff4;
    }
  }
  lVar5 = *(long *)(lVar4 + 0x34e160);
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(short *)(lVar5 + lVar6) != sVar3) goto LAB_03f5956c;
    *(undefined2 *)(lVar5 + lVar6) = 0xfe80;
    lVar4 = *(long *)(param_1 + 0x30);
  }
  else if (*(short *)(lVar5 + lVar6) != -0x180) {
LAB_03f5956c:
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
  }
  *(undefined1 *)(lVar4 + 0x34e12b) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x34e12d) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x34e12c) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x34e127) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x34e128) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x34e129) = 0;
  (&LAB_0038a448)[*(long *)(param_1 + 0x30)] = 0;
  lVar4 = *(long *)(param_1 + 0x30);
  (&LAB_0038a44c)[lVar4] = 0;
  *(undefined8 *)(&LAB_0038a450 + lVar4) = 0;
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(char *)(lVar4 + 0x34710) != '\0') {
    *(undefined1 *)(lVar4 + 0x34688) = 0;
    *(undefined1 *)(lVar4 + 0x3468c) = 0;
    *(undefined8 *)(lVar4 + 0x34690) = 0;
    *(undefined4 *)(lVar4 + 0x20668) = 0xfff4;
  }
LAB_03f59634:
  return iVar1 == 1;
}

