
void FUN_01dad040(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  FUN_01dca658(DAT_0537fc68);
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_24 = 0;
  FUN_01dca358(DAT_0537fc68,auStack_50);
  local_8 = 0;
  local_2 = 0;
  local_4 = 0xff00;
  if (-1 < DAT_0537fc38) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0537fc38,&local_8,auStack_50,0x30,0);
  }
  uVar7 = 0;
  uVar5 = 0;
  lVar6 = *(long *)PTR_DAT_04bb4760;
  lVar1 = lVar6 + 0x8f8;
  do {
    lVar2 = lVar1 + uVar5 * 0x28;
    if (0x6c < (uint)uVar7) {
      lVar2 = lVar1;
    }
    plVar8 = (long *)(lVar6 + (long)(int)uVar5 * 0x15);
    if ((*(long *)(lVar2 + 8) != *plVar8 || *(long *)(lVar2 + 0x10) != plVar8[1]) ||
        *(long *)(lVar2 + 0x15) != *(long *)((long)plVar8 + 0xd)) {
      lVar3 = *plVar8;
      lVar4 = plVar8[1];
      uVar9 = *(undefined8 *)((long)plVar8 + 0xd);
      *(undefined1 *)(lVar2 + 0x1d) = 1;
      *(undefined8 *)(lVar2 + 0x15) = uVar9;
      *(long *)(lVar2 + 8) = lVar3;
      *(long *)(lVar2 + 0x10) = lVar4;
    }
    uVar7 = uVar5 + 1;
    uVar5 = uVar7 & 0xffffffff;
  } while ((int)uVar7 != 0x6d);
  return;
}

