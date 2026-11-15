
void FUN_01fc0744(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  
  lVar5 = *param_1;
  lVar4 = *(long *)PTR_DAT_04bb5ce0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe9e) != '\0')) {
    *(undefined4 *)(lVar5 + 0x12180) = *(undefined4 *)(lVar4 + 0xea0);
  }
  lVar4 = *(long *)(lVar5 + 0x18);
  puVar6 = (undefined4 *)param_1[1];
  uVar3 = FUN_02085a50(lVar4,3,0);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(lVar4 + 0x801) = 1;
    lVar1 = lVar4 + 0x10;
    lVar2 = lVar1 + (ulong)*(uint *)(lVar4 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar4 + 0x294)) {
      lVar2 = lVar1;
    }
    *(undefined4 *)(lVar2 + 0xc) = *puVar6;
    *(undefined4 *)(lVar2 + 0x10) = puVar6[1];
    *(undefined4 *)(lVar2 + 0x14) = puVar6[2];
    lVar2 = lVar1 + (ulong)*(uint *)(lVar4 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar4 + 0x294)) {
      lVar2 = lVar1;
    }
    *(undefined1 *)(lVar2 + 0x7e) = 0;
  }
  FUN_01fb9bc0(lVar5);
  return;
}

