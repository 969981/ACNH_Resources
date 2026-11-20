
void FUN_03f5ec94(long param_1)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + 0x14040);
  if (*(char *)(param_1 + 0x14088) == '\0') {
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096),*(undefined1 *)(param_1 + 10));
    uVar2 = *(ushort *)(param_1 + 0x14096) - 1;
    *(short *)(param_1 + 0x14096) = (short)uVar2;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
      uVar2 = (uint)*(ushort *)(param_1 + 0x14096);
    }
    uVar1 = *(ushort *)(param_1 + 8);
    FUN_03f5ef94(param_1,0,uVar2,uVar1 >> 8);
    iVar4 = *(ushort *)(param_1 + 0x14096) - 1;
    *(short *)(param_1 + 0x14096) = (short)iVar4;
    FUN_03f5ef94(param_1,0,iVar4,uVar1);
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
    }
    if (*(char *)(param_1 + 0x14089) == '\0') {
      bVar3 = *(byte *)(param_1 + 0x1408a);
    }
    else {
      *(undefined1 *)(param_1 + 0x14089) = 0;
      bVar3 = *(char *)(param_1 + 0x14087) << 2;
      if (*(char *)(param_1 + 0x14086) != '\0') {
        bVar3 = bVar3 | 0x40;
      }
      bVar3 = bVar3 | *(byte *)(param_1 + 0x14083);
      if (*(char *)(param_1 + 0x14085) != '\0') {
        bVar3 = bVar3 | 0x10;
      }
      if (*(char *)(param_1 + 0x14084) != '\0') {
        bVar3 = bVar3 | 0x20;
      }
      if (*(char *)(param_1 + 0x14082) != '\0') {
        bVar3 = bVar3 | 0x80;
      }
      if (*(char *)(param_1 + 0x14081) != '\0') {
        bVar3 = bVar3 | 2;
      }
      if (*(char *)(param_1 + 0x14080) != '\0') {
        bVar3 = bVar3 | 8;
      }
      if (*(char *)(param_1 + 0x14088) != '\0') {
        bVar3 = bVar3 | 0x30;
      }
      *(byte *)(param_1 + 0x1408a) = bVar3;
    }
    *(byte *)(param_1 + 0xc) = bVar3;
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096));
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
    }
    iVar4 = 0x400;
    *(undefined1 *)(param_1 + 0x14080) = 0;
    *(undefined1 *)(param_1 + 0x14087) = 1;
    *(undefined1 *)(param_1 + 0x14089) = 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 8);
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096),uVar1 >> 8);
    iVar4 = *(ushort *)(param_1 + 0x14096) - 1;
    *(short *)(param_1 + 0x14096) = (short)iVar4;
    FUN_03f5ef94(param_1,0,iVar4,uVar1);
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
    }
    if (*(char *)(param_1 + 0x14089) == '\0') {
      bVar3 = *(byte *)(param_1 + 0x1408a);
    }
    else {
      *(undefined1 *)(param_1 + 0x14089) = 0;
      bVar3 = *(char *)(param_1 + 0x14087) << 2;
      if (*(char *)(param_1 + 0x14086) != '\0') {
        bVar3 = bVar3 | 0x40;
      }
      bVar3 = bVar3 | *(byte *)(param_1 + 0x14083);
      if (*(char *)(param_1 + 0x14085) != '\0') {
        bVar3 = bVar3 | 0x10;
      }
      if (*(char *)(param_1 + 0x14084) != '\0') {
        bVar3 = bVar3 | 0x20;
      }
      if (*(char *)(param_1 + 0x14082) != '\0') {
        bVar3 = bVar3 | 0x80;
      }
      if (*(char *)(param_1 + 0x14081) != '\0') {
        bVar3 = bVar3 | 2;
      }
      if (*(char *)(param_1 + 0x14080) != '\0') {
        bVar3 = bVar3 | 8;
      }
      if (*(char *)(param_1 + 0x14088) != '\0') {
        bVar3 = bVar3 | 0x30;
      }
      *(byte *)(param_1 + 0x1408a) = bVar3;
    }
    *(byte *)(param_1 + 0xc) = bVar3;
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096));
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    if (*(char *)(param_1 + 0x14088) != '\0') {
      *(undefined1 *)(param_1 + 0x14097) = 1;
    }
    *(undefined1 *)(param_1 + 0x14080) = 0;
    iVar4 = 0x200;
    *(undefined1 *)(param_1 + 0x14087) = 1;
    *(undefined1 *)(param_1 + 0x14089) = 1;
    puVar5 = (ushort *)(param_1 + 0x14044);
  }
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) +
       *(short *)(param_1 + ((ulong)(*puVar5 >> 0xb) & 0x1e) + 0x10020) * 2;
  uVar2 = FUN_03f5f068(param_1);
  *(uint *)(param_1 + 8) = uVar2 & 0xffff;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar4;
  return;
}

