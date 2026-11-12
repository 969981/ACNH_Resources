
void FUN_009a3060(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  void *__dest;
  ulong uVar8;
  byte bVar9;
  char local_e4 [127];
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb37e0;
  uVar7 = 0;
  uVar8 = 0;
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar6 = PTR_DAT_04bb37e0[2];
  do {
    local_e4[0] = '\0';
    lVar4 = 0;
    local_65 = 0;
    puVar2 = (undefined2 *)(param_1 + 0x1a8) + uVar8 * 0x58;
    if (7 < (uint)uVar7) {
      puVar2 = (undefined2 *)(param_1 + 0x1a8);
    }
    *puVar2 = uVar5;
    *(undefined1 *)(puVar2 + 1) = uVar6;
    __dest = *(void **)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    *(undefined *)((long)puVar2 + 3) = puVar3[3];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 4);
    do {
      if (local_e4[lVar4] == '\0') goto LAB_009a30b8;
      if (local_e4[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_009a30b8;
      }
      if (local_e4[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_009a30b8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_009a30b8:
    iVar1 = (int)lVar4;
    if (*(int *)(puVar2 + 0xc) <= (int)lVar4) {
      iVar1 = *(int *)(puVar2 + 0xc) + -1;
    }
    memcpy(__dest,local_e4,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    uVar6 = puVar3[2];
    uVar7 = uVar8 + 1;
    uVar5 = *(undefined2 *)puVar3;
    uVar8 = uVar7 & 0xffffffff;
    bVar9 = DAT_0548e140;
    if (7 < DAT_0548e140) {
      bVar9 = 0xff;
    }
    *(byte *)(puVar2 + 0x56) = bVar9;
    if ((int)uVar7 == 8) {
      return;
    }
  } while( true );
}

