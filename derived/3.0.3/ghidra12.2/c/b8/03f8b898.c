
void FUN_03f8b898(long param_1)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar6;
  int iVar7;
  uint uVar8;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0x14070) + 0x78);
  uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,*(uint3 *)(param_1 + 8) - 1);
  if (uVar4 == 0) {
    uVar1 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar1;
    if (*(char *)(param_1 + 0x14088) == '\0') {
      FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096),*(undefined1 *)(param_1 + 10));
      uVar4 = *(ushort *)(param_1 + 0x14096) - 1;
      *(short *)(param_1 + 0x14096) = (short)uVar4;
      if (*(char *)(param_1 + 0x14088) != '\0') {
        *(undefined1 *)(param_1 + 0x14097) = 1;
        uVar4 = (uint)*(ushort *)(param_1 + 0x14096);
      }
      uVar8 = (uint)*(ushort *)(param_1 + 8);
    }
    else {
      uVar4 = (uint)*(ushort *)(param_1 + 0x14096);
      uVar8 = uVar1 - 1;
    }
    FUN_03f5ef94(param_1,0,uVar4,uVar8 >> 8);
    iVar7 = *(ushort *)(param_1 + 0x14096) - 1;
    *(short *)(param_1 + 0x14096) = (short)iVar7;
    FUN_03f5ef94(param_1,0,iVar7,uVar8);
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    bVar2 = *(char *)(param_1 + 0x14088) != '\0';
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x14097) = 1;
    }
    if (*(char *)(param_1 + 0x14089) == '\0') {
      bVar6 = *(byte *)(param_1 + 0x1408a);
    }
    else {
      *(undefined1 *)(param_1 + 0x14089) = 0;
      bVar6 = *(char *)(param_1 + 0x14087) << 2;
      if (*(char *)(param_1 + 0x14086) != '\0') {
        bVar6 = bVar6 | 0x40;
      }
      bVar6 = bVar6 | *(byte *)(param_1 + 0x14083);
      if (*(char *)(param_1 + 0x14085) != '\0') {
        bVar6 = bVar6 | 0x10;
      }
      if (*(char *)(param_1 + 0x14084) != '\0') {
        bVar6 = bVar6 | 0x20;
      }
      if (*(char *)(param_1 + 0x14082) != '\0') {
        bVar6 = bVar6 | 0x80;
      }
      if (*(char *)(param_1 + 0x14081) != '\0') {
        bVar6 = bVar6 | 2;
      }
      if (*(char *)(param_1 + 0x14080) != '\0') {
        bVar6 = bVar6 | 8;
      }
      if (bVar2) {
        bVar6 = bVar6 | 0x30;
      }
      *(byte *)(param_1 + 0x1408a) = bVar6;
    }
    *(byte *)(param_1 + 0xc) = bVar6;
    FUN_03f5ef94(param_1,0,*(undefined2 *)(param_1 + 0x14096));
    *(short *)(param_1 + 0x14096) = *(short *)(param_1 + 0x14096) + -1;
    if (*(char *)(param_1 + 0x14088) == '\0') {
      *(undefined1 *)(param_1 + 0x14087) = 1;
      *(undefined1 *)(param_1 + 0x14089) = 1;
      *(undefined1 *)(param_1 + 0x14080) = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(short *)(param_1 + 0x1003e) * 2;
      uVar4 = FUN_03f5f068(param_1,0xffe6);
      *(uint *)(param_1 + 8) = uVar4 & 0xffff;
      iVar7 = *(int *)(param_1 + 0x10) + 0x400;
    }
    else {
      *(undefined1 *)(param_1 + 0x14097) = 1;
      *(undefined1 *)(param_1 + 0x14087) = 1;
      *(undefined1 *)(param_1 + 0x14089) = 1;
      *(undefined1 *)(param_1 + 0x14080) = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(short *)(param_1 + 0x1003e) * 2;
      uVar4 = FUN_03f5f068(param_1,0xfffe);
      *(uint *)(param_1 + 8) = uVar4 & 0xffff;
      iVar7 = *(int *)(param_1 + 0x10) + 0x200;
    }
    *(int *)(param_1 + 0x10) = iVar7;
  }
  else if (0 < (int)uVar4) {
    plVar5 = (long *)((ulong)*(byte *)(param_1 + 0x1408b) * 0x1000 + 0x4babad0 +
                     (ulong)(uVar4 & 0xff) * 0x10);
    UNRECOVERED_JUMPTABLE = (code *)*plVar5;
    uVar3 = plVar5[1];
    if ((uVar3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)uVar3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x03f8b91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

