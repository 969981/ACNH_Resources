
void FUN_028518d4(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((*piVar3 == *(int *)(param_2 + 0x1c)) &&
     (iVar2 = *piVar3,
     (*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0xc) &&
     *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x14)) &&
     *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x26) = 0x101;
    *(undefined1 **)(param_1 + 0x2c) = &LAB_01010000;
    *(undefined1 *)(param_1 + 0x34) = 0xff;
    piVar3[0] = 0;
    piVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x44) == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0x48) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x50)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x58))) {
    FUN_0284f760((int *)(param_1 + 0x44),0);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  piVar3 = (int *)(param_1 + 0x80);
  if ((*piVar3 == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0x84) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x8c)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x94))) {
    if ((*(char *)(param_1 + 0xaf) == '\x02') && ((*(ushort *)(param_1 + 0xbe) >> 8 & 1) == 0)) {
      FUN_028483f0();
      bVar1 = *(byte *)(param_1 + 0xbc);
      if ((bVar1 < 10) && ((&DAT_053fee41)[((long)(char)bVar1 & 0xffffffffU) * 0xba0] != '\0')) {
        FUN_0214e870(&DAT_053febf8 + (ulong)(uint)(int)(char)bVar1 * 0xba0);
      }
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)(param_1 + 0xae) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x9e) = 0x101;
    *(undefined1 **)(param_1 + 0xa4) = &LAB_01010000;
    *(undefined1 *)(param_1 + 0xac) = 0xff;
    piVar3[0] = 0;
    piVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0xaf) = 0;
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((*(int *)(param_1 + 0xc0) == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0xc4) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0xcc)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0xd4))) {
    FUN_02850410((int *)(param_1 + 0xc0),0);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((*(int *)(param_1 + 0xfc) == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0x100) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x108)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x110))) {
    FUN_0285090c((int *)(param_1 + 0xfc),1);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x134) == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0x138) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x140)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x148))) {
    FUN_028510f4(param_1 + 0x134,1);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x16c) == iVar2) &&
     ((*(long *)(param_2 + 0x20) == *(long *)(param_1 + 0x170) &&
      *(long *)(param_2 + 0x28) == *(long *)(param_1 + 0x178)) &&
      *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x180))) {
    FUN_0284c3b0(param_1 + 0x16c,0);
    return;
  }
  return;
}

